//
//  LeftMenuViewController.h
//  Twitter_v2
//
//  Created by Jackal Wang on 2015/7/9.
//  Copyright (c) 2015年 Jackal Wang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LeftMenuViewControllerDelegate <NSObject>

@optional

- (void)selectMenuRow:(NSInteger *)row;

@end

@interface LeftMenuViewController : UIViewController
@property (nonatomic, assign) id<LeftMenuViewControllerDelegate> delegate;
@end

