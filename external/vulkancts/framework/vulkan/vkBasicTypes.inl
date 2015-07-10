/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
#define VK_API_VERSION				VK_MAKE_VERSION(0, 138, 0)
#define VK_MAX_PHYSICAL_DEVICE_NAME	256
#define VK_MAX_EXTENSION_NAME		256
#define VK_UUID_LENGTH				16
#define VK_MAX_MEMORY_TYPES			32
#define VK_MAX_MEMORY_HEAPS			16
#define VK_MAX_DESCRIPTION			256

VK_DEFINE_HANDLE			(VkInstance,					HANDLE_TYPE_INSTANCE);
VK_DEFINE_HANDLE			(VkPhysicalDevice,				HANDLE_TYPE_PHYSICAL_DEVICE);
VK_DEFINE_HANDLE			(VkDevice,						HANDLE_TYPE_DEVICE);
VK_DEFINE_HANDLE			(VkQueue,						HANDLE_TYPE_QUEUE);
VK_DEFINE_HANDLE			(VkCmdBuffer,					HANDLE_TYPE_CMD_BUFFER);
VK_DEFINE_NONDISP_HANDLE	(VkFence,						HANDLE_TYPE_FENCE);
VK_DEFINE_NONDISP_HANDLE	(VkDeviceMemory,				HANDLE_TYPE_DEVICE_MEMORY);
VK_DEFINE_NONDISP_HANDLE	(VkBuffer,						HANDLE_TYPE_BUFFER);
VK_DEFINE_NONDISP_HANDLE	(VkImage,						HANDLE_TYPE_IMAGE);
VK_DEFINE_NONDISP_HANDLE	(VkSemaphore,					HANDLE_TYPE_SEMAPHORE);
VK_DEFINE_NONDISP_HANDLE	(VkEvent,						HANDLE_TYPE_EVENT);
VK_DEFINE_NONDISP_HANDLE	(VkQueryPool,					HANDLE_TYPE_QUERY_POOL);
VK_DEFINE_NONDISP_HANDLE	(VkBufferView,					HANDLE_TYPE_BUFFER_VIEW);
VK_DEFINE_NONDISP_HANDLE	(VkImageView,					HANDLE_TYPE_IMAGE_VIEW);
VK_DEFINE_NONDISP_HANDLE	(VkAttachmentView,				HANDLE_TYPE_ATTACHMENT_VIEW);
VK_DEFINE_NONDISP_HANDLE	(VkShaderModule,				HANDLE_TYPE_SHADER_MODULE);
VK_DEFINE_NONDISP_HANDLE	(VkShader,						HANDLE_TYPE_SHADER);
VK_DEFINE_NONDISP_HANDLE	(VkPipelineCache,				HANDLE_TYPE_PIPELINE_CACHE);
VK_DEFINE_NONDISP_HANDLE	(VkPipelineLayout,				HANDLE_TYPE_PIPELINE_LAYOUT);
VK_DEFINE_NONDISP_HANDLE	(VkRenderPass,					HANDLE_TYPE_RENDER_PASS);
VK_DEFINE_NONDISP_HANDLE	(VkPipeline,					HANDLE_TYPE_PIPELINE);
VK_DEFINE_NONDISP_HANDLE	(VkDescriptorSetLayout,			HANDLE_TYPE_DESCRIPTOR_SET_LAYOUT);
VK_DEFINE_NONDISP_HANDLE	(VkSampler,						HANDLE_TYPE_SAMPLER);
VK_DEFINE_NONDISP_HANDLE	(VkDescriptorPool,				HANDLE_TYPE_DESCRIPTOR_POOL);
VK_DEFINE_NONDISP_HANDLE	(VkDescriptorSet,				HANDLE_TYPE_DESCRIPTOR_SET);
VK_DEFINE_NONDISP_HANDLE	(VkDynamicViewportState,		HANDLE_TYPE_DYNAMIC_VIEWPORT_STATE);
VK_DEFINE_NONDISP_HANDLE	(VkDynamicRasterState,			HANDLE_TYPE_DYNAMIC_RASTER_STATE);
VK_DEFINE_NONDISP_HANDLE	(VkDynamicColorBlendState,		HANDLE_TYPE_DYNAMIC_COLOR_BLEND_STATE);
VK_DEFINE_NONDISP_HANDLE	(VkDynamicDepthStencilState,	HANDLE_TYPE_DYNAMIC_DEPTH_STENCIL_STATE);
VK_DEFINE_NONDISP_HANDLE	(VkFramebuffer,					HANDLE_TYPE_FRAMEBUFFER);
VK_DEFINE_NONDISP_HANDLE	(VkCmdPool,						HANDLE_TYPE_CMD_POOL);

enum VkResult
{
	VK_SUCCESS								= 0,
	VK_UNSUPPORTED							= 1,
	VK_NOT_READY							= 2,
	VK_TIMEOUT								= 3,
	VK_EVENT_SET							= 4,
	VK_EVENT_RESET							= 5,
	VK_INCOMPLETE							= 6,
	VK_ERROR_UNKNOWN						= -1,
	VK_ERROR_UNAVAILABLE					= -2,
	VK_ERROR_INITIALIZATION_FAILED			= -3,
	VK_ERROR_OUT_OF_HOST_MEMORY				= -4,
	VK_ERROR_OUT_OF_DEVICE_MEMORY			= -5,
	VK_ERROR_DEVICE_ALREADY_CREATED			= -6,
	VK_ERROR_DEVICE_LOST					= -7,
	VK_ERROR_INVALID_POINTER				= -8,
	VK_ERROR_INVALID_VALUE					= -9,
	VK_ERROR_INVALID_HANDLE					= -10,
	VK_ERROR_INVALID_ORDINAL				= -11,
	VK_ERROR_INVALID_MEMORY_SIZE			= -12,
	VK_ERROR_INVALID_EXTENSION				= -13,
	VK_ERROR_INVALID_FLAGS					= -14,
	VK_ERROR_INVALID_ALIGNMENT				= -15,
	VK_ERROR_INVALID_FORMAT					= -16,
	VK_ERROR_INVALID_IMAGE					= -17,
	VK_ERROR_INVALID_DESCRIPTOR_SET_DATA	= -18,
	VK_ERROR_INVALID_QUEUE_TYPE				= -19,
	VK_ERROR_UNSUPPORTED_SHADER_IL_VERSION	= -20,
	VK_ERROR_BAD_SHADER_CODE				= -21,
	VK_ERROR_BAD_PIPELINE_DATA				= -22,
	VK_ERROR_NOT_MAPPABLE					= -23,
	VK_ERROR_MEMORY_MAP_FAILED				= -24,
	VK_ERROR_MEMORY_UNMAP_FAILED			= -25,
	VK_ERROR_INCOMPATIBLE_DEVICE			= -26,
	VK_ERROR_INCOMPATIBLE_DRIVER			= -27,
	VK_ERROR_INCOMPLETE_COMMAND_BUFFER		= -28,
	VK_ERROR_BUILDING_COMMAND_BUFFER		= -29,
	VK_ERROR_MEMORY_NOT_BOUND				= -30,
	VK_ERROR_INCOMPATIBLE_QUEUE				= -31,
	VK_ERROR_INVALID_LAYER					= -32,
};

