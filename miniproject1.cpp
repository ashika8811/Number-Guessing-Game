#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    // srand is a random functin, time(0) is a that time
    // int number= 1+rand()%100;
    // cout<<number;
    int min = 0;
    int max = 50;
    int num = min + rand() % (max - min);
    int lives = 5;
    cout << "wELCOME TO NUMBER GUESSING GAME" << endl;
    cout << "chose a number between 0 to 50" << endl;
    while (lives--)
    {
        int choice;
        cout << "enter your choice" << endl;
        cin >> choice;

        if (choice == num)
        {
            cout << "YOU WON THE GAME!!" << endl;
            exit(0);
        }
        else if (choice < num)
        {
            cout << "TOO LOW! Guess High" << endl;
            
        }
        else
        {
            cout << "TOO HIGH! Guess Low" << endl;
            
        }
        if (lives == 0)
        {
            cout << "YOU LOST!" << endl;
            break;
        }
        else{
            cout<<"you have"<<lives<<"left"<<endl;
        }
    }

    return 0;
}