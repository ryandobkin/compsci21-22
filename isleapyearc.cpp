#include <iostream>
#include <string>
#include <sstream>
#include <iterator>

using namespace std;
using std::cout; using std::endl;
using std::string; using std::hex;
using std::stringstream;

int main(/*int argc, char *argv[]*/){

    //string year = argv[1];
    string year = "hello world";
    for(const auto &item : year){
    cout<<hex<<int(item);
    }

    /*if(year % 4 == 0 && (year % 100 > 0 || year % 400 == 0)){
        cout<<year<<" was a leap year"<<endl;
    }
    else{
        cout<<year<<" was not a leap year"<<endl;
    }*/
    return 0;
}