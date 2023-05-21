input five integers
1
2
3
4
5
sum of array elmet is =15
  
  
  
  
  
  
  
#include <iostream>


using namespace std;
int main()
{  int a[5],s=0,i;
   cout<< " input five integers";
   for(i=0;i<=4;i++)
   {
       cin>>a[i];
       
   }
   for(i=0;i<=4;i++)
   {
       s=s+a[i];
       
   }
   cout<< " sum of array elements is =" << s;

        
        
        
   
    

       
        

    

    return 0;
}
