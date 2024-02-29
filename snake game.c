#include <graphics.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_WIDTH 600
#define BOARD_HEIGHT 400
#define SNAKE_SIZE 10
#define FOOD_SIZE 10

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Create game board rectangle
    rectangle(0, 0, BOARD_WIDTH, BOARD_HEIGHT);

    // Create snake rectangle
    int snake_x = BOARD_WIDTH / 2;
    int snake_y = BOARD_HEIGHT / 2;
    rectangle(snake_x, snake_y, snake_x + SNAKE_SIZE, snake_y + SNAKE_SIZE);

    // Set initial direction of snake
    int direction = 0; // 0 = right, 1 = down, 2 = left, 3 = up

    // Game loop
    while (1)
    {
        // Check for user input to change direction
        if (kbhit())
        {
            char c = getch();
            if (c == 'w' && direction != 1)
            {
                direction = 3;
            }
            else if (c == 'a' && direction != 0)
            {
                direction = 2;
            }
            else if (c == 's' && direction != 3)
            {
                direction = 1;
            }
            else if (c == 'd' && direction != 2)
            {
                direction = 0;
            }
        }

        // Move snake in current direction
        switch (direction)
        {
        case 0:
            snake_x += SNAKE_SIZE;
            break;
        case 1:
            snake_y += SNAKE_SIZE;
            break;
        case 2:
            snake_x -= SNAKE_SIZE;
            break;
        case 3:
            snake_y -= SNAKE_SIZE;
            break;
        }

        // Check for collisions with game board or snake's own body
        if (snake_x < 0 || snake_x + SNAKE_SIZE > BOARD_WIDTH ||
            snake_y < 0 || snake_y + SNAKE_SIZE > BOARD_HEIGHT)
        {
            // Game over
            break;
        }

        // Erase old snake and draw new one
        cleardevice();
        rectangle(0, 0, BOARD_WIDTH, BOARD_HEIGHT);
        rectangle(snake_x, snake_y, snake_x + SNAKE_SIZE, snake_y + SNAKE_SIZE);

        // Delay to control snake speed
        delay(100);
    }

    // Close graphics window
    closegraph();

    return 0;
}
