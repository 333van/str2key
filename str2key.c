#include <windows.h>
#include <stdio.h>
#include <set2defs.h>

#define MAX_INPUT_SIZE 8192

INPUT inputs[MAX_INPUT_SIZE] = {};
int validInputObjectsCount = 0;

int getStringSize(char *stringPointer){
  char *currentCharPointer;
  int stringSize;
  for(currentCharPointer = stringPointer; *currentCharPointer != '\0'; currentCharPointer++){
    stringSize++;
  }
  return stringSize;
}

void setInputObject(int scanCode, int isShift){
  if(isShift == ADD_SHIFT){
    inputs[validInputObjectsCount].type         = INPUT_KEYBOARD;
    inputs[validInputObjectsCount].ki.wScan     = SCANCODE_LeftShift;
    inputs[validInputObjectsCount].ki.dwFlags   = KEYEVENTF_SCANCODE;
    inputs[validInputObjectsCount+1].type       = INPUT_KEYBOARD;
    inputs[validInputObjectsCount+1].ki.wScan   = scanCode;
    inputs[validInputObjectsCount+1].ki.dwFlags = KEYEVENTF_SCANCODE;
    inputs[validInputObjectsCount+2].type       = INPUT_KEYBOARD;
    inputs[validInputObjectsCount+2].ki.wScan   = scanCode;
    inputs[validInputObjectsCount+2].ki.dwFlags = KEYEVENTF_KEYUP;
    inputs[validInputObjectsCount+3].type       = INPUT_KEYBOARD;
    inputs[validInputObjectsCount+3].ki.wVk     = VK_SHIFT;
    inputs[validInputObjectsCount+3].ki.dwFlags = KEYEVENTF_KEYUP;
    validInputObjectsCount+=4;
  }else if(isShift == NO_SHIFT){
    inputs[validInputObjectsCount].type         = INPUT_KEYBOARD;
    inputs[validInputObjectsCount].ki.wScan     = scanCode;
    inputs[validInputObjectsCount].ki.dwFlags   = KEYEVENTF_SCANCODE;
    inputs[validInputObjectsCount+1].type       = INPUT_KEYBOARD;
    inputs[validInputObjectsCount+1].ki.wScan   = scanCode;
    inputs[validInputObjectsCount+1].ki.dwFlags = KEYEVENTF_KEYUP;
    validInputObjectsCount+=2;
  }
}

