void setup() {

}

void loop() {
    /**
     * if (we are getting power from the hub) {
     *      if (it is dark out) {
     *          power the lights with the hub
     *      } else if (it is light out) {
     *          charge the batteries
     * } else if (we are not getting power from the hub) {
     *      if (it is dark out) {
     *          power the lights with the hub and start the countdown to turn off
     *      } else if (it is light out) {
     *          turn self off 
     *      }
     * }
     */

}



/**
 * Mode manager class that houses the helper classes and tells them what to do. 
 * 
 * public:
 *  void POWER_LIGHTS_W_HUB() {
 *      turnOnLights()
 *      set the batteryPowerSwitch to off
 *  }
 * 
 *  void POWER_LIGHTS_W_BATTERY() {
 *      turnOnLights()
 *      set the batteryPowerSwitch to on
 *      start the countdown to turn off the system  
 *  }
 * 
 *  void CHARGE_BATTERY_W_HUB() {
 *      tell the Light manager to turn off the lights
 *      turn on the powerToBatterySwitch to on
 *  }
 * 
 *  void KILL_SWITCH() {
 *      set the power to Arduino switch to off
 *  }
 *  
 * 
 * private:
 *      LightManager
 *      // Each of these controls a transistor that in turn controls some function of the lights.
 *      batteryPowerSwitch
 *      powerToLightSwitch
 *      powerToBatterySwitch
 *      powerToArduinoSwitch
 *      
 *      void turnOnLights() {
 *          tell the light manager to turn on the lights
 *          set the powerToBatterSwitch to off
 *      } 
 */

/**
 * The sensor manager class takes in input from the light sensor and measures the hubs voltage output.
 * 
 * public:
 *      
 *      bool HubIsMovig() {
 *          Check to see if the hub is outputting above the voltage threshold. (guess the threshold will be 7.7 volts)
 *      } 
 * 
 *      bool NightTime() {
 *          Check to see if we are getting any readings below our threshold for the photo cell
 *      }
 * 
 * private:
 *      // Variables for the pins for either read out. 
 *      hubVoltRead
 *      photoCellRead
 */

/**
 * The light manager takes care of all things lights. This includes blinking patterns and delay times.
 * 
 *  public:
 *      
 *      void lightSwitch() {
 *          Tell the lights to flip the switch!
 *          But wait!! The lights have a 30 second delay after each request before they flip the switch. 
 *          If the switch is on and you ask it to turn on, it will just continue running the lights.
 *      }
 * 
 *  private:
 * 
 *      Need a timer variable along with variables for the both lights pins
 * 
 *      void runLights() {
 *          Blink the rear lights and keep the front light on steady
 *      }
 */


// Bonus! Figure out how to write morse code with the rear light!!