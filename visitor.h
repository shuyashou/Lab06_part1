#ifndef VISITOR_H
#define VISITOR_H

#include "psData.h"
#include "psCombo.h"
#include "demogData.h"

/* a visitor can visit any of my specific data types */
class Visitor {

	public:
  	virtual void visit(demogData *d) =0;
  	virtual void visit(psData *p) =0;
  	virtual void visit(psCombo *pc) =0;
};
#endif

