//
//  LXTabMeun.h
//  LXTabMeun
//
//  Created by FT_David on 2016/12/4.
//  Copyright © 2016年 FT_David. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^TabBarDidClickAtIndex)(NSInteger buttonIndex);

@interface LXTabMeun : UIView
/**
 *  Property
 */
@property(nonatomic,copy)TabBarDidClickAtIndex didClickAtIndex;
@property(nonatomic,strong)UIColor *sliderBackgroundColor;
@property(nonatomic,strong)UIColor *buttonNormalTitleColor;
@property(nonatomic,strong)UIColor *buttonSelectedTileColor;

/**
 *  Method
 */
-(instancetype)initWithTitles:(NSArray *)titles;
-(void)scrollToIndex:(NSInteger)index;
@end
