//
//  IMRequestMacro.h
//  ImplusAnalyticsSDK
//
//  Created by lin on 2019/12/17.
//  Copyright © 2019 lin. All rights reserved.
//

#ifndef IMRequestMacro_h
#define IMRequestMacro_h

typedef NS_ENUM(NSInteger, IMRequestType) {
    IMRequestTypeGet,
    IMRequestTypePost,
    IMRequestTypeDelete,
    IMRequestTypePut
};
#define SDKVersion @"1.1.0"

/// screen name ID (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kScreenViewName : @"10_matches_won",
///       // ...
///     };
/// </pre>
static NSString *const kScreenViewName NS_SWIFT_NAME(kScreenViewName) =
@"screeen_name";

/// placement (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kPlacement : @"10_matches_won",
///       // ...
///     };
/// </pre>
static NSString *const kPlacement NS_SWIFT_NAME(kPlacement) =
@"splacement";

/// ad_source (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kAdSource : @"10_matches_won",
///       // ...
///     };
/// </pre>
static NSString *const kAdSource NS_SWIFT_NAME(kAdSource) =
@"ad_source";

/// format (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFormat : @"10_matches_won",
///       // ...
///     };
/// </pre>
static NSString *const kFormat NS_SWIFT_NAME(kFormat) =
@"format";

/// format (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFormat : @"10_matches_won",
///       // ...
///     };
/// </pre>
static NSString *const kEngagementTimeMsec NS_SWIFT_NAME(kEngagementTimeMsec) =
@"engagement_time_msec";
/// format (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kScreenViewName : kHomepage,
///       // ...
///     };
/// </pre>
static NSString *const kHomepage NS_SWIFT_NAME(kHomepage) =
@"homepage";

/// format (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kScreenViewName : kHomepage,
///       // ...
///     };
/// </pre>
static NSString *const kSetting NS_SWIFT_NAME(kSetting) =
@"setting";
/// format (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kScreenViewName : kSetting,
///       // ...
///     };
/// </pre>
static NSString *const kLockscreen NS_SWIFT_NAME(kLockscreen) =
@"lockscreen";
/// format (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kPlacement : kQuickClean,
///       // ...
///     };
/// </pre>
static NSString *const kQuickClean NS_SWIFT_NAME(kQuickClean) =
@"quick_clean";
/// <pre>
///     NSDictionary *params = @{
///       kPlacement : kBoost,
///       // ...
///     };
/// </pre>
static NSString *const kBoost NS_SWIFT_NAME(kBoost) =
@"boost";
/// <pre>
///     NSDictionary *params = @{
///       kPlacement : kQuickClean,
///       // ...
///     };
/// </pre>
static NSString *const kInstall NS_SWIFT_NAME(kQuickClean) =
@"install";
/// <pre>
///     NSDictionary *params = @{
///       kAdSource : kFaceBook,
///       // ...
///     };
/// </pre>
static NSString *const kFaceBook NS_SWIFT_NAME(kFaceBook) =
@"facebook";
/// <pre>
///     NSDictionary *params = @{
///       kAdSource : kAdmob,
///       // ...
///     };
/// </pre>
static NSString *const kAdmob NS_SWIFT_NAME(kAdmob) =
@"admob";
/// <pre>
///     NSDictionary *params = @{
///       kAdSource : kFaceBook,
///       // ...
///     };
/// </pre>
static NSString *const kMobpup NS_SWIFT_NAME(kMobpup) =
@"mobpup";
/// <pre>
///     NSDictionary *params = @{
///       kFormat : kBanner,
///       // ...
///     };
/// </pre>
static NSString *const kBanner NS_SWIFT_NAME(kBanner) =
@"banner";
/// <pre>
///     NSDictionary *params = @{
///       kFormat : kInterstitial,
///       // ...
///     };
/// </pre>
static NSString *const kInterstitial NS_SWIFT_NAME(kInterstitial) =
@"inserstitial";
// 最大并发数
static const int _maxCurrentNum = 3;
//定时器每隔60s查询一次数据库
#define kTimerDuration 60

#endif /* IMRequestMacro_h */
