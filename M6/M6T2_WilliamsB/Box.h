// Box class declartion.

class Box {
private: 
  double width;
  double length;
  double height;
public:
  void setWidth(double);
  void setLength(double);
  void setHeight(double);
  double getWidth() const;
  double getLength() const;
  double getHeight() const;
  double getVolume() const;
};

// setWidth assigns a value to the width member.

void Box::setWidth(double w) { width = w; }

// setLength assigns a value to the length member.

void Box::setLength(double len) { length = len; }

// setHeight assigns a value to the height member.

void Box::setHeight(double h) { height = h; }

// getWidth returns the value in the width member.

double Box::getWidth() const { return width; }

// getLength returns the value in the length member.

double Box::getLength() const { return length; }

// getHeight returns the value in the height member.

double Box::getHeight() const { return height; }

// getVolume returns the product of width times length times height.

double Box::getVolume() const { return width * length * height; }

// End of declarations