int main( int argc, char *argv[] ){
  int sleepSeconds = 0;

  if(argc == 3) {
    sleepSeconds = atoi(argv[2]);
  }else if(argc != 2){
    return 1;
  }

  int stringSize = getStringSize(argv[1]);
  int inputsSize = stringSize * 2;

  int isShift[stringSize];
  ZeroMemory(inputs, sizeof(inputs));

  for(int i=0; i<stringSize; i++){
    // printf("%c\n", argv[1][i]);
    switch(argv[1][i]){
      // 1st Line
      case '1':
        setInputObject(SCANCODE_1, NO_SHIFT);
        break;
      case '2':
        setInputObject(SCANCODE_2, NO_SHIFT);
        break;
      case '3':
        setInputObject(SCANCODE_3, NO_SHIFT);
        break;
      case '4':
        setInputObject(SCANCODE_4, NO_SHIFT);
        break;
      case '5':
        setInputObject(SCANCODE_5, NO_SHIFT);
        break;
      case '6':
        setInputObject(SCANCODE_6, NO_SHIFT);
        break;
      case '7':
        setInputObject(SCANCODE_7, NO_SHIFT);
        break;
      case '8':
        setInputObject(SCANCODE_8, NO_SHIFT);
        break;
      case '9':
        setInputObject(SCANCODE_9, NO_SHIFT);
        break;
      case '0':
        setInputObject(SCANCODE_0, NO_SHIFT);
        break;
      case '-':
        setInputObject(SCANCODE_Minus, NO_SHIFT);
        break;
      case '=':
        setInputObject(SCANCODE_Equal, NO_SHIFT);
        break;
      // 2nd Line
      case 'q':
        setInputObject(SCANCODE_q, NO_SHIFT);
        break;
      case 'w':
        setInputObject(SCANCODE_w, NO_SHIFT);
        break;
      case 'e':
        setInputObject(SCANCODE_e, NO_SHIFT);
        break;
      case 'r':
        setInputObject(SCANCODE_r, NO_SHIFT);
        break;
      case 't':
        setInputObject(SCANCODE_t, NO_SHIFT);
        break;
      case 'y':
        setInputObject(SCANCODE_y, NO_SHIFT);
        break;
      case 'u':
        setInputObject(SCANCODE_u, NO_SHIFT);
        break;
      case 'i':
        setInputObject(SCANCODE_i, NO_SHIFT);
        break;
      case 'o':
        setInputObject(SCANCODE_o, NO_SHIFT);
        break;
      case 'p':
        setInputObject(SCANCODE_p, NO_SHIFT);
        break;
      case '[':
        setInputObject(SCANCODE_LeftSquareBracket, NO_SHIFT);
        break;
      case ']':
        setInputObject(SCANCODE_RightSquareBracket, NO_SHIFT);
        break;
      case '\\':
        setInputObject(SCANCODE_BackwardSlash, NO_SHIFT);
        break;
      // 3rd Line
      case 'a':
        setInputObject(SCANCODE_a, NO_SHIFT);
        break;
      case 's':
        setInputObject(SCANCODE_s, NO_SHIFT);
        break;
      case 'd':
        setInputObject(SCANCODE_d, NO_SHIFT);
        break;
      case 'f':
        setInputObject(SCANCODE_f, NO_SHIFT);
        break;
      case 'g':
        setInputObject(SCANCODE_g, NO_SHIFT);
        break;
      case 'h':
        setInputObject(SCANCODE_h, NO_SHIFT);
        break;
      case 'j':
        setInputObject(SCANCODE_j, NO_SHIFT);
        break;
      case 'k':
        setInputObject(SCANCODE_k, NO_SHIFT);
        break;
      case 'l':
        setInputObject(SCANCODE_l, NO_SHIFT);
        break;
      case ';':
        setInputObject(SCANCODE_Semicolon, NO_SHIFT);
        break;
      case '\'':
        setInputObject(SCANCODE_SingleQuote, NO_SHIFT);
        break;
      // 4th Line
      case 'z':
        setInputObject(SCANCODE_z, NO_SHIFT);
        break;
      case 'x':
        setInputObject(SCANCODE_x, NO_SHIFT);
        break;
      case 'c':
        setInputObject(SCANCODE_c, NO_SHIFT);
        break;
      case 'v':
        setInputObject(SCANCODE_v, NO_SHIFT);
        break;
      case 'b':
        setInputObject(SCANCODE_b, NO_SHIFT);
        break;
      case 'n':
        setInputObject(SCANCODE_n, NO_SHIFT);
        break;
      case 'm':
        setInputObject(SCANCODE_m, NO_SHIFT);
        break;
      case ',':
        setInputObject(SCANCODE_Comma, NO_SHIFT);
        break;
      case '.':
        setInputObject(SCANCODE_Period, NO_SHIFT);
        break;
      case '/':
        setInputObject(SCANCODE_ForwardSlash, NO_SHIFT);
        break;
      // 5th Line
      case ' ':
        setInputObject(SCANCODE_Space, NO_SHIFT);
        break;
     // 1st Line Add_Shift
      case '!':
        setInputObject(SCANCODE_ExclamationMark, ADD_SHIFT);
        break;
      case '@':
        setInputObject(SCANCODE_At, ADD_SHIFT);
        break;
      case '#':
        setInputObject(SCANCODE_Hash, ADD_SHIFT);
        break;
      case '$':
        setInputObject(SCANCODE_DollarSign, ADD_SHIFT);
        break;
      case '%':
        setInputObject(SCANCODE_PercentSign, ADD_SHIFT);
        break;
      case '^':
        setInputObject(SCANCODE_SpacingCircumflexAccent, ADD_SHIFT);
        break;
      case '&':
        setInputObject(SCANCODE_Ampersand, ADD_SHIFT);
        break;
      case '*':
        setInputObject(SCANCODE_Asterisk, ADD_SHIFT);
        break;
      case '(':
        setInputObject(SCANCODE_LeftParenthesis, ADD_SHIFT);
        break;
      case ')':
        setInputObject(SCANCODE_RightParenthesis, ADD_SHIFT);
        break;
      case '_':
        setInputObject(SCANCODE_Underscore, ADD_SHIFT);
        break;
      case '+':
        setInputObject(SCANCODE_Plus, ADD_SHIFT);
        break;
      // 2nd Line
      case 'Q':
        setInputObject(SCANCODE_q, ADD_SHIFT);
        break;
      case 'W':
        setInputObject(SCANCODE_w, ADD_SHIFT);
        break;
      case 'E':
        setInputObject(SCANCODE_e, ADD_SHIFT);
        break;
      case 'R':
        setInputObject(SCANCODE_r, ADD_SHIFT);
        break;
      case 'T':
        setInputObject(SCANCODE_t, ADD_SHIFT);
        break;
      case 'Y':
        setInputObject(SCANCODE_y, ADD_SHIFT);
        break;
      case 'U':
        setInputObject(SCANCODE_u, ADD_SHIFT);
        break;
      case 'I':
        setInputObject(SCANCODE_i, ADD_SHIFT);
        break;
      case 'O':
        setInputObject(SCANCODE_o, ADD_SHIFT);
        break;
      case 'P':
        setInputObject(SCANCODE_p, ADD_SHIFT);
        break;
      case '{':
        setInputObject(SCANCODE_LeftBrace, ADD_SHIFT);
        break;
      case '}':
        setInputObject(SCANCODE_RightBrace, ADD_SHIFT);
        break;
      case '|':
        setInputObject(SCANCODE_VerticalBar, ADD_SHIFT);
        break;
      // 3rd Line
      case 'A':
        setInputObject(SCANCODE_a, ADD_SHIFT);
        break;
      case 'S':
        setInputObject(SCANCODE_s, ADD_SHIFT);
        break;
      case 'D':
        setInputObject(SCANCODE_d, ADD_SHIFT);
        break;
      case 'F':
        setInputObject(SCANCODE_f, ADD_SHIFT);
        break;
      case 'G':
        setInputObject(SCANCODE_g, ADD_SHIFT);
        break;
      case 'H':
        setInputObject(SCANCODE_h, ADD_SHIFT);
        break;
      case 'J':
        setInputObject(SCANCODE_j, ADD_SHIFT);
        break;
      case 'K':
        setInputObject(SCANCODE_k, ADD_SHIFT);
        break;
      case 'L':
        setInputObject(SCANCODE_l, ADD_SHIFT);
        break;
      case ':':
        setInputObject(SCANCODE_Colon, ADD_SHIFT);
        break;
      case '"':
        setInputObject(SCANCODE_DoubleQuote, ADD_SHIFT);
        break;
      // 4th Line
      case 'Z':
        setInputObject(SCANCODE_z, ADD_SHIFT);
        break;
      case 'X':
        setInputObject(SCANCODE_x, ADD_SHIFT);
        break;
      case 'C':
        setInputObject(SCANCODE_c, ADD_SHIFT);
        break;
      case 'V':
        setInputObject(SCANCODE_v, ADD_SHIFT);
        break;
      case 'B':
        setInputObject(SCANCODE_b, ADD_SHIFT);
        break;
      case 'N':
        setInputObject(SCANCODE_n, ADD_SHIFT);
        break;
      case 'M':
        setInputObject(SCANCODE_m, ADD_SHIFT);
        break;
      case '<':
        setInputObject(SCANCODE_LessThanSign, ADD_SHIFT);
        break;
      case '>':
        setInputObject(SCANCODE_GreaterThanSign, ADD_SHIFT);
        break;
      case '?':
        setInputObject(SCANCODE_QuestionMark, ADD_SHIFT);
        break;
    }
  }

  if(sleepSeconds != 0){
    Sleep(1000*sleepSeconds);
  }

  // SendInput() is of <windows.h>
  // https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-sendinput
  UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
  if (uSent != ARRAYSIZE(inputs))
  {
    printf("SendInput failed: 0x%x\n", HRESULT_FROM_WIN32(GetLastError()));
    exit(1);
  }
  return 0;
}
