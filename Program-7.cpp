#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    for(int i = 1; i <=n; ++i)
    {
      fact=fact*i;  //Fill the missing statement
    }
    cout <<fact;    
    return 0;
}
