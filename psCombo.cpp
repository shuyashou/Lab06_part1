#include<cmath>
#include <iomanip>
#include "psCombo.h"
#include "visitor.h"

void psCombo:: accept(class Visitor &v){
	v.visit(this);
}

/* print state data - as aggregate of all incidents in this state */
std::ostream& operator<<(std::ostream &out, const psCombo& PD) {
    //out << "State Info: " << PD.printState();
    	out<<"State Info: ";
	for(auto s: PD.stateS){
		out<<s<<", ";
	}
	out<<"total states: "<<PD.stateS.size()<<endl;
	//out<<"Number of incidents: "<<PD.numOfCases;
    	out << "Number of incidents: " << PD.numOfCases<<endl;
    	out << std::setprecision(2) << std::fixed;
	out<<"Incidents with age "<<endl;
	out<<"(Over 65): "<<PD.caseOver65<<" %: "
	<<100.0*PD.caseOver65/PD.numOfCases<<endl;
	out<<"(19 to 64): "<<PD.numOfCases-PD.caseOver65-PD.caseUnder18<<" %: "<<100.0*(PD.numOfCases-PD.caseOver65-PD.caseUnder18)/PD.numOfCases<<endl;
	out<<"(Under18): "<<PD.caseUnder18<<" %: "
	<<100.0*PD.caseUnder18/PD.numOfCases<<endl;
	out<<"Incidents involving fleeing: "<<PD.fleeCount<<" %: "<<100.0*PD.fleeCount/PD.numOfCases<<endl;
	out<<"Incidents involving mental illness: "<<PD.numMentalI<<" %: "<<100.0*PD.numMentalI/PD.numOfCases<<endl;
	out<<"Male incidents: "<<PD.numMale<<" female incidents: "<<PD.numFemale<<endl;
	out<<"Racial demographics of state incidents: Racial Demographics Info: "<<PD.racialData;
    return out;
}
