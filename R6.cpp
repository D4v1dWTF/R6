#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void creditsScreen(){
  char input;

do{
cout<<"Do you want to see the credits? (y/n) ";
cin>>input;

  {if(input == 'y'){
  cout<<setw(10)<<"Name\t"<<"Student ID\t"<<"Tutorial group"<<endl;
  cout<<"Wong Tsz Fung\t"<<"23119333A\t"<<setw(8)<<"B03B"<<endl;
  cout<<"Lui Hin Wang\t"<<"23127370A\t"<<setw(8)<<"B03D"<<endl;
}
  else if(input=='n'||input=='N'){
    cout<<"Return to main menu"<<endl;
    return;
  }
  else{
    cout<<"Invalid input, please try again"<<endl;
  }
}
}while(input !='Y' && input !='y' && input !='N' && input !='n');

}
