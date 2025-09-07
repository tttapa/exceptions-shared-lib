#pragma once

#include <stdexcept>
#include <typeinfo>

namespace alpha {

struct error : std::runtime_error {
    using std::runtime_error::runtime_error;
};

const std::type_info &type_error();
void throw_error();
bool catch_error(void (*)());
bool catch_error_dynamic_cast(void (*)());

} // namespace alpha
