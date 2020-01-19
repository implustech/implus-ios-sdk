//
//  dataParams.h
//  ImplusAnalyticsSDK
//
//  Created by lin on 2019/12/20.
//  Copyright © 2019 lin. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface dataParams : UIView
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (copy, nonatomic) void (^Endedit)(NSDictionary *dict);
-(void)show;
@end

NS_ASSUME_NONNULL_END
