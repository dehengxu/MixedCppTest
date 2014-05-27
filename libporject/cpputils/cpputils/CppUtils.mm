//
//  cpputils.m
//  cpputils
//
//  Created by DehengXu on 14-5-27.
//  Copyright (c) 2014年 DehengXu. All rights reserved.
//

#import "cpputils.h"

@implementation CppUtils

- (void)sayHelloToWorld:(NSString *)word
{
    HelloWorld hw;
    hw.sayWord([word cStringUsingEncoding:NSUTF8StringEncoding]);
}

@end
