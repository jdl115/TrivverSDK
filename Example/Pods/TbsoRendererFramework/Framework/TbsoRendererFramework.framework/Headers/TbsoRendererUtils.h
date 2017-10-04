//
//  TbsoRendererUtils.h
//  TbsoRendererIOS
//
//  Created by BIS on 9/5/17.
//  Copyright © 2017 saritasa. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <SceneKit/SceneKit.h>
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>

@interface TbsoRendererUtils : NSObject

+(void) scaleNode:(SCNNode*)node forView:(SCNView*) view;
+(void) loadDefaultSceneForView:(SCNView*) view;

@end
