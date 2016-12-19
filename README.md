# YYStarGradeView
星星评分，支持手势。
![starView.gif](http://upload-images.jianshu.io/upload_images/840747-6694c46e9b9b7bed.gif?imageMogr2/auto-orient/strip)
如何使用？这个非常简单，引入头文件，简单初始化一下就好了,是不是非常简单啊？
```objc
YYStarView *starView = [[YYStarView alloc] initWithFrame:CGRectMake(10, 100, 300, 40) numberOfStars:5];
starView.scorePercent = 0.3;
starView.allowIncompleteStar = YES;
starView.hasAnimation = YES;
[self.view addSubview:starView];
```
具体说明请见[我的简书](http://www.jianshu.com/p/5c9554d16b28), 或者直接下载demo进行学习。
