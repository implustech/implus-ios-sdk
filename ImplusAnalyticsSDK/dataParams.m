//
//  dataParams.m
//  ImplusAnalyticsSDK
//
//  Created by lin on 2019/12/20.
//  Copyright © 2019 lin. All rights reserved.
//

#import "dataParams.h"
#import <ImplusAnalytics/ImplusAnalytics.h>
#import "dataParamsCellTableViewCell.h"

@interface dataParams()<UITableViewDelegate,UITableViewDataSource>
@property (strong, nonatomic) NSArray *dataSoure;
@property (strong, nonatomic) NSMutableDictionary *dict;
@end
@implementation dataParams
-(void)awakeFromNib{
    [super awakeFromNib];
    self.dict = [NSMutableDictionary dictionary];
    self.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.4];
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(hide)];
//    [self.tableView registerClass:[dataParamsCellTableViewCell class] forCellReuseIdentifier:@"dcell"];
//    [self.tableView registerNib:@"dataParamsCellTableViewCell" forCellReuseIdentifier:@"dcell"];
    [self.tableView registerNib:[UINib nibWithNibName:@"dataParamsCellTableViewCell" bundle:[NSBundle mainBundle]] forCellReuseIdentifier:@"dcell"];
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    [self addGestureRecognizer:tap];
    self.tableView.rowHeight = 44;
}
- (void)hide{
    [UIView animateWithDuration:0.2 animations:^{
        CGAffineTransformMakeTranslation(0, [UIScreen mainScreen].bounds.size.height);
    } completion:^(BOOL finished) {
        [self removeFromSuperview];
    }];
}
- (void)show{
    [[UIApplication sharedApplication].keyWindow addSubview:self];
}
- (IBAction)OKCLICK:(id)sender {
    [self endEditing:YES];
    if (self.Endedit) {
        self.Endedit(self.dict);
    }
    [self hide];
}
#pragma mark - UITableViewDelegate,UITableViewDataSource
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return self.dataSoure.count;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    dataParamsCellTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"dcell"];
    cell.text.text = self.dataSoure[indexPath.row];
    cell.Endedit = ^(NSString * _Nonnull name, NSString * _Nonnull value) {
        if (value.length >0) {
            [self.dict setObject:value forKey:name];
        }
        else{
            [self.dict removeObjectForKey:name];
        }
    };
    return cell;
}
/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

-(NSArray *)dataSoure{
    if (!_dataSoure) {
        _dataSoure = @[kScreenViewName,kPlacement,kAdSource,kFormat,kEngagementTimeMsec];
    }
    return _dataSoure;
}
@end