enum VkStructureType
{
	VK_STRUCTURE_TYPE_APPLICATION_INFO							= 0,
	VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO						= 1,
	VK_STRUCTURE_TYPE_MEMORY_ALLOC_INFO							= 2,
	VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO					= 3,
	VK_STRUCTURE_TYPE_ATTACHMENT_VIEW_CREATE_INFO				= 4,
	VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO					= 5,
	VK_STRUCTURE_TYPE_SHADER_CREATE_INFO						= 6,
	VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO				= 7,
	VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO						= 8,
	VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO			= 9,
	VK_STRUCTURE_TYPE_DYNAMIC_VIEWPORT_STATE_CREATE_INFO		= 10,
	VK_STRUCTURE_TYPE_DYNAMIC_RASTER_STATE_CREATE_INFO			= 11,
	VK_STRUCTURE_TYPE_DYNAMIC_COLOR_BLEND_STATE_CREATE_INFO		= 12,
	VK_STRUCTURE_TYPE_DYNAMIC_DEPTH_STENCIL_STATE_CREATE_INFO	= 13,
	VK_STRUCTURE_TYPE_CMD_BUFFER_CREATE_INFO					= 14,
	VK_STRUCTURE_TYPE_EVENT_CREATE_INFO							= 15,
	VK_STRUCTURE_TYPE_FENCE_CREATE_INFO							= 16,
	VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO						= 17,
	VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO					= 18,
	VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO			= 19,
	VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO				= 20,
	VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO	= 21,
	VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO	= 22,
	VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO	= 23,
	VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO		= 24,
	VK_STRUCTURE_TYPE_PIPELINE_RASTER_STATE_CREATE_INFO			= 25,
	VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO	= 26,
	VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO	= 27,
	VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO	= 28,
	VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO							= 29,
	VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO						= 30,
	VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO					= 31,
	VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO					= 32,
	VK_STRUCTURE_TYPE_CMD_BUFFER_BEGIN_INFO						= 33,
	VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO					= 34,
	VK_STRUCTURE_TYPE_LAYER_CREATE_INFO							= 35,
	VK_STRUCTURE_TYPE_MEMORY_BARRIER							= 36,
	VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER						= 37,
	VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER						= 38,
	VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO				= 39,
	VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET						= 40,
	VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET						= 41,
	VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO						= 42,
	VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO				= 43,
	VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE						= 44,
	VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO				= 45,
	VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION					= 46,
	VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION						= 47,
	VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY						= 48,
	VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO					= 49,
	VK_STRUCTURE_TYPE_CMD_POOL_CREATE_INFO						= 50,
};

enum VkSystemAllocType
{
	VK_SYSTEM_ALLOC_TYPE_API_OBJECT			= 0,
	VK_SYSTEM_ALLOC_TYPE_INTERNAL			= 1,
	VK_SYSTEM_ALLOC_TYPE_INTERNAL_TEMP		= 2,
	VK_SYSTEM_ALLOC_TYPE_INTERNAL_SHADER	= 3,
	VK_SYSTEM_ALLOC_TYPE_DEBUG				= 4,
};

