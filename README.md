# TeensyPaddleInterface

This is a simple arduino sketch I'm running on my Teensy that emulates pressing the left and right ctrl buttons when buttons on a CW paddle are pressed. Seems to work OK in the practice channel of https://hamradio.solutions. Tested with a Teensy 4.0  and a 3D printed K6ARK paddle.

Based on the troubleshooting notes from the store page there:
```The adapter works by simulating pressing left and right control keys on a keyboard. Under Windows, you may need to disable Stickykeys if it is configured to work with control keys```

The teensy 4.0 is way overkill (600mhz to click a button!?), but thats what I have on hand. Will probably work with an arduino as well, though I have none of those to test with.
