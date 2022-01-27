int ledpin=2;
int butonpin=3;
int okunandurum=0;
int leddurum=0;

void setup() {

Serial.begin(9600);
pinMode(ledpin,OUTPUT),
pinMode(butonpin,INPUT);

}

void loop() { 
int okunandurum=butonoku(butonpin);  //fonksiyon çağrıldı.0 veya 1 dönder buraya fonksiyondan

if(okunandurum==1)
{
  if(leddurum==0){  
    digitalWrite(ledpin,HIGH);
    leddurum=1;
    }
    else{
      digitalWrite(ledpin,LOW);
      leddurum=0;  
      }
  }

}

//buton okuma burada gerçekleşiyor ve çağrıldığı yere 0 veya 1 dönüyor.

boolean butonoku(int butonpin)   //boolean fonksiyonu 1 veya 0 döner. böyle işlerde kullanışlı.
{
  int okunandeger=digitalRead(butonpin); // okunandeger bu fonksiyon için tanımlandı sadecde. yukarıda yok.
  delay(1000);
    if(okunandeger==digitalRead(butonpin)) // hala basılıysa demek.buton sorgulanır
    { 
      return okunandeger;
      }
      else
      {
        return false;
        }
  }
