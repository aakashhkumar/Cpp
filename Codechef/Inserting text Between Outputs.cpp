If we want any other text in between the outputs we can provide that text inside " " sign.

Write a program which does the following

Output the result of 3 + 4
Output the result of 2 + 1 on the same line
Insert the text "and" between the outputs.
Note: We have a space before and after the text as well, as without those, the output would be "7and3", instead of "7 and 3".

CODE : 
#include <bits/stdc++.h>
using namespace std;

int main() {

  cout << 3 + 4 << " and " << 2 + 1;

  return 0;
}
