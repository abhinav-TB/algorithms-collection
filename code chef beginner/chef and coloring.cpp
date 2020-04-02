# include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,R=0,G=0,B=0; 
    vector<char> col;
    cin>>T;
    for(int j=0;j<T;j++)
    {   cin>>N;
        for(int i=0;i<N;i++)
         {
           cin>>col[i]; 
           if(col[i]=='R')
             {
               R++;
             }
            else if(col[i]=='B')
            {
               B++;
            }
            else
            {
              G++;
            }
            
             
         }
         
        

    }
    
}