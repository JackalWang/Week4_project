//
//  MainViewController.h
//  Twitter_v2
//
//  Created by Jackal Wang on 2015/7/9.
//  Copyright (c) 2015年 Jackal Wang. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol MainViewControllerDelegate <NSObject>
@optional

- (void)movePanelRight;

@end

@interface MainViewController : UIViewController
@property (nonatomic, assign) id<MainViewControllerDelegate> delegate;
@end
