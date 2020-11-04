#include<iostream>
//#include<stdlib.h>
using namespace std;
namespace link 
{  
   int p,i=0;
   struct node
    {
      int data;
      struct node *next;
    }*nn=NULL,*start=NULL,*t=NULL,*t1=NULL;
   void iab()
    {
      nn=new(struct node);
      cout<<"Enter the data"<<endl;
      cin>>nn->data;
      if(!start)
        start=nn;
      else
       {
        nn->next=start;
        start=nn;
       }       
    } 
   void iap()
    {      
      cout<<"Enter the position"<<endl;
      cin>>p;
      nn=new(struct node);
      cout<<"Enter the data"<<endl;
      cin>>nn->data;
      if(!start)
        start=nn;
      else if(p==1)
       {
        nn->next=start;
        start=nn;
       }
      else
       {
        t=start;
        for(i=0;i<(p-2);i++)
           t=t->next;
        nn->next=t->next;
        t->next=nn;
       }  
    }
   void iae()
    {
      nn=new(struct node);
      cout<<"Enter the data"<<endl;
      cin>>nn->data;
      if(!start)
        start=nn;
      else
       {
        t=start;
        while(t->next!=NULL)
           t=t->next;
        t->next=nn;
        nn->next=NULL;
       }
    }
   void dab()
    {
      if(!start)
        cout<<"No data to delete"<<endl;
      else
       {
        t=start;
        start=start->next;
        cout<<"The data is deleted"<<endl;
        delete(t);
       }
    } 
   void dap()
    {
      cout<<"Enter the position"<<endl;
      cin>>p;
      nn=new(struct node);
      cout<<"Enter the data"<<endl;
      cin>>nn->data;
      if(!start)
        cout<<"No data to delete"<<endl;
      else if(p==1)
       {
        t=start;
        start=start->next;
        cout<<"The data is deleted"<<endl;
        delete(t);
       }
      else
       {
        t=start;
        for(i=0;i<(p-2);i++)
           t=t->next;
        t1=t->next;
        t->next=t1->next;
        cout<<"The data is deleted"<<endl;
        delete(t1);   
       }
    }
   void dae()
    { 
       if(!start)
        cout<<"No data to delete"<<endl;
       else
        {
         t=start;
         while(t->next!=NULL)
           { t1=t;
            t=t->next;}  
         cout<<"The data is deleted"<<endl;
         delete(t);
         t1->next=NULL;
        }      
    } 
   void dis()
    {
     if(!start)
        cout<<"No data to display"<<endl;
       else
        {
         t=start;
         while(t)
           {
            cout<<t->data<<endl;
            t=t->next;
           }               
    	}
	}
}
using namespace link;
main()
{ 
   int a;
   while(1)
    {
      cout<<""<<endl;
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
          case 8: exit(1);
          default: cout<<"Invalid choice!!!!!"<<endl;
       }
    }      
}
