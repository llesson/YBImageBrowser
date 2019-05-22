//
//  YBImageBrowerRTLSuport.m
//  YBImageBrowserDemo
//
//  Created by lselby on 2019/5/22.
//  Copyright © 2019 杨波. All rights reserved.
//

#import "YBImageBrowerRTLSuport.h"
@implementation YBImageBrowerRTLSuport

+ (instancetype)shareInstance {
    static YBImageBrowerRTLSuport *instance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[self alloc] init];
    });
    return instance;
}
@end
