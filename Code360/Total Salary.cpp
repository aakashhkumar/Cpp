/* Problem statement
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), depending upon which the total salary is calculated as:

    Total_salary = Basic + HRA + DA + Allow –  PF     
where :  
HRA   = 20% of basic      
DA    = 50% of basic    
Allow = 1700 if grade = ‘A’    
Allow = 1500 if grade = ‘B’     
Allow = 1300 if grade = ‘C' or any other characters    
PF    = 11% of basic. 
Round off the total salary and then print the integral part only.
 


Note for C++ users :

To round off the value, please include<cmath> library at the start of the program and round off the values in this way.
int ans = round(yourFinalValue);

*/
// Link : 

#include <iostream>
#include <cmath>
using namespace std; 

 
int main() {
    double basic;
    char grade;
    
    cin >> basic >> grade; 
    
    double HRA = 0.2 * basic;
    double DA = 0.5 * basic;
    double PF = 0.11 * basic;
    
    int Allow;
    if (grade == 'A') {
        Allow = 1700;
    } else if (grade == 'B') {
        Allow = 1500;
    } else {
        Allow = 1300;
    }
    
    double totalSalary = basic + HRA + DA + Allow - PF;
    
    int roundedTotalSalary = round(totalSalary);
    
    cout << roundedTotalSalary << endl;
    
    return 0;
}

