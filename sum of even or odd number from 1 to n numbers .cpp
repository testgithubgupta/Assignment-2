enter the number 
10
sum of even is 30
  sum of odd is 25
  
  
  
  
  
 
#include <iostream>


using namespace std;
int main()
{  int i,n,e=0,o=0;


    cout<< "enter the term";
    cin>> n;
    for(i=1;i<=n;i++)
        if(i%2==0)
       { e=e+i;
       }
    
    else
    {
        o=o+i;
    }
    cout<< " sum of even number is " <<  e;
    cout<< "sum of odd number is" << o;

    

    return 0;
}
