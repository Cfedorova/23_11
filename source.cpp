#include "student.h"
int main()
{
    student* S;
    int n;
    cout<<"n= ";
    cin >>n;
    S=new student [n];

    for(int i=0; i<n; i++)
        S[i].Input();
    for (int i=0; i<n; i++)
        S[i].Print();


    /*student S;
    S.Input();
    S.Print()*/

    return 0;
}