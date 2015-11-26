char *sasirtaclar[]={"abi olmadı", "adamlar geldi", "toplantı başladı", "maile ek koymamışsın", "yemek daha gelmedi", "yemek bitti", "yemek soğudu", "yemek eksik geldi", "yemeğini yediler", "yemek"};
long enginShock;

void setup()
{
 Serial.begin(9600); randomSeed(666);
}

void loop()                    
{
 enginShock = random(sizeof(sasirtaclar)/sizeof(char*));
 Serial.println(sasirtaclar[enginShock]);
 delay(1000);
}
