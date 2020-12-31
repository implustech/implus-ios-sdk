# ImplusAnalytics SDK

##  Add a appflow-app-token configuration file

``` 
Click appflow-app-token.plist, Move your config file into the root of your Xcode project. If prompted, select to add the config file to all targets.

```

## Install  with  CocoaPods

``` 
inhibit_all_warnings!
platform :ios, '9.0'

target :'MyApp' do
    
    use_frameworks!

    pod 'ImplusAnalytics','~>1.0.0'

end>
```

##  Importing the ImplusAnalytics SDK header file
```
#import <ImplusAnalyticsSDK/ImplusAnalyticsSDK.h>
```

## Setup

Register ImplusAnalytics SDK in AppDelegate with AppKey

```
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [IMAnalytics registerBigDataWithAppKey:@"123456"];
    return YES;
}
```

***
# Events
ImplusAnalytics SDK provides you with a default event list. If it's not sufficient for you can create your custom events. Below you will find instructions on how to send events with and without parameters.

## Default event types
* EventTypeFirstOpen - First time app opened
* EventTypeAppStart - App launched
* EventTypeScreenView - Current screen
* EventTypeAdsClick - Ad tapped
* EventTypeAdsShow - Ad displayed
* EventTypeAdsRequest - Ad requested
* EventTypeInAppPurchase - In app purchases completed
* EventTypeUserEngagement - User engagement

## Sending default events
####  Without parameters
```
[IMAnalytics uploadBigDataWithType:EventType params:nil]
```

#### With custom parameters
```
 [IMAnalytics uploadBigDataWithType:EventType params:@{@"key":@"value"}];
```

#### With ParamModel
```
ParamModel *model = [ParamModel new];
model.screenType =  ParamScreenHome;
[IMAnalytics uploadBigDataWithType:EventType paramModel:model];
```
 
 `ParamModel` parameters:
 * `screenType`
 * `placeType`
 * `adsouceType`
 * `formatType`

If the parameter was not set it will have a default value.

## Sending custom events
```
[IMAnalytics uploadBigDataWithEvent:@"event_name" params:@{@"key":@"value"}];
```
Parameter settings can be the same as sending default event

## Sending events with callback
```
//obj type is string
[IMAnalytics uploadBigDataWithType:EventTypeUserEngagement params:@{kEngagementTimeMsec:tMSimestamp,kScreenViewName:kHomepage} successBlock:^(id obj) {
    
} failureBlock:^(id obj) {
    
}];
```

