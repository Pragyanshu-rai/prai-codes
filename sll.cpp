#include<iostream>
#include "sll.h"
//#include<stdlib.h>//for exit() function
using namespace std;

using namespace link;
int main()
{ 
    int a;
    while(1)
    {
      cout<<"1.Insertion at begin 2.Insertion at position 3.Insertion at end 4.Deletion at begin 5.Deletion at position 6.Deletion at end 7.Display 8. count 9. exit"<<endl;
      cin>>a;
      switch(a)
       {
          case 1: iab(); break;
          case 2: iap(); break; 	
          case 3: iae(); break; 
          case 4: dab(); break; 
          case 5: dap(); break;
          case 6: dae(); break; 
          case 7: dis(); break; 
          case 8: count(); break;
          case 9: cout<<"Process exit"<<endl; exit(0);
          default: cout<<"Invalid choice!!!!!"<<endl;
       }
    }
}      
