void Get_Sensor_Readings(){

    Temperature = bmp.readTemperature();
    
    Pressure = bmp.readPressure() / 100;
    
    Altitude = bmp.readAltitude(1013.25); 
    
}    