//Authors:Michelle Gomez
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstName; 
  string lastName; 
  int lucky;

 int len = firstName.length(); 
 int leng = lastName.length();

  //get user input
  cout<<"What is your first name?"<<endl; 
  cin>>firstName; 
  cout<<"What is your last name?"<<endl; 
  cin>>lastName; 

  char letter = firstName[0]; 
  // letter = firstName[len-1];
  

  cout<<"Welcome, "<<firstName[0]<<"."<<lastName[0]<<"., here is your fortune..."<<endl;
  lucky = firstName.length(); 
  //tell fortune
  cout<<"your lucky number is "<<lucky<<endl;



  if (letter =='a'|| letter =='A' || letter =='e' || letter =='E' || letter =='i' || letter =='I'|| letter =='o' || letter =='O' || letter =='u' || letter =='U')
  {
    cout<<"you are destined to be famous!"<<endl; 

  }
  else 
  {
    cout<<"you should keep a low profile."<<endl;
  }

    char letter2 = lastName[lastName.length()-1];

 if (letter2 =='a' || letter2 =='A' || letter2 =='e' || letter2 =='E'|| letter2 =='i'|| letter2 =='I' || letter2 =='o'|| letter2 =='O' || letter2 =='u' || letter2 =='U')
 {
    cout<<"you have already met your true love."<<endl; 
 }  
    cout<<"have a good day!"<<endl; 
  return 0;
}
