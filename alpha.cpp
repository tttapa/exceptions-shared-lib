#include "alpha.hpp"

namespace alpha {

const std::type_info &type_error() { return typeid(error); }
void throw_error() { throw error("alpha error"); }
bool catch_error(void (*f)()) try {
    f();
    return false;
} catch (error &e) {
    return true;
} catch (...) {
    return false;
}
bool catch_error_dynamic_cast(void (*f)()) try {
    f();
    return false;
} catch (std::runtime_error &e) {
    return dynamic_cast<error *>(&e);
} catch (...) {
    return false;
}

} // namespace alpha
