AB Difference
Chef is taking his baby steps into the world of programming.
The very first program he's tasked to write is as follows:  
"Given two integers A and B, print A + B."  
Unfortunately, Chef makes a typo: his program outputs A × B instead of A + B.   
Given the values of A and B, can you help Chef find the absolute difference between the correct answer and the value his program prints?
 
    
  
Input Format 
The only line of input will contain two space-separated integers, A and B. 
 
Output Format
Print a single integer: the difference between the correct answer and Chef's output.

CODE: 
#include <iostream>
#include <cstdlib> // Needed for the abs function

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << abs((a * b) - (a + b)) << endl;
    return 0;
}


