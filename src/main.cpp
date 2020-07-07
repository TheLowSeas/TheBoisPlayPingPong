
#include <readIn.h>
#include <writeOut.h>


int main()
{
std::vector<player> playerList;
std::vector<match> matchList;
std::vector<match> newGamesPlayed;

PopulatePlayers(playerList, "players.csv");
PopulateMatches(matchList, "matches.csv");
//PopulateMatches(newGamesPlayed, "newMatches.csv");

// for( auto o : playerList)
// {
//     o.updateElo(newGamesPlayed);
//     o.updatePlayedAgainst(newGamesPlayed);
//     o.updateRival();
// }

// UpdateMatchList(matchList, newGamesPlayed);

// WriteMatchList(matchList);
// WritePlayerList(playerList)



return 0;
}