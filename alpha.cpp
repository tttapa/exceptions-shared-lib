#include "alpha.hpp"

namespace alpha {

const std::type_info &type_error() { return typeid(error); }
void throw_error() { throw error(__PRETTY_FUNCTION__); }
bool catch_error(void (*f)()) try {
    f();
    return false;
} catch (error &e) {
    return true;
} catch (...) {
    return false;
}

} // namespace alpha
