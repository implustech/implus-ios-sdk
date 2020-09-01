//
//  ViewController.m
//  ImplusAnalyticsSDK
//
//  Created by lin on 2019/12/17.
//  Copyright © 2019 lin. All rights reserved.
//

#import "ViewController.h"
//#import "IMDeviceInfoManager.h"
#import <ImplusAnalytics/ImplusAnalytics.h>
#import "ShowInfoViewController.h"
#import "CrashViewController.h"

@interface ViewController ()<UITableViewDelegate,UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) NSArray *dataSoure;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"选择你要上传的事件类型";
//    NSString *str =  [IMDeviceInfoManager sharedManager].appsflyer_device_id;//[[IMDeviceInfoManager sharedManager] getCurrenttime];
    // Do any additional setup after loading the view.
//    [IMAnalytics uploadBigDataWithEvent:@"test" params:@{@"test":@"test"}];
}

#pragma mark - UITableViewDelegate,UITableViewDataSource
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return self.dataSoure.count;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell"];
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"cell"];
    }
    cell.textLabel.text = self.dataSoure[indexPath.row];
    return cell;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    if (indexPath.row == self.dataSoure.count - 1) {
        CrashViewController *vc = [CrashViewController new];
        [self.navigationController pushViewController:vc animated:YES];
        return;
    }
    ShowInfoViewController *vc = [ShowInfoViewController new];
    vc.eventName = self.dataSoure[indexPath.row];
    [self.navigationController pushViewController:vc animated:YES];
}
#pragma mark - getter
-(NSArray *)dataSoure{
    if (!_dataSoure) {
        _dataSoure = @[@"ev_first_open",@"ev_app_start",@"ev_scree_view",@"ev_ads_click",@"ev_ads_show",@"ev_ads_request",@"ev_user_engagement",@"falal_crash"];
    }
    return _dataSoure;
}
@end
