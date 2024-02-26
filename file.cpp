#include <iostream>
#include "bibFile.h"

int main(){
    maFile<float> mafile(5);
    mafile.ajouter(1);
    mafile.ajouter(2);
    mafile.ajouter(3.3);
    std::cout << mafile;
    std::cout << mafile.pop() << std::endl;
    std::cout << mafile;
    return 0;
}