#define TONE_PIN   7  // Speaker hooked up to pin 7

void speaker_init()
{
  // sound check
  speaker_ok_tone();
}

void speaker_ok_tone()
{
  tone(TONE_PIN, 500);  // ersten Ton einschalten
  delay(200);           // 200ms
  noTone(TONE_PIN);     // Ton aus.
  tone(TONE_PIN, 800);  // zweiten Ton mit neuer Tonhöhe einschalten
  delay(200);           // 200ms
  noTone(TONE_PIN);     // Ton aus
  delay(500);
}

void speaker_err_tone()
{
  tone(TONE_PIN, 800);  // zweiten Ton mit neuer Tonhöhe einschalten
  delay(200);           // 200ms
  noTone(TONE_PIN);     // Ton aus.
  tone(TONE_PIN, 800);  // zweiten Ton mit neuer Tonhöhe einschalten
  delay(200);           // 200ms
  noTone(TONE_PIN);     // Ton aus
  tone(TONE_PIN, 800);  // zweiten Ton mit neuer Tonhöhe einschalten
  delay(200);           // 200ms
  noTone(TONE_PIN);     // Ton aus
  tone(TONE_PIN, 800);  // zweiten Ton mit neuer Tonhöhe einschalten
  delay(200);           // 200ms
  noTone(TONE_PIN);     // Ton aus
  tone(TONE_PIN, 800);  // zweiten Ton mit neuer Tonhöhe einschalten
  delay(200);           // 200ms
  noTone(TONE_PIN);     // Ton aus
  delay(500);
}
