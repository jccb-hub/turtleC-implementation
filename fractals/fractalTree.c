#include <stdio.h>
#include "turtlec.h" 

void fractalTree(Turtle *turtle, float length, int depth, int branchSeparation) {
    if (depth == 0 || length < 5)
        return;
    if (depth <= 3) {
        turtleSetColor(turtle, 0, 200, 0);
    }else{
        turtleSetColor(turtle, 120, 70, 20);
    }
    turtleForward(turtle, length);

    turtleLeft(turtle, branchSeparation);
    fractalTree(turtle, length * 0.7, depth - 1, branchSeparation);

    turtleRight(turtle, 2 * branchSeparation);
    fractalTree(turtle, length * 0.7, depth - 1, branchSeparation);

    turtleLeft(turtle, branchSeparation);
    turtleBackward(turtle, length);
    if (depth <= 3) {
        turtleSetColor(turtle, 0, 200, 0);
    }else{
        turtleSetColor(turtle, 120, 70, 20);
    }
}

int main() {
    TurtleApp *app = turtleAppCreate(400, 200, "Fractal Tree");
    if(app == NULL) return 1;
    Turtle *t = turtleAppGetTurtle(app); 
    
    turtlePenUp(t);
    turtleGoTo(t, 160.0f, 180.0f);
    turtleLeft(t, 90.0f);
    turtlePenDown(t);

    fractalTree(t, 60, 7, 40);

    turtleDestroy(t);
    return 0;
}
