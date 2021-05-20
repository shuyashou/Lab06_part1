/* aggregate data */
#include <set>
#include <string>
#include "dataAQ.h"
#include "demogData.h"
#include "psData.h"
#include <iostream>
#include <algorithm>
#include <iomanip>
#include "visitorReport.h"

dataAQ::dataAQ() {}

string makeKeyExample(shared_ptr<demogData> theData) {


  string theKey = "Key";


  if (theData->getBelowPoverty() < 10) {
    theKey += "BelowPovLessTenPer";
  } else if (theData->getBelowPoverty() < 20) {
    theKey += "BelowPovLessTwentyPer";
  } else if (theData->getBelowPoverty() < 30) {
    theKey += "BelowPovLessThirtyPer";
  } else {
    theKey += "BelowPovAboveThirtyPer";
  }

  return theKey;
}


string makeKeyExample(shared_ptr<psData> theData) {

  string theKey = "Key";
  if (theData->getRace() == "W") {
    theKey += "WhiteVictim";
  } else if (theData->getRace() == "A") {
    theKey += "AsianVictim";
  } else if (theData->getRace() == "H") {
    theKey += "HispanicVictim";
  } else if (theData->getRace() == "N") {
    theKey += "NativeAmericanVictim";
  } else if (theData->getRace() == "B") {
    theKey += "AfricanAmericanVictim";
  } else if (theData->getRace() == "O") {
    theKey += "OtherRaceVictim";
  } else {
    theKey += "RaceUnspecifiedVictim";
  }

  /*if (theData->getFleeing() == "Foot") {
    theKey += "FleeingOnFoot";
  } else if (theData->getFleeing() == "Car") {
    theKey += "FleeingByCar";

  } else if (theData->getFleeing() == "Other") {
    theKey += "FleeingOtherMeans";
  } else {
    theKey += "NotFleeing";
  }
	*/
  return theKey;
}


