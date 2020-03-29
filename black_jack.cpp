#include "iostream"
#include "vector"
#include "cstdlib"
#include "ctime"
#include "numeric"
using namespace std;

int random_card() // generate a random card between 1-13
{
    int rand_numb = (rand() % 13) + 1;
    return rand_numb;
}

vector<int> give_card(vector<int> hand)
// put random card into hand
{
    hand.push_back(random_card());
    return hand;
}

void clear_hands(vector<int> &player_hand, vector<int> &cpu_hand)
//clear both player and cpu hand's before new game
{
    player_hand.clear();
    cpu_hand.clear();
}

vector<int> init_hand(vector<int> hand)
//give player initial 2 cards
{
    hand = give_card(hand);
    hand = give_card(hand);
    return hand;
}

int score_hand(vector<int> hand)
{
    return accumulate(hand.begin(), hand.end(), 0);
}

void display_hand(vector<int> hand, string whomst)
//display each card given to player and total of them
{
    for (int i = 0; i < hand.size(); i++) {
        cout << whomst  << " card " << i + 1 << " is: " << hand[i] << "\n";
    }

  cout << whomst << " total is: " << score_hand(hand) << "\n";
}

bool bust(vector<int> hand, string whomst)
//determine whether someone has gone bust
{
    if (score_hand(hand) > 21) {
        cout << whomst << " bust!\n";
        return true;
    } else {
        return false;
    }
}

bool player_winning(vector<int> cpu_hand, vector<int> player_hand)
{
    int cpu_score = score_hand(cpu_hand);
    int player_score = score_hand(player_hand);
  
    if (cpu_score < player_score) {
        return true;
    } else {
        return false;
    }
}

bool blackjack(vector<int> hand, string whomst)
// determine if someone has blackjack
{
    if (score_hand(hand) == 21) {
        cout << whomst << " got Blackjack!!!\n";
        return true;
    } else
        return false;
}

vector<int> cpu_turn(vector<int> player_hand, vector<int> cpu_hand) //play the cpu's turn
{
    cpu_hand = init_hand(cpu_hand);
    display_hand(cpu_hand, "Dealer");
    
    if (bust(cpu_hand, "Dealer")) {
        return cpu_hand;
    }

    if (blackjack(cpu_hand, "Dealer")) {
        return cpu_hand;
    }
    
    while (player_winning(cpu_hand, player_hand)) {
        cpu_hand = give_card(cpu_hand);
        display_hand(cpu_hand, "Dealer");
        if (bust(cpu_hand, "Dealer")) {
            return cpu_hand;
        }
    
        if (blackjack(cpu_hand, "Dealer")) {
	        return cpu_hand;
        }
    }

  return cpu_hand;
}

bool player_win(vector<int> player_hand, vector<int> cpu_hand)
// determine whether the player has won or lost
// return true if the player won; false if the player lost
{
    int player_score = score_hand(player_hand);
    int cpu_score = score_hand(cpu_hand);

    if (player_score > 21) {
        return false; // from now on we know the player isn't bust
    } else if (cpu_score > 21) {
        return true; // if you're not bust but the dealer is, you win
    } else if (cpu_score >= player_score) {
        return false; // dealer beats equals
    } else
        return true; // no other scenarios, you've won
}

bool hit_stick(vector<int> &hand)
// asks the player to hit or stick
// returns true if the cpu goes next
{
    char h_s = 'h';
    cout << "Hit or stick? (h or s)\n";
    cin >> h_s; // YOU'LL WANT TO DO SOME ERROR CHECKING HERE:
	            // WHAT IF THEY TYPE f OR SOMETHING
    if (h_s == 'h') {
        //if they hit give them a card and display it
        hand = give_card(hand);
        display_hand(hand, "Player");
        return false;
    }
  
    else if (h_s == 's') {
        return true; // if they stick, return to play the cpu's turn
    }  
}

void determine_winner(vector<int> player_hand, vector<int> cpu_hand)
{
    bool player_won = player_win(player_hand, cpu_hand);
  
    if (player_won) {
        cout << "You win!\n";
    } else {
        cout << "You lose!\n";
    }			      
}

void game(vector<int> player_hand, vector<int> cpu_hand)
{
    clear_hands(player_hand, cpu_hand);
    player_hand = init_hand(player_hand);
    display_hand(player_hand, "Player");

    if (bust(player_hand, "Player")) {
        return;
    }

    if (blackjack(player_hand, "Player")) {
        cpu_hand = cpu_turn(player_hand, cpu_hand);
        determine_winner(player_hand, cpu_hand);
        return;
    }

    while (not bust(player_hand, "Player") && not blackjack(player_hand, "Player")) {
        bool cpu_turn_bool = hit_stick(player_hand);

        if (cpu_turn_bool) {
            cpu_hand = cpu_turn(player_hand, cpu_hand);
            determine_winner(player_hand, cpu_hand);
            return;
        }
    }

    if (score_hand(player_hand) <= 21) {
        cpu_hand = cpu_turn(player_hand, cpu_hand);
        determine_winner(player_hand, cpu_hand);
        return;
    }
}

bool play_again()
{
    char y_n = 'y';
    cout << "Would you like to play again? (y/n)\n";
    while(cin >> y_n) {
        if (y_n == 'y') {
        return true;
        } else if (y_n == 'n') {
            return false;
        } else {
            cout << "Invalid input. (y/n)\n";
        }
    } 
}

int main()
{
    srand(time(NULL));
    vector <int> player_hand;
    vector <int> cpu_hand;

    bool play_again_bool = true;

    while (play_again_bool) {
        cout << string(100, '\n');
        game(player_hand, cpu_hand);
        play_again_bool = play_again();
    } 
    
    return 0;  
}
