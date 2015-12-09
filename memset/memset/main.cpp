//
//  main.cpp
//  memset
//
//  Created by David Zhong on 2015-12-09.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Sets the first num bytes of the block of memory pointed by ptr to the specified value
 */
#include <iostream>

int main(int argc, const char * argv[]) {
    char ptr[] = "Test me for memset";
    memset (ptr, '-', 4);
    puts (ptr);
    
    memset (ptr, -1, 4);
    puts (ptr);
    
    memset (ptr, 1, 4);
    puts (ptr);
    
    memset (ptr, 0, 4);
    puts (ptr);
    
    return 0;
}
