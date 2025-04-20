String readString;
#define relay1 7    
void setup()
{
  Serial.begin(9600);           
  pinMode(relay1, OUTPUT);      
  digitalWrite(relay1, LOW);     
}
void loop()
{
  while(Serial.available())    
  {
    delay(10);                 
    char c = Serial.read();    
    if (c == '#'){
      break;                   
    }
    readString += c;                
  }
    if (readString.length() >0)
    {
      Serial.println(readString);
                  
     if(readString == "f success"){
        digitalWrite(relay1, HIGH);
        delay(3000);
        digitalWrite(relay1, LOW);
      }
      readString="";
    }
}
