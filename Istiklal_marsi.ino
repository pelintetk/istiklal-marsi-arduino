#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int buzzer = 7;

int a, ad, b, c, cd, d, dd, e, f, fd, g, gd;
int a2, ad2, b2, c2, cd2, d2, dd2, e2, f2, fd2, g2, gd2, a3;

void nota(int frekans, int sure, const char* satir1, const char* satir2) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(satir1);
  lcd.setCursor(0, 1);
  lcd.print(satir2);
  tone(buzzer, frekans);
  delay(sure);
  noTone(buzzer);
  delay(50);
}

void setup() {
  pinMode(buzzer, OUTPUT);
  lcd.init();
  lcd.backlight();

  a=440;  ad=466; b=494;  c=523;
  cd=554; d=587;  dd=622; e=659;
  f=698;  fd=740; g=784;  gd=830;
  a2=880;  ad2=932; b2=988;  c2=1046;
  cd2=1108; d2=1174; dd2=1244; e2=1318;
  f2=1396; fd2=1480; g2=1568; gd2=1660;
  a3=1760;
}

void loop() {
  // Korkma, sonmez bu safak
  nota(c,  800, "Istiklal Marsi", "Korkma, sonmez");
  nota(f,  800, "Istiklal Marsi", "Korkma, sonmez");
  nota(g,  800, "Istiklal Marsi", "bu safak");
  nota(gd, 800, "Istiklal Marsi", "bu safak");
  nota(e,  400, "Istiklal Marsi", "yuzden al");
  nota(g,  200, "Istiklal Marsi", "yuzden al");
  nota(f, 1600, "Istiklal Marsi", "sancak sonmez!");

  delay(300);

  // Catma, kurban olayim
  nota(c,  800, "Catma kurban", "olayim");
  nota(f,  800, "Catma kurban", "olayim");
  nota(g,  800, "Catma kurban", "cehreni");
  nota(gd, 800, "Catma kurban", "ey nazli");
  nota(e,  400, "Catma kurban", "hilal!");
  nota(g,  200, "Catma kurban", "hilal!");
  nota(f, 1600, "Catma kurban", "olayim...");

  delay(300);

  // Kahraman irkima
  nota(c2, 200, "Kahraman", "irkima bir gul");
  nota(ad2,200, "Kahraman", "irkima bir gul");
  nota(c2, 200, "Kahraman", "ne bu siddet");
  nota(g,  400, "Kahraman", "bu celal?");
  delay(100);
  nota(g,  400, "Sana olmaz", "dovmek lazim");
  nota(ad, 200, "Sana olmaz", "dovmek lazim");
  nota(gd, 400, "Sana olmaz", "hangi kafir");
  nota(e,  200, "Sana olmaz", "hangi kafir");
  nota(f,  400, "Sana olmaz", "seni...");
  nota(g,  200, "Sana olmaz", "seni...");
  nota(gd, 400, "Sana olmaz", "gavur");
  nota(ad, 200, "Sana olmaz", "gavur");
  nota(c2, 400, "Sana olmaz", "etseler...");

  delay(1000);
}