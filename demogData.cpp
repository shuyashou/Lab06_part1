#include "demogData.h"
#include <sstream>
#include <iomanip>

#include "visitor.h"

void demogData:: accept(class Visitor &v){
	v.visit(this);
}
/* print county demographic data */
std::ostream& operator<<(std::ostream &out, const demogData &DD) {
    //out << "County Demographics Info: " << DD.getRegionName() << ", " << DD.getState();
    out << std::setprecision(2) << std::fixed;
    //fill in
    return out;
}
