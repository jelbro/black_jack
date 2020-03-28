#include "iostream"
#include "vector"
#include "cstdlib"
#include "ctime"
#include "numeric"
using namespace std;

vector <int> player_hand;
vector <int> cpu_hand;

int random_card() //generate a random card between 1-13
{
    int rand_numb = (rand() % 13) + 1;
    return rand_numb;
}

void give_card() //put random card into players hand
{
    player_hand.push_back(random_card());
}

void clear_hands() //clear both player and cpu hand's before new game
{
    player_hand.clear();
    cpu_hand.clear();
}

void init_hand() //give player initial 2 cards
{
    player_hand.push_back(random_card());
    player_hand.push_back(random_card());
}

void display_hand() //display each card given to player and total of them
{
    for (int i = 0; i < player_hand.size(); i++)
    {
        cout << "Card " << i + 1 << " is: " << player_hand[i] << "\n";


    }
    cout << "Your total is: " << accumulate(player_hand.begin(), player_hand.end(), 0) << "\n";
}

bool p_bust() //determine wether the player has gone bust
{
    if (accumulate(player_hand.begin(), player_hand.end(), 0) > 21)
    {
        cout << "Bust!\n";
        return true;
    }
    else
    {
        return false;
    }
}

void cpuinit_hand() //give cpu initial 2 cards
{
    cpu_hand.push_back(random_card());
    cpu_hand.push_back(random_card());
}

void cpudisplay_hand() //display each card given to cpu and total of them
{
    for (int i = 0; i < cpu_hand.size(); i++)
    {
        cout << "Computer Card " << i + 1 << " is: " << cpu_hand[i] << "\n";


    }
    cout << "Computer's total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
}

bool cpu_bust() //determine if the cpu has gone bust
{
    if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
    {
        cout << "Computer Bust!\n";
        return true;
    }
    else
    {
        return false;
    }
}

bool cpu_blackjack() //determine if the cpu has blackjack
{
    if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
    {
        cout << "Computer got Black Jack! You lose!\n";
        return true;
    }
    else
    {
        return false;
    }
}

bool player_winning() //determine if the player's hand is higher than the cpu's hand
{
    if ((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) < (accumulate(player_hand.begin(), player_hand.end(), 0)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void cpugive_card() //give the cpu a card
{
    cpu_hand.push_back(random_card());
}

int cpu_turn() //play the cpu's turn
{
    cpuinit_hand();
    cpudisplay_hand();
    if (cpu_bust() == true)
    {
        return 0;
    }
    if (cpu_blackjack() == true)
    {
        return 0;
    }
    while (player_winning() == true)
    {
        cpugive_card();
        cpudisplay_hand();
        if (cpu_bust() == true)
        {
            return 0;
        }
        if (cpu_blackjack() == true)
        {
            {
                return 0;
            }
        }
    }
}

bool p_blackjack() //determine if the player has blackjack
{
    if (accumulate(player_hand.begin(), player_hand.end(), 0) == 21)
    {
        cout << "Black Jack!!!\n";
        return true;
    }
    else
    {
        return false;
    }
}

bool play_again() //ask if the player would like to play again
{
    char y_n = 'y';
    cout << "Would you like to play again?(y or n)\n";
    cin >> y_n;
    while (cin >> y_n)
    {
        if ((y_n == 'y') || (y_n == 'Y'))
        {
            return true;
        }
        else if ((y_n == 'n') || (y_n == 'N'))
        {
            return false;
        }
        else
        {
            cout << "Invalid input.\n";
            play_again();
        }
    }

}

bool win_lose() //determine wether the player has won or lost
{
    if (((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) >= (accumulate(player_hand.begin(), player_hand.end(), 0))) && (cpu_bust() != true))
    {
        return true;
    }
    else if (((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) < (accumulate(player_hand.begin(), player_hand.end(), 0))) && (p_bust() != true))
    {
        return false;
    }
}

void hit_stick() //ask's the player to hit or stick
{
    char h_s = 'h';
    cout << "Hit or stick?(h or s)\n";
    cin >> h_s;
    if ((h_s == 'h') || (h_s == 'H')) //if they hit give them a card and display it
    {
        give_card();
        display_hand();

    }
    else if ((h_s == 's') || (h_s == 'S')) //if they stick play the cpu's turn and determine if they won or lost
    {
        cpu_turn();
        if (win_lose() == true)
        {
            cout << "You lose!\n";
            exit;
        }
        else if (win_lose() == false)
        {
            cout << "You win!\n";
            exit;
        }

    }
}

int game() //main sequence of the game
{
    clear_hands();
    init_hand();
    display_hand();
    if (p_bust() == true)
    {
        return 0;
    }
    if (p_blackjack() == true)
    {
        cpu_turn();
    }
    while ((p_bust() != true) && (p_blackjack() != true))
    {
        hit_stick();
    }
}
