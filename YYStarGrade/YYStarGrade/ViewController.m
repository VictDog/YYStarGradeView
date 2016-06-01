//
//  ViewController.m
//  YYStarGrade
//
//  Created by Ray on 16/6/1.
//  Copyright © 2016年 YY. All rights reserved.
//

#import "ViewController.h"
#import "YYStarView.h"

@interface ViewController ()
@property (nonatomic, strong) YYStarView *starView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.starView = [[YYStarView alloc] initWithFrame:CGRectMake(10, 100, 300, 40) numberOfStars:5];
    self.starView.scorePercent = 0.3;
    self.starView.allowIncompleteStar = YES;
    self.starView.hasAnimation = YES;
    [self.view addSubview:self.starView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
