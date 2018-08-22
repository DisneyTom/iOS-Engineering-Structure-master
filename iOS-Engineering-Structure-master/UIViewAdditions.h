#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIView (TTCategory)
/**
 * 设置View左边x坐标
 */
@property(nonatomic) CGFloat left;
/**
 * 设置View顶部边y坐标
 */
@property(nonatomic) CGFloat top;
/**
 * 设置View右边x坐标
 */
@property(nonatomic) CGFloat right;
/**
 * 设置View底部y坐标
 */
@property(nonatomic) CGFloat bottom;
/**
 * 宽度
 */
@property(nonatomic) CGFloat width;
/**
 * 高度
 */
@property(nonatomic) CGFloat height;

/**
 * 中心X
 */
@property(nonatomic) CGFloat centerX;
/**
 * 中心Y
 */
@property(nonatomic) CGFloat centerY;


@property(nonatomic,readonly) CGFloat screenX;
@property(nonatomic,readonly) CGFloat screenY;
@property(nonatomic,readonly) CGFloat screenViewX;
@property(nonatomic,readonly) CGFloat screenViewY;
@property(nonatomic,readonly) CGRect screenFrame;

/**
 * 
 */
@property(nonatomic) CGPoint origin;
/**
 * 尺寸
 */
@property(nonatomic) CGSize size;
/**
 * view是否可见
 */
@property(nonatomic) BOOL visible;

/**
 * 找对传入对象的子类View
 */
- (UIView*)descendantOrSelfWithClass:(Class)cls;

/**
 * 找到传入对象继承的父View
 */
- (UIView*)ancestorOrSelfWithClass:(Class)cls;

/**
 * 移除所有的子类View
 */
- (void)removeAllSubviews;


/**
 * Calculates the offset of this view from another view in screen coordinates.
 */
- (CGPoint)offsetFromView:(UIView*)otherView;


/**
 * view所在的视图控制器去
 */
- (UIViewController*)viewController;

/**
 * 循环添加子类view
 */
- (void)addSubviews:(NSArray *)views;


//创建UILabel
+ (UILabel *)labelWithFrame:(CGRect)frame fontSize:(CGFloat)fontSize textAlignment:(NSTextAlignment)alignment text:(NSString *)text;
@end
