
#include <fstream>
#include <vector>

#include <player.h>
//#include <match.h>

//looks for a file named "SourceData" and parses cvs first line is player count , game count
// followed by n rows of players then n rows of games


//(playerCount)3
//(p1)Name , rival , description , grip , playeStyle , elo,
//(p2)Name , rival , description , grip , playeStyle , elo,
//(p3)Name , rival , description , grip , playeStyle , elo,



//(GameCount)4
//(g1)player1 Name, player2 Name ,date ,number of matches, N1Score1, N1Score2, ...


void PopulatePlayers(std::vector<player> &players, std::string fname);
void PopulateMatches(std::vector<match> &matches, std::string fname);
