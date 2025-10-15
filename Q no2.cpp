#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int english,urdu,physics,math,bio,obtain_marks,total_marks;
       float percentage;
       string grade,remarks;
    cout << "Enter English marks: ";
    cin >> english;
     cout << "Enter Urdu marks: ";
     
    cin >> urdu;
     cout << "Enter Physics marks: ";
    cin >> physics; 
    cout << "Enter Math marks: ";
    cin >> math; 
    cout << "Enter Bio marks: ";
    cin >> bio;
    obtain_marks=english+urdu+physics+math+bio;
    cout<<"Obtain marks: " << obtain_marks;
    cout<<"\nEnter Total marks: ";
    cin>> total_marks;
    percentage=(float)obtain_marks/total_marks*100;
          if (percentage >= 90){
        grade = "A+";
        remarks = "Excellent";
          }
    else if (percentage >= 80){
        grade = "A";
         remarks = "Well Done";
    }
    else if (percentage >= 70){
        grade = "B";
      remarks = "Great";
    }
    else if (percentage >= 60){
        grade = "C";
        remarks = "Good";
    }
    else if (percentage >= 50){
        grade = "D";
        remarks = "Nice";
    }
    else  {
        grade = "F";
         remarks = "Needs Improvement";
    }
    string status = (percentage >= 50) ? "Pass" : "Fail";
       cout << fixed << setprecision(2);
    cout << "\nPercentage: " << percentage << "%";
    cout << "\nGrade: " << grade;
    cout << "\nStatus: " << status << endl;
    cout<<"\n---------------------Report Card---------------------"<<endl;
    cout << left << setw(15) << "Subject" 
         << right << setw(15) << "Marks"<<endl;
    cout << left << setw(15) << "English" 
         << right << setw(15) << english <<endl;
         cout << left << setw(15) << "Urdu" 
         << right << setw(15) << urdu <<endl;
         cout << left << setw(15) << "Physics" 
         << right << setw(15) << physics <<endl;
         cout << left << setw(15) << "Math" 
         << right << setw(15) << math <<endl;
         cout << left << setw(15) << "Bio" 
         << right << setw(15) << bio <<endl;
         cout << left << setw(15) << "Percentage" 
         << right << setw(15) << percentage <<"%" <<endl;
         cout << left << setw(15) << "Grade" 
         << right << setw(15) << grade <<endl;
         cout << left << setw(15) << "Status" 
         << right << setw(15) << status <<endl;
           cout << left << setw(15) << "Remarks" 
         << right << setw(15) << remarks <<endl;
    return 0;
}