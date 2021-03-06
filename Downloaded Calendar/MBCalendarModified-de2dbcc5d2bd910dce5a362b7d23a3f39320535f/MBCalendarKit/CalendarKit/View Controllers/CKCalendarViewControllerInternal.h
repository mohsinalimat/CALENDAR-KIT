//
//  CKViewController.h
//   MBCalendarKit
//
//  Created by Moshe Berman on 4/10/13.
//  Copyright (c) 2013 Moshe Berman. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CKCalendarDelegate.h"
#import "CKCalendarDataSource.h"
#import "NewCKCalendarEventViewController.h"



@interface CKCalendarViewControllerInternal : UIViewController 

@property (nonatomic, assign) id<CKCalendarViewDataSource> dataSource;
@property (nonatomic, assign) id<CKCalendarViewDelegate> delegate;
@property (nonatomic, strong) NewCKCalendarEventViewController *controller;
- (CKCalendarView *)calendarView;

@end
