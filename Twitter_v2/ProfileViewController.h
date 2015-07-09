//
//  ProfileViewController.h
//  Twitter_v2
//
//  Created by Jackal Wang on 2015/7/9.
//  Copyright (c) 2015年 Jackal Wang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tweet.h"
@interface ProfileViewController : UIViewController
@property (nonatomic, strong) Tweet *originalTweet;
@property (nonatomic, strong) User *user;
@end