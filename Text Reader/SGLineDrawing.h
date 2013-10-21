//
//  SGLineDrawing.h
//  Text Reader
//
//  Created by Satyam Ghodasara on 9/26/13.
//  Copyright (c) 2013 Satyam Ghodasara. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGDrawingView.h"

@interface SGLineDrawing : NSObject

+ (SGDrawingView *)identifyCharactersOnImage:(UIImage *)image lineThickness:(float)lineThickness;

@end