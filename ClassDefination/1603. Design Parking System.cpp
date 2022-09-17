class ParkingSystem {
    private:
     int small,big,medium;
public:
    ParkingSystem(int big, int medium, int small) {
        this->small=small;
        this->medium=medium;
        this->big=big;
    }
    
    bool addCar(int carType) {
    
        switch(carType){
            case 1:if(big!=0){
                big=big-1;
                return true;
            }
                break;
            case 2:if(medium!=0){
                medium--;
                return true;
            }
                break;
            case 3:if(small!=0){
                small--;
                return true;
            }
                break;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */