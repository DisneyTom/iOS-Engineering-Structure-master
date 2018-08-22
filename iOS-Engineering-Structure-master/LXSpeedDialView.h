//
//  LXSpeedDialView.h
//  九宫格
//
//  Created by 梁晓龙 on 2017/3/16.
//  Copyright © 2017年 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LXSpeedDialView : UIView
/**
 * 列数
 */
@property(nonatomic,assign) NSInteger  column;
/**
 * 行数
 */
@property(nonatomic,assign) NSInteger  line;
/**
 * 左右边间距
 */
@property(nonatomic,assign) CGFloat  lrInterval;
/**
 * 上下边间距
 */
@property(nonatomic,assign) CGFloat tbInterval;
/**
 *
 */
@property(nonatomic,assign) CGSize itemSize;

/**
 *
 */
@property(nonatomic,copy) void(^whenClicked)(NSUInteger index);
/**
 * Method
 */

-(void)show;
@end

@interface DialModel : NSObject
@property(nonatomic,copy) NSString  * iconImage;
@property(nonatomic,copy) NSString * titleName;
@end
