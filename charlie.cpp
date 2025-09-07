#include "charlie.hpp"
#include "alpha.hpp"

namespace charlie {

const std::type_info &type_error() { return typeid(alpha::error); }
void throw_error() { throw alpha::error(__PRETTY_FUNCTION__); }
bool catch_error(void (*f)()) try {
    f();
    return false;
} catch (alpha::error &e) {
    return true;
} catch (...) {
    return false;
}

} // namespace charlie
