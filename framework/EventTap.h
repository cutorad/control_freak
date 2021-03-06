//
//  EventTap.h
//  ControlFreak
//
//  Created by Nathan Sobo on 9/1/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class Event;

@interface EventTap : NSObject {
	id delegate;
}
-(id)init;
-(Event*)handleEvent:(Event*)event;
@end

CGEventRef eventCallback(CGEventTapProxy proxy, CGEventType type, CGEventRef event, void *eventTapObject);