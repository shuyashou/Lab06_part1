#include "demogCombo.h"
#include "demogData.h"
#include <sstream>
#include <string>
#include <assert.h>
#include <iomanip>

//add member functions here

/* print state data - as aggregate of all the county data */
std::ostream& operator<<(std::ostream &out, const demogCombo& ComboD) {
	out<<"Combo Info: ";
	
	for(auto s: ComboD.stateS){
		out<<s<<", ";
	}
	out<<"total states: "<<ComboD.stateS.size()<<endl;
	out<<"Number of Counties: "<<ComboD.countNum;

	out<<" County Demographics Info: "<<ComboD.getRegionName();
	out<<", ";
	//out<<" County Demographics Info: comboData, "<<ComboD.getState()<<endl;
	if(ComboD.stateS.size()!=1)
		out<<"many"<<endl;
	else
		out<<ComboD.getState()<<endl;
/*
        const double popOver65;
        const double popUnder18;
        const double popUnder5;
	const double BDhigher;
	const double HShigher;
	const double poverty;
*/
	out<<"Population info: "<<endl;;
	out<<"(over 65): "<<ComboD.popOver65<<"% and total: ";
	int x1=ComboD.popOver65*ComboD.population/100.0;
	out<<x1<<endl;
	//out<<ComboD.popOver65*ComboD.population/100.0<<endl;
	out<<"(under 18): "<<ComboD.popUnder18<<"% and total: ";
	int x2=ComboD.popUnder18*ComboD.population/100.0;
	out<<x2<<endl;
	//out<<round(ComboD.popUnder18*ComboD.population/100.0)<<endl;
	out<<"(under 5):"<<ComboD.popUnder5<<"% and total: ";
	int x3=ComboD.popUnder5*ComboD.population/100.0;
	out<<x3<<endl;
	//out<<round(ComboD.popUnder5*ComboD.population/100.0)<<endl;
	out<<"Education info: "<<endl;
	out<<"(Bachelor or more): "<<ComboD.BDhigher<<"% and total: ";
	int x4= ComboD.BDhigher*ComboD.population/100.0;
	out<<x4<<endl;
	//out<<round(ComboD.BDhigher*ComboD.population/100.0)<<endl;
	out<<"(high school or more): "<<ComboD.HShigher<<"% and total: ";
	int x5 = ComboD.HShigher*ComboD.population/100.0;
	out<<x5<<endl;
	//out<<round(ComboD.HShigher*ComboD.population/100.0)<<endl;
	out<<"persons below poverty: "<<ComboD.poverty<<"% and total: ";
	int x6 = ComboD.poverty*ComboD.population/100.0;
	out<<x6<<endl;
	//out<<round(ComboD.poverty*ComboD.population/100.0)<<endl;

	out<<"Total population: "<<ComboD.population<<endl;
	out<<"Racial Demographics Info: "<<endl;
	
	out<<ComboD.racialData;
	
}












