#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int dollar, cent, quarter, dime, nickel, penny;

    cout<<"Please enter the amount of money to convert:";
    cin>>dollar>>cent;

    cent = cent + (dollar * 100);
    quarter = floor(cent / 25);
    cent = cent - quarter * 25;
    dime = floor(cent / 10);
    cent = cent - dime * 10;
    nickel = floor(cent / 5);
    cent = cent - nickel * 5;
    penny = floor(cent / 1);
    cent = cent - penny * 1;

    cout<<"the coins are "<<quarter<<" quarters, "<<dime<<" dimes, "<<nickel<<" nickels and "<<penny<<" pennies";
}