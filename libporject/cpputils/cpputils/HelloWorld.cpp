//
//  HelloWorld.cpp
//  MixedCppTest
//
//  Created by DehengXu on 14-5-4.
//  Copyright (c) 2014年 Deheng. All rights reserved.
//

#include "HelloWorld.h"

#include <iostream>
#include <vector>

HelloWorld::HelloWorld()
{
    printf("Hello, World!");
}

HelloWorld::~HelloWorld()
{
    
}

void HelloWorld::sayWord(const char *word)
{
    printf("Hello, %s!", word);
}
