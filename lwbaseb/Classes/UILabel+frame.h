//
//  UILabel+frame.h
//  NUVAToy
//
//  Created by 芦苇Mac_mini on 2019/11/1.
//  Copyright © 2019年 luwei. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (frame)
//修改行间距
- (void)changeLabelLineSpacing:(NSInteger)lineSpacing;
//计算文字高度
- (CGFloat)getStringHeightWithText:(NSString *)text font:(UIFont *)font viewWidth:(CGFloat)width;
@end

NS_ASSUME_NONNULL_END
