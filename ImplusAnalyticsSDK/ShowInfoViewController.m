//
//  ShowInfoViewController.m
//  ImplusAnalyticsSDK
//
//  Created by lin on 2019/12/19.
//  Copyright © 2019 lin. All rights reserved.
//

#import "ShowInfoViewController.h"
#import <ImplusAnalytics/ImplusAnalytics.h>
#import "dataParams.h"
@interface ShowInfoViewController ()
@property (weak, nonatomic) IBOutlet UITextView *textView;
@property (weak, nonatomic) IBOutlet UILabel *threadNubers;
@property (weak, nonatomic) IBOutlet UILabel *usedthread;
@property (weak, nonatomic) IBOutlet UILabel *timeup;
@property (weak, nonatomic) IBOutlet UILabel *dataNumbers;
@property (weak, nonatomic) IBOutlet UITextField *dataUp;
@property (strong, nonatomic) NSDictionary *dict;
// 定时器，每隔60s查询一次Fmdb数据库里面的request
@property (nonatomic, strong) NSTimer *timer;
@end

@implementation ShowInfoViewController
- (IBAction)showDataparamsView:(id)sender {
    dataParams *view = [[NSBundle mainBundle] loadNibNamed:@"dataParams" owner:nil options:nil].firstObject;
    view.frame = [[UIScreen mainScreen] bounds];
    view.Endedit = ^(NSDictionary * _Nonnull dict) {
        if (dict.allValues.count >0) {
             self.dict = dict;
        }
        else{
            self.dict = @{@"test":@"test"};
        }
    };
    [view show];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    [self updataUIWithString:@""];
    self.dict = @{@"test":@"test"};
//    NSString *tMSimestamp = [NSString stringWithFormat:@"%f",[[IMDeviceInfoManager sharedManager] getCurrentMSimestamp]];
    ParamModel *model = [ParamModel new];
    model.screenType = ParamScreenHome;
    [IMAnalytics uploadBigDataWithType:EventTypeUserEngagement paramModel:model];
    //obj type is string
    [IMAnalytics uploadBigDataWithType:EventTypeUserEngagement params:@{kScreenViewName:kHomepage} successBlock:^(id obj) {

    } failureBlock:^(id obj) {

    }];
//    [IMAnalytics  uploadBigDateWithType:EventTypeAdsRequest paramModel:model successBlock:^(id obj) {
//         [self updataUIWithString:obj];
//    } failureBlock:^(id obj) {
//         [self updataUIWithString:obj];
//    }];

    [self startTimer];
}
- (IBAction)upLoad:(id)sender {
    [IMAnalytics uploadBigDataWithEvent:self.eventName params:self.dict successBlock:^(id obj) {
        [self updataUIWithString:obj];
    } failureBlock:^(id obj) {
        [self updataUIWithString:obj];
    }];
}
- (IBAction)whileUp:(UIButton *)sender {
    int i = 10;
    while (i>0) {
        [IMAnalytics uploadBigDataWithEvent:self.eventName params:self.dict successBlock:^(id obj) {
            [self updataUIWithString:obj];
        } failureBlock:^(id obj) {
            [self updataUIWithString:obj];
        }];
//        [IMAnalytics uploadBigDataWithEvent:self.eventName params:self.dataUp.text.length>0 ? @{@"test":self.dataUp.text}:@{@"test":@"test"}];
        i--;
    }
}
- (void)updataUIWithString:(NSString *)backString{
//    self.timeup.text = [NSString stringWithFormat:@"%d",kTimerDuration];
//    self.threadNubers.text = [NSString stringWithFormat:@"%d",_maxCurrentNum];
//    [[IMRequestCache sharedInstance] allRequestsFromFmdbWihtClass:[IMRequest class] finishBlock:^(NSArray *requestArr) {
//        self.dataNumbers.text = [NSString stringWithFormat:@"%ld",requestArr.count];
//    }];
    self.textView.text = [self.textView.text stringByAppendingString:backString];
//    [self.textView scrollsTo]
}

#pragma mark - Timer
- (void)startTimer
{
    dispatch_async(dispatch_get_main_queue(), ^{
        //      dispatch_async(self.addDelQueue, ^{
        [self.timer invalidate];
        self.timer = [NSTimer scheduledTimerWithTimeInterval:1 target:self selector:@selector(updateTimer) userInfo:nil repeats:true];
    });
}

- (void)updateTimer
{
//    [[IMRequestCache sharedInstance] allRequestsFromFmdbWihtClass:[IMRequest class] finishBlock:^(NSArray *requestArr) {
//       self.dataNumbers.text = [NSString stringWithFormat:@"%ld",requestArr.count];
//    }];
}
@end
