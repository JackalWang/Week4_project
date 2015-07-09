//
//  Tweet.h
//  Twitter_v2
//
//  Created by Jackal Wang on 2015/7/9.
//  Copyright (c) 2015年 Jackal Wang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface Tweet : NSObject
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSDate *createdAt;
@property (nonatomic, strong) User *user;
@property (nonatomic, strong) NSString *profile_image_url;
@property (nonatomic, strong) NSString *profileBannerImage;
@property (nonatomic, strong) NSString *screen_name;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *tweetPhotoUrl;
@property (nonatomic, strong) NSMutableArray *tweetPhotoUrls;
@property (nonatomic, strong) NSString *tweetId;
@property (nonatomic, assign) NSInteger favCount;
@property (nonatomic, assign) NSInteger retweetCount;
@property (nonatomic, assign) BOOL favorited;
@property (nonatomic, assign) BOOL retweeted;
- (id)initWithDictionary:(NSDictionary *)dictionary;
+ (NSArray *)tweetsWithArray:(NSArray *)dictionaries;
@end

