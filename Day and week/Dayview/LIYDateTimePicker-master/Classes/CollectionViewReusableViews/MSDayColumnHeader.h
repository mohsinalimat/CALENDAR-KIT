//
//  MSDayColumnHeader.h
//  Example
//
//  Created by Eric Horacek on 2/26/13.
//  Copyright (c) 2013 Monospace Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

static const NSInteger kLIYAllDayHeight = 20;

@interface MSDayColumnHeader : UICollectionReusableView

@property (nonatomic, strong) NSDate *day;
@property (nonatomic, assign) BOOL currentDay;
@property (nonatomic) BOOL showAllDaySection;
@property (nonatomic, strong) UILabel *allDayEventsLabel;
@property (nonatomic, strong) NSString *dayTitlePrefix;

@end
