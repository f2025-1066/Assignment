#include <iostream>
#include <iomanip>// for std::setprecision
using namespace std;
int main() {
    double a,b;    // Take two floating point numbers from the user
    cout <<"Enter number:";
    cin>> a;
    cout <<"Enter number:";
    cin >> b;
    cout<<fixed<<setprecision(3); // Set output to fixed-point notation with 3 decimal places
    cout <<"----------Results In Float----------";
      // Perform operations with floating point numbers
    cout <<"\nSum: " << a+b;
    cout <<"\nDifference: " << a-b;
    cout <<"\nProduct: " << a*b;
    if(b !=0)
    cout <<"\nquotient: " <<a/b;
    else
    cout <<"\nQuotient: Undefine";
    cout<<"\n---------Results In Integers---------";  // Perform operations with floating point numbers
    int int_a = static_cast<int>(a);
    int int_b = static_cast<int>(b);
    // Perform operations with integers
    cout <<"\nSum: " << int_a+int_b;
    cout <<"\nDifference: " << int_a-int_b;
    cout <<"\nProduct: " <<int_a*int_b;
    if(b !=0)
    cout <<"\nquotient: " <<static_cast<double>(int_a)/int_b;
    else
    cout <<"\nQuotient: Undefine";
    return 0;
    // Explanation:
    // Casting floating point numbers to integers truncates the decimal part.
    // For example, 5.9 becomes 5. This can significantly change the results,
    // especially in division where precision matters.
}