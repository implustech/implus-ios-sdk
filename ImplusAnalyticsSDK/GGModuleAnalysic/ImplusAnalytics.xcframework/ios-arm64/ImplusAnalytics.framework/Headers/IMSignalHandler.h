//
//  IMSignalHandler.h
//  ImplusAnalyticsSDK
//
//  Created by lin on 2019/12/17.
//  Copyright © 2019 lin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IMSignalHandler : NSObject

//+(void)saveCreash:(NSString *)exceptionInfo;

@end

void InstallSignalHandler(void);
