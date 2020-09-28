# IMAnalyticsSDK使用方法

## 使用CocoaPods将ImplusAnalyticsSDK集成到您的Xcode项目中，请在以下位置指定Podfile：
*
## install  with  CocoaPods

``` 
inhibit_all_warnings! #屏蔽所有warning
platform :ios, '9.0'

target :'yrcs' do
    
    use_frameworks!

    pod 'ImplusAnalytics','~>1.0.0'

end>
```

## 安装ImplusAnalyticsSDK
* 打开终端cd到目标Podfile文件路径, 执行pod install安装SDK
```
pod install
```

## 导入ImplusAnalyticsSDK头文件
```
#import <ImplusAnalyticsSDK/ImplusAnalyticsSDK.h>
```

## 在AppDelegate中注册SDK分配的项目指定AppKey
## Register in AppDelegate with AppKey
```
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [IMAnalytics registerBigDataWithAppKey:@"123456"];
    return YES;
}
```

## 上报统计数据  公共事件
## Report statistics public event


## 第一次安装
## First installation
```
[IMAnalytics uploadBigDataWithType:EventTypeFirstOpen params:nil]

```
## App 启动
##The App launched
```
[IMAnalytics uploadBigDataWithType:EventTypeAppStart params:nil];

```
## 当前UV
##The App current uv
```
 [IMAnalytics uploadBigDataWithType:EventTypeScreenView params:@{kScreenViewName:kHomepage}];
 or 
 ParamModel *model = [ParamModel new];
 model.screenType =  ParamScreenHome;
 [IMAnalytics uploadBigDataWithType:EventTypeScreenView paramModel:model];

```
## 广告点击
# ads click
```
[IMAnalytics uploadBigDataWithType:EventTypeAdsClick params:@{kPlacement:kQuickClean,kFormat:kBanner}];
 or 
 ParamModel *model = [ParamModel new];
 model.placeType =  ParamPlaceClean;
 model.formatType = ParamFormatBanner;
 [IMAnalytics uploadBigDataWithType:EventTypeAdsClick paramModel:model];
```
## 广告显示
# ads show
```
[IMAnalytics uploadBigDataWithType:EventTypeAdsShow params:@{kPlacement:kQuickClean,kFormat:kBanner}];
 or 
 ParamModel *model = [ParamModel new];
 model.placeType =  ParamPlaceClean;
 model.formatType = ParamFormatBanner;
[IMAnalytics uploadBigDataWithType:EventTypeAdsShow paramModel:model];
```
## 广告请求
# ads request
```
[IMAnalytics uploadBigDataWithType:EventTypeAdsRequest params:@{kPlacement:kQuickClean,kFormat:kBanner}];
 or 
 ParamModel *model = [ParamModel new];
 model.placeType =  ParamPlaceClean;
 model.formatType = ParamFormatBanner;
[IMAnalytics uploadBigDataWithType:EventTypeAdsRequest paramModel:model];
```
## In app purchase
```[IMAnalytics uploadBigDataWithType:EventTypeInAppPurchase params:@{kPlacement:kQuickClean,kFormat:kBanner}];
 or 
 ParamModel *model = [ParamModel new];
 model.placeType =  ParamPlaceClean;
 model.formatType = ParamFormatBanner;
[IMAnalytics uploadBigDataWithType:EventTypeInAppPurchase paramModel:model];

```

## ev_User_Engagement
##  ev_User_Engagement
```
NSString *tMSimestamp = [NSString stringWithFormat:@"%f",[[IMDeviceInfoManager sharedManager] getCurrentMSimestamp]];
[IMAnalytics uploadBigDataWithType:EventTypeUserEngagement params:@{kEngagementTimeMsec:tMSimestamp,kScreenViewName:kHomepage}];
 or 
 NSString *tMSimestamp = [NSString stringWithFormat:@"%f",[[IMDeviceInfoManager sharedManager] getCurrentMSimestamp]];
 ParamModel *model = [ParamModel new];
 model.screenType = ParamScreenHome;
 model.otherData = @{kEngagementTimeMsec:tMSimestamp};
[IMAnalytics uploadBigDataWithType:EventTypeUserEngagement paramModel:model];
```
## 如果上面方法中，需要回调函数，用类似下面的方法
## If you need a callback in the above method, do something like this
```
//obj type is string
[IMAnalytics uploadBigDataWithType:EventTypeUserEngagement params:@{kEngagementTimeMsec:tMSimestamp,kScreenViewName:kHomepage} successBlock:^(id obj) {
    
} failureBlock:^(id obj) {
    
}];
```
## 如果上面的枚举不能满足需求，请用下面方法扩展  私定事件
## If the above enumeration does not meet the requirements, extend it as follows (Private custom event)
```
[IMAnalytics uploadBigDataWithEvent:@"event_name" params:@{
                                                                 @"name" : @"123",
                                                                 @"time" : @"456"
                                                                 }];
```


