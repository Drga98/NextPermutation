#include <iostream>
#include "NextPermute.h"

int main() {

    NextPermute<uint8_t> initialPermuted = {1,2,3};
    NextPermute permuted = initialPermuted;

    do{
        std::cout << "[";
        for(const auto &e: permuted)
            std::cout << static_cast<uint16_t>(e) << " ";
        std::cout << "]" << std::endl;

        permuted.permute();

    }while(permuted != initialPermuted);
    return EXIT_SUCCESS;
}
