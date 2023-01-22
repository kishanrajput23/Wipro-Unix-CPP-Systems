#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct student {
    char student_name[100];
    int roll_no;
    int marks1;
    int marks2;
    int marks3;
};

int main() {
    struct student s1, s2, s3, s4, s5;
    int highest=0, least=0;
    float avg[5];

    cout<<"Enter the names of the 5 students"<<endl;
    cin>>s1.student_name>>s2.student_name>>s3.student_name>>s4.student_name>>s5.student_name;
    
    cout<<"Enter the roll numbers of these 5 students"<<endl;
    cin>>s1.roll_no>>s2.roll_no>>s3.roll_no>>s4.roll_no>>s5.roll_no;
    
    cout<<"Enter the marks1 of 5 students"<<endl;
    cin>>s1.marks1>>s2.marks1>>s3.marks1>>s4.marks1>>s5.marks1;
    
    cout<<"Enter the marks2 of 5 students"<<endl;
    cin>>s1.marks2>>s2.marks2>>s3.marks2>>s4.marks2>>s5.marks2;
    
    cout<<"Enter the marks3 of 5 students"<<endl;
    cin>>s1.marks3>>s2.marks3>>s3.marks3>>s4.marks3>>s5.marks3;
    
    avg[0] = (s1.marks1 + s1.marks2 + s1.marks3) / 3;
    avg[1] = (s2.marks1 + s2.marks2 + s2.marks3) / 3;
    avg[2] = (s3.marks1 + s3.marks2 + s3.marks3) / 3;
    avg[3] = (s4.marks1 + s4.marks2 + s4.marks3) / 3;
    avg[4] = (s5.marks1 + s5.marks2 + s5.marks3) / 3;
    
    cout<<"The average marks gain by "<<s1.student_name<<" is "<<avg[0]<<endl;
    
    cout<<"The average marks gain by "<<s2.student_name<<" is "<<avg[1]<<endl;
    
    cout<<"The average marks gain by "<<s3.student_name<<" is "<<avg[2]<<endl;
    
    cout<<"The average marks gain by "<<s4.student_name<<" is "<<avg[3]<<endl;
    
    cout<<"The average marks gain by "<<s5.student_name<<" is "<<avg[4]<<endl;
    
    int n = sizeof(avg) / sizeof(avg[0]);
    
    highest = *max_element(avg, avg+n);
    int ele1 = highest;
    int index1;
    for (int i=0; i<5; i++) {
        if (ele1 == avg[i]) { 
            index1 = i;
        }
    }
    
    least = *min_element(avg, avg+n);
    int ele2 = least;
    int index2;
    for (int i=0; i<5; i++) {
        if (ele2 == avg[i]) { 
            index2 = i;
        }
    }
    
    string std[5] = {s1.student_name, s2.student_name, s3.student_name, s4.student_name, s5.student_name};
    
    cout<<"The highest average marks is gained by "<<std[index1]<<" is "<<highest<<endl;
    
    cout<<"The least average marks is gained by "<<std[index2]<<" is "<<least<<endl;
    
    return 0;
}