#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
   string numbers = "0123456789",lower_case = "abcdefghijklmnopqrstuvwxyz",
    upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
    special_characters = "!@#$%^&*()-+";
     
    bool num ,upper,lower,special =false;
    int count =4;
    for (int i=0;i<n;i++)
    {    
       if(!num)
       {
         size_t pos = numbers.find(password[i]);
         if(pos !=string::npos)
           {
               num =true;
               count--;
           }
       }
       if(!upper)
       {
         
         if(isupper(password[i]))
           {
               upper =true;
               count--;
           }
       }
       if(!lower)
       {
         
         if(islower(password[i]))
           {
               lower =true;
               count--;
           }
       }
       if(!special)
       {
         size_t pos =  special_characters.find(password[i]);
         if(pos !=string::npos)
           {
               special =true;
               count--;
           }
       }
    }

    if((n+count)<6){

       return (6-n);
    }
    else
    return count;
    
    
}

int main()
{


    int n;
    cin >> n;


    string password;
    cin>>password;

    int answer = minimumNumber(n, password);

    cout << answer << "\n";

   

    return 0;
}
