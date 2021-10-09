#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    double height, weight, bmi;

    cout<<"Please enter weight in pounds: "<<endl;
    cin>>weight;
    cout<<"Please enter height in inches: "<<endl;
    cin>>height;
    weight = weight*.453592;
    height = height*.0254;
    cout<<fixed<<setprecision(2)<<"BMI is: "<<weight/height/height;
    //cout<<"BMI is: "<<weight/height/height;
}