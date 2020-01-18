//
//  dataParamsCellTableViewCell.h
//  ImplusAnalyticsSDK
//
//  Created by lin on 2019/12/20.
//  Copyright © 2019 lin. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface dataParamsCellTableViewCell : UITableViewCell<UITextFieldDelegate>
@property (copy, nonatomic) void (^Endedit)(NSString *name ,NSString *value);
@property (weak, nonatomic) IBOutlet UILabel *text;
@property (weak, nonatomic) IBOutlet UITextField *textView;

@end

NS_ASSUME_NONNULL_END
