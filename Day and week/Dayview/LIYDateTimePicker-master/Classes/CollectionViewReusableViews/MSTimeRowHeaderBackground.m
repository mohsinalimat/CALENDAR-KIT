//
//  MSTimeRowHeaderBackground.m
//  Example
//
//  Created by Eric Horacek on 2/26/13.
//  Copyright (c) 2013 Monospace Ltd. All rights reserved.
//

#import "MSTimeRowHeaderBackground.h"
#import "UIColor+ProjectColors.h"

@implementation MSTimeRowHeaderBackground

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor timeRowHeaderBackgroundColor];
    }
    return self;
}

@end
