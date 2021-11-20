#include <iostream>

using namespace std;

int main(){
    int inputNum, totalNum1, totalNum2;
    totalNum1 = 1;
    totalNum2 = 1;
    cin>>inputNum;
    cout<<'1'<<endl<<'1'<<endl;
    inputNum -= 2;
    for(inputNum; inputNum > 0; inputNum--){
        int tempNum = totalNum2;
        totalNum2 = totalNum1 + totalNum2;
        totalNum1 = tempNum;
        cout<<totalNum2<<endl;
    }
    return 0;
}