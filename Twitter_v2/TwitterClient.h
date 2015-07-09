//
//  TwitterClient.h
//  Twitter_v2
//
//  Created by Jackal Wang on 2015/7/9.
//  Copyright (c) 2015年 Jackal Wang. All rights reserved.
//

#import "BDBOAuth1RequestOperationManager.h"
#import "BDBOAuth1SessionManager.h"
#import "User.h"
@interface TwitterClient : BDBOAuth1RequestOperationManager
+ (TwitterClient *)sharedInstance;
- (void)loginWithCompletion:(void (^)(User *user, NSError *error))completion;
- (void)openURL:(NSURL *)url;
- (void)homeTimelineWithParams:(NSDictionary *)params completion:(void (^)(NSArray *tweets, NSError *error))completion;
- (void)timelineWithParams:(NSDictionary *)params source:(NSString *)source completion:(void (^)(NSArray *tweets, NSError *error))completion;
- (void)doFavorite:(NSString *)tweetId completion:(void (^)(NSError *error))completion;
- (void)doUnFavorite:(NSString *)tweetId completion:(void (^)(NSError *error))completion;
- (void)doRetweet:(NSString *)tweetId completion:(void (^)(NSError *error))completion;
- (void)doUnRetweet:(NSString *)tweetId completion:(void (^)(NSError *error))completion;
- (void)doTweet:(NSMutableDictionary *)params completion:(void (^)(NSError *error))completion;
@end

