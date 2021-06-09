using namespace std;
 
 
class Progression {
protected:
    double first_element;
    double delta;
public:
    Progression(double a0, double delta);
    double GetIndexElement(int number) const;
    double GetSumBeforeNumber(int number) const;
};
 
class ArithmeticProgression : public Progression {
public:
    ArithmeticProgression(double a0, double delta);
 
    double GetIndexElement(int number) const;
 
    double GetSumBeforeNumber(int number) const;
 
};
 
class GeometricProgression : public Progression {
public:
    GeometricProgression(double start_element, double delta);
 
    double GetIndexElement(int number) const;
 
    double GetSumBeforeNumber(int number) const;
};
