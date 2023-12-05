#include <stdio.h>
 
struct Vektor {
    float x;
    float y;
};

float skalarProdukt(const Vektor& a, const Vektor& b) {
    return (a.x * b.x) + (a.y * b.y);
}

Vektor vektorSumme(const Vektor& a, const Vektor& b) {
    Vektor x = {a.x + b.x, a.y + b.y};
    return x;
}

Vektor kreuzProdukt(const Vektor& a, const Vektor& b) {
    Vektor x = {a.x * b.y, a.y * b.x};
    return x;
}

Vektor skalierterVektor(float faktor, const Vektor& x) {
    Vektor y = {x.x * faktor, x.y * faktor};
    return y;
}

int main() {

    Vektor a = {4.0, 7.0}, b = {9.0, 2.0};

    float skalar_produkt = skalarProdukt(a, b);
    printf("Skalarprodukt = %f\n", skalar_produkt);

    Vektor c = vektorSumme(a, b);
    printf("Vektorsumme = (%f, %f)\n", c.x, c.y);

    Vektor d = kreuzProdukt(a, b);
    printf("Kreuzprodukt = (%f, %f)\n", d.x, d.y);

    float faktor = 2.4;
    Vektor e = skalierterVektor(faktor, a);
    printf("skalierter Vektor = (%f, %f)\n", e.x, e.y);

    return 0;

}