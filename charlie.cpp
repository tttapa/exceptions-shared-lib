#include "charlie.hpp"
#include "alpha.hpp"

namespace charlie {

const std::type_info &type_error() { return typeid(alpha::error); }
void throw_error() { throw alpha::error("charlie error"); }
bool catch_error(void (*f)()) try {
    f();
    return false;
} catch (alpha::error &e) {
    return true;
} catch (...) {
    return false;
}
bool catch_error_dynamic_cast(void (*f)()) try {
    f();
    return false;
} catch (std::runtime_error &e) {
    return dynamic_cast<alpha::error *>(&e);
} catch (...) {
    return false;
}

} // namespace charlie
