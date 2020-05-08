#include "main_controller.hpp"
#include <iostream>

int main(int argc, char** argv)
{

    try
    {
        MainController controller;
        controller.startRendering();

    }
    catch (const std::exception& e)
    {
        std::cerr << "Error occurred during execution: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
