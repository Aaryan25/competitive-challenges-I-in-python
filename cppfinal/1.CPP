#include<iostream.h>
#include<conio.h>
using namespace std;
class calculator
{
    int no1,no2,ans;

    public:
        void getdata();
        void add();
        void sub();
        void mul();
        void div();

};

void calculator::getdata()
{
    cout<<"\nEnter No1 :-  ";
    cin>>no1;
    cout<<"\nEnter No2 :-  ";
    cin>>no2;
}

void calculator::add()
{
    ans=no1+no2;
    cout<<"\nAddition  :-  "<<ans;
}
void calculator::sub()
{
    ans=no1-no2;
    cout<<"\nSubtraction  :-  "<<ans;
}
void calculator::mul()
{
    ans=no1*no2;
    cout<<"\nMultiplication :-  "<<ans;
}
void calculator::div()
{
    float(ans)=float(no1)/float(no2);
    cout<<"\nDivision  :-  "<<ans;
}

int main()
{
    calculator obj;
    int ch=0;

    while(ch!=5)
    {
        clrscr();
        cout<<"\n1 for Addition";
        cout<<"\n2 for Subtraction";
        cout<<"\n3 for Multiplication";
        cout<<"\n4 for Division";
        cout<<"\n5 for Exit";
        cout<<"\nEnter Your Choice  :-  ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                obj.getdata();
                obj.add();
                break;
            case 2:
                obj.getdata();
                obj.sub();
                break;
            case 3:
                obj.getdata();
                obj.mul();
                break;
            case 4:
                obj.getdata();
                obj.div();
                break;
            case 5:
                exit(0);
            default:
                cout<<"\nWrong Choice";
        }
        cout<<"\n";
    }
    cout<<"\n\n";
    getch();
    return 0;
}

/*
Output  :-

1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
5 for Exit
Enter Your Choice  :-  1

Enter No1 :-  6
Enter No2 :-  4
Addition  :-  10

1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
5 for Exit
Enter Your Choice  :-  4

Enter No1 :-  8
Enter No2 :-  5
Division  :-  1.6

1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
5 for Exit
Enter Your Choice  :- 5

*/
