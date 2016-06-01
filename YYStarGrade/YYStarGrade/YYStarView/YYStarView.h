//
//  YYStarView.h
//  YYStarGrade
//
//  Created by Ray on 16/6/1.
//  Copyright © 2016年 YY. All rights reserved.
//

#import <UIKit/UIKit.h>

@class YYStarView;
@protocol YYStarViewDelegate <NSObject>
@optional

// 星星百分比（得分值）发生变化的代理
- (void)starView:(YYStarView *)starView scorePercentDidChange:(CGFloat)newScorePercent;
@end

@interface YYStarView : UIView

@property (nonatomic, assign) CGFloat scorePercent;//得分值，范围为0~1，默认1
@property (nonatomic, assign) BOOL hasAnimation;//是否允许动画，默认为NO
@property (nonatomic, assign) BOOL allowIncompleteStar;//评分时是否允许不是整星，默认为NO

@property (nonatomic, weak) id<YYStarViewDelegate>delegate;
- (instancetype)initWithFrame:(CGRect)frame numberOfStars:(NSInteger)numberOfStars;
@end
