#include <iostream>

using namespace std;

int main(){
    str year;

    cin>>year;

    //must take entry from cmd, remove text

    if(year % 4 == 0 && (year % 100 > 0 || year % 400 == 0)){
        cout<<year<<" was a leap year"<<endl;
    }
    else{
        cout<<year<<" was not a leap year"<<endl;
    }
    return 0;
}