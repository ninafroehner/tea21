#include <fmt/chrono.h>
#include <fmt/format.h>

#include "CLI/CLI.hpp"
#include "config.h"
#include "bmp.h"


auto main(int argc, char **argv) -> int
{   
    std::string filename{DEFAULT_BMP_FILE};
    /**
     * CLI11 is a command line parser to add command line options
     * More info at https://github.com/CLIUtils/CLI11#usage
     */
    CLI::App app{PROJECT_NAME};
    try
    {
        app.set_version_flag("-V,--version", fmt::format("{} {}", PROJECT_VER, PROJECT_BUILD_DATE));
        app.parse(argc, argv);
    }
    catch (const CLI::ParseError &e)
    {
        return app.exit(e);
    }

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::println("Hello, {}!\n", app.get_name());
    fmt::println("The filename to use: {}!\n", filename);

    /* INSERT YOUR CODE HERE */
    BMP bmp;
    bmp.read(filename);
   
   // struct Pixel{
     //   uint8_t red; 
       // uint8_t green; 
       // uint8_t blue;
       // uint8_t grey;
    //}

    return 0; /* exit gracefully*/
}
