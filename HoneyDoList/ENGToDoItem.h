//
//  ENGToDoItem.h
//  HoneyDoList
//
//  Created by Eric Garcia on 12/17/13.
//  Copyright (c) 2013 Full Sail. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ENGToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
