#include <fmt/chrono.h>
#include <fmt/format.h>

#include <iostream>
#include <random>

#include "CLI/CLI.hpp"
#include "config.h"

// .bss segment
int bss;

// .data segment
int data = 4711;

// .rodata segement
const int rodata =42;


auto main(int argc, char **argv) -> int

{
    int stack;
    int stack2 = 42;

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */

    fmt::print("Value of variable bss {} address of variable bss {}\n",
    bss,
    fmt::ptr(&bss));

    fmt::print("Value of variable data {} address of variable data {}\n",
    data,
    fmt::ptr(&data));

    fmt::print("Value of variable rodata {} address of variable rodata {}\n",
    rodata,
    fmt::ptr(&rodata));

    fmt::print("Value of variable stack {} address of variable stack {}\n",
    stack,
    fmt::ptr(&stack));

    fmt::print("Value of variable stack2 {} address of variable stack2 {}\n",
    stack2,
    fmt::ptr(&stack2));

    return 0; /* exit gracefully*/
}