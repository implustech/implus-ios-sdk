//
//  dataParamsCellTableViewCell.m
//  ImplusAnalyticsSDK
//
//  Created by lin on 2019/12/20.
//  Copyright © 2019 lin. All rights reserved.
//

#import "dataParamsCellTableViewCell.h"

@implementation dataParamsCellTableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    self.textView.delegate = self;
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string
{
    NSMutableString *searchKey = [textField.text mutableCopy];
    [searchKey replaceCharactersInRange:range withString:string];
    if (searchKey.length > 0) {
        if (self.Endedit) {
            self.Endedit(self.text.text, searchKey);
        }
    }
    return YES;
}
@end
