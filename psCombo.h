#ifndef POLICECOMBODATA_H
#define POLICECOMBODATA_H

#include "raceDemogData.h"
#include "psData.h"
#include "regionData.h"
#include <memory>
#include <cassert>

using namespace std;

class Visitor;

class psCombo : public regionData  {
public:
    //write psCombo constructor
    psCombo(string inS, int inNumMI, int inFleeC, int inCase65, int inCase18, raceDemogData inRD, int inNumM, int inNumF, int inNumC): 
    regionData(inS,inS,inNumC), numMentalI(inNumMI), fleeCount(inFleeC), caseOver65(inCase65), caseUnder18(inCase18), numOfCases(inNumC),racialData(inRD),
    numMale(inNumM), numFemale(inNumF) {}
    //complete these
    //string getState() const {return state; } 
    int getNumMentalI() {return numMentalI;}
    int getFleeingCount() {return fleeCount;}
    int getCasesOver65() {return caseOver65;}
    int getCasesUnder18() {return caseUnder18;}
    raceDemogData getRacialData() {return racialData;}
    int getnumMales() {return numMale;}
    int getnumFemales() {return numFemale;}
    int getNumberOfCases() {return numOfCases;}
    friend std::ostream& operator<<(std::ostream &out, const psCombo& PD);

	void accept(class Visitor &v);
protected:
    //fill in
    //const string state;
    int numMentalI;
    int fleeCount;
    int caseOver65;
    int caseUnder18;
    raceDemogData racialData;
    int numMale;
    int numFemale;
    int numOfCases;
};

#endif
