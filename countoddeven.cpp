#include <iostream>

using namespace std;

int main(){
    int varOne, varTwo, varThree, varFour;

    //cout<<"Please enter 4 positive integers, seperated by a space"<<endl;
    cin>>varOne>>varTwo>>varThree>>varFour;

    if(varOne % 2 == 0){
        varOne = 0;
    } else {
        varOne = 1;
    }

    if(varTwo % 2 == 0){
        varTwo = 0;
    } else {
        varTwo = 1;
    }

    if(varThree % 2 == 0){
        varThree = 0;
    } else {
        varThree = 1;
    }

    if(varFour % 2 == 0){
        varFour = 0;
    } else {
        varFour = 1;
    }

    int total = varOne + varTwo + varThree + varFour;

    if(total >= 3){
        cout<<"more odds";
    }
    else if(total == 2){
        cout<<"same number of evens and odds";
    }
    else if(total <= 1){
        cout<<"more evens";
    }
    return 0;
}