#include <iostream>

double power(double x, double y){
    double ret = x;
    for(int i =0; i < y - 1; i++){
        ret = ret * ret;
    }
    return ret;
}

int Main(){
    std::cout << "Find a to the power b. a : " << std::endl;
    double a;
    std::cin >> a;
    
    std::cout << "b : " << std::endl;
    double b;
    std::cin >> b;
    
    std::cout << power(a, b) << std::endl;
    return 0;
}
