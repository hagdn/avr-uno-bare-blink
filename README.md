# avr-uno-bare-blink
This is a simple code that makes use of registers. It's my first code diving into bare metal programming.
The Makefile is a personal creation of mine through trial and error and reviewing C-language compilation
an linking process.

This code makes use of the built-in LED on the Arduino-Uno board. This code can be directly uploaded to the Arduino-Uno through
the USB cable that comes with it, the uploading does not erase the bootloader so be at ease if you still want to program the
board with the USB cable. Or atleast thats what happened to me, even after multiple uploads through this upload method, my boot
loader still exists and the board is still read and can be programmed with the Arduino IDE and USB cable.

## How to upload the code:
### A. Through Arduino IDE
    1. You can simply copy paste the contents of the "main.c" file to an empty Arduino sketch
       and upload through the usual method with the upload button. Make sure the functions
       setup() and loop() are removed because instead of using those, this one uses a standard
       C-language starting content with the main() and stuff.
### B. Command line
   1. Make sure you have AVR-GCC toolchain installed, this include GNU-Make and AVRDude.
   2. The only files you are going to need for this method are "main.c" and "Makefile"
   3. Simply open CMD or terminal with its directory set to the location in which you
      have both of those files in.
   4. Type "make" as a command without the quotes.
   5. Makefile automates the process.
###
For an in-depth explanation of why I had those options/commands included in my Makefile, I'll be doing one in the future.
