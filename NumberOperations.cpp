#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,x,n,i,j,startYear, endYear,num1,num2,num3,count=0;
        cout<<"Select any option\n1.Odd or Even\n2.Leap year or non Leap year\n3.Grater of 3 numbers\n4.Prime number\n5.Factorial\n=";
        cin>>a;
        if(a==1)
        {
            cout<<"Select any option\n1.Odd\n2.Even\n=";
            cin>>b;
            if(b==1)
            {
                cout<<"\nENTER A NUMBER: ";
                cin>>c;
                cout<<"\nODD NUMBERS BETWEEN 1 AND " <<c<< " ARE: \n"<<c;
                for(i=1;i<=c;i+=2)
                {
                    cout<<i;
                }
            }
            else
            {
                cout<<"\nENTER A NUMBER: ";
                cin>>d;
                cout<<"\nEVEN NUMBERS BETWEEN 1 AND"<<d<< "ARE: \n"<<d;
                for (i = 1; i <= d; i++)
                {
                     if(i%2 == 0) 
                    {
                        cout<<i;
                    }
                }
            }
        }
        else if(a==2)
        {
            cout<<"Enter starting years: ";
            cin>>startYear;
            cout<<"Enter ending years: ";
            cin>>endYear;
            cout<<"Leap Years between"<<startYear<< "to"<<endYear<< "are: \n";
            for (i= startYear; i<=endYear; i++)
            { 
                if(((i% 4== 0) && (i % 100 != 0)) || (i% 400 == 0))
                {
                    cout<<i;
                }
                else 
                {
                    cout<<"There are no leap years";
                }
            } 
        }
        else if(a==3)
        {
            cout<<"Enter the numbers A, B and C: "; 
            cin>>num1>>num2>>num3; 
            if (num1 > num2 && num1 > num3) 
            cout<<"largest number is"<<num1; 
            if (num2 > num1 && num2 > num3) 
            cout<<"largest number is"<<num2; 
            if (num3 > num1 && num3 > num2) 
            cout<<"largest number is"<<num3; 
        }
        else if(a==4)
        {
            cout<<"Enter starting number: ";
            cin>>e;
            cout<<"Enter ending number: ";
            cin>>f;
            cout<<"Prime numbers between"<<e<<"to" <<f<< "are: \n";
            for(i=e; i<=f; i++)
            {
                for(j=2; j<i; j++)
                {
                    if(i%j==0)
                    {
                        count++;
                        break;
                    }
                }
                if(count==0 && i!=1)
                cout<<i;
                count = 0;
            }
        }

    return 0;
}
