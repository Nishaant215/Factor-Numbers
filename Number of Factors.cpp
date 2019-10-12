#include <iostream>

using namespace std;


main () {

int num;
int count = 0;

cout << "Please enter an integer: ";
cin>> num;

for(int i =1; i <=  num; i++){

 if (num %i == 0){
 
  cout <<" "<< i;
 count++;
 
 } }

cout<<endl;
cout<<" There are "<< count<< " factors.";
return 0;

}