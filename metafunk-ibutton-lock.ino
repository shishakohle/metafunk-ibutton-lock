void setup()
{
  speaker_init();
  display_init();
}

void loop()
{
  reset_display();
  ibutton_read();
}
