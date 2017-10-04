//
//  ViewController.m
//  TrivverDemo
//
//  Created by Han Han on 8/16/17.
//  Copyright © 2017 Saritasa. All rights reserved.
//

#import "ViewController.h"
#import <TrivverSDK/TrivverSDK.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    SMUserSession *session = [[SMUserSession alloc] init];
    session.firstName = @"John";
    session.lastName = @"Doe";
    session.sex = @"m";
    session.state = @"CA";
    session.city = @"New York City";
    session.country = @"USA";
    session.ipAddr = @"127.0.0.1";
    session.deviceId = [SmartTabConfig deviceUID];

    SmartTabConfig *config = [SmartTabConfig defaultConfig];
    [config configSmartTabWithUserSession:session
                                  gameUID:@"7abe3b3e-8c23-45b1-99e0-6514178c62f5"
                              gameVersion:@"1"
                            enableLogging:true
                                 logLevel:TrivverLogLevelInfo];
    SmartTabView *smartTabView = [[SmartTabView alloc] init];
    [smartTabView showAtWindow];

}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
