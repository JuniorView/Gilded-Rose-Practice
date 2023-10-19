#include "SystemBattery.h"
#include "BatteryApp.h"
#include "BatteryLogger.h"

int main() {
    auto *systemBattery = new SystemBattery;

    Observer *batteryApp = new BatteryApp(*systemBattery, "Battery App");

    systemBattery->setBatteryLevel(87);

    systemBattery->setBatteryLevel(85);

    delete batteryApp;
    delete systemBattery;

    return 0;
}
