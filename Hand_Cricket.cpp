#include <iostream>
#include <conio.h>
#include <stdlib.h>
int calc(char[],char[]);
char name1[50];
char name2[50];
char name3[50];
char name4[50];
int bow=0;
int bat=0;
int Team_A=0;
int Team_B=0;
int main()
{
    system ("CLS");
    std::cout<<"\t\t--------------------------------------------\n";
    std::cout<<"\t\t--------------------------------------------\n";
    std::cout<<"\t\t\t\tHand Cricket\t\n";
    std::cout<<"\t\t--------------------------------------------\n";
    std::cout<<"\t\t--------------------------------------------\n";
    std::cout<<" Description:\n\n\t Hand Cricket game is a two-team gameplay, where two players will be \n\n playing in each team, One will be bowler and another will be batsmen.\n \n";
    std::cout<<"\t\t--------------------------------------------\n";
    std::cout<<"\t\t--------------------------------------------\n\n";
    std::cout<<" Enter the Name of the Bowler from Team A\n\n ";
    std::cin.getline(name1,50);
    std::cout<<"\n";
    std::cout<<" Enter the Name of the Batsmen from Team A\n\n ";
    std::cin.getline(name2,50);
    std::cout<<"\n";
    std::cout<<" Enter the Name of the Bowler from Team B\n\n ";
    std::cin.getline(name3,50);
    std::cout<<"\n";
    std::cout<<" Enter the Name of the Batsmen from Team B\n\n ";
    std::cin.getline(name4,50);
    std::cout<<"\n";
    system ("CLS");
    std::cout<<" Let's Play\n\n";
    Team_A=calc(name1,name4);
    std::cout<<" Target from Team A is "<<Team_A;
    std::cout<<"\n\n Team B :\n ";
    Team_B=calc(name3,name2);
    if(Team_A==Team_B)
    {

        std::cout<<" Match is TIE!!!.\n\n";
    }
    else{
            if(Team_A>Team_B)
            {
                system ("CLS");
                std::cout<<" \n\n\n\n  Congratulations, Team A Won the Match!!!. \n\n\n\n\n ";
                std::cout<<"\t\t--------------------------------------------\n";
                std::cout<<"\t\t--------------------------------------------\n";
                std::cout<<"\t\t\t\tTeam_Name    Score\n";
                std::cout<<"\t\t\t\t  Team A      "<<Team_A;
                std::cout<<"\n";
                std::cout<<"\t\t\t\t  Team B      "<<Team_B;
                std::cout<<"\n";
                std::cout<<"\t\t--------------------------------------------\n";
                std::cout<<"\t\t--------------------------------------------\n";

            }
            else
            {
                system ("CLS");
                std::cout<<" \n\n\n\n  Congratulations, Team B Won the Match!!!. \n\n\n\n\n ";
                std::cout<<"\t\t--------------------------------------------\n";
                std::cout<<"\t\t--------------------------------------------\n";
                std::cout<<"\t\t\t\tTeam_Name    Score\n";
                std::cout<<"\t\t\t\t  Team A      "<<Team_A;
                std::cout<<"\n";
                std::cout<<"\t\t\t\t  Team B      "<<Team_B;
                std::cout<<"\n";
                std::cout<<"\t\t--------------------------------------------\n";
                std::cout<<"\t\t--------------------------------------------\n";
            }

        }
    getch();
    return 0;
}
int calc(char name1[],char name2[])
{
int sum=0;
for(int i=0;;i++)
    {
        x:std::cout<<" \n Bowler : Enter a number "<<name1;
        std::cout<<"\n\n ";
        std::cin>>bow;
        std::cout<<"\n";
        if(!(bow>=0 && bow<=6)){
            std::cout<<" Please Enter a valid number between 0-6\n\n Let's Give Another Try\n\n";
            goto x;
            }
        system ("CLS");
        y:std::cout<<" \n Batsmen : Enter a number "<<name2;
        std::cout<<"\n\n ";
        std::cin>>bat;
        std::cout<<"\n";
        if(!(bat>=0 && bat<=6)){
             std::cout<<" Please Enter a valid number between 0-6\n\n Let's Give Another Try\n\n";
            goto y;
            }
        system ("CLS");
        if(bat==bow){
        std::cout<<"\n\n "<<name2<<" is OUT!!!.\n\n";
        std::cout<<"\n";
            break;
        }
        else
        {
            sum+=bat;
        }
    }
    return sum;
}
