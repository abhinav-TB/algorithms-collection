# include <bits/stdc++.h>

using namespace std;

bool isPossible(vector<int> v){

    for(int i=0;i<v.size()-1;i++){

        if((v[i] & v[i+1])<=0){
            return false;
        }

    }
    return true;
}

int main(){

    int T,n;
    bool flag;
    cin>>T;
    while(T--){
        cin>>n;
        vector<int> v(n);
        iota(v.begin(),v.end(),1);
        sort(v.begin(),v.end());
        
        do{
           if(isPossible(v)){
               
               break;
           }
        }while(next_permutation(v.begin(),v.end()));

        if(isPossible(v)){
            for(auto &it:v){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }


    }
}