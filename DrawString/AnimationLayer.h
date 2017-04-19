//
//  AnimationLayer.h
//  DrawString
//
//  Created by mac on 2017/4/19.
//  Copyright © 2017年 mac. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>
@interface AnimationLayer : CALayer
+(void)createAnimationLayerWithString:(NSString*)string andRect:(CGRect)rect andView:(UIView*)view andFont:(CTFontRef)font andStrokeColor:(UIColor*)color;
@end
