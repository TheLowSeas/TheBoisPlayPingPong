
#include <readIn.h>
#include <iostream>



void PopulatePlayers(std::vector<player> &players, std::string fname)
{
    int playerCount = 0;

    std::fstream fin;
    fin.open(fname.c_str());

    fin >> playerCount;
    fin.ignore(1000, '\n');
    std::cout << playerCount <<std::endl;

    player p;
 for( int i = 0; i < playerCount; i++)
 {
    std::getline(fin,p.name, ',');
    std::getline(fin,p.rival, ',');
    std::getline(fin,p.desc, ',');
    std::getline(fin,p.grip, ',');
    std::getline(fin,p.style, ',');
    fin >> p.ELO;
    fin.ignore(1000, '\n');
    players.push_back(p);
 }


fin.close();
}

void PopulateMatches(std::vector<match> &matches, std::string fname)
{
    int matchCount = 0;
    
    match g;
    

    std::fstream fin;
    fin.open(fname.c_str());

    fin >> matchCount;
    fin.ignore(1000, '\n');
    std::cout << matchCount <<std::endl;
    

   for( int i = 0; i < matchCount; i++)
 {
      g.score1 = 0;
      g.score2 = 0;

     std::getline(fin,g.player1, ',');
     std::getline(fin,g.player2, ',');


     std::getline(fin,g.date, ',');

     fin >> g.gameCount;
     fin.ignore(1000, ',');

     g.games.resize(g.gameCount);

     for(auto &o : g.games)
     {
        
     fin >> o.score1;
     fin.ignore(1000, ',');

     fin >> o.score2;
     fin.ignore(1000, ',');

     if(o.score1 > o.score2)
     {
        g.score1++;

     }
     else
     {
        g.score2++;
     }
     }
     matches.push_back(g);
 }

 for( auto o : matches)
 {
    std::cout << o.player1 << "    " << o.player2 << std::endl;
    std::cout << o.score1 << "       " << o.score2 << std::endl;
    for(auto i : o.games)
    {
       std::cout << i.score1 << "       " << i.score2 << std::endl;
    }
 }
 fin.close();
}


