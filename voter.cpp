//Adrish Purkayastha
//PRN : 23070123011
//ENTC A
// C++ program to limit voting age
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age: ";
    cin>>age;
    try{
        if(age<18){
            throw age;
        }
        else{
            cout<<"You are eligible to vote"<<endl;
        }
    
    }
    catch(int num){
        cout<<"ERROR: required age: 18, your age: "<<num;
    }
}
/*
OUTPUT:
enter age: 17
ERROR: required age: 18, your age: 17
*/