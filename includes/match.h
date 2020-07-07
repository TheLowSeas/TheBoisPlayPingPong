#include <string>
#include <vector>
class game
{
    public:
    int score1;
    int score2;
};

class match
{
    public:

    std::string player1;
    std::string player2;

    int score1;
    int score2;

    int gameCount;

    std::vector<game> games;

    std::string date;
    
};