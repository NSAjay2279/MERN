#include <iostream>
#include <cmath>

// Function to draw a circle using Bresenham's algorithm
void drawCircle(int x_center, int y_center, int radius) {
    for (int x = 0; x <= radius; ++x) {
        int y = static_cast<int>(round(sqrt(radius * radius - x * x)));
        // Plot points by symmetry
        plotPoint(x_center + x, y_center + y);
        plotPoint(x_center - x, y_center + y);
        plotPoint(x_center + x, y_center - y);
        plotPoint(x_center - x, y_center - y);
    }
}

// Function to plot a point (simulated using cout for simplicity)
void plotPoint(int x, int y) {
    std::cout << "Pixel at (" << x << ", " << y << ") drawn.\n";
}

int main() {
    // Simulating canvas and context
    // These are not required for drawing but added to match the provided JavaScript
    // In C++ you would handle drawing to the screen differently, like using a graphics library

    // Get canvas element (Not applicable in C++, just for matching the provided JS)
    // const canvas = document.getElementById('canvas');
    // Simulating canvas by declaring variables
    int canvasWidth = 200;
    int canvasHeight = 200;

    // Get context (Not applicable in C++, just for matching the provided JS)
    // const ctx = canvas.getContext('2d');
    // No need for context in C++, as we're directly plotting points

    // Drawing a circle on canvas
    // ctx.beginPath();
    // ctx.arc(100, 100, 20, 0, 2*Math.PI);
    drawCircle(100, 100, 20);

    return 0;
}
