#include <iostream>

#include "GraphicalDisplay.h"
#include "TextDisplay.h"
#include "Circle.h"
#include "Triangle.h"
#include "Parallelogram.h"
#include "ComplexShape.h"
#include "Display.h"
#include "Shape.h"

int main() {
    Display *w1 = new GraphicalDisplay();
    Display *w2 = new TextDisplay();
    
    Shape *o1 = new Circle(w1,3);
    Shape *o2 = new Triangle(w2, 1, 2, 2, 3);
    Shape *o3 = new Parallelogram(w2, 1, 4, 2, 1);
    
    ComplexShape *comlexShape = new ComplexShape(w2);
    comlexShape -> add(o1);
    comlexShape -> add(o1);
    comlexShape -> add(o3);
    comlexShape -> add(o1);
    comlexShape -> add(o2);
    
    comlexShape -> Draw();
    
    std::cout<<"----"<<std::endl;
    
    o1 -> Draw();
    o2 -> Draw();
    o3 -> Draw();
    
    std::cout<<"----"<<std::endl;
    
    o1 -> changeDisplay(w2);
    o2 -> changeDisplay(w1);
    o3 -> changeDisplay(w1);
    
    comlexShape -> Draw();
    
    std::cout<<"----"<<std::endl;
    
    o1 -> Draw();
    o2 -> Draw();
    o3 -> Draw();
    
    delete w1;
    delete w2;
    delete o1;
    delete o2;
    delete o3;
    delete comlexShape;
    return 0;
}
