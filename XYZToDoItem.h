//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Charles Rice on 21/09/2014.
//  Copyright (c) 2014 Cake Solutions. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
