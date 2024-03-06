#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string ascii_letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

char retrieve_letter(){
    srand(time(NULL));
    int random_letter = rand() % ascii_letters.length();
    return ascii_letters[random_letter];
}

int main(){

cout << "Welcome to the Random Username Generator! \n You'll be asked a few questions and your new password will be created in no time! \n";

cout << "Enter the first word of your username";
string first_input;
cin >> first_input;

cout << "Enter the second word of your username";
string second_input;
cin >> second_input;

cout << "What additional characters would you like to include to your username?\n"
        << "Choose the following options : \n"
        <<" 1. Numbers \t" 
        <<"2.Letters \t"
        << "3.Special Characters \t "
        << "4. Done ";

cout << "What is the additional username length?";
 string remaining_length;
 cin >> remaining_length;

string user_input = first_input + second_input;
 string characterList = "";


 while(true){
cout << "pick an option";
int choice;
cin >> choice;
if (choice == 1){
    // for (i = 0, i < ascii_letters, i++)
    // {
    //     // rand(i)
    // }
    characterList += ;
} else if(choice == 2){

}


 }
        
    return 0;
}