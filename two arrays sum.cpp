
#include <iostream>


using namespace std;
int main()
{  int a[3][3],b[3][3],s[3][3],r,c;
    cout<< " input first matrix";
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cin>>a[r][c];
            
        }
        
    }
    cout<< " input second matrix";
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cin>>b[r][c];
        }
    }
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            s[r][c]=a[r][c]+b[r][c];
        }
    }
    cout<<" sum of matrices";
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            cout<<s[r][c];
        }
    }
    


      
   

        
        
        
   
    

       
        

    

    return 0;
}
