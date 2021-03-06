//
//  User.h
//  Twitter_v2
//
//  Created by Jackal Wang on 2015/7/9.
//  Copyright (c) 2015年 Jackal Wang. All rights reserved.
//

#import <Foundation/Foundation.h>
extern NSString * const UserDidLoginNotification;
extern NSString * const UserDidLogoutNotification;

@interface User : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *screen_name;
@property (nonatomic, strong) NSString *profileImageUrl;
@property (nonatomic, strong) NSString *tagline;
@property (nonatomic, strong) NSString *profileBannerImage;
@property (nonatomic, strong) NSString *userDescription;
@property (nonatomic, strong) NSString *profile_background_color;
@property (nonatomic, assign) NSString *friends_count;
@property (nonatomic, assign) NSString *followers_count;
@property (nonatomic, assign) NSString *statuses_count;

- (id)initWithDictionary:(NSDictionary *)dictionary;
+ (User *)currentUser;
+ (void)setCurrentUser:(User *)user;
+ (void)logout;
@end