enum VkFormat
{
	VK_FORMAT_UNDEFINED				= 0,
	VK_FORMAT_R4G4_UNORM			= 1,
	VK_FORMAT_R4G4_USCALED			= 2,
	VK_FORMAT_R4G4B4A4_UNORM		= 3,
	VK_FORMAT_R4G4B4A4_USCALED		= 4,
	VK_FORMAT_R5G6B5_UNORM			= 5,
	VK_FORMAT_R5G6B5_USCALED		= 6,
	VK_FORMAT_R5G5B5A1_UNORM		= 7,
	VK_FORMAT_R5G5B5A1_USCALED		= 8,
	VK_FORMAT_R8_UNORM				= 9,
	VK_FORMAT_R8_SNORM				= 10,
	VK_FORMAT_R8_USCALED			= 11,
	VK_FORMAT_R8_SSCALED			= 12,
	VK_FORMAT_R8_UINT				= 13,
	VK_FORMAT_R8_SINT				= 14,
	VK_FORMAT_R8_SRGB				= 15,
	VK_FORMAT_R8G8_UNORM			= 16,
	VK_FORMAT_R8G8_SNORM			= 17,
	VK_FORMAT_R8G8_USCALED			= 18,
	VK_FORMAT_R8G8_SSCALED			= 19,
	VK_FORMAT_R8G8_UINT				= 20,
	VK_FORMAT_R8G8_SINT				= 21,
	VK_FORMAT_R8G8_SRGB				= 22,
	VK_FORMAT_R8G8B8_UNORM			= 23,
	VK_FORMAT_R8G8B8_SNORM			= 24,
	VK_FORMAT_R8G8B8_USCALED		= 25,
	VK_FORMAT_R8G8B8_SSCALED		= 26,
	VK_FORMAT_R8G8B8_UINT			= 27,
	VK_FORMAT_R8G8B8_SINT			= 28,
	VK_FORMAT_R8G8B8_SRGB			= 29,
	VK_FORMAT_R8G8B8A8_UNORM		= 30,
	VK_FORMAT_R8G8B8A8_SNORM		= 31,
	VK_FORMAT_R8G8B8A8_USCALED		= 32,
	VK_FORMAT_R8G8B8A8_SSCALED		= 33,
	VK_FORMAT_R8G8B8A8_UINT			= 34,
	VK_FORMAT_R8G8B8A8_SINT			= 35,
	VK_FORMAT_R8G8B8A8_SRGB			= 36,
	VK_FORMAT_R10G10B10A2_UNORM		= 37,
	VK_FORMAT_R10G10B10A2_SNORM		= 38,
	VK_FORMAT_R10G10B10A2_USCALED	= 39,
	VK_FORMAT_R10G10B10A2_SSCALED	= 40,
	VK_FORMAT_R10G10B10A2_UINT		= 41,
	VK_FORMAT_R10G10B10A2_SINT		= 42,
	VK_FORMAT_R16_UNORM				= 43,
	VK_FORMAT_R16_SNORM				= 44,
	VK_FORMAT_R16_USCALED			= 45,
	VK_FORMAT_R16_SSCALED			= 46,
	VK_FORMAT_R16_UINT				= 47,
	VK_FORMAT_R16_SINT				= 48,
	VK_FORMAT_R16_SFLOAT			= 49,
	VK_FORMAT_R16G16_UNORM			= 50,
	VK_FORMAT_R16G16_SNORM			= 51,
	VK_FORMAT_R16G16_USCALED		= 52,
	VK_FORMAT_R16G16_SSCALED		= 53,
	VK_FORMAT_R16G16_UINT			= 54,
	VK_FORMAT_R16G16_SINT			= 55,
	VK_FORMAT_R16G16_SFLOAT			= 56,
	VK_FORMAT_R16G16B16_UNORM		= 57,
	VK_FORMAT_R16G16B16_SNORM		= 58,
	VK_FORMAT_R16G16B16_USCALED		= 59,
	VK_FORMAT_R16G16B16_SSCALED		= 60,
	VK_FORMAT_R16G16B16_UINT		= 61,
	VK_FORMAT_R16G16B16_SINT		= 62,
	VK_FORMAT_R16G16B16_SFLOAT		= 63,
	VK_FORMAT_R16G16B16A16_UNORM	= 64,
	VK_FORMAT_R16G16B16A16_SNORM	= 65,
	VK_FORMAT_R16G16B16A16_USCALED	= 66,
	VK_FORMAT_R16G16B16A16_SSCALED	= 67,
	VK_FORMAT_R16G16B16A16_UINT		= 68,
	VK_FORMAT_R16G16B16A16_SINT		= 69,
	VK_FORMAT_R16G16B16A16_SFLOAT	= 70,
	VK_FORMAT_R32_UINT				= 71,
	VK_FORMAT_R32_SINT				= 72,
	VK_FORMAT_R32_SFLOAT			= 73,
	VK_FORMAT_R32G32_UINT			= 74,
	VK_FORMAT_R32G32_SINT			= 75,
	VK_FORMAT_R32G32_SFLOAT			= 76,
	VK_FORMAT_R32G32B32_UINT		= 77,
	VK_FORMAT_R32G32B32_SINT		= 78,
	VK_FORMAT_R32G32B32_SFLOAT		= 79,
	VK_FORMAT_R32G32B32A32_UINT		= 80,
	VK_FORMAT_R32G32B32A32_SINT		= 81,
	VK_FORMAT_R32G32B32A32_SFLOAT	= 82,
	VK_FORMAT_R64_SFLOAT			= 83,
	VK_FORMAT_R64G64_SFLOAT			= 84,
	VK_FORMAT_R64G64B64_SFLOAT		= 85,
	VK_FORMAT_R64G64B64A64_SFLOAT	= 86,
	VK_FORMAT_R11G11B10_UFLOAT		= 87,
	VK_FORMAT_R9G9B9E5_UFLOAT		= 88,
	VK_FORMAT_D16_UNORM				= 89,
	VK_FORMAT_D24_UNORM				= 90,
	VK_FORMAT_D32_SFLOAT			= 91,
	VK_FORMAT_S8_UINT				= 92,
	VK_FORMAT_D16_UNORM_S8_UINT		= 93,
	VK_FORMAT_D24_UNORM_S8_UINT		= 94,
	VK_FORMAT_D32_SFLOAT_S8_UINT	= 95,
	VK_FORMAT_BC1_RGB_UNORM			= 96,
	VK_FORMAT_BC1_RGB_SRGB			= 97,
	VK_FORMAT_BC1_RGBA_UNORM		= 98,
	VK_FORMAT_BC1_RGBA_SRGB			= 99,
	VK_FORMAT_BC2_UNORM				= 100,
	VK_FORMAT_BC2_SRGB				= 101,
	VK_FORMAT_BC3_UNORM				= 102,
	VK_FORMAT_BC3_SRGB				= 103,
	VK_FORMAT_BC4_UNORM				= 104,
	VK_FORMAT_BC4_SNORM				= 105,
	VK_FORMAT_BC5_UNORM				= 106,
	VK_FORMAT_BC5_SNORM				= 107,
	VK_FORMAT_BC6H_UFLOAT			= 108,
	VK_FORMAT_BC6H_SFLOAT			= 109,
	VK_FORMAT_BC7_UNORM				= 110,
	VK_FORMAT_BC7_SRGB				= 111,
	VK_FORMAT_ETC2_R8G8B8_UNORM		= 112,
	VK_FORMAT_ETC2_R8G8B8_SRGB		= 113,
	VK_FORMAT_ETC2_R8G8B8A1_UNORM	= 114,
	VK_FORMAT_ETC2_R8G8B8A1_SRGB	= 115,
	VK_FORMAT_ETC2_R8G8B8A8_UNORM	= 116,
	VK_FORMAT_ETC2_R8G8B8A8_SRGB	= 117,
	VK_FORMAT_EAC_R11_UNORM			= 118,
	VK_FORMAT_EAC_R11_SNORM			= 119,
	VK_FORMAT_EAC_R11G11_UNORM		= 120,
	VK_FORMAT_EAC_R11G11_SNORM		= 121,
	VK_FORMAT_ASTC_4x4_UNORM		= 122,
	VK_FORMAT_ASTC_4x4_SRGB			= 123,
	VK_FORMAT_ASTC_5x4_UNORM		= 124,
	VK_FORMAT_ASTC_5x4_SRGB			= 125,
	VK_FORMAT_ASTC_5x5_UNORM		= 126,
	VK_FORMAT_ASTC_5x5_SRGB			= 127,
	VK_FORMAT_ASTC_6x5_UNORM		= 128,
	VK_FORMAT_ASTC_6x5_SRGB			= 129,
	VK_FORMAT_ASTC_6x6_UNORM		= 130,
	VK_FORMAT_ASTC_6x6_SRGB			= 131,
	VK_FORMAT_ASTC_8x5_UNORM		= 132,
	VK_FORMAT_ASTC_8x5_SRGB			= 133,
	VK_FORMAT_ASTC_8x6_UNORM		= 134,
	VK_FORMAT_ASTC_8x6_SRGB			= 135,
	VK_FORMAT_ASTC_8x8_UNORM		= 136,
	VK_FORMAT_ASTC_8x8_SRGB			= 137,
	VK_FORMAT_ASTC_10x5_UNORM		= 138,
	VK_FORMAT_ASTC_10x5_SRGB		= 139,
	VK_FORMAT_ASTC_10x6_UNORM		= 140,
	VK_FORMAT_ASTC_10x6_SRGB		= 141,
	VK_FORMAT_ASTC_10x8_UNORM		= 142,
	VK_FORMAT_ASTC_10x8_SRGB		= 143,
	VK_FORMAT_ASTC_10x10_UNORM		= 144,
	VK_FORMAT_ASTC_10x10_SRGB		= 145,
	VK_FORMAT_ASTC_12x10_UNORM		= 146,
	VK_FORMAT_ASTC_12x10_SRGB		= 147,
	VK_FORMAT_ASTC_12x12_UNORM		= 148,
	VK_FORMAT_ASTC_12x12_SRGB		= 149,
	VK_FORMAT_B4G4R4A4_UNORM		= 150,
	VK_FORMAT_B5G5R5A1_UNORM		= 151,
	VK_FORMAT_B5G6R5_UNORM			= 152,
	VK_FORMAT_B5G6R5_USCALED		= 153,
	VK_FORMAT_B8G8R8_UNORM			= 154,
	VK_FORMAT_B8G8R8_SNORM			= 155,
	VK_FORMAT_B8G8R8_USCALED		= 156,
	VK_FORMAT_B8G8R8_SSCALED		= 157,
	VK_FORMAT_B8G8R8_UINT			= 158,
	VK_FORMAT_B8G8R8_SINT			= 159,
	VK_FORMAT_B8G8R8_SRGB			= 160,
	VK_FORMAT_B8G8R8A8_UNORM		= 161,
	VK_FORMAT_B8G8R8A8_SNORM		= 162,
	VK_FORMAT_B8G8R8A8_USCALED		= 163,
	VK_FORMAT_B8G8R8A8_SSCALED		= 164,
	VK_FORMAT_B8G8R8A8_UINT			= 165,
	VK_FORMAT_B8G8R8A8_SINT			= 166,
	VK_FORMAT_B8G8R8A8_SRGB			= 167,
	VK_FORMAT_B10G10R10A2_UNORM		= 168,
	VK_FORMAT_B10G10R10A2_SNORM		= 169,
	VK_FORMAT_B10G10R10A2_USCALED	= 170,
	VK_FORMAT_B10G10R10A2_SSCALED	= 171,
	VK_FORMAT_B10G10R10A2_UINT		= 172,
	VK_FORMAT_B10G10R10A2_SINT		= 173,
};

