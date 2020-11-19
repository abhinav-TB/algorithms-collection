# include <iostream>
# include <math.h>

using namespace std;

class employee{
  public:
  string name;
  int age;
  string address;
  
  virtual void read(){
      cin>>name>>age>>address;
  }
  virtual void show(){
      cout<<name<<age<<address;
  }
  
};
class pf:public employee{
    bool ispf;
    public:
      void read(){
      cin>>name>>age>>address>>ispf;
     }
     void show(){
      cout<<name<<age<<address<<ispf;
    }
    
};
class dept:public employee{
    string dept_name;
    public:
    void read(){
      cin>>name>>age>>address;
    }
    void show(){
      cout<<name<<age<<address;
    }
};


int main(){
    employee *e1[5],*e2[5];

    for(int i=0;i<5;i++){
         e1[i]=new pf();
         e1[i]->read();
    }

    return 0;
}
