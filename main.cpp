void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    void circlePlotPoints (int, int, int, int);
    while (y >= x)
    {

        circlePlotPoints(xc, yc, x, y);
        x++;


        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        circlePlotPoints(xc, yc, x, y);
        delay(50);
    }
}
void circlePlotPoints (int xCenter, int yCenter, int x, int y)
{
 putpixel (xCenter + x, yCenter + y,WHITE);
 putpixel (xCenter - x, yCenter + y,WHITE);

 putpixel (xCenter + x, yCenter - y,WHITE);
 putpixel (xCenter - x, yCenter - y,WHITE);

 putpixel (xCenter + y, yCenter + x,WHITE);
 putpixel (xCenter - y, yCenter + x,WHITE);

 putpixel (xCenter + y, yCenter - x,WHITE);
 putpixel (xCenter - y, yCenter - x,WHITE);
}
