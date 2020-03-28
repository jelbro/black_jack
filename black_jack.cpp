#include "iostream"
#include "vector"
#include "cstdlib"
#include "ctime"
#include "numeric"
#include "rules.h"
using namespace std;








    int main()
    {
        srand(time(NULL));
        game();
        while (play_again() == true)
        {
            cout << string(100, '\n');
            game();
        } 
        return 0;

    }

        

        
        /*
        if (accumulate(player_hand.begin(), player_hand.end(), 0) == 21)
        {
            cout << "21!!!!\n";
            cpu_hand.push_back(give_card());
            cpu_hand.push_back(give_card());
            for (int i = 0; i < cpu_hand.size(); i++)
            {
                cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

            }
            cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
            if ((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) < (accumulate(player_hand.begin(), player_hand.end(), 0)))
            {
                cpu_hand.push_back(give_card());
                for (int i = 0; i < cpu_hand.size(); i++)
                {
                    cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                }
                cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
                {
                    cout << "Computer Bust! You Win!\n";
                    cout << "Would you like to play again?(y or n)\n";
                    cin >> reset;
                    if (reset == 'y')
                    {
                        cout << string(50, '\n');
                        continue;
                    }
                    else if (reset == 'n')
                    {
                        break;
                    }

                }
                if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
                {
                    cout << "Computer got 21! You lose!\n";
                    cout << "Would you like to play again?(y or n)\n";
                    cin >> reset;
                    if (reset == 'y')
                    {
                        cout << string(50, '\n');
                        continue;
                    }
                    else if (reset == 'n')
                    {
                        break;
                    }

                }
                if ((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) < (accumulate(player_hand.begin(), player_hand.end(), 0)))
                {
                    cpu_hand.push_back(give_card());
                    for (int i = 0; i < cpu_hand.size(); i++)
                    {
                        cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                    }
                    if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
                    {
                        cout << "Computer Bust! You Win!\n";
                        cout << "Would you like to play again?(y or n)\n";
                        cin >> reset;
                        if (reset == 'y')
                        {
                            cout << string(50, '\n');
                            continue;
                        }
                        else if (reset == 'n')
                        {
                            break;
                        }

                    }
                    if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
                    {
                        cout << "Computer got 21! You lose!\n";
                        cout << "Would you like to play again?(y or n)\n";
                        cin >> reset;
                        if (reset == 'y')
                        {
                            cout << string(50, '\n');
                            continue;
                        }
                        else if (reset == 'n')
                        {
                            break;
                        }

                    }
                }
            }
        }
        else
        {
            cout << "Hit or stick?(h or s)\n";
            cin >> hit_stick;
            if ((hit_stick == 'h') || (hit_stick == 'H'))
            {
                player_hand.push_back(give_card());
                for (int i = 0; i < player_hand.size(); i++)
                {
                    cout << "Card " << i + 1 << " is " << player_hand[i] << "\n";


                }
                cout << "Your total is: " << accumulate(player_hand.begin(), player_hand.end(), 0) << "\n";
                if (accumulate(player_hand.begin(), player_hand.end(), 0) > 21)
                {
                    cout << "Bust!\n";
                    cout << "Would you like to play again?(y or n)\n";
                    cin >> reset;
                    if (reset == 'y')
                    {
                        cout << string(50, '\n');
                        continue;
                    }
                    else if (reset == 'n')
                    {
                        break;
                    }

                }
                if (accumulate(player_hand.begin(), player_hand.end(), 0) == 21)
                {
                    cout << "21!!!!\n";
                    cpu_hand.push_back(give_card());
                    cpu_hand.push_back(give_card());
                    for (int i = 0; i < cpu_hand.size(); i++)
                    {
                        cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                    }
                    cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                    if ((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) < (accumulate(player_hand.begin(), player_hand.end(), 0)))
                    {
                        cpu_hand.push_back(give_card());
                        for (int i = 0; i < cpu_hand.size(); i++)
                        {
                            cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                        }
                        cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                        if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
                        {
                            cout << "Computer Bust! You Win!\n";
                            cout << "Would you like to play again?(y or n)\n";
                            cin >> reset;
                            if (reset == 'y')
                            {
                                cout << string(50, '\n');
                                continue;
                            }
                            else if (reset == 'n')
                            {
                                break;
                            }

                        }
                        if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
                        {
                            cout << "Computer got 21! You lose!\n";
                            cout << "Would you like to play again?(y or n)\n";
                            cin >> reset;
                            if (reset == 'y')
                            {
                                cout << string(50, '\n');
                                continue;
                            }
                            else if (reset == 'n')
                            {
                                break;
                            }

                        }
                        if ((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) < (accumulate(player_hand.begin(), player_hand.end(), 0)))
                        {
                            cpu_hand.push_back(give_card());
                            for (int i = 0; i < cpu_hand.size(); i++)
                            {
                                cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                            }
                            cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                            if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
                            {
                                cout << "Computer Bust! You Win!\n";
                                cout << "Would you like to play again?(y or n)\n";
                                cin >> reset;
                                if (reset == 'y')
                                {
                                    cout << string(50, '\n');
                                    continue;
                                }
                                else if (reset == 'n')
                                {
                                    break;
                                }

                            }
                            if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
                            {
                                cout << "Computer got 21! You lose!\n";
                                cout << "Would you like to play again?(y or n)\n";
                                cin >> reset;
                                if (reset == 'y')
                                {
                                    cout << string(50, '\n');
                                    continue;
                                }
                                else if (reset == 'n')
                                {
                                    break;
                                }

                            }
                        }
                    }
                }
                else
                {
                    cout << "Hit or stick?(h or s)\n";
                    cin >> hit_stick;
                    if ((hit_stick == 'h') || (hit_stick == 'H'))
                    {
                        player_hand.push_back(give_card());
                        for (int i = 0; i < player_hand.size(); i++)
                        {
                            cout << "Card " << i + 1 << " is " << player_hand[i] << "\n";


                        }
                        cout << "Your total is: " << accumulate(player_hand.begin(), player_hand.end(), 0) << "\n";
                        if (accumulate(player_hand.begin(), player_hand.end(), 0) > 21)
                        {
                            cout << "Bust!\n";
                            cout << "Would you like to play again?(y or n)\n";
                            cin >> reset;
                            if (reset == 'y')
                            {
                                cout << string(50, '\n');
                                continue;
                            }
                            else if (reset == 'n')
                            {
                                break;
                            }

                        }
                        if (accumulate(player_hand.begin(), player_hand.end(), 0) == 21)
                        {
                            cout << "21!!!!\n";
                            cpu_hand.push_back(give_card());
                            cpu_hand.push_back(give_card());
                            for (int i = 0; i < cpu_hand.size(); i++)
                            {
                                cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                            }
                            cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                            if ((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) < (accumulate(player_hand.begin(), player_hand.end(), 0)))
                            {
                                cpu_hand.push_back(give_card());
                                for (int i = 0; i < cpu_hand.size(); i++)
                                {
                                    cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                                }
                                cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                                if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
                                {
                                    cout << "Computer Bust! You Win!\n";
                                    cout << "Would you like to play again?(y or n)\n";
                                    cin >> reset;
                                    if (reset == 'y')
                                    {
                                        cout << string(50, '\n');
                                        continue;
                                    }
                                    else if (reset == 'n')
                                    {
                                        break;
                                    }

                                }
                                if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
                                {
                                    cout << "Computer got 21! You lose!\n";
                                    cout << "Would you like to play again?(y or n)\n";
                                    cin >> reset;
                                    if (reset == 'y')
                                    {
                                        cout << string(50, '\n');
                                        continue;
                                    }
                                    else if (reset == 'n')
                                    {
                                        break;
                                    }

                                }
                                if ((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) < (accumulate(player_hand.begin(), player_hand.end(), 0)))
                                {
                                    cpu_hand.push_back(give_card());
                                    for (int i = 0; i < cpu_hand.size(); i++)
                                    {
                                        cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                                    }
                                    cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                                    if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
                                    {
                                        cout << "Computer Bust! You Win!\n";
                                        cout << "Would you like to play again?(y or n)\n";
                                        cin >> reset;
                                        if (reset == 'y')
                                        {
                                            cout << string(50, '\n');
                                            continue;
                                        }
                                        else if (reset == 'n')
                                        {
                                            break;
                                        }

                                    }
                                    if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
                                    {
                                        cout << "Computer got 21! You lose!\n";
                                        cout << "Would you like to play again?(y or n)\n";
                                        cin >> reset;
                                        if (reset == 'y')
                                        {
                                            cout << string(50, '\n');
                                            continue;
                                        }
                                        else if (reset == 'n')
                                        {
                                            break;
                                        }

                                    }
                                }
                            }
                        }
                    }
                    else if ((hit_stick == 's') || (hit_stick == 'S'))
                    {
                        cpu_hand.push_back(give_card());
                        cpu_hand.push_back(give_card());
                        for (int i = 0; i < cpu_hand.size(); i++)
                        {
                            cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                        }
                        cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                        if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) <= 16)
                        {
                            cpu_hand.push_back(give_card());
                            for (int i = 0; i < cpu_hand.size(); i++)
                            {
                                cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                            }
                            cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                            if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
                            {
                                cout << "Computer Bust! You Win!\n";
                                cout << "Would you like to play again?(y or n)\n";
                                cin >> reset;
                                if (reset == 'y')
                                {
                                    cout << string(50, '\n');
                                    continue;
                                }
                                else if (reset == 'n')
                                {
                                    break;
                                }

                            }
                            if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
                            {
                                cout << "Computer got 21! You lose!\n";
                                cout << "Would you like to play again?(y or n)\n";
                                cin >> reset;
                                if (reset == 'y')
                                {
                                    cout << string(50, '\n');
                                    continue;
                                }
                                else if (reset == 'n')
                                {
                                    break;
                                }

                            }
                            if ((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) < (accumulate(player_hand.begin(), player_hand.end(), 0)))
                            {
                                cpu_hand.push_back(give_card());
                                for (int i = 0; i < cpu_hand.size(); i++)
                                {
                                    cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                                }
                                cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                                if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
                                {
                                    cout << "Computer Bust! You Win!\n";
                                    cout << "Would you like to play again?(y or n)\n";
                                    cin >> reset;
                                    if (reset == 'y')
                                    {
                                        cout << string(50, '\n');
                                        continue;
                                    }
                                    else if (reset == 'n')
                                    {
                                        break;
                                    }

                                }
                                if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
                                {
                                    cout << "Computer got 21! You lose!\n";
                                    cout << "Would you like to play again?(y or n)\n";
                                    cin >> reset;
                                    if (reset == 'y')
                                    {
                                        cout << string(50, '\n');
                                        continue;
                                    }
                                    else if (reset == 'n')
                                    {
                                        break;
                                    }

                                }
                            }
                            else if ((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) < 21)
                            {
                                cpu_hand.push_back(give_card());
                                for (int i = 0; i < cpu_hand.size(); i++)
                                {
                                    cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                                }
                                cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                                if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
                                {
                                    cout << "Computer Bust! You Win!\n";
                                    cout << "Would you like to play again?(y or n)\n";
                                    cin >> reset;
                                    if (reset == 'y')
                                    {
                                        cout << string(50, '\n');
                                        continue;
                                    }
                                    else if (reset == 'n')
                                    {
                                        break;
                                    }

                                }
                                if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
                                {
                                    cout << "Computer got 21! You lose!\n";
                                    cout << "Would you like to play again?(y or n)\n";
                                    cin >> reset;
                                    if (reset == 'y')
                                    {
                                        cout << string(50, '\n');
                                        continue;
                                    }
                                    else if (reset == 'n')
                                    {
                                        break;
                                    }


                                }
                            }
                        }
                    }
                }
            }
            
            else if ((hit_stick == 's') || (hit_stick == 'S'))
            {
                cpu_hand.push_back(give_card());
                cpu_hand.push_back(give_card());
                for (int i = 0; i < cpu_hand.size(); i++)
                {
                    cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                }
                cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) <= 16)
                {
                    cpu_hand.push_back(give_card());
                    for (int i = 0; i < cpu_hand.size(); i++)
                    {
                        cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                    }
                    cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                    if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
                    {
                        cout << "Computer Bust! You Win!\n";
                        cout << "Would you like to play again?(y or n)\n";
                        cin >> reset;
                        if (reset == 'y')
                        {
                            cout << string(50, '\n');
                            continue;
                        }
                        else if (reset == 'n')
                        {
                            break;
                        }

                    }
                    if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
                    {
                        cout << "Computer got 21! You lose!\n";
                        cout << "Would you like to play again?(y or n)\n";
                        cin >> reset;
                        if (reset == 'y')
                        {
                            cout << string(50, '\n');
                            continue;
                        }
                        else if (reset == 'n')
                        {
                            break;
                        }

                    }
                    if ((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) < (accumulate(player_hand.begin(), player_hand.end(), 0)))
                    {
                        cpu_hand.push_back(give_card());
                        for (int i = 0; i < cpu_hand.size(); i++)
                        {
                            cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                        }
                        cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                        if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
                        {
                            cout << "Computer Bust! You Win!\n";
                            cout << "Would you like to play again?(y or n)\n";
                            cin >> reset;
                            if (reset == 'y')
                            {
                                cout << string(50, '\n');
                                continue;
                            }
                            else if (reset == 'n')
                            {
                                break;
                            }

                        }
                        if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
                        {
                            cout << "Computer got 21! You lose!\n";
                            cout << "Would you like to play again?(y or n)\n";
                            cin >> reset;
                            if (reset == 'y')
                            {
                                cout << string(50, '\n');
                                continue;
                            }
                            else if (reset == 'n')
                            {
                                break;
                            }

                        }
                    }
                    else if ((accumulate(cpu_hand.begin(), cpu_hand.end(), 0)) < 21)
                    {
                        cpu_hand.push_back(give_card());
                        for (int i = 0; i < cpu_hand.size(); i++)
                        {
                            cout << "Computer card " << i + 1 << " is " << cpu_hand[i] << "\n";

                        }
                        cout << "Computer total is: " << accumulate(cpu_hand.begin(), cpu_hand.end(), 0) << "\n";
                        if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) > 21)
                        {
                            cout << "Computer Bust! You Win!\n";
                            cout << "Would you like to play again?(y or n)\n";
                            cin >> reset;
                            if (reset == 'y')
                            {
                                cout << string(50, '\n');
                                continue;
                            }
                            else if (reset == 'n')
                            {
                                break;
                            }

                        }
                        if (accumulate(cpu_hand.begin(), cpu_hand.end(), 0) == 21)
                        {
                            cout << "Computer got 21! You lose!\n";
                            cout << "Would you like to play again?(y or n)\n";
                            cin >> reset;
                            if (reset == 'y')
                            {
                                cout << string(50, '\n');
                                continue;
                            }
                            else if (reset == 'n')
                            {
                                break;
                            }
                            

                        }
                    }
                }
            }
        }
    }
    return 0;
}
*/



