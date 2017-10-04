//
//  SmartTabConfig.h
//  Trivver
//
//  Created by vu van long on 8/1/17.
//  Copyright © 2017 Saritasa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMUserSession.h"
#import "SMSessionInfo.h"
#import "SmartTabLogs.h"
@import AdSupport;

@interface SmartTabConfig : NSObject

+ (instancetype _Nonnull )defaultConfig;

/**
 Game UID
 */
@property (nonatomic, strong, nonnull) NSString *gameUID;

/**
 Show or hide smart tab button
 */
@property (nonatomic, assign) BOOL showSmartTabButton;

/**
 Start Trivver when app started
 */
@property (nonatomic, assign) BOOL initializeOnStart;

/**
 Game version
 */
@property (nonatomic, retain) NSString * _Nonnull gameVersion;

/**
 Game session info
 */
@property (nonatomic, retain) SMSessionInfo * _Nullable sessionInfo;
/**
 User session to init game session
 */
@property (nonatomic, retain) SMUserSession * _Nonnull sessionEdit;

/**
 Enable/Disable logging
 */
@property (nonatomic, assign) BOOL enableLogging;

/**
 Log level: Info, Warning, Error
 */
@property (nonatomic, assign) TrivverLogLevel logLevel;

/**
 Time to auto refresh data
 */
@property (nonatomic, assign) int refreshTimeInterval;

/**
 Config trivver

 @param session user session
 @param gameUID game uid
 @param version game version
 @param enableLogging enable logging
 @param logLevel log level
 */
- (void)configSmartTabWithUserSession:(SMUserSession* _Nonnull)session
                              gameUID:(NSString* _Nonnull)gameUID
                          gameVersion:(NSString* _Nonnull)version
                        enableLogging:(BOOL)enableLogging
                             logLevel:(enum TrivverLogLevel)logLevel;

+ (NSString *_Nullable)deviceUID;

+ (NSString *)getIPAddress;

/**
 Set Device UID value

 @param uid String
 */
- (void)setDeviceUID:(NSString*_Nullable)uid;

/**
 Check DevicUID valid

 @return Yes / No
 */
- (BOOL)validDeviceUID;

/**
 Get refresh data time

 @return Time interval
 */
- (int)getTimeRefresh;

/**
 Set refresh data time

 @param time Time interval
 */
- (void)setTimeRefresh:(int)time;
@end
