
#include <iostream>


using namespace std;
int main()
{  int a,b,c;
   int sw,d;
   cout<< " enter your operand +,-,*,/";
   cin>> sw;
   switch (sw)
   {
       case 1:
       cout<< "input two number";
       cin>> a;
       cin>> b;
       d=a+b;
       cout<< "sum of two number is =" << d;
       break;
         
         
        case 2:
        cout<< " enter two number";
        cin>>a;
        cin>>b;
        d=a-b;
        cout<< " difference of two number is" << d;
        break;
        
        case 3:
        cout<<" enter two number";
        cin>>a;
        cin>>b;
        d=a*b;
        cout<< " product of two number is " << d;
        break;
        default:
        cout<< " invalid selections";
        
        
        
   }
    

       
        

    

    return 0;
}
