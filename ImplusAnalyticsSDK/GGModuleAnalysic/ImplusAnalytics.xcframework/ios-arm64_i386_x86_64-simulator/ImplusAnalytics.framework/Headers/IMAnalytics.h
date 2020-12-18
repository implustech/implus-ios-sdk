//
//  IMAnalytics.h
//  ImplusAnalyticsSDK
//
//  Created by lin on 2019/12/17.
//  Copyright © 2019 lin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMRequestMacro.h"
#import "IMRequestManager.h"
#import "IMSignalHandler.h"
@class ParamModel;
@interface IMAnalytics : NSObject
typedef NS_ENUM(NSInteger, EventType){
    EventTypeFirstOpen = 0, //第一次安装打开
    EventTypeAppStart = 1,  //程序启动
    EventTypeScreenView = 2, //视图出现
    EventTypeAdsClick = 3,   //广告点击
    EventTypeAdsShow = 4,    //广告爆光
    EventTypeAdsRequest = 5, //请求
    EventTypeInAppPurchase = 6,
    EventTypeUserEngagement = 7, //请求
};
typedef NS_ENUM(NSInteger, ParamScreenType){
    ParamScreenNono = 0, //.nono
    ParamScreenHome = 1,  //homepage
    ParamScreenSet = 2, //Setting
    EParamScreenLock = 3,//lockscreen
};
typedef NS_ENUM(NSInteger, ParamPlaceType){
    ParamPlaceNono = 0, //.nono
    ParamPlaceClean = 1,  //quickClean
    ParamPlaceBoost = 2, //boost
    ParamPlaceInstall = 3,//install
};
typedef NS_ENUM(NSInteger, ParamAdSouceType){
    ParamAdSouceNono = 0, //.nono
    ParamAdSouceFacebook = 1,  //facebook
    ParamAdSouceAdmob = 2, //admob
    ParamAdSouceMobpup = 3,   //mobpup
};
typedef NS_ENUM(NSInteger, ParamFormatType){
    ParamFormatNono = 0, //.nono
    ParamFormatBanner = 1,  //banner
    ParamFormatInterstitial = 2, //Interstitial
};
/**
 注册AppKey

 @param appKey app应用的唯一标识符，token标识符
 */
+ (void)registerBigDataWithAppKey:(NSString *)appKey;

/**
 通过plist文件的方式初始化
 注意:
 1.用此方式,必须将appflow-app-token.plist文件导入工程, 否则将初始化失败
 2.不要修改plist原有的参数名和值
 */
+ (void)registerBigDataConfigImplusAnalyticsPlist;
/**
 注册用户ID
 
 @param userId 用户登录ID
 */
//+ (void)registerBigDataWithUserId:(NSString *)userId;

/**
 
 清除用户ID
 */
//+ (void)clearBigDataWithUserId;

/**
 上传大数据统计数据

 @param eventName 事件名称
 @param params 业务数据
 */
+ (void)uploadBigDataWithEvent:(NSString *)eventName
                        params:(NSDictionary *)params;

+ (void)uploadBigDataWithType:(EventType)eventType
                        params:(NSDictionary *)params;

+ (void)uploadBigDataWithEvent:(NSString *)eventName
                       params:(NSDictionary *)params successBlock:(SuccessBlock)successBlock failureBlock:(FailedBlock)failedBlock;

+ (void)uploadBigDataWithType:(EventType)eventType
params:(NSDictionary *)params successBlock:(SuccessBlock)successBlock failureBlock:(FailedBlock)failedBlock;

+ (void)uploadBigDataWithType:(EventType)eventType
                   paramModel:(ParamModel *)model;
+ (void)uploadBigDataWithType:(EventType)eventType
paramModel:(ParamModel *)model successBlock:(SuccessBlock)successBlock failureBlock:(FailedBlock)failedBlock;

+ (void)getRemoteConfigWithParam:(NSDictionary *)params successBlock:(SuccessBlock)successBlock failureBlock:(FailedBlock)failedBlock;

+ (void)disableFirstOpen;
/**
 关闭日志

 @param log 默认开启日志
 */
+ (void)closingLog:(BOOL)log;

@end

@interface ParamModel : NSObject
@property (assign,nonatomic) ParamScreenType screenType;
@property (assign,nonatomic) ParamPlaceType  placeType;
@property (assign,nonatomic) ParamAdSouceType adsouceType;
@property (assign,nonatomic) ParamFormatType  formatType;
@property (strong,nonatomic) NSDictionary *otherData;
-(NSDictionary *)params;
@end
