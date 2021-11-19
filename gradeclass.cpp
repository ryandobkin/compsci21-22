
#include <iostream>

using namespace std;

int main(){
    int GradeOne, GradeTwo;

    cout<<"please enter 2 grades, seperated by a space:"<<endl;
    cin>>GradeOne>>GradeTwo;

    if(GradeOne < 60 && GradeTwo < 60){
        cout<<"student failed:(";
    }
    else if(GradeOne >= 95 && GradeTwo >= 95){
        cout<<"student graduated with honors:)";
    }
    else{
        cout<<"student graduated!";
    }
    return 0;
}