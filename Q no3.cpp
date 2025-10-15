#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"Enter number: ";
    cin>> a;
    cout <<"Enter number: ";
    cin>> b;
    cout <<"Enter number: ";
    cin>> c;
      // Find the largest number
    if(a>b &&a >c){
    cout<<"Greatest Number: "<< a <<endl;}
   else if(b>a &&b >c){
   cout<<"Greatest Number: "<< b <<endl;}
    else {
    cout<<"Greatest Number: " << c <<endl;}
    // Find the Smallest number
    if(a<b && a<c){
    cout<<"Smallest Number: "<< a <<endl;}
   else if(b<a &&b <c){
   cout<<"Smallest Number: "<< b <<endl;}
    else {
    cout<<"Smallest Number: " << c <<endl;}
    if (a == b && b == c) { 
    cout << "All numbers are equal: " << a << " = " << b << " = " << c << endl;}
    else {
    cout << "All numbers are NOT equal." << endl;}
    return 0;
}