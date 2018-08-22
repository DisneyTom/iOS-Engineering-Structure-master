//
//  LXSpeedDialView.m
//  九宫格
//
//  Created by 梁晓龙 on 2017/3/16.
//  Copyright © 2017年 Admin. All rights reserved.
//

#import "LXSpeedDialView.h"
#import "SpeedDialViewCell.h"
static NSString * const CellID=@"CellID";
@interface LXSpeedDialView()<UICollectionViewDelegate,UICollectionViewDelegateFlowLayout,UICollectionViewDataSource>
@property(nonatomic,strong) UICollectionView * collectionView;
@property(nonatomic,strong) UICollectionViewFlowLayout * flowLayout;
@property(nonatomic,assign) CGFloat  SpaceInterval;
@property(nonatomic,assign) CGFloat  GapInterval;

@end
@implementation LXSpeedDialView
-(instancetype)initWithFrame:(CGRect)frame
{
    if (self=[super initWithFrame:frame]) {
    
    }
    return self;
}

-(UICollectionView *)collectionView
{
    if (!_collectionView) {
        _collectionView =[[UICollectionView alloc]initWithFrame:self.bounds collectionViewLayout:self.flowLayout];
        _collectionView.delegate =self;
        _collectionView.dataSource =self;
        _collectionView.pagingEnabled=NO;
        _collectionView.showsVerticalScrollIndicator=NO;
        _collectionView.showsHorizontalScrollIndicator =NO;
        _collectionView.bounces =NO;
    }
    return _collectionView;
}

-(UICollectionViewFlowLayout *)flowLayout
{
    if (!_flowLayout) {
        _flowLayout =[[UICollectionViewFlowLayout alloc]init];
    }
    return _flowLayout;
}


-(void)show{
    self.SpaceInterval = (self.bounds.size.width-2*self.lrInterval-self.itemSize.width*self.column)/(self.column-1);
    self.GapInterval   =(self.bounds.size.height-2*self.tbInterval-self.itemSize.height*self.line)/(self.line-1);
    
    [self.collectionView registerClass:[SpeedDialViewCell class] forCellWithReuseIdentifier:CellID];
    [self addSubview:self.collectionView];
    
}

-(NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    return self.column * self.line;
}

- (__kindof UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    SpeedDialViewCell *cell = [_collectionView dequeueReusableCellWithReuseIdentifier:CellID forIndexPath:indexPath];
    cell.backgroundColor = [UIColor purpleColor];
    return cell;
}


-(void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath
{
    if (self.whenClicked) {
        self.whenClicked(indexPath.item);
    }
}

- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section
{
    return  self.GapInterval;
}


- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section
{
    return  self.SpaceInterval;
}

-(UIEdgeInsets)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout insetForSectionAtIndex:(NSInteger)section
{
    return UIEdgeInsetsMake(self.tbInterval, self.lrInterval, 0, self.lrInterval);
}

-(CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    return self.itemSize;
}

@end


@implementation DialModel


@end
