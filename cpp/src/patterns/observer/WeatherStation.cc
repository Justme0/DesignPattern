#include "CurrentConditionDisplay.h"
#include "WeatherData.h"
#include "HeatIndexDisplay.h"

int main () {
    WeatherData *weather = new WeatherData();
    CurrentConditionDisplay *curcond1 = new CurrentConditionDisplay(weather);
    CurrentConditionDisplay *curcond2 = new CurrentConditionDisplay(weather);
    HeatIndexDisplay *heatidx1 = new HeatIndexDisplay(weather);
    HeatIndexDisplay *heatidx2 = new HeatIndexDisplay(weather);
    weather->SetChange(0, 0, 0);
    weather->RemoveObserver(curcond1);
    weather->SetChange(1, 2, 3);
    weather->RemoveObserver(heatidx1);
    weather->SetChange(3, 2, 1);
    weather->RemoveObserver(curcond2);
    weather->SetChange(6, 6, 6);
    return 0;
}
