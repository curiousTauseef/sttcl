/*
 * DemoStateA1.cpp
 *
 *  Created on: 31.12.2011
 *      Author: Admin
 */

#include "../DemoStateA1.h"
#include "../DemoStateA2.h"

#include <iostream>

using namespace std;
using namespace Application;

DemoStateA1::DemoStateA1()
{
}

DemoStateA1::~DemoStateA1()
{
}

void DemoStateA1::handleEvent1(IConcurrentStateMachine::Context* context,IConcurrentStateMachine::RegionContext* regionContext,sttcl::EventArgsPtr<EventArgsClass> eventArgs)
{
	cout << "DemoStateA1, handling event1, args data: '" << eventArgs->getData() << "' ..." << endl;
	changeState(regionContext->getRegionContext<RegionA>(),&DemoStateA2::getInstance());
}
void DemoStateA1::handleEvent2(IConcurrentStateMachine::Context* context,IConcurrentStateMachine::RegionContext* regionContext,sttcl::EventArgsPtr<EventArgsClass> eventArgs)
{
	cout << "DemoStateA1, handling event2, args data: '" << eventArgs->getData() << "' ..." << endl;
}
void DemoStateA1::handleEvent3(IConcurrentStateMachine::Context* context,IConcurrentStateMachine::RegionContext* regionContext,sttcl::EventArgsPtr<EventArgsClass> eventArgs)
{
	cout << "DemoStateA1, handling event3, args data: '" << eventArgs->getData() << "' ..." << endl;
}
void DemoStateA1::handleEvent4(IConcurrentStateMachine::Context* context,IConcurrentStateMachine::RegionContext* regionContext,sttcl::EventArgsPtr<EventArgsClass> eventArgs)
{
	cout << "DemoStateA1, handling event4, args data: '" << eventArgs->getData() << "' ..." << endl;
}

void DemoStateA1::entryImpl(IConcurrentStateMachine::RegionContext* regionContext)
{
	cout << "DemoStateA1, entering ..." << endl;
}

void DemoStateA1::exitImpl(IConcurrentStateMachine::RegionContext* regionContext)
{
	cout << "DemoStateA1, exiting ..." << endl;
}

DemoStateA1& DemoStateA1::getInstance()
{
	static DemoStateA1 theInstance;
	return theInstance;
}