#include<iostream>
using namespace std;
int main()
{
    int **a,l,k,t,i=0,j,m,*it,*jt;
    long int n,r,c,sr,sc;
    char s[100];
    cin>>t;
    it=new(int [t]);
    jt=new(int [t]);
    for(k=0;k<t;k++)
      {  
          cin>>n;
          cin>>r;
          cin>>c;
          cin>>sr;
          cin>>sc;
          cin>>s;
          a=new(int *[r]);
          for(i=0;i<r;i++)
              a[i]=new(int [c]);       
          for(i=1;i<=r;i++)
            {
             for(j=1;j<=c;j++)
                {
                  *(*(a+i)+j)=0;   
                }
            }
          for(i=1;i<=r;i++)
            {
             for(j=1;j<=c;j++)
                {
                  cout<<*(*(a+i)+j);   
                }
            }
          l=0;
          i=sr;
          j=sc;
          while(s[l]='\0')
            {
              if(s[l]=='N'||s[l]=='n')
               {
                 if(*(*(a+i)+j)==0)
                  {
                      *(*(a+i)+j)=1;
                      i--;
                  } 
                 while(*(*(a+i)+j)==1)
                  {
                     i--; 
                  } 
               }
              if(s[l]=='E'||s[l]=='e')
               {
                 if(*(*(a+i)+j)==0)
                  {
                    *(*(a+i)+j)=1;
                    j++;   
                  }
                 while(*(*(a+i)+j)==1)
                  {
                    j++;
                  }         
               } 
              if(s[l]=='W'||s[l]=='w')
               {
                 if(*(*(a+i)+j)==0)
                  {
                    *(*(a+i)+j)=1;
                    j--; 
                  } 
                 while(*(*(a+i)+j)==1)
                  {
                    j--;
                  } 
               } 
              if(s[l]=='S'||s[l]=='s')
               {
                 if(*(*(a+i)+j)==0)
                  {
                    *(*(a+i)+j)=1;
                    i++; 
                  }
                 while(*(*(a+i)+j)==1)
                  {
                    i++;
                  }                  
               } 
              l++; 
            }
        *(it+k)=i;
        *(jt+k)=j;    
      }
    for(i=0,j=1;i<t;i++,j++)
      {
          cout<<"Case #"<<j<<":"<<*(it+i)<<" "<<*(jt+i)<<endl;
      }
    return 0;
}

