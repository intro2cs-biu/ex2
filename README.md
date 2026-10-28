# Exercise 2 — Control Flow and Logic: Simon Game

Starter files and instructions for Exercise 2 in Introduction to Computer Science (89110), Department of Computer Science and Artificial Intelligence, Bar-Ilan University.

Read `ex2.pdf`, then complete and submit:

- `ex2.c`

In this exercise, you will implement the Simon memory game using an Arduino Uno, four LEDs, four buttons, and a buzzer. The game supports sequences of 5, 10, or 32 colors.

The provided `simon_sounds.h` file contains the sound functions required for the game. Do not modify it.

The exercise supports two input modes:

- **Buttons:** Repeat the sequence using the physical Arduino buttons.
- **Terminal:** Repeat the sequence through the Serial terminal.

The computer simulator is used to test **Terminal mode only**. Buttons mode must be implemented and tested on the physical Arduino Uno. See `ex2.pdf` for the complete instructions and input/output examples.

Submit your solution to **both** systems:

- [Course submission system](https://submit.cs.biu.ac.il): upload one ZIP containing `ex2.c` at its top level. An optional `README.md` may also be included.
- [Google Form](https://forms.gle/x4ZhUjxYJtg8gaFi9): upload `ex2.c` directly, **not inside a ZIP**.

**Submit the same version of `ex2.c` to both systems. You may submit multiple times; only your last submission in each system will be considered.** If you update your solution, resubmit it to both systems so that the final submissions match.

Do not include `simon_sounds.h`, libraries, executables, build products, or extra folders in your submission.

## Testing and execution

Compile and upload your program to the Arduino Uno using the instructions in `ex2.pdf`.

Use the computer simulator to verify Terminal mode, including the required messages, LED operations, and sounds. Refer to Exercise 1 for simulator compilation and execution instructions.

Test Buttons mode on the physical Arduino Uno.

Work on a local clone. You cannot push changes to this course repository. If you keep your work in your own GitHub repository, that repository must remain private. Do not make exercise solutions publicly accessible.
