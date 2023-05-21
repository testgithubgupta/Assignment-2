enter the term= 5
  factorial of a term is 120
  
 
#include <iostream>


using namespace std;
int main()
{  int i,n,f=1;


    cout<< "enter the term";
    cin>> n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<< "factorial of a number"  <<  f;

    

    return 0;
}
  
