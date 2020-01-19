//
//  CrashViewController.m
//  ImplusAnalyticsSDK
//
//  Created by lin on 2019/12/20.
//  Copyright © 2019 lin. All rights reserved.
//

#import "CrashViewController.h"
//#import "IMRequestManager.h"

@interface CrashViewController ()
@property (weak, nonatomic) IBOutlet UITextView *textView;

@end
typedef struct Test
{
    int a;
    int b;
}Test;
@implementation CrashViewController

- (void)viewDidLoad {
    [super viewDidLoad];
//    [[IMRequestManager sharedInstance] uploadCacheDataWithSuccessBlock:^(id obj) {
//        self.textView.text = [self.textView.text stringByAppendingString:obj];
//    } failureBlock:^(id obj) {
//        self.textView.text = [self.textView.text stringByAppendingString:obj];
//    }];
    // Do any additional setup after loading the view from its nib.
}
- (IBAction)signaClick:(id)sender {
    //1.信号量
    Test *pTest = {1,2};
    free(pTest);
    pTest->a = 5;
}
- (IBAction)exceptionClick:(id)sender {
    NSArray *array= @[@"tom",@"xxx",@"ooo"];
    [array objectAtIndex:5];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
