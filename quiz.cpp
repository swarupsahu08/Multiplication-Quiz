#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    cout << "Here is a multiplication quiz game that gives you 10 questions then after that it provides the score how much you have done correct\n";
    cout << "Welcome to the multiplication quiz where you have to answer 10 questions correctly to win the game \n";
    srand(time(0));
    int score=0;
    for (int i = 1; i <= 10; i++)
    {
        int choice; //It is for the choice that needs to be chosen by the user
        string sy;  //Here sy is for the stage numbers
        if(i==1){
            sy="st";
        } else if(i==2){
            sy="nd";
        } else if(i==3){
            sy="rd";
        } else{
            sy="th";
        } //it is for the first ,second ,third,fourth and....so on 
        cout << "Here is your " << i << sy<< " question\n";
        int a = rand() % 50 + 1;   //Here is the random function to get the random numbers bbetweeen1 and 50
        int b = rand() % 50 + 1;   //Here is the random function to get the random numbers bbetweeen1 and 50   
        cout << "What is the product of " << a << " and " << b << endl;
        cin >> choice;
        if (choice == a * b)
        {
            score++;   //here the score is displayed
            cout << "Your answer is correct and your score is " << score << endl;
        }
        else
        {
            cout << "Your answer is incorrect and your score is " << score << endl;
        }
    }
    return 0;
}