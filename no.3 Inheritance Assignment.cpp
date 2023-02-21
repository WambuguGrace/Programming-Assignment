
#include<iostream>

using namespace std;

int main()
{
string courseName;
    int studentLevel;

    cout<< "University student courses: ICT, Law and Business"<< endl;
    cout<<"What course are you studying?";
    cin>>courseName;


    if(courseName== "ICT")
    {
        cout<<"What level are you studying? \n 1. Certificate \n 2. Diploma \n 3. Degree (BSC-IT)";
        cin>>studentLevel;


        if(studentLevel==1)
        {
            cout<<"You are studying a Certificate in ICT"<< endl;
        }
        else if(studentLevel==2)
        {cout<<"You are studying a Diploma in ICT"<< endl;
        }
        else if(studentLevel==3)
        {cout<<"You are studying a Degree in BSC-IT. \n What stage are you in? \n 1. Stage 1 \n 2. Stage \n 3. Stage 3";
        cin>>studentLevel;


        if(studentLevel==1)
        {
            cout<<"You are in Stage 1 of BSC-IT"<< endl;
        }
        else if(studentLevel==2)
        {
            cout<<"You are in Stage 2 of BSC-IT"<< endl;
        }
        else if(studentLevel==3)
        {
            cout<<"You are in Stage 3 of BSC-IT"<< endl;
        }
        else
        {
            cout<<"Invalid input"<< endl;
        }
        }
        else
        {
            cout<<"Invalid input"<< endl;
        }
    }
    else if(courseName=="Law")
    {
        cout<<"You are studying Law"<< endl;
    }
    else if(courseName=="Business")
    {
        cout<<"You are studying Business"<< endl;
    }
    else
    {
        cout<<"Invalid input"<< endl;
    }

}
