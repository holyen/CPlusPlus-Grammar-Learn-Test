//
//  main.cpp
//  CPlus-Test
//
//  Created by AnyDATA-LBS-TZQ on 13-4-22.
//  Copyright (c) 2013年 AnyDATA-LBS-TZQ. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    // insert code here...
    /*
    std :: cout << "Enter two numbers:" << std :: endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std :: cout << "the sum of" << v1 << "and" << v2 << "is" << v1 + v2 << std ::endl;
    */
    
    int sum = 0;
    int val = 1;
    
    while (val <= 10) {
        sum += val;
        ++val;
    }
    std::cout << "sum of 1 to 10 inclusive is "
              << sum << std::endl;
    
    
    return 0;
}

