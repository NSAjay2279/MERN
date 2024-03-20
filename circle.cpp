#include <cmath>
#include <iostream>

// Function to plot a point (simulated using cout for simplicity)
void plotPoint(int x, int y)
{
    std::cout << "Pixel at (" << x << ", " << y << ") drawn.\n";
}

// Function to draw a circle using Bresenham's algorithm
void drawCircle(int x_center, int y_center, int radius)
{
    for (int x = 0; x <= radius; ++x)
    {
        int y = static_cast<int>(round(sqrt(radius * radius - x * x)));
        // Plot points by symmetry
        plotPoint(x_center + x, y_center + y);
        plotPoint(x_center - x, y_center + y);
        plotPoint(x_center + x, y_center - y);
        plotPoint(x_center - x, y_center - y);
    }
}

int main()
{
    // Drawing a circle
    drawCircle(100, 100, 20);

    return 0;
}
