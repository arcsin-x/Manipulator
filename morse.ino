int i = 0;
int j = 0;
char A[] = "darduino";
int len = 8;
char LL[] = {'a','b','s','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//здесь неправильное соответствие в массивах code и layout
char* code[] = {
  "*-","-***","*--","--*","-**","*","***-","--**","**","*---",
  "-*-","*-**","--","-*","---","*--*","*-*","***","-","**-",
  "**-*","****","-*-*","---*","----","--*-","-*--","-**-","**-**","**--",
  "*-*-",
  "*----","**---","***--","****-","*****","-****","--***","---**","----*","-----",
  "......","*-*-*-","---***","-*-*-","-*--*-","*----*","*-**-*","-****-","-**-*","**--**","--**--",
  "-***-","********","*--*-*","**-*-",
  ""
};
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(i=0; j<len; i++){
    if(LL[i]==A[j]){
    Serial.print(LL[i]);
    j=j+1;
  }
}
delay(1000);
}
