#include <string>
#include <vector>
#include <match.h>
#include <utility>

template <typename T>
class named
{
public:
    std::string time;
    T value;
};

class player
{
    public: 
    std::string name;
    std::string rival;
    std::string desc;
    std::string grip;
    std::string style;
    int ELO;

    std::vector<named<match>> playedAgainst;
    
void updateElo();
void updatePlayedAgainst();
void updateRival();

};

