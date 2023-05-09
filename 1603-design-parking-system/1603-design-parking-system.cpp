class ParkingSystem {
public:
    int big, medium, small;
    ParkingSystem(int big_, int medium_, int small_) {
        big = big_;
        medium = medium_;
        small = small_;
    }
    
    bool addCar(int carType) {
        if(carType==1){
            if(big-->0)
                return true;
        }
        else if(carType==2){
            if(medium-->0)
                return true;
        }
        else{
            if(small-->0)
                return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */