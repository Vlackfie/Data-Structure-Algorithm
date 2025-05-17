#include <bits/stdc++.h>
using namespace std;
int main(){
 int a ,b, temp;
 int *p1=&a;
 int *p2=&b;
 cout << "first Number: ";
 cin >>a,
 cout << "Second Number : ";
cin >>b,
temp = *p1;
*p1=*p2;
*p2=temp;
\\\\\\\\\
cout << "first Number: "<<a<<endl;
cout << "Second Number: "<<b<<endl;
return 0;

}
