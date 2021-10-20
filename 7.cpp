#include <iostream>
#include <cmath>
using namespace std;

int titleToNumber(string columnTitle) {
        long long x= 0;
        if(columnTitle.length()==1)
        {
            return columnTitle[0]-64;
        }
        for(int i = 0 ; i < columnTitle.length()-1 ; ++i)
        {
            x+=pow(26 ,(columnTitle.length()-i-1))*(columnTitle[i]-64);
            std::cout<<x<<"  ";
        }
        x+=columnTitle[columnTitle.length()-1]-64;
        return x;
    }

int main()
{
  string s="AAA";
 std::cout<< titleToNumber(s);
}