enum VkImageType
{
	VK_IMAGE_TYPE_1D	= 0,
	VK_IMAGE_TYPE_2D	= 1,
	VK_IMAGE_TYPE_3D	= 2,
};

enum VkImageTiling
{
	VK_IMAGE_TILING_LINEAR	= 0,
	VK_IMAGE_TILING_OPTIMAL	= 1,
};

enum VkPhysicalDeviceType
{
	VK_PHYSICAL_DEVICE_TYPE_OTHER			= 0,
	VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU	= 1,
	VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU	= 2,
	VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU		= 3,
	VK_PHYSICAL_DEVICE_TYPE_CPU				= 4,
};

enum VkImageAspect
{
	VK_IMAGE_ASPECT_COLOR		= 0,
	VK_IMAGE_ASPECT_DEPTH		= 1,
	VK_IMAGE_ASPECT_STENCIL		= 2,
	VK_IMAGE_ASPECT_METADATA	= 3,
};

enum VkQueryType
{
	VK_QUERY_TYPE_OCCLUSION				= 0,
	VK_QUERY_TYPE_PIPELINE_STATISTICS	= 1,
};

enum VkSharingMode
{
	VK_SHARING_MODE_EXCLUSIVE	= 0,
	VK_SHARING_MODE_CONCURRENT	= 1,
};

enum VkBufferViewType
{
	VK_BUFFER_VIEW_TYPE_RAW			= 0,
	VK_BUFFER_VIEW_TYPE_FORMATTED	= 1,
};

enum VkImageViewType
{
	VK_IMAGE_VIEW_TYPE_1D			= 0,
	VK_IMAGE_VIEW_TYPE_2D			= 1,
	VK_IMAGE_VIEW_TYPE_3D			= 2,
	VK_IMAGE_VIEW_TYPE_CUBE			= 3,
	VK_IMAGE_VIEW_TYPE_1D_ARRAY		= 4,
	VK_IMAGE_VIEW_TYPE_2D_ARRAY		= 5,
	VK_IMAGE_VIEW_TYPE_CUBE_ARRAY	= 6,
};

