#ifndef Exceptions_h
#define Exceptions_h

#include <stdio.h>
#include <string>
#include <exception>

namespace MyRuntimeExceptions {
    
    class DrawException : public std::runtime_error {
    public:
        
        DrawException() : runtime_error("Cannot draw the shape!") {
        }
        
        DrawException(std::string msg) : runtime_error(msg.c_str()) {
        }
    };
}

namespace ExceptionsLib {
    bool canDraw(int a1, int a2, int b1, int b2);
    bool canDraw(int r);
}

#endif /* Exceptions_h */
