#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int compChoice()
{
    int comp;
    comp=rand()%3+1;
    if(comp==1)         return 1;
    else if(comp==2)    return 2;
    else                return 3;
}
int userChoice()
{
    int user;
    cout << "Enter 1 for rock, 2 for papaer or 3 for sccisors:  ";
    cin >> user ;
    if(user==1)         return 1;
    else if(user==2)    return 2;
    else                return 3;
}
void printChoice(int n)
{
        if(n ==1 )
            cout << "Rock" << endl;
        else if(n ==2 )
            cout << "Paper" << endl; 
        else
            cout << "Scissors" << endl;  
}
bool winner(int comp , int user)
{
    if(comp == 1)
    {
        if(user == 2)
            return true;    
        return false;    
    }
    else if(comp == 2)
    {
        if(user == 1)
            return false;
        return true;    
    }
    else
    {
        if(user == 1)
            return true;
        return false;    
    }    
}
int main()
{
    srand(time(0));
    int comp,user,choice;
    do
    {
        comp=compChoice();
        user=userChoice();

        cout << "Your choice : ";
        printChoice(user);

        cout << "Copmputer's choice : ";
        printChoice(comp);

        if((comp == 1 && user ==1 ) || (comp == 2 && user ==2 ) || (comp == 3 && user ==3 )  )
            choice=1;
        else
        {          
            bool flag=winner(comp,user);
            if(flag)
                cout << "You win" << endl;
            else
                cout << "You lose" << endl;   

        cout << "Press 1 if you want to play again or 0 otherwise: ";
        cin >> choice;
        }
    }
    while(choice);
    return 0;
}
