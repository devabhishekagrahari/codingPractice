#include<iostream>
using namespace std;

class UnitConverter{
    protected:
    float cmToMeter(float cm) const{
        return cm/100.0f;
    }
    float m3ToLitre(float m3) const{
        return m3*1000.0f;
    }
};

class Cylinder:protected UnitConverter{
    static constexpr float PI=3.14159265f;
    float radiusCm;
    float heightCm;
    public:
     Cylinder(float rCm, float hCm)
     :radiusCm(rCm),heightCm(hCm){}

     float volumeInLitres() const{
        float rM=cmToMeter(radiusCm);
        float hM=cmToMeter(heightCm);
        float volumeM3= PI*rM*rM*hM;
        return m3ToLitre(volumeM3);
     }
};
class MilkPricing: public Cylinder{
    static constexpr float PRICE_PER_LITRE=40.0f;
    public:
     MilkPricing(float rCm, float hCm ):
     Cylinder(rCm,hCm){}
     float calculateCost() const {
        return volumeInLitres()*PRICE_PER_LITRE;
     }
};

int main(){
    float rCm, hCm;
    cin>>rCm>>hCm;

    MilkPricing mlk(rCm,hCm);
    cout<<mlk.calculateCost();
    return 0;
}