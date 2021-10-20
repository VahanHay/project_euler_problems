#include <iostream>


int main()
{
  int i= 1;
  int t = 2;
  
  int count  = 0;
  while ( t<= 4000000)
  {
      if(t%2==0)
      {
          count+=t;
      }
      int tmp = i;
      i= t;
      t+=tmp;
      
     std::cout<<t<<" " ;
  }
//  std::cout <<std::endl;
  std::cout <<count <<std::endl;
}