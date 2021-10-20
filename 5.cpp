#include <iostream>


int main()
{
    int count = 1;
    for(int i =20 ; i >2 ; --i)
    {
        if(count % i !=0)
        {
            int t = i;
            for(int k = 1; k < i ;++k)
            {
                
                if(count%k ==0 && t%k==0)
                {
                    t /=k;
                }
            }
            count=count *t;
            std::cout << t << "  ";
        }
    }
    std::cout << count << std::endl;
}