//swtich to a function parameter
void dataAQ::createComboDemogDataKey(std::vector<shared_ptr<demogData> >& theData) {
	std::set<string> stateS_1;
	int popOver65_1=0;
  	int popUnder18_1=0;
  	int popUnder5_1=0;
  	int popBAup_1=0;
  	int popHSup_1=0;
 	int tp2014_1=0;
  	int poverty_1=0;
  	int count_num_1=0;
 	raceDemogData racialDataS_1;

	std::set<string> stateS_2;
 	int popOver65_2=0;
  	int popUnder18_2=0;
  	int popUnder5_2=0;
  	int popBAup_2=0;
  	int popHSup_2=0;
  	int tp2014_2=0;
  	int poverty_2=0;
  	int count_num_2=0;
	raceDemogData racialDataS_2;

	std::set<string> stateS_3;
  	int popOver65_3=0;
  	int popUnder18_3=0;
  	int popUnder5_3=0;
  	int popBAup_3=0;
  	int popHSup_3=0;
  	int tp2014_3=0;
  	int poverty_3=0;
  	int count_num_3=0;
  	raceDemogData racialDataS_3;

	std::set<string> stateS_4;
  	int popOver65_4=0;
  	int popUnder18_4=0;
  	int popUnder5_4=0;
  	int popBAup_4=0;
  	int popHSup_4=0;
  	int tp2014_4=0;
  	int poverty_4=0;
  	int count_num_4=0;
  	raceDemogData racialDataS_4;

//cout<<"1\n";
	for(auto countyData: theData){
		string keystr = makeKeyExample(countyData);
//cout<<"2\n";
		if(keystr=="KeyBelowPovLessTenPer"){
//cout<<"2a\n";
			stateS_1.insert(countyData->getState());
			popOver65_1+=countyData->getpopOver65Count();
      		popUnder18_1+=countyData->getpopUnder18Count();
      		popUnder5_1+=countyData->getpopUnder5Count();
      		popBAup_1+=countyData->getBAupCount();
     		popHSup_1+=countyData->getHSupCount();
      		poverty_1+=countyData->povertyCount();
     		tp2014_1+=countyData->getPop();
      		count_num_1++;
      		racialDataS_1+=countyData->getRaceData();
		}
		else if(keystr=="KeyBelowPovLessTwentyPer"){
			stateS_2.insert(countyData->getState());
			popOver65_2+=countyData->getpopOver65Count();
      		popUnder18_2+=countyData->getpopUnder18Count();
      		popUnder5_2+=countyData->getpopUnder5Count();
      		popBAup_2+=countyData->getBAupCount();
     		popHSup_2+=countyData->getHSupCount();
      		poverty_2+=countyData->povertyCount();
     		tp2014_2+=countyData->getPop();
      		count_num_2++;
      		racialDataS_2+=countyData->getRaceData();
		}
		else if(keystr=="KeyBelowPovLessThirtyPer"){
//cout<<"2b\n";
			stateS_3.insert(countyData->getState());
			popOver65_3+=countyData->getpopOver65Count();
      		popUnder18_3+=countyData->getpopUnder18Count();
      		popUnder5_3+=countyData->getpopUnder5Count();
      		popBAup_3+=countyData->getBAupCount();
     		popHSup_3+=countyData->getHSupCount();
      		poverty_3+=countyData->povertyCount();
     		tp2014_3+=countyData->getPop();
      		count_num_3++;
      		racialDataS_3+=countyData->getRaceData();
		}
		else if(keystr=="KeyBelowPovAboveThirtyPer"){
//cout<<"2c\n";
			stateS_4.insert(countyData->getState());
			popOver65_4+=countyData->getpopOver65Count();
      		popUnder18_4+=countyData->getpopUnder18Count();
      		popUnder5_4+=countyData->getpopUnder5Count();
      		popBAup_4+=countyData->getBAupCount();
     		popHSup_4+=countyData->getHSupCount();
      		poverty_4+=countyData->povertyCount();
     		tp2014_4+=countyData->getPop();
      		count_num_4++;
      		racialDataS_4+=countyData->getRaceData();
		}
/*
		else{
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"<<endl;
		}
*/
	}
	allComboDemogData["KeyBelowPovLessTenPer"]=make_shared<demogCombo>(" ",
	popOver65_1*100.0/tp2014_1,
	popUnder18_1*100.0/tp2014_1,
	popUnder5_1*100.0/tp2014_1,
	popBAup_1*100.0/tp2014_1,
	popHSup_1*100.0/tp2014_1,
	poverty_1*100.0/tp2014_1,
	tp2014_1,count_num_1,racialDataS_1);
	allComboDemogData["KeyBelowPovLessTenPer"]->setStateS(stateS_1);

	allComboDemogData["KeyBelowPovLessTwentyPer"]=make_shared<demogCombo>(" ",
	popOver65_2*100.0/tp2014_2,
	popUnder18_2*100.0/tp2014_2,
	popUnder5_2*100.0/tp2014_2,
	popBAup_2*100.0/tp2014_2,
	popHSup_2*100.0/tp2014_2,
	poverty_2*100.0/tp2014_2,
	tp2014_2,count_num_2,racialDataS_2);
	allComboDemogData["KeyBelowPovLessTwentyPer"]->setStateS(stateS_2);

	allComboDemogData["KeyBelowPovLessThirtyPer"]=make_shared<demogCombo>("",
	popOver65_3*100.0/tp2014_3,
	popUnder18_3*100.0/tp2014_3,
	popUnder5_3*100.0/tp2014_3,
	popBAup_3*100.0/tp2014_3,
	popHSup_3*100.0/tp2014_3,
	poverty_3*100.0/tp2014_3,
	tp2014_3,count_num_3,racialDataS_3);
	allComboDemogData["KeyBelowPovLessThirtyPer"]->setStateS(stateS_3);

	allComboDemogData["KeyBelowPovAboveThirtyPer"]=make_shared<demogCombo>("",
	popOver65_4*100.0/tp2014_4,
	popUnder18_4*100.0/tp2014_4,
	popUnder5_4*100.0/tp2014_4,
	popBAup_4*100.0/tp2014_4,
	popHSup_4*100.0/tp2014_4,
	poverty_4*100.0/tp2014_4,
	tp2014_4,count_num_4,racialDataS_4);
	allComboDemogData["KeyBelowPovAboveThirtyPer"]->setStateS(stateS_4);
}

bool comparePsData(shared_ptr<psData> p1, shared_ptr<psData> p2){
 	return p1->getState()<p2->getState();
}

