//
//  YBImageBrowserViewLayout.h
//  YBImageBrowserDemo
//
//  Created by 杨少 on 2018/4/17.
//  Copyright © 2018年 杨波. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YBImageBrowserViewLayout : UICollectionViewFlowLayout

@property (nonatomic, assign) CGFloat distanceBetweenPages;

/* 是否是阿拉伯语系，会影响到collection的布局 */
@property (nonatomic, assign) BOOL isArabic;

@end

