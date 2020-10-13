# include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll  k,temp;
    ll T,n;
    
 

    cin>>T;
    
    while(T--)
    {
        ll index=0,sum=0;
        cin>>n;
        cin>>k;
        vector<ll> arr;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        
        }
        for(int i=0;i<n;i++)
        {  
           sum+=arr[i]-k;
           if(sum<0)
            {
               index=i;
               break;
            }
        }
        if(index!=0){
            cout<<index+1<<endl;
        }
        else{
            cout<<n+(sum/k)+1<<endl;
        }

            
            

        


    }
}