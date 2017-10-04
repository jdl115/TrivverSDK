//
//  SMBaseObject.h
//  Trivver
//
//  Created by Han Han on 8/13/17.
//  Copyright © 2017 Saritasa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SMBaseObject : NSObject <NSCopying, NSCoding>
- (id)initWithDictionary:(NSDictionary *)dictionary;
+ (NSDictionary*)mapping;
-(NSDictionary*)toDictionary;
@end
