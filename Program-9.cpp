#include <iostream>
using namespace std;
int main()
{    
    int a, b, r;
    std::cout << "Enter two numbers: ";
    std::cin >>a  >> b; //Read the variables
    r = a%b; //find the suitable operator
    std::cout << r; //print the result
    return 0;
}
