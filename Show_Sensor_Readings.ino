void Show_Sensor_Readings(){

    Serial.print(F("Temperature = "));
    Serial.print(Temperature);
    Serial.println(" *C");

    Serial.print(F("Pressure = "));
    Serial.print(Pressure);
    Serial.println(" hPa");

    Serial.print(F("Approx altitude = "));
    Serial.print(Altitude); /* Adjusted to local forecast! */
    Serial.println(" m");

    Serial.println();

  // clear display
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(2);
  
  display.setCursor(15, 0);
  display.print(Temperature,1);
  display.setCursor(85, 0);
  display.setTextSize(1);
  display.cp437(true);
  display.write(167);
  display.setTextSize(2);
  display.print("C");

  display.setCursor(15, 25);
  display.print(Pressure,1);
  display.setCursor(75, 25);
  display.print(" hPa");
  
  display.setCursor(15, 50);
  display.print(Altitude,1);
  display.setCursor(75, 50);
  display.print(" m");

   display.display(); 

}