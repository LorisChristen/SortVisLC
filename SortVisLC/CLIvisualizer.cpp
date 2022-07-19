#include "CLIvisualizer.h"

CLIVisualizer::CLIVisualizer()
{

}

void CLIVisualizer::display(sortEngine &E){
    for(int value : *E.getValues()){
        std::cout << value << ", ";
    }
    std::cout << std::endl;
}
