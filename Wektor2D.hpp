class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
    public:
    double x;
    double y;

    Wektor2D(){ x = 0; y = 0; }
    Wektor2D(double a, double b){
        x = a;
        y = b;
    }

    void setX(double a){ x = a; }
    void setY(double b){ y = b; }
    double getX(){ return x; }
    double getY(){ return y; }
};

Wektor2D operator+(Wektor2D v1, Wektor2D v2){
    return Wektor2D{v1.x + v2.x, v1.y + v2.y};
}

double operator*(Wektor2D v1, Wektor2D v2){
    return v1.x*v2.x + v1.y*v2.y;
}
