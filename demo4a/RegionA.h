/*
 * RegionA.h
 *
 *  Created on: 31.12.2011
 *      Author: Admin
 */

#ifndef REGIONA_H_
#define REGIONA_H_

#include "Region.h"
#include "IConcurrentStatemachine.h"
#include "DemoStateMachine.h"

namespace Application
{

class DemoStateMachine;
class RegionA
: public sttcl::Region<RegionA,DemoStateMachine,IConcurrentStateMachine,EventArgsClass>
{
public:
	typedef sttcl::Region<RegionA,DemoStateMachine,IConcurrentStateMachine,EventArgsClass> RegionBaseClass;
	typedef typename RegionBaseClass::InnerStateClass InnerStateClass;

	RegionA();
	virtual ~RegionA();

	virtual void handleEvent1(IDemoState::Context* context,sttcl::EventArgsPtr<EventArgsClass> eventArgs);
	virtual void handleEvent2(IDemoState::Context* context,sttcl::EventArgsPtr<EventArgsClass> eventArgs);
	virtual void handleEvent3(IDemoState::Context* context,sttcl::EventArgsPtr<EventArgsClass> eventArgs);
	virtual void handleEvent4(IDemoState::Context* context,sttcl::EventArgsPtr<EventArgsClass> eventArgs);

	void entryImpl(DemoStateMachine* context);
	void exitImpl(DemoStateMachine* context);

	void startingRegionThread();
	void endingRegionThread();

    bool initializeImpl(bool force);
    void finalizeImpl(bool finalizeSubStateMachines);

	InnerStateClass* getInitialStateImpl() const;
};

}

#endif /* REGIONA_H_ */