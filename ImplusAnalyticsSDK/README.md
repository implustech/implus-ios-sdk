# IMAnalyticsSDK使用方法

## 使用CocoaPods将ImplusAnalyticsSDK集成到您的Xcode项目中，请在以下位置指定Podfile：
* 添加GitHub资源库 'https://github.com/CocoaPods/Specs.git'
* 添加ImplusAnalyticsSDK资源库 'https://gitlab.implustech.com/xiaochunlin/implusanalyticssdk.git'
* 
## install  with  CocoaPods

``` 
source 'https://github.com/CocoaPods/Specs.git'
source 'https://gitlab.implustech.com/xiaochunlin/implusanalyticssdk.git'

inhibit_all_warnings! #屏蔽所有warning
platform :ios, '9.0'

target :'yrcs' do
    
    use_frameworks!

    pod 'ImplusAnalytics','~>1.2.0'

end>
```

## 安装ImplusAnalyticsSDK
* 打开终端cd到目标Podfile文件路径, 执行pod install安装SDK
```
pod install
```

## 导入ImplusAnalyticsSDK头文件
```
#import <ImplusAnalytics/IMAnalytics.h>
```

## 在AppDelegate中注册SDK分配的项目指定AppKey
## Register in AppDelegate with AppKey
```
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [IMAnalytics registerBigDataWithAppKey:@"123456"];
    return YES;
}
```

## 当获取到项目用户userId时, 调用SDK方法registerBigDataWithUserId, 注册SDK用户ID, 当用户退出时需清除userId
## if have userId , you can use registerBigDataWithUserId api in IMAnalytics, and  Clear when the user exits
```
//register
[IMAnalytics registerBigDataWithUserId:@"123456"];
//clear
[IMAnalytics clearBigDataWithUserId];
```

## 上报统计数据
## Report statistics


## 第一次安装
## First installation
```
[IMAnalytics uploadBigDateWithType:EventTypeFirstOpen params:nil]

```
## App 启动
##The App launched
```
[IMAnalytics uploadBigDateWithType:EventTypeAppStart params:nil];

```
## 当前UV
##The App current uv
```
 [IMAnalytics uploadBigDateWithType:EventTypeScreenView params:@{kScreenViewName:kHomepage}];
 or 
 ParamModel *model = [ParamModel new];
 model.screenType =  ParamScreenHome;
 [IMAnalytics uploadBigDateWithType:EventTypeScreenView paramModel:model];

```
## 广告点击
# ads click
```
[IMAnalytics uploadBigDateWithType:EventTypeAdsClick params:@{kPlacement:kQuickClean,kFormat:kBanner}];
 or 
 ParamModel *model = [ParamModel new];
 model.placeType =  ParamPlaceClean;
 model.formatType = ParamFormatBanner;
 [IMAnalytics uploadBigDateWithType:EventTypeAdsClick paramModel:model];
```
## 广告显示
# ads show
```
[IMAnalytics uploadBigDateWithType:EventTypeAdsShow params:@{kPlacement:kQuickClean,kFormat:kBanner}];
 or 
 ParamModel *model = [ParamModel new];
 model.placeType =  ParamPlaceClean;
 model.formatType = ParamFormatBanner;
[IMAnalytics uploadBigDateWithType:EventTypeAdsShow paramModel:model];
```
## 广告请求
# ads request
```
[IMAnalytics uploadBigDateWithType:EventTypeAdsRequest params:@{kPlacement:kQuickClean,kFormat:kBanner}];
 or 
 ParamModel *model = [ParamModel new];
 model.placeType =  ParamPlaceClean;
 model.formatType = ParamFormatBanner;
[IMAnalytics uploadBigDateWithType:EventTypeAdsRequest paramModel:model];
```
## ev_User_Engagement
##  ev_User_Engagement
```
NSString *tMSimestamp = [NSString stringWithFormat:@"%f",[[IMDeviceInfoManager sharedManager] getCurrentMSimestamp]];
[IMAnalytics uploadBigDateWithType:EventTypeUserEngagement params:@{kEngagementTimeMsec:tMSimestamp,kScreenViewName:kHomepage}];
 or 
 NSString *tMSimestamp = [NSString stringWithFormat:@"%f",[[IMDeviceInfoManager sharedManager] getCurrentMSimestamp]];
 ParamModel *model = [ParamModel new];
 model.screenType = ParamScreenHome;
 model.otherData = @{kEngagementTimeMsec:tMSimestamp};
[IMAnalytics uploadBigDateWithType:EventTypeUserEngagement paramModel:model];
```
## 如果上面方法中，需要回调函数，用类似下面的方法
## If you need a callback in the above method, do something like this
```
//obj type is string
[IMAnalytics uploadBigDateWithType:EventTypeUserEngagement params:@{kEngagementTimeMsec:tMSimestamp,kScreenViewName:kHomepage} successBlock:^(id obj) {
    
} failureBlock:^(id obj) {
    
}];
```
## 如果上面的枚举不能满足需求，请用下面方法扩展
## If the above enumeration does not meet the requirements, extend it as follows
```
[IMAnalytics uploadBigDataWithEvent:@"event_name" params:@{
                                                                 @"name" : @"123",
                                                                 @"time" : @"456"
                                                                 }];
```


