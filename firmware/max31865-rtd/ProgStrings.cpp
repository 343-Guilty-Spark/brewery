/*
 * Andy's Workshop Brewery Max31865 RTD controller ATMega328p firmware
 * Copyright (c) 2018 Andy Brown. http://www.andybrown.me.uk
 * Please see website for licensing terms.
 */

#include "Application.h"


namespace brewery {

  /*
   * Constant strings
   */

  const char IdString[] PROGMEM =  "\"Andy's Workshop Brewery MAX31865 RTD temperature sensors\"";
  const char CapabilitiesString[] PROGMEM = "{\"type\":\"rtd\",\"impl\":\"max31865\",\"names\": [ \"red\",\"blue\"]}";
  const char VersionString[] PROGMEM =  "{\"hardware\":1,\"firmware\":" FIRMWARE_VERSION "}";
  const char OKString[] PROGMEM =  "\"OK\"" ;
  const char UnknownCommandString[] PROGMEM = "ERROR:00:Unknown command";
  const char MissingParameterString[] PROGMEM = "ERROR:01:Missing parameter" ;
  const char UnknownParameterString[] PROGMEM = "ERROR:02:Unknown parameter";
  const char OutOfRangeString[] PROGMEM = "ERROR:03:Parameter out of range";
  const char CopyrightString[] PROGMEM = "\"Copyright (c) 2018 Andy Brown\"";
}
