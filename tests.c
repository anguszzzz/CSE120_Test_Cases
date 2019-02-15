//
void Main ()
{
    InitRoad ();

    /* The following code is specific to this simulation,  e.g., number
     * of cars, directions and speeds. You should experiment with
     * different numbers of cars,  directions and speeds to test your
     * modification of driveRoad.  When your solution is tested, we
     * will use different Main procedures,  which will first call
     * InitRoad before any calls to driveRoad.  So,  you should do
     * any initializations in InitRoad.
     */

    if (Fork () == 0) {
        Delay (1200);			// car 2
        driveRoad (WEST, 60);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (1000);			// car 3
        driveRoad (WEST, 60);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (1100);			// car 4
        driveRoad (WEST, 30);
        Exit ();
    }

    driveRoad (WEST, 40);			// car 1

    Exit ();
}

void Main ()
{
    InitRoad ();

    /* The following code is specific to this simulation,  e.g., number
     * of cars, directions and speeds. You should experiment with
     * different numbers of cars,  directions and speeds to test your
     * modification of driveRoad.  When your solution is tested, we
     * will use different Main procedures,  which will first call
     * InitRoad before any calls to driveRoad.  So,  you should do
     * any initializations in InitRoad.
     */

    if (Fork () == 0) {
        Delay (1200);			// car 2
        driveRoad (EAST, 60);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (1000);			// car 3
        driveRoad (EAST, 50);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (1100);			// car 4
        driveRoad (EAST, 30);
        Exit ();
    }

    driveRoad (EAST, 40);			// car 1

    Exit ();
}


void Main ()
{
    InitRoad ();

    /* The following code is specific to this simulation,  e.g., number
     * of cars, directions and speeds. You should experiment with
     * different numbers of cars,  directions and speeds to test your
     * modification of driveRoad.  When your solution is tested, we
     * will use different Main procedures,  which will first call
     * InitRoad before any calls to driveRoad.  So,  you should do
     * any initializations in InitRoad.
     */

    if (Fork () == 0) {
        Delay (1200);			// car 2
        driveRoad (WEST, 60);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (900);			// car 3
        driveRoad (EAST, 50);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (900);			// car 4
        driveRoad (WEST, 30);
        Exit ();
    }

    driveRoad (EAST, 40);			// car 1

    Exit ();
}



void Main ()
{
    InitRoad ();

    /* This situation is that car 2,3,4,5 should take in turn to come into
     * the road as the following order - 1,2,3,4,5 and the direction is <><><
     */

    if (Fork () == 0) {
        Delay (400);			// car 2
        driveRoad (WEST, 60);
        Exit ();
    }


    if (Fork () == 0) {
        Delay (500);			// car 3
        driveRoad (WEST, 30);
        Exit ();
    }


    driveRoad (EAST, 40);			// car 1

    Exit ();
}


void Main ()
{
    InitRoad ();

    /* This situation is that car 2,3,4,5 should take in turn to come into
     * the road as the following order - 1,2,3,4,5 and the direction is <><><
     */

    if (Fork () == 0) {
        Delay (400);			// car 2
        driveRoad (WEST, 60);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (600);			// car 3
        driveRoad (EAST, 50);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (500);			// car 4
        driveRoad (WEST, 30);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (800);			// car 5
        driveRoad (EAST, 50);
        Exit ();
    }

    driveRoad (EAST, 40);			// car 1

    Exit ();
}

void Main ()
{
    InitRoad ();

    /*
     */

    if (Fork () == 0) {
        Delay (100);			// car 2
        driveRoad (EAST, 120);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (200);			// car 3
        driveRoad (EAST, 120);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (500);			// car 4
        driveRoad (WEST, 120);
        Exit ();
    }

    driveRoad (EAST, 120);
    Exit ();
}


void Main ()
{
    InitRoad ();

    /* In this situation, every car go into the road immediately
     */

    if (Fork () == 0) {
        Delay (0);			// car 2
        driveRoad (WEST, 60);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (0);			// car 3
        driveRoad (EAST, 50);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (0);			// car 4
        driveRoad (WEST, 30);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (0);			// car 5
        driveRoad (EAST, 50);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (0);			// car 6
        driveRoad (WEST, 120);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (0);			// car 7
        driveRoad (WEST, 90);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (0);			// car 8
        driveRoad (WEST, 60);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (0);			// car 9
        driveRoad (WEST, 70);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (0);			// car 10
        driveRoad (WEST, 90);
        Exit ();
    }

    driveRoad (EAST, 40);			// car 1

    Exit ();
}


void Main ()
{
    InitRoad ();

    /* In this situation, 
     */

    if (Fork () == 0) {
        Delay (400);			// car 2
        driveRoad (WEST, 60);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (600);			// car 3
        driveRoad (EAST, 50);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (500);			// car 4
        driveRoad (WEST, 30);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (800);			// car 5
        driveRoad (EAST, 50);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (100);			// car 6
        driveRoad (WEST, 120);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (300);			// car 7
        driveRoad (WEST, 90);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (1000);			// car 8
        driveRoad (WEST, 60);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (1200);			// car 9
        driveRoad (WEST, 70);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (1200);			// car 10
        driveRoad (WEST, 90);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (700);			// car 11
        driveRoad (WEST, 80);
        Exit ();
    }

    driveRoad (EAST, 40);			// car 1

    Exit ();
}


void Main ()
{
    InitRoad ();

    /* The following code is specific to this simulation,  e.g., number
     * of cars, directions and speeds. You should experiment with
     * different numbers of cars,  directions and speeds to test your
     * modification of driveRoad.  When your solution is tested, we
     * will use different Main procedures,  which will first call
     * InitRoad before any calls to driveRoad.  So,  you should do
     * any initializations in InitRoad.
     */

    if (Fork () == 0) {
        Delay (200);			// car 2
        driveRoad (EAST, 60);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (300);			// car 3
        driveRoad (EAST, 50);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (500);			// car 4
        driveRoad (WEST, 30);
        Exit ();
    }

    driveRoad (EAST, 40);
    Exit ();
}

void Main ()
{
    InitRoad ();

    /* The following code is specific to this simulation,  e.g., number
     * of cars, directions and speeds. You should experiment with
     * different numbers of cars,  directions and speeds to test your
     * modification of driveRoad.  When your solution is tested, we
     * will use different Main procedures,  which will first call
     * InitRoad before any calls to driveRoad.  So,  you should do
     * any initializations in InitRoad.
     */

    if (Fork () == 0) {
        Delay (1200);			// car 2
        driveRoad (EAST, 60);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (1200);			// car 3
        driveRoad (EAST, 50);
        Exit ();
    }

    if (Fork () == 0) {
        Delay (1200);			// car 4
        driveRoad (WEST, 30);
        Exit ();
    }

    driveRoad (EAST, 40);
    Exit ();
}

// Created by iaman on 2019/2/9.
//

