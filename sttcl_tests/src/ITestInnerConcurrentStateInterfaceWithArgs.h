/*
 * ITestInnerConcurrentStateInterfaceWithArgs.h
 *
 *  Created on: May 20, 2013
 *      Author: user
 */

#ifndef ITESTINNERCONCURRENTSTATEINTERFACEWITHARGS_H_
#define ITESTINNERCONCURRENTSTATEINTERFACEWITHARGS_H_

#include "EventArgs.h"

template
    < typename RegionContainerType
    >
struct ITestInnerConcurrentStateInterfaceWithArgs
{
    typedef typename RegionContainerType::RegionBaseType RegionContextType;

    virtual void handleEvent1(RegionContainerType* context, RegionContextType* regionContext, EventArgsPtr eventArgs) = 0;
    virtual void handleEvent2(RegionContainerType* context, RegionContextType* regionContext, EventArgsPtr eventArgs) = 0;
    virtual void handleEvent3(RegionContainerType* context, RegionContextType* regionContext, EventArgsPtr eventArgs) = 0;
    virtual void handleEvent4(RegionContainerType* context, RegionContextType* regionContext, EventArgsPtr eventArgs) = 0;
};


#endif /* ITESTINNERCONCURRENTSTATEINTERFACEWITHARGS_H_ */