enum VkChannelSwizzle
{
	VK_CHANNEL_SWIZZLE_ZERO	= 0,
	VK_CHANNEL_SWIZZLE_ONE	= 1,
	VK_CHANNEL_SWIZZLE_R	= 2,
	VK_CHANNEL_SWIZZLE_G	= 3,
	VK_CHANNEL_SWIZZLE_B	= 4,
	VK_CHANNEL_SWIZZLE_A	= 5,
};

enum VkShaderStage
{
	VK_SHADER_STAGE_VERTEX			= 0,
	VK_SHADER_STAGE_TESS_CONTROL	= 1,
	VK_SHADER_STAGE_TESS_EVALUATION	= 2,
	VK_SHADER_STAGE_GEOMETRY		= 3,
	VK_SHADER_STAGE_FRAGMENT		= 4,
	VK_SHADER_STAGE_COMPUTE			= 5,
};

enum VkVertexInputStepRate
{
	VK_VERTEX_INPUT_STEP_RATE_VERTEX	= 0,
	VK_VERTEX_INPUT_STEP_RATE_INSTANCE	= 1,
};

enum VkPrimitiveTopology
{
	VK_PRIMITIVE_TOPOLOGY_POINT_LIST			= 0,
	VK_PRIMITIVE_TOPOLOGY_LINE_LIST				= 1,
	VK_PRIMITIVE_TOPOLOGY_LINE_STRIP			= 2,
	VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST			= 3,
	VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP		= 4,
	VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN			= 5,
	VK_PRIMITIVE_TOPOLOGY_LINE_LIST_ADJ			= 6,
	VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_ADJ		= 7,
	VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_ADJ		= 8,
	VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_ADJ	= 9,
	VK_PRIMITIVE_TOPOLOGY_PATCH					= 10,
};

enum VkFillMode
{
	VK_FILL_MODE_POINTS		= 0,
	VK_FILL_MODE_WIREFRAME	= 1,
	VK_FILL_MODE_SOLID		= 2,
};

enum VkCullMode
{
	VK_CULL_MODE_NONE			= 0,
	VK_CULL_MODE_FRONT			= 1,
	VK_CULL_MODE_BACK			= 2,
	VK_CULL_MODE_FRONT_AND_BACK	= 3,
};

enum VkFrontFace
{
	VK_FRONT_FACE_CCW	= 0,
	VK_FRONT_FACE_CW	= 1,
};

enum VkCompareOp
{
	VK_COMPARE_OP_NEVER			= 0,
	VK_COMPARE_OP_LESS			= 1,
	VK_COMPARE_OP_EQUAL			= 2,
	VK_COMPARE_OP_LESS_EQUAL	= 3,
	VK_COMPARE_OP_GREATER		= 4,
	VK_COMPARE_OP_NOT_EQUAL		= 5,
	VK_COMPARE_OP_GREATER_EQUAL	= 6,
	VK_COMPARE_OP_ALWAYS		= 7,
};

enum VkStencilOp
{
	VK_STENCIL_OP_KEEP		= 0,
	VK_STENCIL_OP_ZERO		= 1,
	VK_STENCIL_OP_REPLACE	= 2,
	VK_STENCIL_OP_INC_CLAMP	= 3,
	VK_STENCIL_OP_DEC_CLAMP	= 4,
	VK_STENCIL_OP_INVERT	= 5,
	VK_STENCIL_OP_INC_WRAP	= 6,
	VK_STENCIL_OP_DEC_WRAP	= 7,
};

enum VkLogicOp
{
	VK_LOGIC_OP_CLEAR			= 0,
	VK_LOGIC_OP_AND				= 1,
	VK_LOGIC_OP_AND_REVERSE		= 2,
	VK_LOGIC_OP_COPY			= 3,
	VK_LOGIC_OP_AND_INVERTED	= 4,
	VK_LOGIC_OP_NOOP			= 5,
	VK_LOGIC_OP_XOR				= 6,
	VK_LOGIC_OP_OR				= 7,
	VK_LOGIC_OP_NOR				= 8,
	VK_LOGIC_OP_EQUIV			= 9,
	VK_LOGIC_OP_INVERT			= 10,
	VK_LOGIC_OP_OR_REVERSE		= 11,
	VK_LOGIC_OP_COPY_INVERTED	= 12,
	VK_LOGIC_OP_OR_INVERTED		= 13,
	VK_LOGIC_OP_NAND			= 14,
	VK_LOGIC_OP_SET				= 15,
};

enum VkBlend
{
	VK_BLEND_ZERO						= 0,
	VK_BLEND_ONE						= 1,
	VK_BLEND_SRC_COLOR					= 2,
	VK_BLEND_ONE_MINUS_SRC_COLOR		= 3,
	VK_BLEND_DEST_COLOR					= 4,
	VK_BLEND_ONE_MINUS_DEST_COLOR		= 5,
	VK_BLEND_SRC_ALPHA					= 6,
	VK_BLEND_ONE_MINUS_SRC_ALPHA		= 7,
	VK_BLEND_DEST_ALPHA					= 8,
	VK_BLEND_ONE_MINUS_DEST_ALPHA		= 9,
	VK_BLEND_CONSTANT_COLOR				= 10,
	VK_BLEND_ONE_MINUS_CONSTANT_COLOR	= 11,
	VK_BLEND_CONSTANT_ALPHA				= 12,
	VK_BLEND_ONE_MINUS_CONSTANT_ALPHA	= 13,
	VK_BLEND_SRC_ALPHA_SATURATE			= 14,
	VK_BLEND_SRC1_COLOR					= 15,
	VK_BLEND_ONE_MINUS_SRC1_COLOR		= 16,
	VK_BLEND_SRC1_ALPHA					= 17,
	VK_BLEND_ONE_MINUS_SRC1_ALPHA		= 18,
};

enum VkBlendOp
{
	VK_BLEND_OP_ADD					= 0,
	VK_BLEND_OP_SUBTRACT			= 1,
	VK_BLEND_OP_REVERSE_SUBTRACT	= 2,
	VK_BLEND_OP_MIN					= 3,
	VK_BLEND_OP_MAX					= 4,
};

