#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int total;
    double penny, nickel, dime, quarter, dollar, cent;

    cout<<"Please enter the number of coins:"<<endl;
    cin>>quarter;
    cin>>dime;
    cin>>nickel;
    cin>>penny;
    
    total = (penny * 1) + (nickel * 5) + (dime * 10) + (quarter * 25);

    dollar = floor(total/100);
    cent = total % 100;

    cout<<"The total is "<<dollar<<" dollars and "<<cent<<" cents"<<endl;

    return 0;
}