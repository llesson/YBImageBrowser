//
//  YBImageBrowserProgressView.h
//  YBImageBrowserDemo
//
//  Created by 杨波 on 2018/9/1.
//  Copyright © 2018年 杨波. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YBImageBrowserProgressView;

@interface UIView (YBImageBrowserProgressView)

- (void)yb_showProgressViewWithValue:(CGFloat)progress;

- (void)yb_showProgressViewLoading;

- (void)yb_showProgressViewWithText:(NSString *)text click:(nullable void(^)(void))click;

- (void)yb_hideProgressView;

@property (nonatomic, strong, readonly) YBImageBrowserProgressView *yb_progressView;

@property (nonatomic, assign) CGFloat yb_progressRadius;

@end

@interface YBImageBrowserProgressView : UIView

- (void)showProgress:(CGFloat)progress;

- (void)showLoading;

- (void)showText:(NSString *)text click:(void(^)(void))click;

//进度条的宽度
@property (nonatomic, assign) CGFloat progressRadius;

@end

NS_ASSUME_NONNULL_END
