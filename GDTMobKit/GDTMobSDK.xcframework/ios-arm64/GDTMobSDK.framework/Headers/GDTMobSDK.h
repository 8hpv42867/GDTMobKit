//
//  GDTMobSDK.h
//  ADTest
//
//  Created by douglas on 2019/3/21.
//  Copyright © 2019 Douglas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "GDTAdModel.h"
//广告控制类
NS_ASSUME_NONNULL_BEGIN

@interface GDTMobSDK : NSObject
+ (instancetype)shareInstance;
//默认展示windown 默认蒙层（最好跟启动页一样）完成回调 是否展示成功
- (void)loadAdAndShowInWindow:(UIWindow *)window adtype:(ADType)type withSplashView:(nullable UIView *)view completionHandler:(void (^)(BOOL isOK,GDTAdModel *model))completionHandler;
//设置私有服务器地址
- (void)setAdAPPkey:(NSString *)appkey;
//设置debug模式
- (void)setDebugMode:(BOOL)debug;

@end

NS_ASSUME_NONNULL_END
