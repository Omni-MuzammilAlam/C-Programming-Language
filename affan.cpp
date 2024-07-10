#include <iostream>
using namespace std;
int main() {

    int num=53788, reversedNum = 0, remainder;

   

    // Reverse the digits
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Output the reversed number
    cout<<"Reversed number:\n"<<reversedNum;

    return 0;
}
