//
//  RWTScaryBugDoc.h
//  ScaryBugs
//
//  Created by John Moon on 8/4/14.
//  Copyright (c) 2014 JM. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RWTScaryBugData;

@interface RWTScaryBugDoc : NSObject

@property(strong) RWTScaryBugData *data;
@property(strong) UIImage *thumbImage;
@property(strong) UIImage *fullImage;

-(id)initWithTitle:(NSString *)title
            rating:(float)rating
        thumbImage:(UIImage *)thumbImage
         fullImage:(UIImage *)fullImage;

@end
