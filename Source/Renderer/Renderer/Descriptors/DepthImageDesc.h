#pragma once
#include "Renderer/RenderStates.h"

#include <Base/Types.h>

#include <type_safe/strong_typedef.hpp>

namespace Renderer
{
    struct DepthImageDesc
    {
        std::string debugName = "";

        vec2 dimensions = vec2(0, 0);
        ImageDimensionType dimensionType = ImageDimensionType::DIMENSION_ABSOLUTE;

        DepthImageFormat format = DepthImageFormat::UNKNOWN;
        SampleCount sampleCount = SampleCount::SAMPLE_COUNT_1;
        f32 depthClearValue = 1.0f;
        u8 stencilClearValue = 0;
    };

    // Lets strong-typedef an ID type with the underlying type of u16
    STRONG_TYPEDEF(DepthImageID, u16);
}