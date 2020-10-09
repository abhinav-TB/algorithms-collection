# include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned  k,temp;
    unsigned T,n;
    
 

    cin>>T;
    
    while(T--)
    {
        bool flag= false;
        cin>>n;
        cin>>k;
        vector<unsigned> arr(100000000);
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            arr[i]=temp;
        }
        for(int i=0;flag==false;i++)
        {
           if(arr[i]>=k)
            {
               arr[i+1]=arr[i+1]+arr[i]-k;
            }
            else
            {
                cout<<i+1<<endl;
                flag=true;
        
            }
        }
            
            

        


    }
}