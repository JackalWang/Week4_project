//
//  TweetsViewController.h
//  Twitter_v2
//
//  Created by Jackal Wang on 2015/7/9.
//  Copyright (c) 2015年 Jackal Wang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LeftMenuViewController.h"
#import "MainViewController.h"
@protocol TweetsViewControllerDelegate <NSObject>
@optional
- (void)movePanelLeft;
- (void)movePanelRight;

@required
- (void)movePanelToOriginalPosition:(NSInteger *)row;

@end

@interface TweetsViewController : UIViewController<LeftMenuViewControllerDelegate, MainViewControllerDelegate>
@property (weak, nonatomic) IBOutlet UIButton *menuButton;
@property (weak, nonatomic) IBOutlet UIButton *composeButton;

@property (nonatomic, assign) id<TweetsViewControllerDelegate> delegate;
- (void)goMenuPage:(NSInteger *)row;
@end