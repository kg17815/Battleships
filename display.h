// This display module provides graphics for the battleships game.

struct display;
typedef struct display display;

struct grid;
typedef struct grid grid;

// Create a display object representing a plain white window.
display *newDisplay(char *title);

grid *setGrid(int x, int y, char *gridMatrix);

// Draw a 10x10 grid for the ships
void placeGrid(display *d, grid *g);

// Show the next frame and clear the render
void displayFrame(display *d);

// Pause for the given number of milliseconds.
void pause(display *d, int ms);

// Wait for a key press.
char key(display *d);

// Hold the display for a few seconds, then shut down.
void end(display *d);
