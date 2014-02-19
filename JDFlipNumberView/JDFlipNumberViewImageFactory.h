//
//  JDFlipNumberViewImageFactory.h
//  FlipNumberViewExample
//
//  Created by Markus Emrich on 05.12.12.
//  Copyright (c) 2012 markusemrich. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JDFlipNumberViewImageFactory : NSObject

+ (JDFlipNumberViewImageFactory*)sharedInstance;

- (CGSize)imageSizeForBundleNamed:(NSString*)bundleName;
- (NSArray*)topImagesForBundleNamed:(NSString*)bundleName;
- (NSArray*)bottomImagesForBundleNamed:(NSString*)bundleName;

- (CGSize)imageSizeForAttributes:(NSDictionary *)attributes;
- (NSArray *)topImagesForAttributes:(NSDictionary *)attributes;
- (NSArray *)bottomImagesForAttributes:(NSDictionary *)attributes;

- (void)generateImagesFromBundleNamed:(NSString*)bundleName;
- (void)generateImagesFromAttributes:(NSDictionary *)attributes;
- (NSArray*)generateImagesFromImage:(UIImage*)image;

@end