void dataAQ::createComboPoliceDataKey(std::vector<shared_ptr<psData> >& theData) {
	//sort(theData.begin(), theData.end(), comparePsData);
	std::set<string> stateS_1;
	int numMentalI_1=0;
    int fleeCount_1=0;
    int caseOver65_1=0;
    int caseUnder18_1=0;
    raceDemogData racialData_1;
    int numMale_1=0;
    int numFemale_1=0;
    int numOfCase_1=0;

	std::set<string> stateS_2;
	int numMentalI_2=0;
    int fleeCount_2=0;
    int caseOver65_2=0;
    int caseUnder18_2=0;
    raceDemogData racialData_2;
    int numMale_2=0;
    int numFemale_2=0;
    int numOfCase_2=0;

	std::set<string> stateS_3;
	int numMentalI_3=0;
    int fleeCount_3=0;
    int caseOver65_3=0;
    int caseUnder18_3=0;
    raceDemogData racialData_3;
    int numMale_3=0;
    int numFemale_3=0;
    int numOfCase_3=0;

	std::set<string> stateS_4;
	int numMentalI_4=0;
    int fleeCount_4=0;
    int caseOver65_4=0;
    int caseUnder18_4=0;
    raceDemogData racialData_4;
    int numMale_4=0;
    int numFemale_4=0;
    int numOfCase_4=0;

	std::set<string> stateS_5;
	int numMentalI_5=0;
    int fleeCount_5=0;
    int caseOver65_5=0;
    int caseUnder18_5=0;
    raceDemogData racialData_5;
    int numMale_5=0;
    int numFemale_5=0;
    int numOfCase_5=0;

	std::set<string> stateS_6;
	int numMentalI_6=0;
    int fleeCount_6=0;
    int caseOver65_6=0;
    int caseUnder18_6=0;
    raceDemogData racialData_6;
    int numMale_6=0;
    int numFemale_6=0;
    int numOfCase_6=0;

	std::set<string> stateS_7;
	int numMentalI_7=0;
    int fleeCount_7=0;
    int caseOver65_7=0;
    int caseUnder18_7=0;
    raceDemogData racialData_7;
    int numMale_7=0;
    int numFemale_7=0;
    int numOfCase_7=0;

	for(auto ps:theData){
		string keystr = makeKeyExample(ps);
		if(keystr == "KeyWhiteVictim"){
			stateS_1.insert(ps->getState());
        		if(ps->getIllness()=="TRUE" || ps->getIllness()=="True"){
        	    		numMentalI_1++;
        		}
        		if(ps->getFlee()=="Foot"||ps->getFlee()=="Car"||ps->getFlee()=="Other"){
        	    		fleeCount_1++;
        		}
        		if(ps->getAge()>65){
        			caseOver65_1++;
			}
        	
        		if(ps->getAge()<18){
            			caseUnder18_1++;
        		}
        		if(ps->getGender()=="M"){
           			numMale_1++;
        		}
        		else{
        	    		numFemale_1++;
        		}
        		numOfCase_1++;

        		racialData_1.addWhiteCount(1);

        		racialData_1.addCommunityCount(1);			
		}

		if(keystr == "KeyAsianVictim"){
			stateS_2.insert(ps->getState());
        		if(ps->getIllness()=="TRUE" || ps->getIllness()=="True"){
        	    		numMentalI_2++;
        		}
        		if(ps->getFlee()=="Foot"||ps->getFlee()=="Car"||ps->getFlee()=="Other"){
        	    		fleeCount_2++;
        		}
        		if(ps->getAge()>65){
        			caseOver65_2++;
			}
        	
        		if(ps->getAge()<18){
            			caseUnder18_2++;
        		}
        		if(ps->getGender()=="M"){
           			numMale_2++;
        		}
        		else{
        	    		numFemale_2++;
        		}
        		numOfCase_2++;

        		if(ps->getRace()=="A"){
        	    		racialData_2.addAsianCount(1);
        		}
        		racialData_2.addCommunityCount(1);			
		}

		if(keystr == "KeyHispanicVictim"){
			stateS_3.insert(ps->getState());
        		if(ps->getIllness()=="TRUE" || ps->getIllness()=="True"){
        	    		numMentalI_3++;
        		}
        		if(ps->getFlee()=="Foot"||ps->getFlee()=="Car"||ps->getFlee()=="Other"){
        	    		fleeCount_3++;
        		}
        		if(ps->getAge()>65){
        			caseOver65_3++;
        		}
        		if(ps->getAge()<18){
            			caseUnder18_3++;
        		}
        		if(ps->getGender()=="M"){
           			numMale_3++;
        		}
        		else{
        	    		numFemale_3++;
        		}
        		numOfCase_3++;

        		racialData_3.addLatinxCount(1);
        		racialData_3.addCommunityCount(1);			
		}
		if(keystr == "KeyNativeAmericanVictim"){
			stateS_4.insert(ps->getState());
        		if(ps->getIllness()=="TRUE" || ps->getIllness()=="True"){
        	    		numMentalI_4++;
        		}
        		if(ps->getFlee()=="Foot"||ps->getFlee()=="Car"||ps->getFlee()=="Other"){
        	    		fleeCount_4++;
        		}
        		if(ps->getAge()>65){
        			caseOver65_4++;
        		}
        		if(ps->getAge()<18){
            			caseUnder18_4++;
        		}
        		if(ps->getGender()=="M"){
           			numMale_4++;
        		}
        		else{
        	    		numFemale_4++;
        		}
        		numOfCase_4++;

        		racialData_4.addFirstNationCount(1);
        		racialData_4.addCommunityCount(1);			
		}

		if(keystr == "KeyAfricanAmericanVictim"){
			stateS_5.insert(ps->getState());
        		if(ps->getIllness()=="TRUE" || ps->getIllness()=="True"){
        	    		numMentalI_5++;
        		}
        		if(ps->getFlee()=="Foot"||ps->getFlee()=="Car"||ps->getFlee()=="Other"){
        	    		fleeCount_5++;
        		}
        		if(ps->getAge()>65){
        			caseOver65_5++;
        		}
        		if(ps->getAge()<18){
            			caseUnder18_5++;
        		}
        		if(ps->getGender()=="M"){
           			numMale_5++;
        		}
        		else{
        	    		numFemale_5++;
        		}
        		numOfCase_5++;
        	
        		racialData_5.addBlackCount(1);       	
        		racialData_5.addCommunityCount(1);			
		}

		if(keystr == "KeyOtherRaceVictim"){
			stateS_6.insert(ps->getState());
        		if(ps->getIllness()=="TRUE" || ps->getIllness()=="True"){
        	    		numMentalI_5++;
        		}
        		if(ps->getFlee()=="Foot"||ps->getFlee()=="Car"||ps->getFlee()=="Other"){
        	    		fleeCount_6++;
        		}
        		if(ps->getAge()>65){
        			caseOver65_6++;
        		}
        		if(ps->getAge()<18){
            			caseUnder18_6++;
        		}
        		if(ps->getGender()=="M"){
           			numMale_6++;
        		}
        		else{
        	    		numFemale_6++;
        		}
        		numOfCase_6++;
        	
        		racialData_6.addOtherCount(1);   	
        		racialData_6.addCommunityCount(1);			
		}

		if(keystr == "KeyRaceUnspecifiedVictim"){
			stateS_7.insert(ps->getState());
        		if(ps->getIllness()=="TRUE" || ps->getIllness()=="True"){
        	    		numMentalI_7++;
        		}
        		if(ps->getFlee()=="Foot"||ps->getFlee()=="Car"||ps->getFlee()=="Other"){
        	   		 fleeCount_7++;
        		}
        		if(ps->getAge()>65){
        			caseOver65_7++;
        		}
        		if(ps->getAge()<18){
            			caseUnder18_7++;
        		}
        		if(ps->getGender()=="M"){
           			numMale_7++;
        		}
        		else{
        	    		numFemale_7++;
        		}
        		numOfCase_7++;
        	
        		racialData_7.addMultiRaceCount(1); 	
        		racialData_7.addCommunityCount(1);			
		}											
	}
	allComboPoliceData["KeyWhiteVictim"]=make_shared<psCombo>("",numMentalI_1,fleeCount_1,caseOver65_1,caseUnder18_1,racialData_1,
	numMale_1,numFemale_1,numOfCase_1);
	allComboPoliceData["KeyWhiteVictim"]->setStateS(stateS_1);

	allComboPoliceData["KeyAsianVictim"]=make_shared<psCombo>("",numMentalI_2,fleeCount_2,caseOver65_2,caseUnder18_2,racialData_2,
	numMale_2,numFemale_2,numOfCase_2);
	allComboPoliceData["KeyAsianVictim"]->setStateS(stateS_2);

	allComboPoliceData["KeyHispanicVictim"]=make_shared<psCombo>("",numMentalI_3,fleeCount_3,caseOver65_3,caseUnder18_3,racialData_3,
	numMale_3,numFemale_3,numOfCase_3);
	allComboPoliceData["KeyHispanicVictim"]->setStateS(stateS_3);

	allComboPoliceData["KeyNativeAmericanVictim"]=make_shared<psCombo>("",numMentalI_4,fleeCount_4,caseOver65_4,caseUnder18_4,racialData_4,
	numMale_4,numFemale_4,numOfCase_4);
	allComboPoliceData["KeyNativeAmericanVictim"]->setStateS(stateS_4);

	allComboPoliceData["KeyAfricanAmericanVictim"]=make_shared<psCombo>("",numMentalI_5,fleeCount_5,caseOver65_5,caseUnder18_5,racialData_5,
	numMale_5,numFemale_5,numOfCase_5);
	allComboPoliceData["KeyAfricanAmericanVictim"]->setStateS(stateS_5);

	allComboPoliceData["KeyOtherRaceVictim"]=make_shared<psCombo>("",numMentalI_6,fleeCount_6,caseOver65_6,caseUnder18_6,racialData_6,
	numMale_6,numFemale_6,numOfCase_6);
	allComboPoliceData["KeyOtherRaceVictim"]->setStateS(stateS_6);

	allComboPoliceData["KeyRaceUnspecifiedVictim"]=make_shared<psCombo>("",numMentalI_7,fleeCount_7,caseOver65_7,caseUnder18_7,racialData_7,
	numMale_7,numFemale_7,numOfCase_7);
	allComboPoliceData["KeyRaceUnspecifiedVictim"]->setStateS(stateS_7);	
}

