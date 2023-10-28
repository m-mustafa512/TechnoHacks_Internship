#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
bool log;
int score=0;	

class GuessingGame {					
    private:							
        int secretNumber;
        int userGuess;
        
    public:
        void playGame();
        int takeGuess();
        void generateRandomNumber();				
        void displayWelcomeMessage();
        
        int getSecretNumber()
        {
            return secretNumber;
        }
};

void GuessingGame::generateRandomNumber()
{	
    srand(time(0));
    secretNumber = rand() % 100;
}

void GuessingGame::displayWelcomeMessage()
{
	cout<<"_______________________________________________________________________________________________________________________\n";
	
		cout<<"\t\t\t\t-----NUMBER GUESSING GAME-----\n";					
        cout<<"\t\t\t\t---Created By: Muhammad Mustafa---\n";
		cout << "\t\t\t\t---TechnoHacks Internship---\n\n";			
		cout<<"\t\t\t\tIf you guessed right you will get 50 score. \n";
      cout<<"\t\t\t\t\tYour current score is: "<<score<<endl;
      
     	cout<<"_______________________________________________________________________________________________________________________\n";
}

int GuessingGame::takeGuess()
{
    cout << "\nEnter your guess: ";
    cin >> userGuess;
    return userGuess;
}

void GuessingGame::playGame()
{
    if(userGuess == secretNumber)
    {
        cout << "Correct guess!" << endl;
        cout << "The secret number was: " << secretNumber << endl;
        log = 1;
        score += 50;
    }
    else if(userGuess > secretNumber)
    {
        cout << "Your guess is too high.\n\n" << endl;
    }
    else if(userGuess < secretNumber)
    {
        cout << "Your guess is too low.\n" << endl;
    }
    else
    {
        cout << "Try again!\n" << endl;
    }
}

int main()
{
    char playAgain;
    do
    {
        GuessingGame game;	
        char choice;
        int tries;
        
        do
        {
            game.displayWelcomeMessage();	
            game.takeGuess();
            game.generateRandomNumber();
            game.playGame();
            
            if(log)
            {
                cout << "Your current score is: " << score << endl; 
                break;
            }
            
            cout << "Do you want to continue guessing?\n"
                 << "y - (YES)\n"
                 << "n - (NO)\n" << endl;
            cin >> choice;
            
        } while(choice != 'n' && choice != 'y');
        
        if(choice == 'y')
        {
            cout << "\nHow many tries do you want? ";
            cin >> tries;
            
            for(int i = 0; i < tries; i++)
            {
                cout << "Guess again:\n";
                game.takeGuess();
                game.playGame();
                
                if(log)
                {
                    cout << "Your current score is: " << score << endl << endl; 
                    cout << "Correct guess!" << endl;
                    break;
                }
            }
            
            cout << "\nYou've used up all your chances!\n" << endl;
            cout << "The secret number was: " << game.getSecretNumber() << endl;
        }
        
        if(choice == 'n')
        {
            // Do nothing
        }
        
        cout << "\nDo you want to continue playing?\n"
             << "y - (YES)\n"
             << "n - (NO)\n" << endl;
        cin >> playAgain;
        system("cls");
    } while(playAgain != 'n');
    
    if(playAgain == 'n')
    {
        	cout<<"_______________________________________________________________________________________________________________________\n";
		cout<<"You Have completed the game with: "<<score<<" Score"<<endl<<endl;
		cout<<"-----Thank you for playing the game-----"<<endl;
		//cout<<"\n\nGood Bye!"<<endl;
			cout<<"_______________________________________________________________________________________________________________________\n";
	}
    
}

