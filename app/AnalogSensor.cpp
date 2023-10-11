#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

AnalogSensor::~AnalogSensor()
{
}

int AnalogSensor::Read()
{
    std::vector<int> readings(mSamples, 10);

    // written without pointer or else could have deleted readings at the end
    double result = std::accumulate(readings.begin(), readings.end(), 0.0) / readings.size();
    return result;
}


