//
//  AppDelegate.m
//  ImplusAnalyticsSDK
//
//  Created by lin on 2019/12/17.
//  Copyright © 2019 lin. All rights reserved.
//

#import "AppDelegate.h"
#import <ImplusAnalyticsSDK/ImplusAnalyticsSDK.h>
#import "IQKeyBoardManager/IQKeyboardManager.h"
#define appKey @"eyJhbGciOiJSUzI1NiIsImtpZCI6IjAwMDEiLCJ0eXAiOiJKV1QifQ.eyJhdWQiOiJhOTI4MzA0My0xNTgyLTRjMDQtYjMzMy1kOTIyYjczZGI3YmIiLCJpYXQiOjE1NzcwODYxNjUsImlzcyI6Ik1vbmV0aXplciIsInN1YiI6IjVkZjA2OTIwN2QxOTJiMDAxMDFlMjUwYSJ9.ENTDlaSWNtUUMWwblpJYMUo00hdt1mfTcg1RHH2k5Pxb-LBpf1TmnwXNOoWBXaiO0CN7VKHxc8XeamCQPKpNTST3Tgjs-lFZcBZrO6Z1gwc-OcJBZIL6zPVSHCE1yGQCQhfQ5RyK-AFtIPHbf8SNV8ov_BnHhsyC43KyJIoh8-XYgEfDVoG8rdlRRKm0U6xb1dtCEQRHVTLmLPj9Hc_7fCTc2G-aTI7be-OkEm-9Q4APdL_2pAuXmJ9D-ZO0ShmoRvR1KXIiEs2XRLR5nNmhaptvqoxXtxXBgP-CX9H-MxyO_i8kdvPPrYPqo8Srs7olz2dvJw6hYDO2961irYGUKg"
@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [IMAnalytics registerBigDataWithAppKey:appKey];
    [IQKeyboardManager sharedManager].enable = YES;
    [IMAnalytics uploadBigDateWithType:EventTypeAppStart params:nil successBlock:^(id obj) {
         NSLog(@"%@",obj);
     } failureBlock:^(id obj) {
         NSLog(@"%@",obj);
     }];
    return YES;
}


- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}


@end
