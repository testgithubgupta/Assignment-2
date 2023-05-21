enter the number up to sum = 100
   sum is  = 5050
  
  
  
  
 
#include <iostream>


using namespace std;
int main()
{  int i,n,s=0;


    cout<< "enter the number up to sum";
    cin>> n;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    cout<< "sum is" << s; 

    

    return 0;
}
  