enum VkTexFilter
{
	VK_TEX_FILTER_NEAREST	= 0,
	VK_TEX_FILTER_LINEAR	= 1,
};

enum VkTexMipmapMode
{
	VK_TEX_MIPMAP_MODE_BASE		= 0,
	VK_TEX_MIPMAP_MODE_NEAREST	= 1,
	VK_TEX_MIPMAP_MODE_LINEAR	= 2,
};

enum VkTexAddress
{
	VK_TEX_ADDRESS_WRAP			= 0,
	VK_TEX_ADDRESS_MIRROR		= 1,
	VK_TEX_ADDRESS_CLAMP		= 2,
	VK_TEX_ADDRESS_MIRROR_ONCE	= 3,
	VK_TEX_ADDRESS_CLAMP_BORDER	= 4,
};

enum VkBorderColor
{
	VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK	= 0,
	VK_BORDER_COLOR_INT_TRANSPARENT_BLACK	= 1,
	VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK		= 2,
	VK_BORDER_COLOR_INT_OPAQUE_BLACK		= 3,
	VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE		= 4,
	VK_BORDER_COLOR_INT_OPAQUE_WHITE		= 5,
};

enum VkDescriptorType
{
	VK_DESCRIPTOR_TYPE_SAMPLER					= 0,
	VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER	= 1,
	VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE			= 2,
	VK_DESCRIPTOR_TYPE_STORAGE_IMAGE			= 3,
	VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER		= 4,
	VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER		= 5,
	VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER			= 6,
	VK_DESCRIPTOR_TYPE_STORAGE_BUFFER			= 7,
	VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC	= 8,
	VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC	= 9,
	VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT			= 10,
};

enum VkDescriptorPoolUsage
{
	VK_DESCRIPTOR_POOL_USAGE_ONE_SHOT	= 0,
	VK_DESCRIPTOR_POOL_USAGE_DYNAMIC	= 1,
};

enum VkDescriptorSetUsage
{
	VK_DESCRIPTOR_SET_USAGE_ONE_SHOT	= 0,
	VK_DESCRIPTOR_SET_USAGE_STATIC		= 1,
};

enum VkImageLayout
{
	VK_IMAGE_LAYOUT_UNDEFINED							= 0,
	VK_IMAGE_LAYOUT_GENERAL								= 1,
	VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL			= 2,
	VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL	= 3,
	VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL		= 4,
	VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL			= 5,
	VK_IMAGE_LAYOUT_TRANSFER_SOURCE_OPTIMAL				= 6,
	VK_IMAGE_LAYOUT_TRANSFER_DESTINATION_OPTIMAL		= 7,
};

enum VkAttachmentLoadOp
{
	VK_ATTACHMENT_LOAD_OP_LOAD		= 0,
	VK_ATTACHMENT_LOAD_OP_CLEAR		= 1,
	VK_ATTACHMENT_LOAD_OP_DONT_CARE	= 2,
};

enum VkAttachmentStoreOp
{
	VK_ATTACHMENT_STORE_OP_STORE		= 0,
	VK_ATTACHMENT_STORE_OP_DONT_CARE	= 1,
};

enum VkPipelineBindPoint
{
	VK_PIPELINE_BIND_POINT_COMPUTE	= 0,
	VK_PIPELINE_BIND_POINT_GRAPHICS	= 1,
};

enum VkCmdBufferLevel
{
	VK_CMD_BUFFER_LEVEL_PRIMARY		= 0,
	VK_CMD_BUFFER_LEVEL_SECONDARY	= 1,
};

enum VkIndexType
{
	VK_INDEX_TYPE_UINT16	= 0,
	VK_INDEX_TYPE_UINT32	= 1,
};

enum VkTimestampType
{
	VK_TIMESTAMP_TYPE_TOP		= 0,
	VK_TIMESTAMP_TYPE_BOTTOM	= 1,
};

enum VkRenderPassContents
{
	VK_RENDER_PASS_CONTENTS_INLINE					= 0,
	VK_RENDER_PASS_CONTENTS_SECONDARY_CMD_BUFFERS	= 1,
};

enum VkFormatFeatureFlagBits
{
	VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT					= 0x00000001,
	VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT					= 0x00000002,
	VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT			= 0x00000004,
	VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT			= 0x00000008,
	VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT			= 0x00000010,
	VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT	= 0x00000020,
	VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT					= 0x00000040,
	VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT				= 0x00000080,
	VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT		= 0x00000100,
	VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT		= 0x00000200,
	VK_FORMAT_FEATURE_CONVERSION_BIT					= 0x00000400,
};
typedef deUint32 VkFormatFeatureFlags;

enum VkImageUsageFlagBits
{
	VK_IMAGE_USAGE_GENERAL					= 0,
	VK_IMAGE_USAGE_TRANSFER_SOURCE_BIT		= 0x00000001,
	VK_IMAGE_USAGE_TRANSFER_DESTINATION_BIT	= 0x00000002,
	VK_IMAGE_USAGE_SAMPLED_BIT				= 0x00000004,
	VK_IMAGE_USAGE_STORAGE_BIT				= 0x00000008,
	VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT		= 0x00000010,
	VK_IMAGE_USAGE_DEPTH_STENCIL_BIT		= 0x00000020,
	VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT	= 0x00000040,
	VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT		= 0x00000080,
};
typedef deUint32 VkImageUsageFlags;

enum VkQueueFlagBits
{
	VK_QUEUE_GRAPHICS_BIT		= 0x00000001,
	VK_QUEUE_COMPUTE_BIT		= 0x00000002,
	VK_QUEUE_DMA_BIT			= 0x00000004,
	VK_QUEUE_SPARSE_MEMMGR_BIT	= 0x00000008,
	VK_QUEUE_EXTENDED_BIT		= 0x40000000,
};
typedef deUint32 VkQueueFlags;

enum VkMemoryPropertyFlagBits
{
	VK_MEMORY_PROPERTY_DEVICE_ONLY				= 0,
	VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT			= 0x00000001,
	VK_MEMORY_PROPERTY_HOST_NON_COHERENT_BIT	= 0x00000002,
	VK_MEMORY_PROPERTY_HOST_UNCACHED_BIT		= 0x00000004,
	VK_MEMORY_PROPERTY_HOST_WRITE_COMBINED_BIT	= 0x00000008,
	VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT		= 0x00000010,
};
typedef deUint32 VkMemoryPropertyFlags;

