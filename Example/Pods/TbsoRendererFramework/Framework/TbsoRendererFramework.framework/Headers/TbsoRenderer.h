//
//  TestTbsoReader.h
//  TbsoRendererIOS
//
//  Created by BIS on 6/24/17.
//  Copyright © 2017 saritasa. All rights reserved.
//

#define MSGPACK_DISABLE_LEGACY_NIL
#define MSGPACK_USE_DEFINE_MAP

#ifndef TbsoRenderer_h
#define TbsoRenderer_h

#import <Foundation/Foundation.h>

#import <SceneKit/SceneKit.h>
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>

@interface TbsoRenderer: NSObject

//-(SCNNode*) createSCNNode_Test1;

-(SCNNode*) createSCNNodeFromData:(NSData*)data;
-(SCNNode*) createSCNNodeFromFile:(NSString*)filePath;


@end

#endif /* TestTbsoReader_h */
