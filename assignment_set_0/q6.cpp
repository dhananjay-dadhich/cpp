#include<iostream>
using namespace std;
int main()
{
    double stu_atte;
    double testScore;
    double tt_score;

    cout<<"enter the student attendance : ";
    cin>>stu_atte;

    cout<<"enter the test score : ";
    cin>>testScore;

    cout<<"enter the total score : ";
    cin>>tt_score;


    if(stu_atte > 50 &&    testScore >= 0.70 && tt_score > 5600)
    {
        cout <<    "result : " << 10 << endl;
    }
    else if(stu_atte > 50 &&    testScore >= 0.70 )
    {
     cout <<    "result : " << 9 << endl;
    }
    else if( testScore >= 0.70 && tt_score > 5600)
    {
     cout <<    "result : " << 8 << endl;
    }
    else if(stu_atte > 50 && tt_score > 5600)
    {
     cout <<    "result : " << 7 << endl;
    }
    else if(stu_atte > 50  ||    testScore >= 0.70 || tt_score > 5600)
    {
         cout <<    "result : " << 6 << endl;
    }
    else
    {
         cout <<    "result : " << 5 << endl;
    }

    return 0;
}



