
#ifndef SIMON_SOUNDS_H
#define SIMON_SOUNDS_H

#define SIMON_BUZZER_PIN 10
#define SIMON_DISPLAY_GAP_MS 180
#define SIMON_DEBOUNCE_MS 25
#define SIMON_POLL_MS 5
#define SIMON_BUTTON_SOUND_MS 25



static void simonPlayColor(int color, long durationMs) {
    if (color == 0)
        tone(SIMON_BUZZER_PIN, 262, (unsigned int)durationMs);
    else if (color == 1)
        tone(SIMON_BUZZER_PIN, 330, (unsigned int)durationMs);
    else if (color == 2)
        tone(SIMON_BUZZER_PIN, 392, (unsigned int)durationMs);
    else if (color == 3)
        tone(SIMON_BUZZER_PIN, 523, (unsigned int)durationMs);
    else
        return;

    delay(durationMs);
}

static void simonStopSound(void) {
    noTone(SIMON_BUZZER_PIN);
}

static void simonPlaySimonColor(int color) {
    simonPlayColor(color, 400L);
}

static void simonPlayTerminalColor(int color) {
    simonPlayColor(color, 180L);
}


static void simonPlayButtonChunk(int color) {
    unsigned long halfPeriodUs;
    unsigned long cycles;
    unsigned long i;

    if (color == 0)
        halfPeriodUs = 1908;  // 262 Hz
    else if (color == 1)
        halfPeriodUs = 1515;  // 330 Hz
    else if (color == 2)
        halfPeriodUs = 1276;  // 392 Hz
    else if (color == 3)
        halfPeriodUs = 956;   // 523 Hz
    else
        return;

    cycles = (SIMON_BUTTON_SOUND_MS * 1000UL) /
             (2UL * halfPeriodUs);

    for (i = 0; i < cycles; i++) {
        digitalWrite(SIMON_BUZZER_PIN, HIGH);
        delayMicroseconds(halfPeriodUs);

        digitalWrite(SIMON_BUZZER_PIN, LOW);
        delayMicroseconds(halfPeriodUs);
    }
}


static void simonSuccessSound(void) {
    tone(SIMON_BUZZER_PIN, 784, 115U);
    delay(115);
    noTone(SIMON_BUZZER_PIN);
}

static void simonLoseSound(void) {
    tone(SIMON_BUZZER_PIN, 392, 115U);
    delay(115);
    noTone(SIMON_BUZZER_PIN);
    delay(25);

    tone(SIMON_BUZZER_PIN, 311, 135U);
    delay(135);
    noTone(SIMON_BUZZER_PIN);
    delay(25);

    tone(SIMON_BUZZER_PIN, 196, 200U);
    delay(200);
    noTone(SIMON_BUZZER_PIN);
}

static void simonVictorySound(void) {
    tone(SIMON_BUZZER_PIN, 523, 90U);
    delay(90);
    noTone(SIMON_BUZZER_PIN);
    delay(20);

    tone(SIMON_BUZZER_PIN, 659, 90U);
    delay(90);
    noTone(SIMON_BUZZER_PIN);
    delay(20);

    tone(SIMON_BUZZER_PIN, 784, 110U);
    delay(110);
    noTone(SIMON_BUZZER_PIN);
    delay(30);

    tone(SIMON_BUZZER_PIN, 1047, 210U);
    delay(210);
    noTone(SIMON_BUZZER_PIN);
    delay(45);

    tone(SIMON_BUZZER_PIN, 1319, 105U);
    delay(105);
    noTone(SIMON_BUZZER_PIN);
    delay(20);

    tone(SIMON_BUZZER_PIN, 1568, 115U);
    delay(115);
    noTone(SIMON_BUZZER_PIN);
    delay(30);

    tone(SIMON_BUZZER_PIN, 2093, 325U);
    delay(325);
    noTone(SIMON_BUZZER_PIN);
}

#endif
