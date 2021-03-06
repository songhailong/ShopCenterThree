//
//  TJ_HomeCollectionViewCell.h
//  ShopCenterThree
//
//  Created by 周鑫 on 2018/12/4.
//  Copyright © 2018年 TJ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TJ_HomeCollectionViewCell : UICollectionViewCell
+ (instancetype)cellWithCollection:(UICollectionView *)collectionView forReuseIdentifier:(NSString *)identifier indexPath:(NSIndexPath *)indexPath;
@end

NS_ASSUME_NONNULL_END
