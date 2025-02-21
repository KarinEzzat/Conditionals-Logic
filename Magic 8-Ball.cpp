  #include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
int main()
 {srand(time(NULL));
 string v;
     //string l="Exit";
 string reponses[]={
    "Yes",
    "No",
    "Maybe",
    "Ask again later",
    "Outlook not so good",
    "Definitely",
    "Cannot predict now",
    "It is certain",
    "Without a doubt",
    "Most likely",
    "Signs point to yes",
    "Don't count on it",
    "My reply is no",
    "My sources say no",
    "Very doubtful"
};
int size=sizeof(reponses)/sizeof(reponses[0]);
while(true){
    cout<<"Ask the Magic 8-Ball a question (or type 'quit' to exit):"<<endl;
getline(cin,v);
if(v=="exit"||v=="quit"||v=="q"||v=="Exit"){
      cout<<"Thanks for playing with the Magic 8-Ball!"<<endl;
      break;
}
 else {
     int index=rand()%size;
      cout<<"Magic 8-Ball says: "<<reponses[index]<<endl;
 }
 }}