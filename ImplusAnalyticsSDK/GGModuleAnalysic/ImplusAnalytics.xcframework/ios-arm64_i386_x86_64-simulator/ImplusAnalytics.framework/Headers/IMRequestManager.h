//
//  IMRequestManager.h
//  ImplusAnalyticsSDK
//
//  Created by lin on 2019/12/17.
//  Copyright © 2019 lin. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, IMSendDataType){
    IMSendDataTypeEvent = 0,
    IMSendDataTypeRemoteConfig
};

@class IMRequest;

//@class IMRequest;
/**
 *  成功时调用的Block
 */
typedef void (^SuccessBlock)(id obj);

/**
 *  失败时调用的Block
 */
typedef void (^FailedBlock)(id obj);

@interface IMRequestManager : NSObject

+ (instancetype)sharedInstance;

- (void)uploadCacheDataWithSuccessBlock:(SuccessBlock)successBlock failureBlock:(FailedBlock)failedBlock;

- (void)sendRequest:(IMRequest *)request successBlock:(SuccessBlock)successBlock failureBlock:(FailedBlock)failedBlock;

- (void)sendRequest:(IMRequest *)request dataType:(IMSendDataType)dataType successBlock:(SuccessBlock)successBlock failureBlock:(FailedBlock)failedBlock;

@end
