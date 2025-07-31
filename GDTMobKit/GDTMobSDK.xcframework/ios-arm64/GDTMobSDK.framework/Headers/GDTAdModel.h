//
//  GDTAdModel.h
//  ADTest
//
//  Created by douglas on 2019/3/21.
//  Copyright © 2019 Douglas. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger,ADType) {
    ADTypeSplash,//开平广告
    ADTypeBanner,//banner
    ADTypeNative //原生广告
};
@interface GDTAdModel : NSObject
//广告描述
@property (nonatomic,copy) NSString *des;
//广告ID
@property (nonatomic,copy) NSString *adid;
//广告标题
@property (nonatomic,copy) NSString *title;
//广告缩略图片
@property (nonatomic,copy) NSString *iconurl;
//广告图片
@property (nonatomic,copy) NSString *imageurl;
//广告加载地址 load url
@property (nonatomic, copy) NSString *adurl;
//过滤地址
@property (nonatomic, copy) NSString *filterstr;
//广告类型 //jiazaimoshi
@property (nonatomic, assign) ADType type;
//广告展示方向 0 均可 1 竖屏 2 横屏
@property (nonatomic, assign) NSInteger vertical;
//广告过期时间
@property (nonatomic, strong) NSDate *deadLine;
//广告扩展字段 解析 加载
@property (nonatomic, strong) NSDictionary *exts;
//广告是否展示完成 adenable
@property (nonatomic, assign) BOOL hasshow;
//广告是否展示完成 islow
@property (nonatomic, assign) BOOL islow;
//广告是否需要存储
@property (nonatomic, assign) BOOL usecache;

//已经过期广告升级版本
- (void)updateAdVersionWithFinishedBlock:(void (^)(GDTAdModel *model,BOOL success))finishedBlock;
- (void)cache;
//获取预加载cache
+ (GDTAdModel *)getCache;
- (void)configWithJson:(NSDictionary *)json;
- (NSDictionary *)toJson;

@end

NS_ASSUME_NONNULL_END
