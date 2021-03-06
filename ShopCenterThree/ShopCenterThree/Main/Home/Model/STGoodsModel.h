//
//  STGoodsModel.h
//  ST
//
//  Created by 周鑫 on 2018/9/28.
//  Copyright © 2018年 TJ. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface STGoodsModel : NSObject

// Id
@property (nonatomic,strong) NSString *product_id;
// 店铺Id
@property (nonatomic,strong) NSString *shop_id;
// 图片
@property (nonatomic,strong) NSString *product_pic;
// 名字
@property (nonatomic,strong) NSString *name;
// 价格
@property (nonatomic,strong) NSString *price;
// 分类
@property (nonatomic,strong) NSString *category;
// 详情
@property (nonatomic,strong) NSString *detail;
// 集合
@property (nonatomic,strong) NSString *collect;
// 数量
@property (nonatomic,strong) NSString *sold;

// 选中
@property (nonatomic,assign,getter=isSelected) BOOL  selected;
@end

NS_ASSUME_NONNULL_END
