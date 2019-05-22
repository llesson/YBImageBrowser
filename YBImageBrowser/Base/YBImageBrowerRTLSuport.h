//
//  YBImageBrowerRTLSuport.h
//  YBImageBrowserDemo
//
//  Created by lselby on 2019/5/22.
//  Copyright © 2019 杨波. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YBImageBrowerRTLSuport : NSObject

+ (instancetype)shareInstance;

@property (nonatomic, assign) BOOL isArabic; ///是否是阿拉伯rtl布局

@end

NS_ASSUME_NONNULL_END
