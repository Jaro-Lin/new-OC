//
//  CollectionViewCellTemplate.h
//  SQTemplate
//
//  Created by 双泉 朱 on 17/5/11.
//  Copyright © 2017年 Doubles_Z. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SubmodelInterfaceTemplate.h"

@interface CollectionViewCellTemplate : UICollectionViewCell

@property (nonatomic,strong) id<SubmodelInterfaceTemplate> dataSource;

@end