enum VkMemoryHeapFlagBits
{
	VK_MEMORY_HEAP_HOST_LOCAL	= 0x00000001,
};
typedef deUint32 VkMemoryHeapFlags;

enum VkDeviceCreateFlagBits
{
	VK_DEVICE_CREATE_VALIDATION_BIT	= 0x00000001,
};
typedef deUint32 VkDeviceCreateFlags;

enum VkSparseImageFormatFlagBits
{
	VK_SPARSE_IMAGE_FMT_SINGLE_MIPTAIL_BIT		= 0x00000001,
	VK_SPARSE_IMAGE_FMT_ALIGNED_MIP_SIZE_BIT	= 0x00000002,
	VK_SPARSE_IMAGE_FMT_NONSTD_BLOCK_SIZE_BIT	= 0x00000004,
};
typedef deUint32 VkSparseImageFormatFlags;

enum VkSparseMemoryBindFlagBits
{
	VK_SPARSE_MEMORY_BIND_REPLICATE_64KIB_BLOCK_BIT	= 0x00000001,
};
typedef deUint32 VkSparseMemoryBindFlags;

enum VkFenceCreateFlagBits
{
	VK_FENCE_CREATE_SIGNALED_BIT	= 0x00000001,
};
typedef deUint32 VkFenceCreateFlags;

enum VkQueryPipelineStatisticFlagBits
{
	VK_QUERY_PIPELINE_STATISTIC_IA_VERTICES_BIT		= 0x00000001,
	VK_QUERY_PIPELINE_STATISTIC_IA_PRIMITIVES_BIT	= 0x00000002,
	VK_QUERY_PIPELINE_STATISTIC_VS_INVOCATIONS_BIT	= 0x00000004,
	VK_QUERY_PIPELINE_STATISTIC_GS_INVOCATIONS_BIT	= 0x00000008,
	VK_QUERY_PIPELINE_STATISTIC_GS_PRIMITIVES_BIT	= 0x00000010,
	VK_QUERY_PIPELINE_STATISTIC_C_INVOCATIONS_BIT	= 0x00000020,
	VK_QUERY_PIPELINE_STATISTIC_C_PRIMITIVES_BIT	= 0x00000040,
	VK_QUERY_PIPELINE_STATISTIC_FS_INVOCATIONS_BIT	= 0x00000080,
	VK_QUERY_PIPELINE_STATISTIC_TCS_PATCHES_BIT		= 0x00000100,
	VK_QUERY_PIPELINE_STATISTIC_TES_INVOCATIONS_BIT	= 0x00000200,
	VK_QUERY_PIPELINE_STATISTIC_CS_INVOCATIONS_BIT	= 0x00000400,
};
typedef deUint32 VkQueryPipelineStatisticFlags;

enum VkQueryResultFlagBits
{
	VK_QUERY_RESULT_DEFAULT					= 0,
	VK_QUERY_RESULT_64_BIT					= 0x00000001,
	VK_QUERY_RESULT_WAIT_BIT				= 0x00000002,
	VK_QUERY_RESULT_WITH_AVAILABILITY_BIT	= 0x00000004,
	VK_QUERY_RESULT_PARTIAL_BIT				= 0x00000008,
};
typedef deUint32 VkQueryResultFlags;

enum VkBufferUsageFlagBits
{
	VK_BUFFER_USAGE_GENERAL						= 0,
	VK_BUFFER_USAGE_TRANSFER_SOURCE_BIT			= 0x00000001,
	VK_BUFFER_USAGE_TRANSFER_DESTINATION_BIT	= 0x00000002,
	VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT	= 0x00000004,
	VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT	= 0x00000008,
	VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT			= 0x00000010,
	VK_BUFFER_USAGE_STORAGE_BUFFER_BIT			= 0x00000020,
	VK_BUFFER_USAGE_INDEX_BUFFER_BIT			= 0x00000040,
	VK_BUFFER_USAGE_VERTEX_BUFFER_BIT			= 0x00000080,
	VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT			= 0x00000100,
};
typedef deUint32 VkBufferUsageFlags;

enum VkBufferCreateFlagBits
{
	VK_BUFFER_CREATE_SPARSE_BIT				= 0x00000001,
	VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT	= 0x00000002,
	VK_BUFFER_CREATE_SPARSE_ALIASED_BIT		= 0x00000004,
};
typedef deUint32 VkBufferCreateFlags;

enum VkImageCreateFlagBits
{
	VK_IMAGE_CREATE_SPARSE_BIT				= 0x00000001,
	VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT	= 0x00000002,
	VK_IMAGE_CREATE_SPARSE_ALIASED_BIT		= 0x00000004,
	VK_IMAGE_CREATE_INVARIANT_DATA_BIT		= 0x00000008,
	VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT		= 0x00000010,
	VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT		= 0x00000020,
};
typedef deUint32 VkImageCreateFlags;

enum VkAttachmentViewCreateFlagBits
{
	VK_ATTACHMENT_VIEW_CREATE_READ_ONLY_DEPTH_BIT	= 0x00000001,
	VK_ATTACHMENT_VIEW_CREATE_READ_ONLY_STENCIL_BIT	= 0x00000002,
};
typedef deUint32 VkAttachmentViewCreateFlags;

enum VkChannelFlagBits
{
	VK_CHANNEL_R_BIT	= 0x00000001,
	VK_CHANNEL_G_BIT	= 0x00000002,
	VK_CHANNEL_B_BIT	= 0x00000004,
	VK_CHANNEL_A_BIT	= 0x00000008,
};
typedef deUint32 VkChannelFlags;

enum VkPipelineCreateFlagBits
{
	VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT	= 0x00000001,
	VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT	= 0x00000002,
	VK_PIPELINE_CREATE_DERIVATIVE_BIT			= 0x00000004,
};
typedef deUint32 VkPipelineCreateFlags;

