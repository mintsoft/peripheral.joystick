/*
 *  Copyright (C) 2015-2021 Garrett Brown
 *  Copyright (C) 2015-2021 Team Kodi
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSE.md for more information.
 */

#pragma once

#include "storage/StorageTypes.h"

#include <string>

class TiXmlElement;

namespace JOYSTICK
{
  class CDevice;
  class CDeviceConfiguration;

  struct AxisConfiguration;
  struct ButtonConfiguration;

  class CDeviceXml
  {
  public:
    static bool Serialize(const CDevice& record, TiXmlElement* pElement);
    static bool Deserialize(const TiXmlElement* pElement, CDevice& record);

    static bool SerializeConfig(const CDeviceConfiguration& config, TiXmlElement* pElement);
    static bool DeserializeConfig(const TiXmlElement* pElement, CDeviceConfiguration& config);

    static bool SerializeAppearance(const std::string& controllerId, TiXmlElement* pElement);
    static bool DeserializeAppearance(const TiXmlElement* pElement, std::string& controllerId);

    static bool SerializeAxis(unsigned int index, const AxisConfiguration& axisConfig, TiXmlElement* pElement);
    static bool DeserializeAxis(const TiXmlElement* pElement, unsigned int& index, AxisConfiguration& axisConfig);

    static bool SerializeButton(unsigned int index, const ButtonConfiguration& buttonConfig, TiXmlElement* pElement);
    static bool DeserializeButton(const TiXmlElement* pElement, unsigned int& index, ButtonConfiguration& buttonConfig);
  };
}
