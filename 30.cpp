#include <iostream>
#include <cmath>

int tmp(int x)
{
    int sum_digits = 0;
    while(x)
    {
        int last = x % 10;
        sum_digits += pow(last,5);
        x /= 10;
    }
    return sum_digits;

} 
void foo()
{
    int count = 0;
    for(int i = 2 ; i < 355000 ; ++i)
    {
        if(i == tmp(i))
        {
            count += i;
        }
    }
    std::cout << "count is: "<< count  << std::endl;
}



int main()
{
    foo();
}

