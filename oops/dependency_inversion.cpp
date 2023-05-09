// WeatherData.h
#include <iostream>
using namespace std;

class WeatherData {
public:
  virtual ~WeatherData() {}
  virtual int getTemperature() = 0;
  virtual int getHumidity() = 0;
};

// RemoteWeatherAPI.h
class RemoteWeatherAPI : public WeatherData {
public:
  int getTemperature() override {
    // retrieve temperature from remote API
    return temperature;
  }

  int getHumidity() override {
    // retrieve humidity from remote API
    return humidity;
  }

private:
  int temperature;
  int humidity;
};

// Display.h
class Display {
public:
  Display(WeatherData *weatherData) : m_weatherData(weatherData) {}

  void show() {
    std::cout << "Temperature: " << m_weatherData->getTemperature()
              << std::endl;
    std::cout << "Humidity: " << m_weatherData->getHumidity() << std::endl;
  }

private:
  WeatherData *m_weatherData;
};
