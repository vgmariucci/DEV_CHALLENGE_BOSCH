void AP_Mode_Config(){

// Connect to Wi-Fi network with SSID and password
  Serial.print("Setting AP (Access Point)…");
  // Remove the password parameter, if you want the AP (Access Point) to be open
  WiFi.softAP(ssid, password);

  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);

  // display.clearDisplay();
  // display.setTextColor(WHITE);
  // display.setTextSize(1);
  
  // display.setCursor(15, 0);
  // display.print("AP IP address: ");
  // display.setCursor(30, 40);
  // display.print(IP);
  // display.display(); 
  // delay(5000);

  server.begin();    

}