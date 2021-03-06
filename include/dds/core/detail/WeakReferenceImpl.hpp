/*
 * Copyright 2019, Proyectos y Sistemas de Mantenimiento SL (eProsima).
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef EPROSIMA_DDS_CORE_WEAK_REFERENCE_IMPL_HPP_
#define EPROSIMA_DDS_CORE_WEAK_REFERENCE_IMPL_HPP_

/**
 * @file
 */

/*
 * OMG PSM class declaration
 */
#include <dds/core/detail/ReferenceImpl.hpp>
#include <dds/core/WeakReference.hpp>

namespace dds {
namespace core {

template<typename T>
WeakReference<T>::WeakReference()
{
}

template<typename T>
WeakReference<T>::WeakReference(
        const T& t)
{
    //To implement
    //    if (!t.is_nil()) {
    //        impl_ = t.delegate();
    //    }
}

template<typename T>
WeakReference<T>::~WeakReference()
{
}

template<typename T>
bool WeakReference<T>::expired()
{
    //To implement
    //    return impl_.expired();
}

template<typename T>
T WeakReference<T>::lock()
{
    //To implement
    //    return T(impl_.lock());
}

} //namespace core
} //namespace dds

#endif //EPROSIMA_DDS_CORE_WEAK_REFERENCE_IMPL_HPP_
