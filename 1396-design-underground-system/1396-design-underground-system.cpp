class UndergroundSystem {
    //hash map to store checkIn of a passanger
    //id -> {station_name, time}
    unordered_map<int, pair<string, int>> checkInStation;
    
    //hash map to store station1-station2 and their total_time
    //Route -> {total_time, count}
    unordered_map<string, pair<int, int>> checkOutStation;

public:
    UndergroundSystem() {
    }
    
    void checkIn(int id, string stationName, int t) {
        //store the detail of checkIn passenger 
        checkInStation[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        //store the source station and In time of the passanger
        auto cIn = checkInStation[id];
        
        //remove the checkedIn passenger from first hash map 
        checkInStation.erase(id);
        
        string route = cIn.first + "_" + stationName;
        
        //store the total time for a route from station1 to station2
        checkOutStation[route].first += t - cIn.second;     //total_time(outTime - inTime)
        checkOutStation[route].second += 1;                 //count
    }
    
    double getAverageTime(string startStation, string endStation) {
        string route = startStation + "_" + endStation;     //route
        
        auto time = checkOutStation[route];             //extract total_time and count pair
        
        return (double)time.first/time.second;          //return average time
    }
};
/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */