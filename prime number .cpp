enter the term
2
prime 
4
not prime


#include <iostream>


using namespace std;
int main()
{  int i,n,f;


    cout<< "enter the term";
    cin>> n;
    f=0;
    for(i=2;i<=n-1;i++)
       if(n%i==0)
       {
           f=1;
           break;
       }
     if(f==0)
     {
         cout<< " prime ";
     }
     else
     
     {
         cout<< " not prime number";
     }
       
        

    

    return 0;
}
