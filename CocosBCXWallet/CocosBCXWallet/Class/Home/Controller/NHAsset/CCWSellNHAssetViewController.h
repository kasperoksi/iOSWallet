//
//  CCWSellNHAssetViewController.h
//  CocosBCXWallet
//
//  Created by 邵银岭 on 2019/7/24.
//  Copyright © 2019 邵银岭. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCWNHAssetsModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CCWSellNHAssetViewController : UIViewController
/** 资产 */
@property (nonatomic, strong) CCWNHAssetsModel *nhAssetModel;
@end

NS_ASSUME_NONNULL_END