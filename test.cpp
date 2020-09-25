#include <bits/stdc++.h>

using namespace std;


int main()
{
  int T,N,ele;

  cin>>T;
  while(T!=0){
      cin>>N;
      if(N==1){
          cout<<"YES"<<endl;
          T--;
          break;

      }
    bool flag=false;
    vector<int>arr;
      for(int i=0;i<N;i++)
      {  
         cin>>ele;
         arr.push_back(ele);

      }
      for(int i=1;i<N;i++)
      {  
         
         if(abs(arr[i]-arr[i-1]<=1))
         {
             if(arr[i]>arr[i-1])
             {
               arr.erase(arr.begin(),i-1);
             }
            
             else
             {
                  arr.erase(arr.begin(),i);
             }
             

         }
         else
         {
             flag=false;
             break;
         }
         
      }

      if(flag)
      {
          cout<<"YES"<<endl;

      }
      else{
          cout<<"NO"<<endl;
      }
     T--;
  }
}