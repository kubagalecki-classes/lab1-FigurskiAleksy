class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
    public:
    Wektor2D()
    {
      x=0;
      y=0;
    };
    Wektor2D(double a, double b)
    {
    x=a;
    y=b;
    };
  
    void setX(double a) {x=a;};
    void setY(double b) {y=b;};
    double getX() {return x;};
    double getY() {return y;};

    double x;
    double y; 
};

Wektor2D operator+(Wektor2D a1, Wektor2D a2)
{
  Wektor2D w;
  w.setX(a1.getX()+a2.getX());
  w.setY(a1.getY()+a2.getY());
  return w;
}

double operator*(Wektor2D a1, Wektor2D a2)
{
  double v;
  v=a1.getX()*a2.getX()+a1.getY()*a2.getY();
  return v;
}