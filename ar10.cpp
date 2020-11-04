#include<iostream>
using namespace std;
int main()
{
   char a[10];
   cin>>a;
   if(a[8]=='p'||a[8]=='P')// no- 48 to 57
       {
              if(a[0]=='0')
                {
                  switch(a[1])
                     {
                       case '1':a[0]='1';a[1]='3';break;
                       case '2':a[0]='1';a[1]='4';break;
		       case '3':a[0]='1';a[1]='5';break;
                       case '4':a[0]='1';a[1]='6';break;
                       case '5':a[0]='1';a[1]='7';break;
                       case '6':a[0]='1';a[1]='8';break;
                       case '7':a[0]='1';a[1]='9';break;
                       case '8':a[0]='2';a[1]='0';break;
                       case '9':a[0]='2';a[1]='1';break;  
                       default: break;
                     }
                }
              if(a[0]=='1')
                {
                   switch(a[1])
                      {
                        case '0':a[0]='2';a[1]='2';break;
                        case '1':a[0]='2';a[1]='3';break;
                        case '2':a[0]='1';a[1]='2';break; 
                        default: break;
                      }
             
                }
          for(int i=0;i<8;i++)
            {
              cout<<a[i];      
            } 
       }         
   else
       {
         if(a[0]=='1'&&a[1]=='2')
         {a[0]='0';
         a[1]='0';}
         for(int i=0;i<8;i++)
            {
              cout<<a[i];      
            } 
       } 
  return 0;
}
