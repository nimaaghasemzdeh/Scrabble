/*Cs50x Iran 1400-2021
    Week 2, Lab No2 : scrabble.c*/
    

#include <cs50.h>
#include <stdio.h>


// All The Points Aligned To Each Letter Of The Alphabet
// All Points We Have Is 80
int ALLPOINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
// Var For Calculate And Save Each Player's Score
int calculate_point(string word);


int main(void)
{
    // Enter The Both Of The Player's Score For Result
    string word01 = get_string("Enter Player One's Score: ");
    string word02 = get_string("Enter Player Two's Score: ");

    // Alert's When We Have Winner, Player One Or Two
    int score1 = calculate_point(word01);
    int score2 = calculate_point(word02);

    // We Have Three Option, First Winner Is Player One. Second Winner Is Player Two.
    if (score1 > score2)
    
    
        printf("Player 1 wins!\n");
        
    else if (score1 < score2)
    
    
        printf("Player 2 wins!\n");
        
        
    // And Last And Third Option, Both Player's Have Same Score's
    else
    
    
        printf("Tie!\n");
}

// When We Enter The All Information About Score's Program Say Us What's The Result
int calculate_point(string word)
{
    int score = 0;
    for (int i = 0, x = strlen(word); i < x; i++)
        if (isalpha(word[i]))
        {
            word[i] = toupper(word[i]);
            score += ALLPOINTS[(int)word[i] - 65];
        }
    return score;
}


