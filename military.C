/* Tyler Allen
2-19-15
CS111
Lab5-2 
This program will ask the user to enter his/her age and it will display one of the messages depending on age*/
#include <iostream>
using namespace std;

int main(){
  char gender;
  int age;
  cout<<"Enter your gender: ";
  cin>>gender;

  if(gender!='M'&&gender!='m'&&gender!='F'&&gender!='f'){
    cout<<"Invalid gender";
  }
  else{
    cout<<"Please enter an age: ";
    cin>>age;
  
    if(age<0){
      cout<<"Invalid age"<<endl;
    }
    else if(gender=='F'||gender=='f'){
      cout<<"Thank you for using the system, but we were only looking for men.";
    }
    else if(age<=16){
      cout<<"You need to wait "<<17-age<<" more years."<<endl;
    }
    else if(age>=17&&age<=42){
      cout<<"The military is hiring more people like you."<<endl;
    }
    else 
      cout<<"Thank you for using the system."<<endl;
  }
  
return 0;
}
