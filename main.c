#include <stdio.h>
#include <stdlib.h>
#include "fractals.h"
int main(void) {
    TurtleApp *app = turtleAppCreate(400, 200, "Fractal Tree");
    if(app == NULL) return 1;
    Turtle *t = turtleAppGetTurtle(app); 
    
    turtlePenUp(t);
    turtleGoTo(t, 160.0f, 150.0f);
    turtleLeft(t, 90.0f);
    turtlePenDown(t);

    fractalTree(t, 60, 7, 40);
    //levy(t, 50, 9);
    turtleDestroy(t);
    return 0;
}

