#ifndef VISITREP_H
#define VISITREP_H
#include"psCombo.h"
#include "psData.h"
#include "demogData.h"
#include "visitor.h"
#include <iomanip>
#include <iostream>

using namespace std;

class visitorReport : public Visitor {
	void visit(psData *pd){};
	void visit(psCombo *pc){
		cout<<"print aggregate police shooting data"<<endl;
		cout<<"State info: "<<pc->getState()<<", "<<"total states: 1"<<endl;
		cout<<"Number of incidents: "<<pc->getNumberOfCases()<<endl;
		cout<<"Racial demographics of state incidents: "<<"Racial Demographics Info: "<<endl;
		cout<<pc->getRacialData();
	}
	void visit(demogData *p){
		cout<<"print summary demog Data:"<<endl;
		cout<<"Region info: "<<p->getRegionName()<<", "<<p->getState()<<endl;
		cout<<"Education info:"<<endl;
		cout<<"(Bachelor or more): "<<p->getBAup()<<"% and total: "<<p->getBAupCount()<<endl;
		cout<<"(high school or more): "<<p->getHSup()<<"% and total: "<<p->getHSupCount()<<endl;
		cout<<"Total population: "<<p->getPop()<<endl;
		cout<<"Racial Demographics Info: "<<endl;
		cout<<p->getRaceData();
	}

};

#endif
