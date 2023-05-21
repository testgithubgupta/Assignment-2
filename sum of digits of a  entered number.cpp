enter the number
123
sum is 6
  
  
  
 
#include <iostream>


using namespace std;
int main()
{  int i,n,r,y=0;


    cout<< "enter the number";
    cin>> n;
    while(n!=0)
    {
        r=n%10;
        y=y+r;
        n=n/10;
    }
    cout<< " sum of digits is" << y;
    

       
        

    

    return 0;
}
