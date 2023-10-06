#include "__base__.hpp"

int main(int argc, char const* argv[])
{
    unused(argc);
    unused(argv);

    only_in_debug(printf("%sCompiled%s at %s \n", COLOR_DEBUG_CATEGORY, COLOR_RESET, current_time));
    only_in_debug(betterCPP_verification());
   

    only_in_debug(memory_printf_final());
    return EXIT_SUCCESS;
}