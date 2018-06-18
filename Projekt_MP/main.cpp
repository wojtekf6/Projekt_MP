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
    Shape *o2 = new Triangle(w1, 3, 2, 2, -1);
    Shape *o3 = new Parallelogram(w1, 3, 2, 2, -2);
    
    ComplexShape *comlexShape = new ComplexShape(w2);
    comlexShape -> add(o1);
    comlexShape -> add(o2);
    comlexShape -> add(o3);
    
    try {
        comlexShape -> Draw();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    
    try {
        o1 -> Draw();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        o2 -> Draw();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        o3 -> Draw();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    
    o1 -> changeDisplay(w2);
    o2 -> changeDisplay(w2);
    o3 -> changeDisplay(w2);
    
    try {
        comlexShape -> Draw();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    
    try {
        o1 -> Draw();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        o2 -> Draw();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        o3 -> Draw();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    
    delete w1;
    delete w2;
    delete o1;
    delete o2;
    delete o3;
    delete comlexShape;
    return 0;
}
