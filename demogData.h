#ifndef DEMOG_H
#define DEMOG_H

#include <string>
#include<iostream>
#include<cmath>
#include"raceDemogData.h"
#include"regionData.h"
using namespace std;

class Visitor;
/*
  class to represent county demographic data
  from CORGIS - LAB01 starter - replace with your FULL version!
*/
class demogData : public regionData {
  public:
    demogData(string inN, string inS, double in65, double in18,
        double in5, double bd, double hs, double pov, int totPop14,
	raceDemogData RD) :
            regionData(inN,inS,totPop14), popOver65(in65), popUnder18(in18),
            popUnder5(in5),BDhigher(bd), HShigher(hs), poverty(pov),
	    racialData(RD) {}
	
	
	double getpopOver65() const {return popOver65;}
        double getpopUnder18() const {return popUnder18;}
        double getpopUnder5() const {return popUnder5;}
   
        double getBAup() const {return BDhigher;}
        double getHSup() const {return HShigher;}

	double getPovPercent() const{return poverty;}
	double getBelowPoverty() const{
		int tmp = round(poverty*population/100.0);
		return(100.0*tmp/population);
	}

	int povertyCount() const{return round(poverty*population/100);}
        int getpopOver65Count() const {return round(popOver65*population/100);}
        int getpopUnder18Count() const {return round(popUnder18*population/100);}
        int getpopUnder5Count() const {return round(popUnder5*population/100);}
        int getBAupCount() const {return round(BDhigher*population/100);}
        int getHSupCount() const {return round(HShigher*population/100);}
	raceDemogData getRaceData() {return racialData;}
	
        friend std::ostream& operator<<(std::ostream &out, const demogData &DD);

	void accept(class Visitor &v);
	protected:
    //const string name;
    //const string state;
        const double popOver65;
        const double popUnder18;
        const double popUnder5;
	const double BDhigher;
	const double HShigher;
	const double poverty;
	raceDemogData racialData;
    //const int totalPopulation2014;
	
	
	
};
#endif
