//Defining
//Setting our pin numbers
#define LED 2
#define BUTTON_PIN 21

//Audio library imports
#include <XT_DAC_Audio.h>
#include <SoundData.h>


//Audio Library Set up
XT_Wav_Class Sound(sample);
XT_DAC_Audio_Class DacAudio(25, 0);
uint32_t DemoCounter = 0;
bool playing = true;
unsigned long starttime;
unsigned long endtime;
uint8_t volume;
//Function to assign functionality to each pin
void setup() {
  // Setting the pins to have certain functionality
  pinMode(LED, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(25, OUTPUT);

  //More audio library configurations
  Serial.begin(115200);
}
void loop() {
    // tone(25, 1000, 2000);
  //Taking two separate button states to see if the tilt switch has changed over 50ms
  // int buttonState = digitalRead(BUTTON_PIN);
  // delay(50);
  // int oldbuttonState = digitalRead(BUTTON_PIN);
  //triggering the sound and light if so
  // if (buttonState != oldbuttonState) {
  //   Serial.print("HERE");
  //   digitalWrite(LED, HIGH);
    // starttime = millis();
    // endtime = starttime;
    // //playing the audio for 1 second
    // // while ((endtime - starttime) <= 1000) {
    //   endtime = millis();
      DacAudio.FillBuffer();
      DacAudio.Play(&Sound);
    // }
    //cooldown before the sound can be triggered again
    // delay(3000);
  // } else {
  //   //switching off
  //   digitalWrite(LED, LOW);
  // }
}
