//
//  ExtendNSLogFunctionality.h
//  Trivver
//
//  Created by vu van long on 8/7/17.
//  Copyright © 2017 Saritasa. All rights reserved.
//

#import <Foundation/Foundation.h>

#define TrivverErrorLog(args...) errorLog(args);
#define TrivverWarningLog(args...) warningLog(args);
#define TrivverInfoLog(args...) infoLog(args);


/**
 Log level

 - TrivverLogLevelInfo: Log all informations include warning and error
 - TrivverLogLevelWarning: Log only warning and error
 - TrivverLogLevelError: Log error only
 */
typedef NS_ENUM(NSUInteger, TrivverLogLevel) {
    TrivverLogLevelInfo = 1,
    TrivverLogLevelWarning = 2,
    TrivverLogLevelError = 3,
};


void errorLog(NSString *format, ...);
void warningLog(NSString *format, ...);
void infoLog(NSString *format, ...);

