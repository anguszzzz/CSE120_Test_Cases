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
        Delay (0);            // car 2
        driveRoad (EAST, 50);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (400);            // car 3
        driveRoad (EAST, 50);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (0);            // car 4
        driveRoad (WEST, 60);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (900);            // car 5
        driveRoad (WEST, 60);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (0);            // car 6
        driveRoad (WEST, 100);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (0);            // car 7
        driveRoad (EAST, 90);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (0);            // car 8
        driveRoad (EAST, 80);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (0);            // car 9
        driveRoad (EAST, 100);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (0);            // car 10
        driveRoad (WEST, 90);
        Exit ();
    }
    
    driveRoad (EAST, 50);            // car 1
    
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
        Delay (900);            // car 2
        driveRoad (WEST, 50);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (0);            // car 3
        driveRoad (EAST, 50);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (900);            // car 4
        driveRoad (WEST, 60);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (0);            // car 5
        driveRoad (EAST, 60);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (900);            // car 6
        driveRoad (WEST, 100);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (0);            // car 7
        driveRoad (EAST, 90);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (900);            // car 8
        driveRoad (EAST, 80);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (0);            // car 9
        driveRoad (EAST, 100);
        Exit ();
    }
    
    if (Fork () == 0) {
        Delay (900);            // car 10
        driveRoad (WEST, 90);
        Exit ();
    }
    
    driveRoad (EAST, 50);            // car 1
    
    Exit ();
}

