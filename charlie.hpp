#pragma once

#include <charlie_export.h>
#include <typeinfo>

namespace charlie {

CHARLIE_EXPORT const std::type_info &type_error();
CHARLIE_EXPORT void throw_error();
CHARLIE_EXPORT bool catch_error(void (*)());

} // namespace charlie
