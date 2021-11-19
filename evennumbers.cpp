#include <iostream>

using namespace std;

int main(){
    int totalNumbers, incNumber;

    cin>>totalNumbers;

    incNumber = 0;
    
    for(totalNumbers; totalNumbers > 0; totalNumbers--){
        incNumber++;
        cout<<(2 * incNumber)<<endl;
    }
}