#pragma once
#include "PermutationField.h"

#include <Base/Types.h>

#include <type_safe/strong_typedef.hpp>

namespace Renderer
{
    struct VertexShaderDesc
    {
        void AddPermutationField(const std::string& key, const std::string& value)
        {
            PermutationField& permutationField = permutationFields.emplace_back();
            permutationField.key = key;
            permutationField.value = value;
        }

        std::string path;
        std::vector<PermutationField> permutationFields;
    };

    // Lets strong-typedef an ID type with the underlying type of u16
    STRONG_TYPEDEF(VertexShaderID, u16);
}