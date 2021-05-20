#ifndef COMBODEMOG_H
#define COMBODEMOG_H

#include <memory>
#include <string>
#include <iostream>
#include "demogData.h"
#include "raceDemogData.h"

/*
  class to represent combined demographic data 
*/
class demogCombo : public demogData {
  public:
        //write demogCombo constructor
        demogCombo(string inS, double in65, double in18, double in5, double totPopBAup, double totPopHSup, double poverty,int totPop14, int cnt, raceDemogData inRDS):demogData("comboData",inS,in65,in18,in5,totPopBAup,
	totPopHSup,poverty,totPop14,inRDS),countNum(cnt){}
/*
	int getpopOver65() const { return over65Count;}
        int getpopUnder18() const { return under18Count; }
        int getpopUnder5() const { return under5Count; }
        int getBAup() const { return BDhigherCount; }
        int getHSup() const { return HShigherCount; }
        int getPoverty() const { return povertyCount; }
*/
	int getCountNum(){return countNum;}

  friend std::ostream& operator<<(std::ostream &out, const demogCombo &SD);

private:
    //fill in
    /*
    int over65Count;
    int under18Count;
    int under5Count;
    int BDhigherCount;
    int HShigherCount;
    int povertyCount;	*/
    int countNum;
};
#endif
