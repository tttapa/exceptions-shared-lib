#pragma once

#include <bravo_export.h>
#include <typeinfo>

namespace bravo {

BRAVO_EXPORT const std::type_info &type_error();
BRAVO_EXPORT void throw_error();
BRAVO_EXPORT bool catch_error(void (*)());
BRAVO_EXPORT bool catch_error_dynamic_cast(void (*)());

} // namespace bravo
