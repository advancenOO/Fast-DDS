// Copyright 2019 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file DataWriterListener.hpp
 */

#ifndef _FASTRTPS_DATAWRITERLISTENER_H_
#define _FASTRTPS_DATAWRITERLISTENER_H_

#include "../../fastrtps/rtps/common/Types.h"
#include "../../fastrtps/rtps/common/MatchingInfo.h"
#include "../../fastrtps/qos/DeadlineMissedStatus.h"
#include "../../fastrtps/qos/LivelinessLostStatus.h"

namespace eprosima {
namespace fastrtps {

class DataWriter;

/**
 * Class DataWriterListener, allows the end user to implement callbacks triggered by certain events.
 * @ingroup FASTRTPS_MODULE
 * @snippet fastrtps_example.cpp ex_PublisherListener
 */
class RTPS_DllAPI DataWriterListener
{
public:
    DataWriterListener(){}
    virtual ~DataWriterListener(){}

    /**
     * This method is called when the Publisher is matched (or unmatched) against an endpoint.
     * @param writer Pointer to the associated Publisher
     * @param info Information regarding the matched subscriber
     */
    virtual void on_publication_matched(
            DataWriter* writer,
            rtps::MatchingInfo& info)
    {
        (void)writer;
        (void)info;
    }

    /**
     * A method called when a deadline is missed
     * @param writer Pointer to the associated Publisher
     * @param status The deadline missed status
     */
    virtual void on_offered_deadline_missed(
            DataWriter* writer,
            const OfferedDeadlineMissedStatus& status)
    {
        (void)writer;
        (void)status;
    }

    /**
     * @brief Method called when the livelivess of a publisher is lost
     * @param writer The publisher
     * @param status The liveliness lost status
     */
    virtual void on_liveliness_lost(
            DataWriter* writer,
            const LivelinessLostStatus& status)
    {
        (void)writer;
        (void)status;
    }
};

} /* namespace fastrtps */
} /* namespace eprosima */

#endif /* _FASTRTPS_DATAWRITERLISTENER_H_ */