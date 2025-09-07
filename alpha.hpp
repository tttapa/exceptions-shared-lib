#pragma once

#include <stdexcept>
#include <typeinfo>

#ifdef __GNUC__
#define ALPHA_EXPORT_TYPE __attribute__((visibility("default")))
#else
#define ALPHA_EXPORT_TYPE
#endif

namespace alpha {

struct ALPHA_EXPORT_TYPE error : std::runtime_error {
    using std::runtime_error::runtime_error;
};

const std::type_info &type_error();
void throw_error();
bool catch_error(void (*)());
bool catch_error_dynamic_cast(void (*)());

} // namespace alpha