/******************************************/
/* state examples */

void dataAQ::createComboDemogData(std::vector<shared_ptr<demogData> >&  theData) {
	string current="";
  int popOver65=0;
  int popUnder18=0;
  int popUnder5=0;
  int popBAup=0;
  int popHSup=0;
  int totalPopulation2014=0;
  int poverty=0;
  int count_num=0;
  raceDemogData racialDataS;
  
  for(auto countyData: theData){
    if(current ==""){
      current = countyData->getState();
      popOver65=countyData->getpopOver65Count();
      
      popUnder18=countyData->getpopUnder18Count();
      popUnder5=countyData->getpopUnder5Count();
      popBAup=countyData->getBAupCount();
      popHSup=countyData->getHSupCount();
      poverty=countyData->povertyCount();
      totalPopulation2014=countyData->getPop();
      count_num=1;
      racialDataS = countyData -> getRaceData();
    }
    else if (countyData->getState()==current){
      popOver65+=countyData->getpopOver65Count();
      popUnder18+=countyData->getpopUnder18Count();
      popUnder5+=countyData->getpopUnder5Count();
      popBAup+=countyData->getBAupCount();
      popHSup+=countyData->getHSupCount();
      poverty+=countyData->povertyCount();
      totalPopulation2014+=countyData->getPop();
      count_num++;
      racialDataS+=countyData->getRaceData();
    }
    else{
      allComboDemogData[current] = make_shared<demogCombo>(current, 
				popOver65*100.0/totalPopulation2014, 
				popUnder18*100.0/totalPopulation2014,
            			popUnder5*100.0/totalPopulation2014,
				popBAup*100.0/totalPopulation2014, 
				popHSup*100.0/totalPopulation2014, 
				poverty*100.0/totalPopulation2014,
				totalPopulation2014, count_num,racialDataS);
      current = countyData->getState();
      popOver65=countyData->getpopOver65Count();
      popUnder18=countyData->getpopUnder18Count();
      popUnder5=countyData->getpopUnder5Count();
      popBAup=countyData->getBAupCount();
      popHSup=countyData->getHSupCount();
      poverty=countyData->povertyCount();
      totalPopulation2014=countyData->getPop();
      count_num=1;
      racialDataS.initialize();
      racialDataS += countyData -> getRaceData();

    }
	if(count_num>0){
		
      		allComboDemogData[current] = make_shared<demogCombo>(current, 
				popOver65*100.0/totalPopulation2014, 
				popUnder18*100.0/totalPopulation2014,
            			popUnder5*100.0/totalPopulation2014,
				popBAup*100.0/totalPopulation2014, 
				popHSup*100.0/totalPopulation2014, 
				poverty*100.0/totalPopulation2014,
				totalPopulation2014, count_num,racialDataS);
	}
    
  }

}