enum VkShaderStageFlagBits
{
	VK_SHADER_STAGE_VERTEX_BIT			= 0x00000001,
	VK_SHADER_STAGE_TESS_CONTROL_BIT	= 0x00000002,
	VK_SHADER_STAGE_TESS_EVALUATION_BIT	= 0x00000004,
	VK_SHADER_STAGE_GEOMETRY_BIT		= 0x00000008,
	VK_SHADER_STAGE_FRAGMENT_BIT		= 0x00000010,
	VK_SHADER_STAGE_COMPUTE_BIT			= 0x00000020,
	VK_SHADER_STAGE_ALL					= 0x7FFFFFFF,
};
typedef deUint32 VkShaderStageFlags;

enum VkSubpassDescriptionFlagBits
{
	VK_SUBPASS_DESCRIPTION_NO_OVERDRAW_BIT	= 0x00000001,
};
typedef deUint32 VkSubpassDescriptionFlags;

enum VkPipelineStageFlagBits
{
	VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT				= 0x00000001,
	VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT				= 0x00000002,
	VK_PIPELINE_STAGE_VERTEX_INPUT_BIT				= 0x00000004,
	VK_PIPELINE_STAGE_VERTEX_SHADER_BIT				= 0x00000008,
	VK_PIPELINE_STAGE_TESS_CONTROL_SHADER_BIT		= 0x00000010,
	VK_PIPELINE_STAGE_TESS_EVALUATION_SHADER_BIT	= 0x00000020,
	VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT			= 0x00000040,
	VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT			= 0x00000080,
	VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT		= 0x00000100,
	VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT		= 0x00000200,
	VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT	= 0x00000400,
	VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT			= 0x00000800,
	VK_PIPELINE_STAGE_TRANSFER_BIT					= 0x00001000,
	VK_PIPELINE_STAGE_TRANSITION_BIT				= 0x00002000,
	VK_PIPELINE_STAGE_HOST_BIT						= 0x00004000,
	VK_PIPELINE_STAGE_ALL_GRAPHICS					= 0x000007FF,
	VK_PIPELINE_STAGE_ALL_GPU_COMMANDS				= 0x00003FFF,
};
typedef deUint32 VkPipelineStageFlags;

enum VkMemoryOutputFlagBits
{
	VK_MEMORY_OUTPUT_HOST_WRITE_BIT					= 0x00000001,
	VK_MEMORY_OUTPUT_SHADER_WRITE_BIT				= 0x00000002,
	VK_MEMORY_OUTPUT_COLOR_ATTACHMENT_BIT			= 0x00000004,
	VK_MEMORY_OUTPUT_DEPTH_STENCIL_ATTACHMENT_BIT	= 0x00000008,
	VK_MEMORY_OUTPUT_TRANSFER_BIT					= 0x00000010,
};
typedef deUint32 VkMemoryOutputFlags;

enum VkMemoryInputFlagBits
{
	VK_MEMORY_INPUT_HOST_READ_BIT					= 0x00000001,
	VK_MEMORY_INPUT_INDIRECT_COMMAND_BIT			= 0x00000002,
	VK_MEMORY_INPUT_INDEX_FETCH_BIT					= 0x00000004,
	VK_MEMORY_INPUT_VERTEX_ATTRIBUTE_FETCH_BIT		= 0x00000008,
	VK_MEMORY_INPUT_UNIFORM_READ_BIT				= 0x00000010,
	VK_MEMORY_INPUT_SHADER_READ_BIT					= 0x00000020,
	VK_MEMORY_INPUT_COLOR_ATTACHMENT_BIT			= 0x00000040,
	VK_MEMORY_INPUT_DEPTH_STENCIL_ATTACHMENT_BIT	= 0x00000080,
	VK_MEMORY_INPUT_INPUT_ATTACHMENT_BIT			= 0x00000100,
	VK_MEMORY_INPUT_TRANSFER_BIT					= 0x00000200,
};
typedef deUint32 VkMemoryInputFlags;

enum VkCmdPoolCreateFlagBits
{
	VK_CMD_POOL_CREATE_TRANSIENT_BIT			= 0x00000001,
	VK_CMD_POOL_CREATE_RESET_COMMAND_BUFFER_BIT	= 0x00000002,
};
typedef deUint32 VkCmdPoolCreateFlags;

enum VkCmdPoolResetFlagBits
{
	VK_CMD_POOL_RESET_RELEASE_RESOURCES	= 0x00000001,
};
typedef deUint32 VkCmdPoolResetFlags;

enum VkCmdBufferOptimizeFlagBits
{
	VK_CMD_BUFFER_OPTIMIZE_SMALL_BATCH_BIT				= 0x00000001,
	VK_CMD_BUFFER_OPTIMIZE_PIPELINE_SWITCH_BIT			= 0x00000002,
	VK_CMD_BUFFER_OPTIMIZE_ONE_TIME_SUBMIT_BIT			= 0x00000004,
	VK_CMD_BUFFER_OPTIMIZE_DESCRIPTOR_SET_SWITCH_BIT	= 0x00000008,
	VK_CMD_BUFFER_OPTIMIZE_NO_SIMULTANEOUS_USE_BIT		= 0x00000010,
};
typedef deUint32 VkCmdBufferOptimizeFlags;

enum VkCmdBufferResetFlagBits
{
	VK_CMD_BUFFER_RESET_RELEASE_RESOURCES	= 0x00000001,
};
typedef deUint32 VkCmdBufferResetFlags;

enum VkImageAspectFlagBits
{
	VK_IMAGE_ASPECT_COLOR_BIT		= 0x00000001,
	VK_IMAGE_ASPECT_DEPTH_BIT		= 0x00000002,
	VK_IMAGE_ASPECT_STENCIL_BIT		= 0x00000004,
	VK_IMAGE_ASPECT_METADATA_BIT	= 0x00000008,
};
typedef deUint32 VkImageAspectFlags;

enum VkQueryControlFlagBits
{
	VK_QUERY_CONTROL_CONSERVATIVE_BIT	= 0x00000001,
};
typedef deUint32 VkQueryControlFlags;

