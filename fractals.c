#include "turtlec.h" 
#include <math.h>
#include "fractals.h"
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
    fractalTree(turtle, length * 0.50, depth - 1, branchSeparation);
    turtleRight(turtle, 2 * branchSeparation);
    fractalTree(turtle, length * 0.75, depth - 1, branchSeparation);
    turtleLeft(turtle, branchSeparation);

    turtleBackward(turtle, length);
    if (depth <= 3) {
        turtleSetColor(turtle, 0, 200, 0);
    }else{
        turtleSetColor(turtle, 120, 70, 20);
    }

}
void levy(Turtle *turtle, float length, int depth) {
    if (depth == 0) {
        turtleForward(turtle, length);
        return;
    }

    turtleLeft(turtle, 45);
    levy(turtle, length / sqrt(2), depth - 1);

    turtleRight(turtle, 90);
    levy(turtle, length / sqrt(2), depth - 1);

    turtleLeft(turtle, 45);
}
