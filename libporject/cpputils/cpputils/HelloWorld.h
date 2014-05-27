//
//  HelloWorld.h
//  MixedCppTest
//
//  Created by DehengXu on 14-5-4.
//  Copyright (c) 2014年 Deheng. All rights reserved.
//

#ifndef __MixedCppTest__HelloWorld__
#define __MixedCppTest__HelloWorld__

typedef enum _world_type {
    CHINA,
    PAKISTAN
}WORLD_TYPE;

#include <iostream>
#include <vector>

class HelloWorld {
    
public:
    HelloWorld();
    ~HelloWorld();
    void sayWord(const char *word);
};


#endif /* defined(__MixedCppTest__HelloWorld__) */