void dataAQ::createComboPoliceData(std::vector<shared_ptr<psData> >& theData) {
	sort(theData.begin(), theData.end(), comparePsData);

    int numMentalI=0;
    int fleeCount=0;
    int caseOver65=0;
    int caseUnder18=0;
    raceDemogData racialData;
    int numMale=0;
    int numFemale=0;
    int numOfCase=0;


    string current ="";

    for (auto ps: theData){
        if(current ==""){
          current =ps->getState();
        }
        else if(current ==ps->getState()){

        }
        else{
          allComboPoliceData[current]=make_shared<psCombo>(current, numMentalI, fleeCount, caseOver65, caseUnder18, racialData, numMale, 
          numFemale, numOfCase);
          current = ps->getState();
          numMentalI=0;
          fleeCount=0;
          caseOver65=0;
          caseUnder18=0;
          racialData.initialize();
          numMale=0;
          numFemale=0;
          numOfCase=0;
        }
        if(ps->getIllness()=="TRUE" || ps->getIllness()=="True"){
            numMentalI++;
          }
        if(ps->getFlee()=="Foot"||ps->getFlee()=="Car"||ps->getFlee()=="Other"){
            fleeCount++;
        }
        if(ps->getAge()>65){
            caseOver65++;
        }
        if(ps->getAge()<18){
            caseUnder18++;
        }
        if(ps->getGender()=="M"){
            numMale++;
        }
        else{
            numFemale++;
        }
        numOfCase++;

        if(ps->getRace()=="A"){
            racialData.addAsianCount(1);
        }
        else if(ps->getRace()=="W"){
            racialData.addWhiteCount(1);
            racialData.addWhiteNHCount(1);
        }
        else if(ps->getRace()=="H"){
            racialData.addLatinxCount(1);
        }
        else if(ps->getRace()=="B"){
            racialData.addBlackCount(1);
        }
        else if(ps->getRace()=="O"){
            racialData.addOtherCount(1);
        }
        else if(ps->getRace()=="N"){
            racialData.addFirstNationCount(1);
        }
        else{
            racialData.addOtherCount(1);
        }
        racialData.addCommunityCount(1);

    }
	if(numOfCase>0){
		
          allComboPoliceData[current]=make_shared<psCombo>(current, numMentalI, fleeCount, caseOver65, caseUnder18, racialData, numMale, 
          numFemale, numOfCase);
	}
}

bool comparePsComboData(shared_ptr<psCombo> ps1, shared_ptr<psCombo> ps2)	{
  	return ps1->getPop()>ps2->getPop();
}
//sort and report the top ten states in terms of number of police shootings 

