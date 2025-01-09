#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void displayWord(const string& word, const vector<bool>& revealed) {
    for (size_t i = 0; i < word.size(); ++i) {
        if (revealed[i]) {
            cout << word[i] << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

bool isWordRevealed(const vector<bool>& revealed) {
    return all_of(revealed.begin(), revealed.end(), [](bool b) { return b; });
}

int main() {
    string word = "programming"; // The word to guess
    vector<bool> revealed(word.size(), false); // Tracks which letters are revealed
    int maxAttempts = 6; // Maximum number of incorrect guesses allowed
    int attemptsLeft = maxAttempts;

    cout << "Welcome to the Word Guessing Game!\n";
    cout << "You need to guess the word. Good luck!\n";

    while (attemptsLeft > 0) {
        cout << "\nCurrent word: ";
        displayWord(word, revealed);
        cout << "Attempts left: " << attemptsLeft << "\n";
        cout << "Guess a letter: ";
        char guess;
        cin >> guess;

        // Check if the guessed letter is in the word
        bool correctGuess = false;
        for (size_t i = 0; i < word.size(); ++i) {
            if (word[i] == guess && !revealed[i]) {
                revealed[i] = true;
                correctGuess = true;
            }
        }

        if (correctGuess) {
            cout << "Good guess!\n";
        } else {
            cout << "Incorrect guess. Try again.\n";
            --attemptsLeft;
        }

        // Check if the word is completely guessed
        if (isWordRevealed(revealed)) {
            cout << "\nCongratulations! You guessed the word: " << word << "\n";
            return 0;
        }
    }
    cout << "\nYou ran out of attempts! The word was: " << word << "\n";
    return 0;
}