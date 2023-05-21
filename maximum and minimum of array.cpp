input five integer
1
2
3
4
5
minimum number is =1
  maximum number is =5
  
  
  
 
#include <iostream>


using namespace std;
int main()
{  int a[5],i,max,min;
   cout<<" input five integer values";
   for(i=0;i<=4;i++)
   {
       cin>>a[i];
       
   }
   min=max=a[0];
   for(i=0;i<=4;i++)
    {  if(min>a[i])
      
          min=a[i];
          
      if(max<a[i])
      max=a[i];
      
    }
    
      cout<< " minimum number is =" << min;
      cout<<" maximum number is = " << max;
      
   

        
        
        
   
    

       
        

    

    return 0;
}