void dataAQ::reportTopTenStatesPS() {
	vector<shared_ptr<psCombo>> tmpPsStateData;
	shared_ptr<psCombo> tps;
	shared_ptr<demogCombo> tds;

  for(auto entry : allComboPoliceData){
    tmpPsStateData.push_back(entry.second);
  }
  sort(tmpPsStateData.begin(), tmpPsStateData.end(), comparePsComboData);
  cout<<"Top ten states sorted on Below Poverty data & the associated police shooting data:\n";
  for(int i=0; i<10; i++){
	tps=tmpPsStateData[i];
	tds=allComboDemogData[tps->getState()];
    cout<<tds->getState()<<endl;
    cout<<"Total population: "<<tds->getPop()<<endl;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
    
	cout<<"Police shooting incidents: "<<
	tps->getPop()<<endl;
	cout<<"Percent below poverty: "<<tds->getPovPercent()<<endl;

  }
	
	cout<<"**Full listings for top 3 Below Poverty data & the associated police shooting data for top 3:"<<endl;
	for(int i=0;i<3;i++){
		tps=tmpPsStateData[i];
		tds=allComboDemogData[tps->getState()];
		cout<<"State Info: "<<tds->getState()<<endl;
		cout<<"Number of Counties: "<<tds->getCountNum()
			<<endl;
		cout<<"Population info:"<<endl;
		int totPop=tds->getPop();
		cout<<"(over 65): "<< tds->getpopOver65()<<"% ";
		cout<<"and total: "<<round(tds->getpopOver65()*totPop/100)<<endl;

		cout<<"(under 18): "<< tds->getpopUnder18()<<"% ";
		cout<<"and total: "<<round(tds->getpopUnder18()*totPop/100)<<endl;

		cout<<"(under 5): "<< tds->getpopUnder5()<<"% ";
		cout<<"and total: "<<round(tds->getpopUnder5()*totPop/100)<<endl;

		cout<<"Education info:"<<endl;
		cout<<"(Bachelor or  more): "<< tds->getBAup()<<"% ";
		cout<<"and total: "<<round(tds->getBAup()*totPop/100)<<endl;

		cout<<"(high school or  more): "<< tds->getHSup()<<"% ";
		cout<<"and total: "<<round(tds->getHSup()*totPop/100)<<endl;

		cout<<"persons below poverty: "<<tds->getPovPercent()<<"% ";
		cout<<"and total: "<<round(tds->getPovPercent()*totPop/100)<<endl;

		raceDemogData rd=tds->getRaceData();	
		cout<<"community racial demographics: ";
		cout<<"Racial Demographics Info:"<<endl;
		cout<<"% American Indian and Alaska Native percent: ";
		cout<<rd.getFirstNationPercent();
		cout<<" count: "<<rd.getFirstNationCount()<<endl;
		
		cout<<"% Asian American percent: ";
		cout<<rd.getAsianPercent();
		cout<<" count: "<<rd.getAsianCount()<<endl;
		
		cout<<"% Black/African American percent: ";
		cout<<rd.getBlackPercent();
		cout<<" count: "<<rd.getBlackCount()<<endl;
		
		cout<<"% Hispanic or Latinx  percent: ";
		cout<<rd.getLatinxPercent();
		cout<<" count: "<<rd.getLatinxCount()<<endl;
		
		cout<<"% Native Hawaiian and other Pacific Islander  percent: ";
		cout<<rd.getHIPacificIslePercent();
		cout<<" count: "<<rd.getHIPacificIsleCount()<<endl;
		
		cout<<"% Two or More Races percent: ";
		cout<<rd.getMultiRacePercent();
		cout<<" count: "<<rd.getMultiRaceCount()<<endl;

		cout<<"% White (inclusive) percent: ";
		cout<<rd.getWhitePercent();
		cout<<" count: "<<rd.getWhiteCount()<<endl;

		cout<<"% White (nonHispanic) percent: ";
		cout<<rd.getWhiteNHPercent();
		cout<<" count: "<<rd.getWhiteNHCount()<<endl;
		
		cout<<"total Racial Demographic Count: ";
		cout<<rd.getCommunityCount()<<endl;

		cout<<"Total population: "<<totPop<<endl;

		cout<<"**Police shooting incidents:State Info: ";
		cout<<tps->getState()<<endl;
		
		cout<<"Number of incidents: "<<tps->getPop()<<endl;
		cout<<"Incidents with age"<<endl;
		cout<<"(over 65): "<<tps->getCasesOver65()<<endl;
	cout<<"(19 to 64): "
<<tps->getPop()-tps->getCasesOver65()-tps->getCasesUnder18()<<endl;
		cout<<"(under 18): "<<tps->getCasesUnder18()<<endl;
		
		cout<<"Incidents involving fleeing: "<<tps->getFleeingCount()<<endl;
		cout<<"Incidents involving mental illness: "<<tps->getNumMentalI()<<endl;
		cout<<"Male incidents: "<<tps->getnumMales();
		cout<<" female incidents: "<<tps->getnumFemales()<<endl;
	
		cout<<"Racial demographics of state incidents: Racial Demographics Info:"<<endl;
		rd=tps->getRacialData();
		cout<<"% American Indian and Alaska Native count: ";
		cout<<rd.getFirstNationCount()<<endl;
		
		cout<<"% Asian American percent: ";
		cout<<rd.getAsianPercent();
		cout<<" count: "<<rd.getAsianCount()<<endl;
		
		cout<<"% Black/African American percent: ";
		cout<<rd.getBlackPercent();
		cout<<" count: "<<rd.getBlackCount()<<endl;
		
		cout<<"% Hispanic or Latinx  percent: ";
		cout<<rd.getLatinxPercent();
		cout<<" count: "<<rd.getLatinxCount()<<endl;
		
		cout<<"% Native Hawaiian and other Pacific Islander count: ";
		cout<<rd.getHIPacificIsleCount()<<endl;
		
		cout<<"% Two or More Races count: ";
		cout<<rd.getMultiRaceCount()<<endl;

		cout<<"% White (inclusive) percent: ";
		cout<<rd.getWhitePercent();
		cout<<" count: "<<rd.getWhiteCount()<<endl;

		cout<<"% White (nonHispanic) percent: ";
		cout<<rd.getWhiteNHPercent();
		cout<<" count: "<<rd.getWhiteNHCount()<<endl;
		
		cout<<"% Other percent: ";
		cout<<rd.getOtherPercent();
		cout<<" count: "<<rd.getOtherCount()<<endl;

		cout<<"total Racial Demographic Count: "<<rd.getCommunityCount()<<endl<<endl;
	}
		
}

	bool compareStateData(shared_ptr<demogCombo> s1, shared_ptr<demogCombo> s2)
	{
  	return s1->getPovPercent()>s2->getPovPercent();
	}
