//
//  Name: Yuya Oguchi
//  COEN 70
//  Chapter 6, Project 8
//  2/10/2016
//  giftlist class
//  has list of person where each person has list of gift ideas
#include <iostream>
#include <vector>
#include "giftlist.h"
using namespace std;

void GiftList::add(string name,string wish){
    cout << "name: " << name << ", wish: " << wish << endl;
    int addloc = list.size();
    bool namefound = false;
    int i;
    for (i=0; i < list.size(); i++){
        if (list[i].name == name){
            addloc = i;
            namefound = true;
            break;
        }
    }
    if (namefound == false){
        person p(name, wish);
        list.push_back(p);
    }else{
        list[i].ideas.push_back(wish);
    }
}

void GiftList::remove(string name){
    int deleteloc = -1;
    int i;
    for (i=0; i < list.size(); i++){
        if (list[i].name == name){
            deleteloc = i;
        }
    }
    if (deleteloc != -1){
        list.erase(list.begin()+i);
    }
}

void GiftList::print(){
    for(vector<person>::iterator person=list.begin(); person!=list.end(); person++){
        cout << person->name << ":" << endl;
        for(vector<string>::iterator wish = person->ideas.begin(); wish!= person->ideas.end(); wish++){
            cout << *wish << endl;
        }
        cout << endl;
    }
}

int main()
{
    GiftList gifts;
    gifts.add("Rowan", "car");
    gifts.add("Rowan", "house");
    gifts.add("Rowan", "microwave");
    gifts.add("Yuya", "games");
    gifts.add("Billy", "games");
    gifts.add("Derrick", "games");
    gifts.print();
    return 0;
}
