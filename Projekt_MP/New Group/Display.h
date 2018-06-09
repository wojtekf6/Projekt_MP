#ifndef Display_h
#define Display_h

class Display
{
public:
    virtual void drawTriangle(int a1, int a2, int b1, int b2) = 0;
    virtual void drawCircle(int r) = 0;
    virtual void drawParallelogram(int a1, int a2, int b1, int b2) = 0;
    virtual ~Display(){}
};

#endif /* Display_h */
