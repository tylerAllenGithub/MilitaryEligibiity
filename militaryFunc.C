/*Tyler Allen
3-16-15
CS111
lab9-1
This program will verify the eligibility of joining the military from the user's
gender and age. make the following 4 functions in addition to the main.*/

#include <iostream>
using namespace std;

void showProgInfo();
void getInfo(string &name, char &gender, int &age);
bool verifyEligibility(char gender, int age);
void printLetter(string name, bool eligible);

int main(){
  string name;
  char gender;
  int age;
  bool eligible;
  showProgInfo();
  getInfo(name, gender, age);
  eligible=verifyEligibility(gender, age);
 printLetter(name, eligible);
  return 0;
}

void showProgInfo()
{
  cout<<"************************************************************"<<endl;
    cout<<"This program will tell if you are able to join the military."<<endl;
    cout<<"************************************************************"<<endl;
}

void getInfo(string &name, char &gender, int &age)
{
  cout<<"Enter first name: ";
  cin>>name;

  cout<<"Enter gender: ";
  cin>>gender;

  cout<<"Enter age: ";
  cin>>age;
}

bool verifyEligibility(char gender, int age)
{
  if(gender=='F'||gender=='f')
    return false;
  else
    {
      if(age>=18)
	return true;
    }
  return false;
}

void printLetter(string name, bool eligible)
{
  if(eligible)
    cout<<"Dear "<<name<<" Please considering joining the military."<<endl;
  else
    cout<<"Thank you for applying."<<endl;
}
