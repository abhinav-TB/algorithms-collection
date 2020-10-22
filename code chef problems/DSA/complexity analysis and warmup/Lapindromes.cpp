#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll T;
    cin>>T;
    while(T--){
        string s,s1,s2;
        
        cin>>s;
        int len=s.length();
        if(s.length()%2==0){
            s1=s.substr(0,(s.length()/2));
            s2=s.substr(s.length()/2);
        }
        else{
            s1=s.substr(0,(s.length()/2));
            s2=s.substr((s.length()/2)+1);

        }

        vector<ll>count1(26,0),count2(26,0);
        for(int i=0;i<s1.length();i++){
            count1[s1[i]-'a']+=1;
            count2[s2[i]-'a']+=1;
            
        }

        

        if(count1==count2){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }





        


    }

}