#include<iostream>
using namespace std;
class GuessGame{
    int birth_d;
    int answer=0;
    public:
    GuessGame(int birthDate):birth_d(birthDate){}

    void startGame(){
        int answer=0;
        do{
            cout<<"Let's make Guess again!!\n";
            int guess;
            cin>>guess;
            if(guess==birth_d){
                answer=1;
                cout<<"Correct Guess\n";
            }else{
                cout<<"Incorrect Guess\n";
            }

        }while(answer==0);
    }

};

int main(){
    int birth_d;
    cin>>birth_d;
    GuessGame guess=GuessGame(birth_d);
    guess.startGame();
    return 0;
}