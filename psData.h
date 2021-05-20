#ifndef POLICE_H
#define POLICE_H

#include <string>
#include <iostream>
#include <utility>
#include "regionData.h"
using namespace std;

class Visitor;
/*
  class to represent police shooting data
  from CORGIS
*/
class psData : public regionData {
  public:
	psData(string inState, string inName, int inAge, string inGender, string inRace, string inIllness, string inFlee) : regionData(inState,inState,1),
    state(inState), name(inName), age(inAge), gender(inGender), race(inRace), illness(inIllness), flee(inFlee) {}
    //add appropriate function paramaters to constructor once you add data

    string getState() const { return state; }
    //add getters
    string getName() const {return name;}
    int getAge() const {return age;}
    string getGender()const {return gender;}
    string getRace() const {return race;}
    string getIllness() const {return illness;}
    string getFlee() const {return flee;}

   friend std::ostream& operator<<(std::ostream &out, const psData &PD);

	void accept(class Visitor &v);
private:
	
    const string state;
    //add others
    string name;
    int age;
    string gender;
    string race;
    string illness;
    string flee;

};

#endif
