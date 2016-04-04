#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>
#include<conio.h>
  using namespace std;
int main()
{
string user, comp,playagain;
int compforrandom;
do
{
int usercount=0,compcount=0;
(system("CLS"));
    for (int i(1); i<4;i++)
    {
       cout<<endl;
cout<<"--------ROUND "<<i<<"--------"<<endl;
cout << "Enter rock or paper or scissors"<<endl;
cin>>user;
cout<<"Computer choise a ";
srand(time(NULL));
compforrandom= rand() % 3 +1;
switch(compforrandom)
{
case 1: comp="rock"; break;
case 2: comp="paper";break;
case 3: comp="scissors";break;
}
cout<<comp<<endl;

if ( (user=="rock") || (user=="Rock"))
{
switch(compforrandom)
  {
case 1: cout<<"rock=rock:), play again";break;
case 2: cout<<"you lose :("; compcount++; break;
case 3: cout<<"you win :)";  usercount++;break;
  }
}

if ( (user=="paper") || (user=="Paper"))
{
switch(compforrandom)
  {
case 1: cout<<"you win :)"; usercount++; break;
case 2: cout<<"paper=paper :) play again";break;
case 3: cout<<"you lose :("; compcount++;break;
  }
}

if ((user=="scissors") ||  (user=="Scissors"))
{
switch(compforrandom)
  {
case 1: cout<<"you lose :("; compcount++; ;break;
case 2: cout<<"you win :)"; usercount++; ;break;
case 3: cout<<"scissors=scissors :) play again";break;
  }
}
cout<<endl<<"score: "<<usercount<<":"<<compcount<<endl;
    }
cout<<endl;
if (usercount>compcount)
cout<<"Great game!"<<endl;
if (usercount<compcount)
cout<<"Bad, bad game"<<endl;
else cout<<"try more)"<<endl;
cout<<"play again? Enter 'yes or 'no' "<<endl;
cin>>playagain;
}
while (playagain!="no");
cout<<"Bye";
}
