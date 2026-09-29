#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

/* Configurações do Wifi - SSID & Password */
const char* ssid = "henry";  // SSID
const char* password = "123456789";  //Senha

/* Endereço ip */
IPAddress local_ip(192,168,1,1);
IPAddress gateway(192,168,1,1);
IPAddress subnet(255,255,255,0);

ESP8266WebServer server(80);

uint8_t LED1pin = D7;
bool LED1status = LOW;

uint8_t LED2pin = D6;
bool LED2status = LOW;

const int sensor = A0;

int temp = 0;



void setup() {
  Serial.begin(115200);
  pinMode(LED1pin, OUTPUT);
  pinMode(LED2pin, OUTPUT);

//Subindo um access point
  WiFi.softAP(ssid, password);
  WiFi.softAPConfig(local_ip, gateway, subnet);
  delay(100);


  

//Conexão em rede wifi existente
//WiFi.begin(ssid, password);
/*
while(WiFi.status() != WL_CONNECTED){
  delay (500);
  Serial.print("...");
}

Serial.println("Wifi conectado!");
Serial.println("Endereço IP: ");
Serial.println(WiFi.localIP());

  /*
  Tratamos aqui a solcicitações HTTP Recebidas
  Por meio do método .on(), que aceita dois parâmetros
  Um sendo a URL e outro a função que será executada quando a 
  URL for acessada.

  Por exemplo ao fazer uma requisição para a raiz do servidor (/)
  A funcação que será executada é a handle_OnConnect()
  **/
  server.on("/", handle_OnConnect);



  
  server.begin();
  //Serial.println("HTTP server iniciado...");
}
void loop() {

    temp = map (analogRead(sensor), 0, 310, 0, 100);

  Serial.println(temp);

  delay(300);
  
  server.handleClient();
  if (temp > 28) {
      digitalWrite(LED1pin, HIGH), digitalWrite(LED2pin, HIGH);
    } else {
      digitalWrite(LED1pin, LOW), digitalWrite(LED2pin, LOW);
    }

}


void handle_OnConnect() {
  String html = "<html><head>";
  html += "<meta http-equiv='refresh' content='1'>"; 
  html += "</head><body>";
 html += "<h1>Temperatura Atual: " + String(temp) + " C</h1>";

  
  if (temp > 28) {
    html += "<script>alert('Esta muito Calor!');</script>";
  }

  html += "</body></html>";

  server.send(200, "text/html", html);
}
