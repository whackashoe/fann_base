#include <iostream>
#include "settings.h"

int main(int argc, char **argv)
{
    //these are from settings.h
    std::cout << (sets) << " " << (num_input) << " " << (num_output) << std::endl;
    
    //we print out input&output pairs `sets` times
    for(int s=0; s<sets; s++) {
        //write out input
        for(int i=0; i<num_input; i++) {
            std::cout << "1 ";
        }
        std::cout << std::endl;

        //write out answer to input ie output
        for(int i=0; i<num_output; i++) {
            std::cout << "1 ";
        }
        std::cout << std::endl;
    }

	return 0;
}
