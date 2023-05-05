#include <SoftwareSerial.h>
#include <Mouse.h>
#include <Keyboard.h>
SoftwareSerial mySerial(10,11);//RX,TX
String input = "";
String printstr = "";
unsigned char len =0;
bool stringComplete = false;

void setup() {
  input.reserve(10);

  mySerial.begin(9600);
  mySerial.println("Arduino Leonardo. Start.");
  Keyboard.begin();
  Mouse.begin();
}

void loop() {
  mySerialEvent();
  if (stringComplete) {
    mySerial.println("stringComplete=ture");    
    CommandEvent(input);
    ClearInputEvent();
  }
}

void ClearInputEvent() {
  mySerial.println("ClearInputEvent");    
    input = "";
    mySerial.println("inputempty");
    if (mySerial.available() == 0) {
    stringComplete = false;
    mySerial.println("stringComplete=false");
    }
}

void CommandEvent(String data_string) {
  mySerial.println("CommandEvent");
  mySerial.println(data_string);
      if (data_string[0] == 'w') {
        mySerial.println(F("w series"));
        if (data_string[2] == '1') {
        Keyboard.write(KEY_KP_1);
        mySerial.println(F("1"));
        return;
        } else if (data_string[2] == '2') {
        Keyboard.write(KEY_KP_2);
        mySerial.println(F("2"));
        return;
        } else if (data_string[2] == '3') {
        Keyboard.write(KEY_KP_3);
        mySerial.println(F("3"));
        return;
        } else if (data_string[2] == '4') {
        Keyboard.write(KEY_KP_4);
        mySerial.println(F("4"));
        return;
        } else if (data_string[2] == '5') {
        Keyboard.write(KEY_KP_5);
        mySerial.println(F("5"));
        return;
        } else if (data_string[2] == '6') {
        Keyboard.write(KEY_KP_6);
        mySerial.println(F("6"));
        return;
        } else if (data_string[2] == '7') {
        Keyboard.write(KEY_KP_7);
        mySerial.println(F("7"));
        return;
        } else if (data_string[2] == '8') {
        Keyboard.write(KEY_KP_8);
        mySerial.println(F("8"));
        return;
        } else if (data_string[2] == '9') {
        Keyboard.write(KEY_KP_9);
        mySerial.println(F("9"));
        return;
        } else if (data_string[2] == '0') {
        Keyboard.write(KEY_KP_0);
        mySerial.println(F("0"));
        return;
        } else if (data_string[2] == 'a') {
        Keyboard.write('a');
        mySerial.println(F("a"));
        return;
        } else if (data_string[2] == 'b') {
        Keyboard.write('b');
        mySerial.println(F("b"));
        return;
        } else if (data_string[2] == 'c') {
        Keyboard.write('c');
        mySerial.println(F("c"));
        return;
        } else if (data_string[2] == 'd') {
        Keyboard.write('d');
        mySerial.println(F("d"));
        return;
        } else if (data_string[2] == 'e') {
        Keyboard.write('e');
        mySerial.println(F("e"));
        return;
        } else if (data_string[2] == 'f') {
        Keyboard.write('f');
        mySerial.println(F("f"));
        return;
        } else if (data_string[2] == 'g') {
        Keyboard.write('g');
        mySerial.println(F("g"));
        return;
        } else if (data_string[2] == 'h') {
        Keyboard.write('h');
        mySerial.println(F("h"));
        return;
        } else if (data_string[2] == 'i') {
        Keyboard.write('i');
        mySerial.println(F("i"));
        return;
        } else if (data_string[2] == 'j') {
        Keyboard.write('j');
        mySerial.println(F("j"));
        return;
        } else if (data_string[2] == 'k') {
        Keyboard.write('k');
        mySerial.println(F("k"));
        return;
        } else if (data_string[2] == 'l') {
        Keyboard.write('l');
        mySerial.println(F("l"));
        return;
        } else if (data_string[2] == 'm') {
        Keyboard.write('m');
        mySerial.println(F("m"));
        return;
        } else if (data_string[2] == 'n') {
        Keyboard.write('n');
        mySerial.println(F("n"));
        return;
        } else if (data_string[2] == 'o') {
        Keyboard.write('o');
        mySerial.println(F("o"));
        return;
        } else if (data_string[2] == 'p') {
        Keyboard.write('p');
        mySerial.println(F("p"));
        return;
        } else if (data_string[2] == 'q') {
        Keyboard.write('q');
        mySerial.println(F("q"));
        return;
        } else if (data_string[2] == 'r') {
        Keyboard.write('r');
        mySerial.println(F("r"));
        return;
        } else if (data_string[2] == 's') {
        Keyboard.write('s');
        mySerial.println(F("s"));
        return;
        } else if (data_string[2] == 't') {
        Keyboard.write('t');
        mySerial.println(F("t"));
        return;
        } else if (data_string[2] == 'u') {
        Keyboard.write('u');
        mySerial.println(F("u"));
        return;
        } else if (data_string[2] == 'v') {
        Keyboard.write('v');
        mySerial.println(F("v"));
        return;
        } else if (data_string[2] == 'w') {
        Keyboard.write('w');
        mySerial.println(F("w"));
        return;
        } else if (data_string[2] == 'x') {
        Keyboard.write('x');
        mySerial.println(F("x"));
        return;
        } else if (data_string[2] == 'y') {
        Keyboard.write('y');
        mySerial.println(F("y"));
        return;
        } else if (data_string[2] == 'z') {
        Keyboard.write('z');
        mySerial.println(F("z"));
        return; 
        } else if (data_string[2] == 'A') {
        Keyboard.write('A');
        mySerial.println(F("A"));
        return;
        } else if (data_string[2] == 'B') {
        Keyboard.write('B');
        mySerial.println(F("B"));
        return;
        } else if (data_string[2] == 'C') {
        Keyboard.write('C');
        mySerial.println(F("C"));
        return;
        } else if (data_string[2] == 'D') {
        Keyboard.write('D');
        mySerial.println(F("D"));
        return;
        } else if (data_string[2] == 'E') {
        Keyboard.write('E');
        mySerial.println(F("E"));
        return;
        } else if (data_string[2] == 'F') {
        Keyboard.write('F');
        mySerial.println(F("F"));
        return;
        } else if (data_string[2] == 'G') {
        Keyboard.write('G');
        mySerial.println(F("G"));
        return;
        } else if (data_string[2] == 'H') {
        Keyboard.write('H');
        mySerial.println(F("H"));
        return;
        } else if (data_string[2] == 'I') {
        Keyboard.write('I');
        mySerial.println(F("I"));
        return;
        } else if (data_string[2] == 'J') {
        Keyboard.write('J');
        mySerial.println(F("J"));
        return;
        } else if (data_string[2] == 'K') {
        Keyboard.write('K');
        mySerial.println(F("K"));
        return;
        } else if (data_string[2] == 'L') {
        Keyboard.write('L');
        mySerial.println(F("L"));
        return;
        } else if (data_string[2] == 'M') {
        Keyboard.write('M');
        mySerial.println(F("M"));
        return;
        } else if (data_string[2] == 'N') {
        Keyboard.write('N');
        mySerial.println(F("N"));
        return;
        } else if (data_string[2] == 'O') {
        Keyboard.write('O');
        mySerial.println(F("O"));
        return;
        } else if (data_string[2] == 'P') {
        Keyboard.write('P');
        mySerial.println(F("P"));
        return;
        } else if (data_string[2] == 'Q') {
        Keyboard.write('Q');
        mySerial.println(F("Q"));
        return;
        } else if (data_string[2] == 'R') {
        Keyboard.write('R');
        mySerial.println(F("R"));
        return;
        } else if (data_string[2] == 'S') {
        Keyboard.write('S');
        mySerial.println(F("S"));
        return;
        } else if (data_string[2] == 'T') {
        Keyboard.write('T');
        mySerial.println(F("T"));
        return;
        } else if (data_string[2] == 'U') {
        Keyboard.write('U');
        mySerial.println(F("U"));
        return;
        } else if (data_string[2] == 'V') {
        Keyboard.write('V');
        mySerial.println(F("V"));
        return;
        } else if (data_string[2] == 'W') {
        Keyboard.write('W');
        mySerial.println(F("W"));
        return;
        } else if (data_string[2] == 'X') {
        Keyboard.write('X');
        mySerial.println(F("X"));
        return;
        } else if (data_string[2] == 'Y') {
        Keyboard.write('Y');
        mySerial.println(F("Y"));
        return;
        } else if (data_string[2] == 'Z') {
        Keyboard.write('Z');
        mySerial.println(F("Z"));
        return; 
        } else if (data_string[2] == ' ') {
        Keyboard.write(' ');
        mySerial.println(F("blank space"));
        return; 
        } else if (data_string[2] == '.') {
        Keyboard.write(KEY_KP_DOT);
        mySerial.println(F("."));
        return;
        } else if (data_string[2] == '/') {
        Keyboard.write(KEY_KP_SLASH);
        mySerial.println(F("/"));
        return;
        } else if (data_string[2] == '*') {
        Keyboard.write(KEY_KP_ASTERISK);
        mySerial.println(F("*"));
        return;
        } else if (data_string[2] == '-') {
        Keyboard.write(KEY_KP_MINUS);
        mySerial.println(F("-"));
        return;
        } else if (data_string[2] == '+') {
        Keyboard.write(KEY_KP_PLUS);
        mySerial.println(F("+"));
        return; 
        }
    } else if (data_string.startsWith("fw")) {
      mySerial.println(F("fw series"));
        if (data_string[3] == 'u' && data_string[4] == 'p') {
            Keyboard.write(KEY_UP_ARROW);
            mySerial.println(F("up"));
            return;
        } else if (data_string[3] == 'd' && data_string[4] == 'o') {
            Keyboard.write(KEY_DOWN_ARROW);
            mySerial.println(F("down"));
            return;
        } else if (data_string[3] == 'l' && data_string[4] == 'e') {
            Keyboard.write(KEY_LEFT_ARROW);
            mySerial.println(F("left"));
            return;
        } else if (data_string[3] == 'r' && data_string[4] == 'i') {
            Keyboard.write(KEY_RIGHT_ARROW);
            mySerial.println(F("right"));
            return;
        } else if (data_string[3] == 'e' && data_string[4] == 'n' && data_string[5] != 'd') {
            Keyboard.write(KEY_KP_ENTER);
            mySerial.println(F("enter/return"));
            return;
        } else if (data_string[3] == 't' && data_string[4] == 'a') {
            Keyboard.write(KEY_TAB);
            mySerial.println(F("tab"));
            return;
        } else if (data_string[3] == 'l' && data_string[4] == 'c') {
            Keyboard.write(KEY_LEFT_CTRL);
            mySerial.println(F("left_ctrl"));
            return;
        } else if (data_string[3] == 'l' && data_string[4] == 's') {
            Keyboard.write(KEY_LEFT_SHIFT);
            mySerial.println(F("left_shift"));
            return;
        } else if (data_string[3] == 'l' && data_string[4] == 'a') {
            Keyboard.write(KEY_LEFT_ALT);
            mySerial.println(F("left_alt"));
            return;
        } else if (data_string[3] == 'l' && data_string[4] == 'g') {
            Keyboard.write(KEY_LEFT_GUI);
            mySerial.println(F("left_gui"));
            return;
        } else if (data_string[3] == 'r' && data_string[4] == 'c') {
            Keyboard.write(KEY_RIGHT_CTRL);
            mySerial.println(F("right_ctrl"));
            return;
        } else if (data_string[3] == 'r' && data_string[4] == 's') {
            Keyboard.write(KEY_RIGHT_SHIFT);
            mySerial.println(F("right_shift"));
            return;
        } else if (data_string[3] == 'r' && data_string[4] == 'a') {
            Keyboard.write(KEY_RIGHT_ALT);
            mySerial.println(F("right_alt"));
            return;
        } else if (data_string[3] == 'r' && data_string[4] == 'g') {
            Keyboard.write(KEY_RIGHT_GUI);
            mySerial.println(F("right_gui"));
            return;
        } else if (data_string[3] == 'c' && data_string[4] == 'l') {
            Keyboard.write(KEY_CAPS_LOCK);
            mySerial.println(F("caps_lock"));
            return;
        } else if (data_string[3] == 'b' && data_string[4] == 'a') {
            Keyboard.write(KEY_BACKSPACE);
            mySerial.println(F("backspace"));
            return;
        } else if (data_string[3] == 'r' && data_string[4] == 'e') {
            Keyboard.write(KEY_RETURN);
            mySerial.println(F("return/enter"));
            return;
        } else if (data_string[3] == 'm' && data_string[4] == 'e') {
            Keyboard.write(KEY_MENU);
            mySerial.println(F("menu"));
            return;
        } else if (data_string[3] == 'i' && data_string[4] == 'n') {
            Keyboard.write(KEY_INSERT);
            mySerial.println(F("insert"));
            return;
        } else if (data_string[3] == 'd' && data_string[4] == 'e') {
            Keyboard.write(KEY_DELETE);
            mySerial.println(F("delete"));
            return;
        } else if (data_string[3] == 'h' && data_string[4] == 'o') {
            Keyboard.write(KEY_HOME);
            mySerial.println(F("home"));
            return;
        } else if (data_string[3] == 'e' && data_string[4] == 'n' && data_string[5] == 'd') {
            Keyboard.write(KEY_END);
            mySerial.println(F("end"));
            return;
        } else if (data_string[3] == 'p' && data_string[4] == 's') {
            Keyboard.write(KEY_PRINT_SCREEN);
            mySerial.println(F("prt scr"));
            return;
        } else if (data_string[3] == 's' && data_string[4] == 'l') {
            Keyboard.write(KEY_SCROLL_LOCK);
            mySerial.println(F("scroll lock"));
            return;
        } else if (data_string[3] == 'p' && data_string[4] == 'b') {
            Keyboard.write(KEY_PAUSE);
            mySerial.println(F("pause break"));
            return;
        } else if (data_string[3] == 'p' && data_string[4] == 'u') {
            Keyboard.write(KEY_PAGE_UP);
            mySerial.println(F("page_up"));
            return;
        } else if (data_string[3] == 'p' && data_string[4] == 'd') {
            Keyboard.write(KEY_PAGE_DOWN);
            mySerial.println(F("page_down"));
            return;
        } else if (data_string[3] == 'n' && data_string[4] == 'l') {
            Keyboard.write(KEY_NUM_LOCK);
            mySerial.println(F("num_lock"));
            return;
        } else if (data_string[3] == 'e' && data_string[4] == 's') {
            Keyboard.write(KEY_ESC);
            mySerial.println(F("esc"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '1' && data_string[5] != '0' && data_string[5] != '1' && data_string[5] != '2') {
            Keyboard.write(KEY_F1);
            mySerial.println(F("f1"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '2') {
            Keyboard.write(KEY_F2);
            mySerial.println(F("f2"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '3') {
            Keyboard.write(KEY_F3);
            mySerial.println(F("f3"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '4') {
            Keyboard.write(KEY_F4);
            mySerial.println(F("f4"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '5') {
            Keyboard.write(KEY_F5);
            mySerial.println(F("f5"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '6') {
            Keyboard.write(KEY_F6);
            mySerial.println(F("f6"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '7') {
            Keyboard.write(KEY_F7);
            mySerial.println(F("f7"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '8') {
            Keyboard.write(KEY_F8);
            mySerial.println(F("f8"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '9') {
            Keyboard.write(KEY_F9);
            mySerial.println(F("f9"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '1' && data_string[5] == '0') {
            Keyboard.write(KEY_F10);
            mySerial.println(F("f10"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '1' && data_string[5] == '1') {
            Keyboard.write(KEY_F11);
            mySerial.println(F("f11"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '1' && data_string[5] == '2') {
            Keyboard.write(KEY_F12);
            mySerial.println(F("f12"));
            return;
        }
    } else if (data_string.startsWith("aw")) {
      mySerial.println(F("aw series"));
      int commaIndex = input.indexOf(';'); 
        if (commaIndex != -1) {
        int ASCIICode = input.substring(commaIndex + 1).toInt();
        Keyboard.write(ASCIICode);
        mySerial.println(F("Write ASCIICode"));
        return;
        }    
    } else if (data_string[0] == 'r' && data_string[1] == 'a') {
      Keyboard.releaseAll();
      mySerial.println(F("releaseAll"));
      return;
    } else if (data_string[0] == 'p' && data_string[1] == 'r') {
      int commaIndex = input.indexOf(';');
        if (commaIndex != -1) {
        String printstr = input.substring(commaIndex + 1);
        Keyboard.print(printstr);
        mySerial.println(F("print"));
        return;
        }      
    } else if (data_string[0] == 'p' && data_string[1] != 'r') {
      mySerial.println(F("p series"));
        if (data_string[2] == '1') {
        Keyboard.press(KEY_KP_1);
        mySerial.println(F("1"));
        return;
        } else if (data_string[2] == '2') {
        Keyboard.press(KEY_KP_2);
        mySerial.println(F("2"));
        return;
        } else if (data_string[2] == '3') {
        Keyboard.press(KEY_KP_3);
        mySerial.println(F("3"));
        return;
        } else if (data_string[2] == '4') {
        Keyboard.press(KEY_KP_4);
        mySerial.println(F("4"));
        return;
        } else if (data_string[2] == '5') {
        Keyboard.press(KEY_KP_5);
        mySerial.println(F("5"));
        return;
        } else if (data_string[2] == '6') {
        Keyboard.press(KEY_KP_6);
        mySerial.println(F("6"));
        return;
        } else if (data_string[2] == '7') {
        Keyboard.press(KEY_KP_7);
        mySerial.println(F("7"));
        return;
        } else if (data_string[2] == '8') {
        Keyboard.press(KEY_KP_8);
        mySerial.println(F("8"));
        return;
        } else if (data_string[2] == '9') {
        Keyboard.press(KEY_KP_9);
        mySerial.println(F("9"));
        return;
        } else if (data_string[2] == '0') {
        Keyboard.press(KEY_KP_0);
        mySerial.println(F("0"));
        return;
        } else if (data_string[2] == 'a') {
        Keyboard.press('a');
        mySerial.println(F("a"));
        return;
        } else if (data_string[2] == 'b') {
        Keyboard.press('b');
        mySerial.println(F("b"));
        return;
        } else if (data_string[2] == 'c') {
        Keyboard.press('c');
        mySerial.println(F("c"));
        return;
        } else if (data_string[2] == 'd') {
        Keyboard.press('d');
        mySerial.println(F("d"));
        return;
        } else if (data_string[2] == 'e') {
        Keyboard.press('e');
        mySerial.println(F("e"));
        return;
        } else if (data_string[2] == 'f') {
        Keyboard.press('f');
        mySerial.println(F("f"));
        return;
        } else if (data_string[2] == 'g') {
        Keyboard.press('g');
        mySerial.println(F("g"));
        return;
        } else if (data_string[2] == 'h') {
        Keyboard.press('h');
        mySerial.println(F("h"));
        return;
        } else if (data_string[2] == 'i') {
        Keyboard.press('i');
        mySerial.println(F("i"));
        return;
        } else if (data_string[2] == 'j') {
        Keyboard.press('j');
        mySerial.println(F("j"));
        return;
        } else if (data_string[2] == 'k') {
        Keyboard.press('k');
        mySerial.println(F("k"));
        return;
        } else if (data_string[2] == 'l') {
        Keyboard.press('l');
        mySerial.println(F("l"));
        return;
        } else if (data_string[2] == 'm') {
        Keyboard.press('m');
        mySerial.println(F("m"));
        return;
        } else if (data_string[2] == 'n') {
        Keyboard.press('n');
        mySerial.println(F("n"));
        return;
        } else if (data_string[2] == 'o') {
        Keyboard.press('o');
        mySerial.println(F("o"));
        return;
        } else if (data_string[2] == 'p') {
        Keyboard.press('p');
        mySerial.println(F("p"));
        return;
        } else if (data_string[2] == 'q') {
        Keyboard.press('q');
        mySerial.println(F("q"));
        return;
        } else if (data_string[2] == 'r') {
        Keyboard.press('r');
        mySerial.println(F("r"));
        return;
        } else if (data_string[2] == 's') {
        Keyboard.press('s');
        mySerial.println(F("s"));
        return;
        } else if (data_string[2] == 't') {
        Keyboard.press('t');
        mySerial.println(F("t"));
        return;
        } else if (data_string[2] == 'u') {
        Keyboard.press('u');
        mySerial.println(F("u"));
        return;
        } else if (data_string[2] == 'v') {
        Keyboard.press('v');
        mySerial.println(F("v"));
        return;
        } else if (data_string[2] == 'w') {
        Keyboard.press('w');
        mySerial.println(F("w"));
        return;
        } else if (data_string[2] == 'x') {
        Keyboard.press('x');
        mySerial.println(F("x"));
        return;
        } else if (data_string[2] == 'y') {
        Keyboard.press('y');
        mySerial.println(F("y"));
        return;
        } else if (data_string[2] == 'z') {
        Keyboard.press('z');
        mySerial.println(F("z"));
        return; 
        } else if (data_string[2] == 'A') {
        Keyboard.press('A');
        mySerial.println(F("A"));
        return;
        } else if (data_string[2] == 'B') {
        Keyboard.press('B');
        mySerial.println(F("B"));
        return;
        } else if (data_string[2] == 'C') {
        Keyboard.press('C');
        mySerial.println(F("C"));
        return;
        } else if (data_string[2] == 'D') {
        Keyboard.press('D');
        mySerial.println(F("D"));
        return;
        } else if (data_string[2] == 'E') {
        Keyboard.press('E');
        mySerial.println(F("E"));
        return;
        } else if (data_string[2] == 'F') {
        Keyboard.press('F');
        mySerial.println(F("F"));
        return;
        } else if (data_string[2] == 'G') {
        Keyboard.press('G');
        mySerial.println(F("G"));
        return;
        } else if (data_string[2] == 'H') {
        Keyboard.press('H');
        mySerial.println(F("H"));
        return;
        } else if (data_string[2] == 'I') {
        Keyboard.press('I');
        mySerial.println(F("I"));
        return;
        } else if (data_string[2] == 'J') {
        Keyboard.press('J');
        mySerial.println(F("J"));
        return;
        } else if (data_string[2] == 'K') {
        Keyboard.press('K');
        mySerial.println(F("K"));
        return;
        } else if (data_string[2] == 'L') {
        Keyboard.press('L');
        mySerial.println(F("L"));
        return;
        } else if (data_string[2] == 'M') {
        Keyboard.press('M');
        mySerial.println(F("M"));
        return;
        } else if (data_string[2] == 'N') {
        Keyboard.press('N');
        mySerial.println(F("N"));
        return;
        } else if (data_string[2] == 'O') {
        Keyboard.press('O');
        mySerial.println(F("O"));
        return;
        } else if (data_string[2] == 'P') {
        Keyboard.press('P');
        mySerial.println(F("P"));
        return;
        } else if (data_string[2] == 'Q') {
        Keyboard.press('Q');
        mySerial.println(F("Q"));
        return;
        } else if (data_string[2] == 'R') {
        Keyboard.press('R');
        mySerial.println(F("R"));
        return;
        } else if (data_string[2] == 'S') {
        Keyboard.press('S');
        mySerial.println(F("S"));
        return;
        } else if (data_string[2] == 'T') {
        Keyboard.press('T');
        mySerial.println(F("T"));
        return;
        } else if (data_string[2] == 'U') {
        Keyboard.press('U');
        mySerial.println(F("U"));
        return;
        } else if (data_string[2] == 'V') {
        Keyboard.press('V');
        mySerial.println(F("V"));
        return;
        } else if (data_string[2] == 'W') {
        Keyboard.press('W');
        mySerial.println(F("W"));
        return;
        } else if (data_string[2] == 'X') {
        Keyboard.press('X');
        mySerial.println(F("X"));
        return;
        } else if (data_string[2] == 'Y') {
        Keyboard.press('Y');
        mySerial.println(F("Y"));
        return;
        } else if (data_string[2] == 'Z') {
        Keyboard.press('Z');
        mySerial.println(F("Z"));
        return; 
        } else if (data_string[2] == ' ') {
        Keyboard.press(' ');
        mySerial.println(F("blank space"));
        return; 
        } else if (data_string[2] == '.') {
        Keyboard.press(KEY_KP_DOT);
        mySerial.println(F("."));
        return;
        } else if (data_string[2] == '/') {
        Keyboard.press(KEY_KP_SLASH);
        mySerial.println(F("/"));
        return;
        } else if (data_string[2] == '*') {
        Keyboard.press(KEY_KP_ASTERISK);
        mySerial.println(F("*"));
        return;
        } else if (data_string[2] == '-') {
        Keyboard.press(KEY_KP_MINUS);
        mySerial.println(F("-"));
        return;
        } else if (data_string[2] == '+') {
        Keyboard.press(KEY_KP_PLUS);
        mySerial.println(F("+"));
        return; 
        }
    } else if (data_string.startsWith("fp")) {
      mySerial.println(F("fp series"));
        if (data_string[3] == 'u' && data_string[4] == 'p') {
            Keyboard.press(KEY_UP_ARROW);
            mySerial.println(F("up"));
            return;
        } else if (data_string[3] == 'd' && data_string[4] == 'o') {
            Keyboard.press(KEY_DOWN_ARROW);
            mySerial.println(F("down"));
            return;
        } else if (data_string[3] == 'l' && data_string[4] == 'e') {
            Keyboard.press(KEY_LEFT_ARROW);
            mySerial.println(F("left"));
            return;
        } else if (data_string[3] == 'r' && data_string[4] == 'i') {
            Keyboard.press(KEY_RIGHT_ARROW);
            mySerial.println(F("right"));
            return;
        } else if (data_string[3] == 'e' && data_string[4] == 'n' && data_string[5] != 'd') {
            Keyboard.press(KEY_KP_ENTER);
            mySerial.println(F("enter/return"));
            return;
        } else if (data_string[3] == 't' && data_string[4] == 'a') {
            Keyboard.press(KEY_TAB);
            mySerial.println(F("tab"));
            return;
        } else if (data_string[3] == 'l' && data_string[4] == 'c') {
            Keyboard.press(KEY_LEFT_CTRL);
            mySerial.println(F("left_ctrl"));
            return;
        } else if (data_string[3] == 'l' && data_string[4] == 's') {
            Keyboard.press(KEY_LEFT_SHIFT);
            mySerial.println(F("left_shift"));
            return;
        } else if (data_string[3] == 'l' && data_string[4] == 'a') {
            Keyboard.press(KEY_LEFT_ALT);
            mySerial.println(F("left_alt"));
            return;
        } else if (data_string[3] == 'l' && data_string[4] == 'g') {
            Keyboard.press(KEY_LEFT_GUI);
            mySerial.println(F("left_gui"));
            return;
        } else if (data_string[3] == 'r' && data_string[4] == 'c') {
            Keyboard.press(KEY_RIGHT_CTRL);
            mySerial.println(F("right_ctrl"));
            return;
        } else if (data_string[3] == 'r' && data_string[4] == 's') {
            Keyboard.press(KEY_RIGHT_SHIFT);
            mySerial.println(F("right_shift"));
            return;
        } else if (data_string[3] == 'r' && data_string[4] == 'a') {
            Keyboard.press(KEY_RIGHT_ALT);
            mySerial.println(F("right_alt"));
            return;
        } else if (data_string[3] == 'r' && data_string[4] == 'g') {
            Keyboard.press(KEY_RIGHT_GUI);
            mySerial.println(F("right_gui"));
            return;
        } else if (data_string[3] == 'c' && data_string[4] == 'l') {
            Keyboard.press(KEY_CAPS_LOCK);
            mySerial.println(F("caps_lock"));
            return;
        } else if (data_string[3] == 'b' && data_string[4] == 'a') {
            Keyboard.press(KEY_BACKSPACE);
            mySerial.println(F("backspace"));
            return;
        } else if (data_string[3] == 'r' && data_string[4] == 'e') {
            Keyboard.press(KEY_RETURN);
            mySerial.println(F("return/enter"));
            return;
        } else if (data_string[3] == 'm' && data_string[4] == 'e') {
            Keyboard.press(KEY_MENU);
            mySerial.println(F("menu"));
            return;
        } else if (data_string[3] == 'i' && data_string[4] == 'n') {
            Keyboard.press(KEY_INSERT);
            mySerial.println(F("insert"));
            return;
        } else if (data_string[3] == 'd' && data_string[4] == 'e') {
            Keyboard.press(KEY_DELETE);
            mySerial.println(F("delete"));
            return;
        } else if (data_string[3] == 'h' && data_string[4] == 'o') {
            Keyboard.press(KEY_HOME);
            mySerial.println(F("home"));
            return;
        } else if (data_string[3] == 'e' && data_string[4] == 'n' && data_string[5] == 'd') {
            Keyboard.press(KEY_END);
            mySerial.println(F("end"));
            return;
        } else if (data_string[3] == 'p' && data_string[4] == 's') {
            Keyboard.press(KEY_PRINT_SCREEN);
            mySerial.println(F("prt scr"));
            return;
        } else if (data_string[3] == 's' && data_string[4] == 'l') {
            Keyboard.press(KEY_SCROLL_LOCK);
            mySerial.println(F("scroll lock"));
            return;
        } else if (data_string[3] == 'p' && data_string[4] == 'b') {
            Keyboard.press(KEY_PAUSE);
            mySerial.println(F("pause break"));
            return;
        } else if (data_string[3] == 'p' && data_string[4] == 'u') {
            Keyboard.press(KEY_PAGE_UP);
            mySerial.println(F("page_up"));
            return;
        } else if (data_string[3] == 'p' && data_string[4] == 'd') {
            Keyboard.press(KEY_PAGE_DOWN);
            mySerial.println(F("page_down"));
            return;
        } else if (data_string[3] == 'n' && data_string[4] == 'l') {
            Keyboard.press(KEY_NUM_LOCK);
            mySerial.println(F("num_lock"));
            return;
        } else if (data_string[3] == 'e' && data_string[4] == 's') {
            Keyboard.press(KEY_ESC);
            mySerial.println(F("esc"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '1' && data_string[5] != '0' && data_string[5] != '1' && data_string[5] != '2') {
            Keyboard.press(KEY_F1);
            mySerial.println(F("f1"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '2') {
            Keyboard.press(KEY_F2);
            mySerial.println(F("f2"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '3') {
            Keyboard.press(KEY_F3);
            mySerial.println(F("f3"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '4') {
            Keyboard.press(KEY_F4);
            mySerial.println(F("f4"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '5') {
            Keyboard.press(KEY_F5);
            mySerial.println(F("f5"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '6') {
            Keyboard.press(KEY_F6);
            mySerial.println(F("f6"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '7') {
            Keyboard.press(KEY_F7);
            mySerial.println(F("f7"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '8') {
            Keyboard.press(KEY_F8);
            mySerial.println(F("f8"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '9') {
            Keyboard.press(KEY_F9);
            mySerial.println(F("f9"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '1' && data_string[5] == '0') {
            Keyboard.press(KEY_F10);
            mySerial.println(F("f10"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '1' && data_string[5] == '1') {
            Keyboard.press(KEY_F11);
            mySerial.println(F("f11"));
            return;
        } else if (data_string[3] == 'f' && data_string[4] == '1' && data_string[5] == '2') {
            Keyboard.press(KEY_F12);
            mySerial.println(F("f12"));
            return;
        }
    } else if (data_string.startsWith("ap")) {
      mySerial.println(F("ap series"));
      int commaIndex = input.indexOf(';'); 
        if (commaIndex != -1) {
        int ASCIICode = input.substring(commaIndex + 1).toInt();
        Keyboard.press(ASCIICode);
        mySerial.println(F("Write ASCIICode"));
        return;
        }
    } else if (data_string.startsWith("mc")) {
      mySerial.println(F("mc series"));
        if (data_string[3] == 'l') {
            Mouse.click(MOUSE_LEFT);
            mySerial.println(F("mouse_left"));
            return;
        } else if (data_string[3] == 'r') {
            Mouse.click(MOUSE_RIGHT);
            mySerial.println(F("mouse_right"));
            return;
        } else if (data_string[3] == 'm') {
            Mouse.click(MOUSE_MIDDLE);
            mySerial.println(F("mouse_middle"));
            return;
        } 
    } else if (data_string.startsWith("mr")) {
      mySerial.println(F("mr series"));
        if (data_string[3] == 'l') {
            Mouse.release(MOUSE_LEFT);
            mySerial.println(F("rel_mouse_left"));
            return;
        } else if (data_string[3] == 'r') {
            Mouse.release(MOUSE_RIGHT);
            mySerial.println(F("rel_mouse_right"));
            return;
        } else if (data_string[3] == 'm') {
            Mouse.release(MOUSE_MIDDLE);
            mySerial.println(F("rel_mouse_middle"));
            return;
        } 
    } else if (data_string.startsWith("mp")) {
      mySerial.println(F("mp series"));
        if (data_string[3] == 'l') {
            Mouse.press(MOUSE_LEFT);
            mySerial.println(F("mouse_left"));
            return;
        } else if (data_string[3] == 'r') {
            Mouse.press(MOUSE_RIGHT);
            mySerial.println(F("mouse_right"));
            return;
        } else if (data_string[3] == 'm') {
            Mouse.press(MOUSE_MIDDLE);
            mySerial.println(F("mouse_middle"));
            return;
        } 
    } else if (data_string.startsWith("mm")) {
      mySerial.println(F("move series"));
      int commaIndex = input.indexOf(';');
        if (commaIndex != -1) {
        int distance = input.substring(commaIndex + 1).toInt();
          if (data_string[2] == 'l') {
              Mouse.move(-distance,0);
              mySerial.println(F("move_left"));
              return;
          } else if (data_string[2] == 'r') {
              Mouse.move(distance,0);
              mySerial.println(F("move_right"));
              return;
          } else if (data_string[2] == 'u') {
              Mouse.move(0,-distance);
              mySerial.println(F("move_up"));
              return;
          } else if (data_string[2] == 'd') {
              Mouse.move(0,distance);
              mySerial.println(F("move_down"));
              return;
          } else if (data_string[2] == 'w') {
              if (data_string[3] == 'u') {
                  Mouse.move(0,0,distance);
                  mySerial.println(F("wheel_up"));
                  return;
              } else if (data_string[3] == 'd') {
                  Mouse.move(0,0,-distance);
                  mySerial.println(F("wheel_down"));
                  return;
              }
          }
        }

    } 

}

void mySerialEvent() {
  while (mySerial.available()) {
    char inChar = (char)mySerial.read();
    // len = input.length();
    input += inChar;
    if (inChar == '\r' || inChar == '\n') {
      stringComplete = true;
    }
  }
}


