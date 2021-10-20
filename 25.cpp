#include <iostream>

void foo()
{
 int a = 1;
 int b = 2;
 int c = 3;
 int tmp = 1000;
 int tmp5 = a+b+c;
  while ( tmp >= tmp5)
  {
      double chlp = a*a+b*b;
      chlp=sqtr(chlp);
    if(a+b+chlp == tmp5)
    {
        std::cout << a<<std::endl;
        if(tmp == tmp5)
        {
            std::cout << a<<std::endl;
            std::cout << b<<std::endl;
            std::cout << c<<std::endl;
            std::cout << a *b*c<<std::endl;
            return;
        }
    }
      ++a;
      ++b;
      ++c;
      tmp5 = a+b+c;
  }
  
}

int main()
{
  foo();
}