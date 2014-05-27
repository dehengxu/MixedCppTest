//
//  libcocoa.m
//  libcocoa
//
//  Created by DehengXu on 14-5-27.
//  Copyright (c) 2014年 DehengXu. All rights reserved.
//

#import "libcocoa.h"
//#include "../../cpputils/cpputils/HelloWorld.h"
//#include <../../cpputils/cpputils/HelloWorld.h>
#include <HelloWorld.h>

@implementation libcocoa

- (void)sayWord:(NSString *)word
{
    HelloWorld hw;
    hw.sayWord([word cStringUsingEncoding:NSUTF8StringEncoding]);
}

@end
