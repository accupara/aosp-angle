// GENERATED FILE - DO NOT EDIT.
// Generated by gen_overlay_widgets.py using data from overlay_widgets.json.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Overlay_autogen.cpp:
//   Autogenerated overlay widget declarations.

namespace gl
{
enum class WidgetId
{
    // Frames per second (Count/Second).
    FPS,
    // Last validation error (Text).
    VulkanLastValidationMessage,
    // Number of validation errors and warnings (Count).
    VulkanValidationMessageCount,
    // Number of RenderPasses in a frame (Count).
    VulkanRenderPassCount,
    // Secondary Command Buffer pool memory waste (Bytes).
    VulkanSecondaryCommandBufferPoolWaste,
    // Number of Descriptor Set writes in a frame (Count).
    VulkanWriteDescriptorSetCount,
    // Descriptor Set Allocations.
    VulkanDescriptorSetAllocations,
    // Shader Resource Descriptor Set Cache Hit Rate.
    VulkanShaderResourceDSHitRate,
    // Buffer Allocations Made By vk::DynamicBuffer.
    VulkanDynamicBufferAllocations,
    // Total size of all descriptor set caches
    VulkanDescriptorCacheSize,
    // Number of cached Texture descriptor sets
    VulkanTextureDescriptorCacheSize,
    // Number of cached default uniform descriptor sets
    VulkanUniformDescriptorCacheSize,
    // Total size of all keys in the descriptor set caches
    VulkanDescriptorCacheKeySize,
    // Number of times the Vulkan backend attempted to submit commands
    VulkanAttemptedSubmissions,
    // Number of times the Vulkan backend actually submitted commands
    VulkanActualSubmissions,
    // Number of times the Vulkan backend has looked up the pipeline cache
    VulkanPipelineCacheLookups,
    // Number of times the Vulkan backend has missed the pipeline cache
    VulkanPipelineCacheMisses,
    // Total time spent creating pipelines that missed the cache.
    VulkanTotalPipelineCacheMissTimeMs,
    // Total time spent creating pipelines that hit the cache.
    VulkanTotalPipelineCacheHitTimeMs,

    InvalidEnum,
    EnumCount = InvalidEnum,
};

// We can use this "X" macro to generate multiple code patterns.
#define ANGLE_WIDGET_ID_X(PROC)                 \
    PROC(FPS)                                   \
    PROC(VulkanLastValidationMessage)           \
    PROC(VulkanValidationMessageCount)          \
    PROC(VulkanRenderPassCount)                 \
    PROC(VulkanSecondaryCommandBufferPoolWaste) \
    PROC(VulkanWriteDescriptorSetCount)         \
    PROC(VulkanDescriptorSetAllocations)        \
    PROC(VulkanShaderResourceDSHitRate)         \
    PROC(VulkanDynamicBufferAllocations)        \
    PROC(VulkanDescriptorCacheSize)             \
    PROC(VulkanTextureDescriptorCacheSize)      \
    PROC(VulkanUniformDescriptorCacheSize)      \
    PROC(VulkanDescriptorCacheKeySize)          \
    PROC(VulkanAttemptedSubmissions)            \
    PROC(VulkanActualSubmissions)               \
    PROC(VulkanPipelineCacheLookups)            \
    PROC(VulkanPipelineCacheMisses)             \
    PROC(VulkanTotalPipelineCacheMissTimeMs)    \
    PROC(VulkanTotalPipelineCacheHitTimeMs)

}  // namespace gl
