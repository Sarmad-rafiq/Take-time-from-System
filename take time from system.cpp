#include <iostream>
#include <ctime>
using namespace std;

int main(){
		time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    int current_year=(tPtr->tm_year)+1900;
    cout<<tPtr->tm_mday;
    cout<<tPtr->tm_mon+1;
    cout<<current_year;

}
