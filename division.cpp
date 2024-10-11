//Adrish Purkayastha
//PRN : 23070123011
//ENTC A
// C++ program to handle error in division
#include <iostream>
using namespace std;
int main(){
    float n1,n2,ans;
    cout<<"Enter values of n1 and n2: ";
    cin>>n1>>n2;
    try{
        if(n2==0){
            throw n2;
        }
        else{
            ans = n1/n2;
            cout<<"Answer = "<<ans<<endl;
        }
    }
    catch(float num){
        cout<<"\nERROR: Division by "<<num<<endl;
    }
}
/*
OUTPUT:
Enter values of n1 and n2: 1 0

ERROR: Division by 0
*/