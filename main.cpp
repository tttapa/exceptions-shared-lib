#include "alpha.hpp"
#include "bravo.hpp"
#include "charlie.hpp"
#include <cstdio>

int main() {
    if (!alpha::catch_error(alpha::throw_error))
        std::puts("alpha -> alpha failed");
    if (!bravo::catch_error(bravo::throw_error))
        std::puts("bravo -> bravo failed");
    if (!charlie::catch_error(charlie::throw_error))
        std::puts("charlie -> charlie failed");
    if (!alpha::catch_error(bravo::throw_error))
        std::puts("bravo -> alpha failed");
    if (!bravo::catch_error(alpha::throw_error))
        std::puts("alpha -> bravo failed");
    if (!alpha::catch_error(charlie::throw_error))
        std::puts("charlie -> alpha failed");
    if (!charlie::catch_error(alpha::throw_error))
        std::puts("alpha -> charlie failed");
    if (!bravo::catch_error(charlie::throw_error))
        std::puts("charlie -> bravo failed");
    if (!charlie::catch_error(bravo::throw_error))
        std::puts("bravo -> charlie failed");

    if (alpha::type_error() != alpha::type_error())
        std::puts("alpha -> alpha type_info mismatch");
    if (bravo::type_error() != bravo::type_error())
        std::puts("bravo -> bravo type_info mismatch");
    if (charlie::type_error() != charlie::type_error())
        std::puts("charlie -> charlie type_info mismatch");
    if (alpha::type_error() != bravo::type_error())
        std::puts("alpha -> bravo type_info mismatch");
    if (alpha::type_error() != charlie::type_error())
        std::puts("alpha -> charlie type_info mismatch");
    if (bravo::type_error() != charlie::type_error())
        std::puts("bravo -> charlie type_info mismatch");

    if (&alpha::type_error() != &alpha::type_error())
        std::puts("alpha -> alpha type_info identity mismatch");
    if (&bravo::type_error() != &bravo::type_error())
        std::puts("bravo -> bravo type_info identity mismatch");
    if (&charlie::type_error() != &charlie::type_error())
        std::puts("charlie -> charlie type_info identity mismatch");
    if (&alpha::type_error() != &bravo::type_error())
        std::puts("alpha -> bravo type_info identity mismatch");
    if (&alpha::type_error() != &charlie::type_error())
        std::puts("alpha -> charlie type_info identity mismatch");
    if (&charlie::type_error() != &bravo::type_error())
        std::puts("bravo -> charlie type_info identity mismatch");
}
