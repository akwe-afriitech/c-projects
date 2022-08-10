#include <iostream>
using namespace std;


	const int rock = 0;
	const int paper = 1;
	const int scissors = 2;
    int userChoice = 0;


    int getcomputerChoice(){
	srand(time(NULL));
    int computerchoice = rand() % 2 + 0;
    return computerchoice;
    }

    int determineWinner(int userChoice, int computerChoice){
    if (userChoice==rock && computerChoice==paper)
        cout<<"computer wins, paper raps rock";

    else if(userChoice==paper && computerChoice==scissors)
        cout<<"computer wins, scissors cuts paper";

    else if(userChoice==scissors && computerChoice==rock)
        cout<<"computer wins, rock breaks scissors";

    else if(userChoice==rock && computerChoice==scissors)
        cout<<"you win, rock breaks scissors";

    else if(userChoice==paper && computerChoice==rock)
        cout<<"you win, paper raps rock";

    else if(userChoice==scissors && computerChoice==paper)
        cout<<"you win, scissors cuts paper";

    else
    cout<<"draw";
    return 0;
    }

    void displayChoice(int choice){
        string result;
        if(choice==rock)
            result= "Rock";
        else if(choice==paper)
            result = "Paper";
        else if(choice==scissors)
            result = "Scissors";
        else
            result="";
        cout<<result;
    }

    int main(){
    cout<<"rock paper scissors";
	cout<<" pick a number \n";
	cout<<" 0 for rock \n";
	cout<<" 1 for paper \n";
	cout<<" 2 for scissors \n";
	cout<<" enter your choice : \n";
	cin>> userChoice;
	if (userChoice<=2){
	cout<< " u selected : ";
    displayChoice(userChoice);

	int computerChoice=getcomputerChoice();
	cout<<"\n the computer selected : ";
	displayChoice(computerChoice);
	cout<<"\n";
    determineWinner(userChoice, computerChoice);
    }
    else
    cout<<"invalid pls select from the list , try again";

}
