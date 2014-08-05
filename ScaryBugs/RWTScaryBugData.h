//
//  RWTScaryBugData.h
//  ScaryBugs
//
//  Created by John Moon on 8/4/14.
//  Copyright (c) 2014 JM. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RWTScaryBugData : NSObject

@property(strong)NSString *title;
@property(assign) float rating;

-(id)initWithTitle:(NSString *)title rating:(float)rating;

@end
