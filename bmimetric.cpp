#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double height, weight, bmi;

    cout<<"Please enter weight in kilograms:"<<endl;
    cin>>weight;
    cout<<"Please enter height in meters:"<<endl;
    cin>>height;
    cout.precision(4);
    cout<<"BMI is: "<<weight/height/height;
}