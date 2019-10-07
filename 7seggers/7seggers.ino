const byte pin_a = 11;
const byte pin_b = 10;
const byte pin_c = 9;
const byte pin_d = 7;
const byte pin_e = 6;
const byte pin_f = 12;
const byte pin_g = 13;
const byte pin_p = 8;

const byte top = 1;
const byte top_right = 2;
const byte bottom_right = 4;
const byte bottom = 8;
const byte bottom_left = 16;
const byte top_left = 32;
const byte middle = 64;

const byte segments[] = {top, top_right, bottom_right, bottom, bottom_left, top_left, middle};
const byte pins[] = {pin_a, pin_b, pin_c, pin_d, pin_e, pin_f, pin_g, pin_p};

const byte ZERO = top | top_right | bottom_right | bottom | bottom_left | top_left;
const byte ONE = top_right | bottom_right;
const byte TWO = top | top_right | bottom | bottom_left | middle;
const byte THREE = top | top_right | bottom_right | bottom | middle;
const byte FOUR = top_right | bottom_right | top_left | middle;
const byte FIVE = top | bottom_right | bottom | top_left | middle;
const byte SIX = top | bottom_right | bottom | bottom_left | top_left | middle;
const byte SEVEN = top | top_right | bottom_right;
const byte EIGHT = top | top_right | bottom_right | bottom | bottom_left | top_left | middle;
const byte NINE = top | top_right | bottom_right | top_left | middle;
const byte A = bottom_left | top_left | top | middle | top_right | bottom_right;
const byte B = EIGHT;
const byte E = top | top_left | bottom_left | bottom | middle;
const byte H = top_right | bottom_right | bottom_left | top_left | middle;
const byte I = ONE;

void setup() {
  for (byte i = 0; i < 7; i = i + 1) {
      pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  byte sequence_length = 12;
  byte sequence[sequence_length] = {
    NINE,
    EIGHT,
    SEVEN,
    SIX,
    FIVE,
    FOUR,
    THREE,
    TWO,
    ONE,
    ZERO,
    0
  };

  for (byte n = 0; n < sequence_length; n = n + 1) {
    byte number = sequence[n];
    for (byte i = 0; i < 7; i++) {
      digitalWrite(pins[i], (number & segments[i]) ? LOW : HIGH);
    }
    delay(100);
  }

  
  digitalWrite(pin, segment_top);

  byte abe_length = 6;
  byte abe[abe_length] = {H, I, 0, A, B, E};

    for (byte n = 0; n < abe_length; n = n + 1) {
    byte number = abe[n];
    for (byte i = 0; i < 7; i = i + 1) {
      digitalWrite(pins[i], (number & segments[i]) ? LOW : HIGH);
    }
    delay(1000);
  }
}
