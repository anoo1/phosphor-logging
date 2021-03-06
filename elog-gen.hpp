// This file was autogenerated.  Do not edit!
// See elog-gen.py for more details
#pragma once

#include <string>
#include <tuple>
#include <type_traits>
#include "log.hpp"

namespace phosphor
{

namespace logging
{

namespace xyz
{
namespace openbmc_project
{
namespace Error
{
namespace Host
{
namespace _Event
{
struct SEL
{
    static constexpr auto str = "SEL=%s";
    static constexpr auto str_short = "SEL";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr SEL(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _Event

struct Event
{
    static constexpr auto err_code = "Event";
    static constexpr auto err_msg = "A host system event log was received";
    static constexpr auto L = level::INFO;
    using SEL = _Event::SEL;
    using metadata_types = std::tuple<SEL>;
};
} // namespace Host
} // namespace Error
} // namespace openbmc_project
} // namespace xyz


} // namespace logging

} // namespace phosphor
