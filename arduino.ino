void rxCallback(uint8_t *buffer, uint8_t len)
{
// other code as per Adafruit
  if ((byte)buffer[0] == (byte)10){ //color cmd received
    setColor(buffer[1],buffer[2], buffer[3]);
  }
  else if ((byte)buffer[0] == (byte)20){ //string cmd received
    Lservo.write(buffer[1]);
    Rservo.write(map(buffer[2],0,180,180,0));
  }
}