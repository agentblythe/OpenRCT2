/*****************************************************************************
 * Copyright (c) 2014-2020 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "../common.h"
#include "../peep/Peep.h"

#include <vector>

namespace RCT1
{
    struct VehicleColourSchemeCopyDescriptor
    {
        int8_t colour1, colour2, colour3;
    };

    enum class RideType : uint8_t;

    colour_t GetColour(colour_t colour);
    PeepSpriteType GetPeepSpriteType(uint8_t rct1SpriteType);
    ObjectEntryIndex GetTerrain(uint8_t terrain);
    ObjectEntryIndex GetTerrainEdge(uint8_t terrainEdge);

    uint8_t GetRideType(RideType rideType, uint8_t vehicleType);
    VehicleColourSchemeCopyDescriptor GetColourSchemeCopyDescriptor(uint8_t vehicleType);
    bool RideTypeUsesVehicles(RideType rideType);
    bool PathIsQueue(uint8_t pathType);
    uint8_t NormalisePathAddition(uint8_t pathAdditionType);
    uint8_t GetVehicleSubEntryIndex(uint8_t vehicleSubEntry);

    const char* GetRideTypeObject(RideType rideType);
    const char* GetVehicleObject(uint8_t vehicleType);
    const char* GetSmallSceneryObject(uint8_t smallSceneryType);
    const char* GetLargeSceneryObject(uint8_t largeSceneryType);
    const char* GetWallObject(uint8_t wallType);
    const char* GetPathObject(uint8_t pathType);
    const char* GetPathAddtionObject(uint8_t pathAdditionType);
    const char* GetSceneryGroupObject(uint8_t sceneryGroupType);
    const char* GetWaterObject(uint8_t waterType);

    const std::vector<const char*> GetSceneryObjects(uint8_t sceneryType);
} // namespace RCT1
