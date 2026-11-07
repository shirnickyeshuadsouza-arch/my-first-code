
#include <iostream>
 using namespace std;

int main() {
 int marks;
 char Grade;
 cout<<"Please enter the marks of the student (between 0 and 100):"<<endl;
 cin>>marks;

 if (marks<0||marks>100) {
  cout<<"Invalid entry! Please enter marks between 0 and 100:\n"<<endl;
 }
 else if (marks>=90) {
  cout<<"Grade:A\n"<<endl;
 }
 else if (marks>=75){
  cout<<"Grade:B\n"<<endl;
 }
 else if (marks>=60) {
  cout<<"Grade:C\n"<<endl;
 }
 else if (marks>=50) {
  cout<<"Grade:D\n"<<endl;
 }
 else if (marks>=0) {
  cout<<"Grade:F\n"<<endl;
 }
 return 0;
}