//sort and report the top ten states with largest population below poverty 
/*
	bool compareStateData2(shared_ptr<demogState> s1, shared_ptr<demogState> s2)
	{
	return s1->getPoverty()>s2->getPoverty();
	}
*/
    //sort and report the top ten states with largest population below poverty 
void dataAQ::reportTopTenStatesBP() {
	string stateName;
  vector<shared_ptr<demogCombo>> tmpStateData;
	shared_ptr<demogCombo> tds;

  for(auto entry : allComboDemogData){
    tmpStateData.push_back(entry.second);
  }
  sort(tmpStateData.begin(), tmpStateData.end(), compareStateData);
  cout<<"Top ten states sorted on Below Poverty data & the associated police shooting data:\n";
  for(int i=0; i<10; i++){
    cout<<tmpStateData[i]->getState()<<endl;
    cout<<"Total population: "<<tmpStateData[i]->getPop()<<endl;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
    cout<<"Percent below poverty: "<<tmpStateData[i]->getPovPercent()<<endl;
	cout<<"Police shooting incidents: "<<
	allComboPoliceData[tmpStateData[i]->getState()]->getPop()<<endl;
	
  }
	
	cout<<"**Full listings for top 3 Below Poverty data & the associated police shooting data for top 3:"<<endl;
	for(int i=0;i<3;i++){
		cout<<"State Info: "<<tmpStateData[i]->getState()<<endl;
		cout<<"Number of Counties: "<<tmpStateData[i]->getCountNum()
			<<endl;
		cout<<"Population info:"<<endl;
		int totPop=tmpStateData[i]->getPop();
		tds=tmpStateData[i];

		cout<<"(over 65): "<< tds->getpopOver65()<<"% ";
		cout<<"and total: "<<round(tds->getpopOver65()*totPop/100)<<endl;

		cout<<"(under 18): "<< tds->getpopUnder18()<<"% ";
		cout<<"and total: "<<round(tds->getpopUnder18()*totPop/100)<<endl;

		cout<<"(under 5): "<< tds->getpopUnder5()<<"% ";
		cout<<"and total: "<<round(tds->getpopUnder5()*totPop/100)<<endl;

		cout<<"Education info:"<<endl;
		cout<<"(Bachelor or  more): "<< tds->getBAup()<<"% ";
		cout<<"and total: "<<round(tds->getBAup()*totPop/100)<<endl;

		cout<<"(high school or  more): "<< tds->getHSup()<<"% ";
		cout<<"and total: "<<round(tds->getHSup()*totPop/100)<<endl;

		cout<<"persons below poverty: "<<tds->getPovPercent()<<"% ";
		cout<<"and total: "<<round(tds->getPovPercent()*totPop/100)<<endl;


		raceDemogData rd=tmpStateData[i]->getRaceData();	
		cout<<"community racial demographics: ";
		cout<<"Racial Demographics Info:"<<endl;
		cout<<"% American Indian and Alaska Native percent: ";
		cout<<rd.getFirstNationPercent();
		cout<<" count: "<<rd.getFirstNationCount()<<endl;
		
		cout<<"% Asian American percent: ";
		cout<<rd.getAsianPercent();
		cout<<" count: "<<rd.getAsianCount()<<endl;
		
		cout<<"% Black/African American percent: ";
		cout<<rd.getBlackPercent();
		cout<<" count: "<<rd.getBlackCount()<<endl;
		
		cout<<"% Hispanic or Latinx  percent: ";
		cout<<rd.getLatinxPercent();
		cout<<" count: "<<rd.getLatinxCount()<<endl;
		
		cout<<"% Native Hawaiian and other Pacific Islander   percent: ";
		cout<<rd.getHIPacificIslePercent();
		cout<<" count: "<<rd.getHIPacificIsleCount()<<endl;
		
		cout<<"% Two or More Races percent: ";
		cout<<rd.getMultiRacePercent();
		cout<<" count: "<<rd.getMultiRaceCount()<<endl;

		cout<<"% White (inclusive) percent: ";
		cout<<rd.getWhitePercent();
		cout<<" count: "<<rd.getWhiteCount()<<endl;

		cout<<"% White (nonHispanic) percent: ";
		cout<<rd.getWhiteNHPercent();
		cout<<" count: "<<rd.getWhiteNHCount()<<endl;
		
		cout<<"total Racial Demographic Count: ";
		cout<<rd.getCommunityCount()<<endl;

		cout<<"Total population: "<<totPop<<endl;

		shared_ptr<psCombo> tpsd= allComboPoliceData[tmpStateData[i]->getState()];
		cout<<"**Police shooting incidents:State Info: ";
		cout<<tpsd->getState()<<endl;
		
		cout<<"Number of incidents: "<<tpsd->getPop()<<endl;
		cout<<"Incidents with age"<<endl;
		cout<<"(over 65): "<<tpsd->getCasesOver65()<<endl;
	cout<<"(19 to 64): "
<<tpsd->getPop()-tpsd->getCasesOver65()-tpsd->getCasesUnder18()<<endl;
		cout<<"(under 18): "<<tpsd->getCasesUnder18()<<endl;
		
		cout<<"Incidents involving fleeing: "<<tpsd->getFleeingCount()<<endl;
		cout<<"Incidents involving mental illness: "<<tpsd->getNumMentalI()<<endl;
		cout<<"Male incidents: "<<tpsd->getnumMales();
		cout<<" female incidents: "<<tpsd->getnumFemales()<<endl;
	
		cout<<"Racial demographics of state incidents: Racial Demographics Info:"<<endl;
		rd=tpsd->getRacialData();
		cout<<"% American Indian and Alaska Native count: ";
		cout<<rd.getFirstNationCount()<<endl;
		
		cout<<"% Asian American percent: ";
		cout<<rd.getAsianPercent();
		cout<<" count: "<<rd.getAsianCount()<<endl;
		
		cout<<"% Black/African American percent: ";
		cout<<rd.getBlackPercent();
		cout<<" count: "<<rd.getBlackCount()<<endl;
		
		cout<<"% Hispanic or Latinx  percent: ";
		cout<<rd.getLatinxPercent();
		cout<<" count: "<<rd.getLatinxCount()<<endl;
		
		cout<<"% Native Hawaiian and other Pacific Islander count: ";
		cout<<rd.getHIPacificIsleCount()<<endl;
		
		cout<<"% Two or More Races count: ";
		cout<<rd.getMultiRaceCount()<<endl;

		cout<<"% White (inclusive) percent: ";
		cout<<rd.getWhitePercent();
		cout<<" count: "<<rd.getWhiteCount()<<endl;

		cout<<"% White (nonHispanic) percent: ";
		cout<<rd.getWhiteNHPercent();
		cout<<" count: "<<rd.getWhiteNHCount()<<endl;
		
		cout<<"% Other percent: ";
		cout<<rd.getOtherPercent();
		cout<<" count: "<<rd.getOtherCount()<<endl;

		cout<<"total Racial Demographic Count: "<<rd.getCommunityCount()<<endl<<endl;
		

	}

}

/* print all combo data */
std::ostream& operator<<(std::ostream &out, const dataAQ &theAnswers) {
  out << "Combo Demographic Info: ";
  for (auto const& entry : theAnswers.allComboDemogData) {
      out << "key: " << entry.first << endl;
      out << *(entry.second) << "\n";

  }

  for (auto const& entry : theAnswers.allComboPoliceData) {
      out << "key: " << entry.first << endl;
      out << *(entry.second) << "\n";

  }

  return out;
}
void dataAQ::comboReport(double thresh){
	std::vector<shared_ptr<regionData>> pileData;
	for(auto entry: allComboDemogData){
		if(entry.second->getHSup()>thresh){
			pileData.push_back(entry.second);
			pileData.push_back(allComboPoliceData[entry.first]);
			
		}
	}	
	visitorReport report;
	for(const auto &obj : pileData){
		obj->accept(report);
	}	
}



