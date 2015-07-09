//
//  TweetsCell.h
//  Twitter_v2
//
//  Created by Jackal Wang on 2015/7/9.
//  Copyright (c) 2015年 Jackal Wang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tweet.h"

@class TweetsCell;

@protocol TweetCellDelegate <NSObject>

- (void)TweetsCell:(TweetsCell *)TweetsCell onReplyClick:(Tweet *)originlTweet;
- (void)TweetsCell:(TweetsCell *)TweetsCell onProfileTap:(Tweet *)originlTweet;
@end

@interface TweetsCell : UITableViewCell
@property (nonatomic, strong) Tweet *tweet;
@property (nonatomic, weak) id<TweetCellDelegate> delegate;
@end

