/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
m_vk.destroyDevice									= (DestroyDeviceFunc)									GET_PROC_ADDR("vkDestroyDevice");
m_vk.getGlobalExtensionProperties					= (GetGlobalExtensionPropertiesFunc)					GET_PROC_ADDR("vkGetGlobalExtensionProperties");
m_vk.getPhysicalDeviceExtensionProperties			= (GetPhysicalDeviceExtensionPropertiesFunc)			GET_PROC_ADDR("vkGetPhysicalDeviceExtensionProperties");
m_vk.getGlobalLayerProperties						= (GetGlobalLayerPropertiesFunc)						GET_PROC_ADDR("vkGetGlobalLayerProperties");
m_vk.getPhysicalDeviceLayerProperties				= (GetPhysicalDeviceLayerPropertiesFunc)				GET_PROC_ADDR("vkGetPhysicalDeviceLayerProperties");
m_vk.getDeviceQueue									= (GetDeviceQueueFunc)									GET_PROC_ADDR("vkGetDeviceQueue");
m_vk.queueSubmit									= (QueueSubmitFunc)										GET_PROC_ADDR("vkQueueSubmit");
m_vk.queueWaitIdle									= (QueueWaitIdleFunc)									GET_PROC_ADDR("vkQueueWaitIdle");
m_vk.deviceWaitIdle									= (DeviceWaitIdleFunc)									GET_PROC_ADDR("vkDeviceWaitIdle");
m_vk.allocMemory									= (AllocMemoryFunc)										GET_PROC_ADDR("vkAllocMemory");
m_vk.freeMemory										= (FreeMemoryFunc)										GET_PROC_ADDR("vkFreeMemory");
m_vk.mapMemory										= (MapMemoryFunc)										GET_PROC_ADDR("vkMapMemory");
m_vk.unmapMemory									= (UnmapMemoryFunc)										GET_PROC_ADDR("vkUnmapMemory");
m_vk.flushMappedMemoryRanges						= (FlushMappedMemoryRangesFunc)							GET_PROC_ADDR("vkFlushMappedMemoryRanges");
m_vk.invalidateMappedMemoryRanges					= (InvalidateMappedMemoryRangesFunc)					GET_PROC_ADDR("vkInvalidateMappedMemoryRanges");
m_vk.getDeviceMemoryCommitment						= (GetDeviceMemoryCommitmentFunc)						GET_PROC_ADDR("vkGetDeviceMemoryCommitment");
m_vk.bindBufferMemory								= (BindBufferMemoryFunc)								GET_PROC_ADDR("vkBindBufferMemory");
m_vk.bindImageMemory								= (BindImageMemoryFunc)									GET_PROC_ADDR("vkBindImageMemory");
m_vk.getBufferMemoryRequirements					= (GetBufferMemoryRequirementsFunc)						GET_PROC_ADDR("vkGetBufferMemoryRequirements");
m_vk.getImageMemoryRequirements						= (GetImageMemoryRequirementsFunc)						GET_PROC_ADDR("vkGetImageMemoryRequirements");
m_vk.getImageSparseMemoryRequirements				= (GetImageSparseMemoryRequirementsFunc)				GET_PROC_ADDR("vkGetImageSparseMemoryRequirements");
m_vk.getPhysicalDeviceSparseImageFormatProperties	= (GetPhysicalDeviceSparseImageFormatPropertiesFunc)	GET_PROC_ADDR("vkGetPhysicalDeviceSparseImageFormatProperties");
m_vk.queueBindSparseBufferMemory					= (QueueBindSparseBufferMemoryFunc)						GET_PROC_ADDR("vkQueueBindSparseBufferMemory");
m_vk.queueBindSparseImageOpaqueMemory				= (QueueBindSparseImageOpaqueMemoryFunc)				GET_PROC_ADDR("vkQueueBindSparseImageOpaqueMemory");
m_vk.queueBindSparseImageMemory						= (QueueBindSparseImageMemoryFunc)						GET_PROC_ADDR("vkQueueBindSparseImageMemory");
m_vk.createFence									= (CreateFenceFunc)										GET_PROC_ADDR("vkCreateFence");
m_vk.destroyFence									= (DestroyFenceFunc)									GET_PROC_ADDR("vkDestroyFence");
m_vk.resetFences									= (ResetFencesFunc)										GET_PROC_ADDR("vkResetFences");
m_vk.getFenceStatus									= (GetFenceStatusFunc)									GET_PROC_ADDR("vkGetFenceStatus");
m_vk.waitForFences									= (WaitForFencesFunc)									GET_PROC_ADDR("vkWaitForFences");
m_vk.createSemaphore								= (CreateSemaphoreFunc)									GET_PROC_ADDR("vkCreateSemaphore");
m_vk.destroySemaphore								= (DestroySemaphoreFunc)								GET_PROC_ADDR("vkDestroySemaphore");
m_vk.queueSignalSemaphore							= (QueueSignalSemaphoreFunc)							GET_PROC_ADDR("vkQueueSignalSemaphore");
m_vk.queueWaitSemaphore								= (QueueWaitSemaphoreFunc)								GET_PROC_ADDR("vkQueueWaitSemaphore");
m_vk.createEvent									= (CreateEventFunc)										GET_PROC_ADDR("vkCreateEvent");
m_vk.destroyEvent									= (DestroyEventFunc)									GET_PROC_ADDR("vkDestroyEvent");
m_vk.getEventStatus									= (GetEventStatusFunc)									GET_PROC_ADDR("vkGetEventStatus");
m_vk.setEvent										= (SetEventFunc)										GET_PROC_ADDR("vkSetEvent");
m_vk.resetEvent										= (ResetEventFunc)										GET_PROC_ADDR("vkResetEvent");
m_vk.createQueryPool								= (CreateQueryPoolFunc)									GET_PROC_ADDR("vkCreateQueryPool");
m_vk.destroyQueryPool								= (DestroyQueryPoolFunc)								GET_PROC_ADDR("vkDestroyQueryPool");
m_vk.getQueryPoolResults							= (GetQueryPoolResultsFunc)								GET_PROC_ADDR("vkGetQueryPoolResults");
m_vk.createBuffer									= (CreateBufferFunc)									GET_PROC_ADDR("vkCreateBuffer");
m_vk.destroyBuffer									= (DestroyBufferFunc)									GET_PROC_ADDR("vkDestroyBuffer");
m_vk.createBufferView								= (CreateBufferViewFunc)								GET_PROC_ADDR("vkCreateBufferView");
m_vk.destroyBufferView								= (DestroyBufferViewFunc)								GET_PROC_ADDR("vkDestroyBufferView");
m_vk.createImage									= (CreateImageFunc)										GET_PROC_ADDR("vkCreateImage");
m_vk.destroyImage									= (DestroyImageFunc)									GET_PROC_ADDR("vkDestroyImage");
m_vk.getImageSubresourceLayout						= (GetImageSubresourceLayoutFunc)						GET_PROC_ADDR("vkGetImageSubresourceLayout");
m_vk.createImageView								= (CreateImageViewFunc)									GET_PROC_ADDR("vkCreateImageView");
m_vk.destroyImageView								= (DestroyImageViewFunc)								GET_PROC_ADDR("vkDestroyImageView");
m_vk.createAttachmentView							= (CreateAttachmentViewFunc)							GET_PROC_ADDR("vkCreateAttachmentView");
m_vk.destroyAttachmentView							= (DestroyAttachmentViewFunc)							GET_PROC_ADDR("vkDestroyAttachmentView");
m_vk.createShaderModule								= (CreateShaderModuleFunc)								GET_PROC_ADDR("vkCreateShaderModule");
m_vk.destroyShaderModule							= (DestroyShaderModuleFunc)								GET_PROC_ADDR("vkDestroyShaderModule");
m_vk.createShader									= (CreateShaderFunc)									GET_PROC_ADDR("vkCreateShader");
m_vk.destroyShader									= (DestroyShaderFunc)									GET_PROC_ADDR("vkDestroyShader");
m_vk.createPipelineCache							= (CreatePipelineCacheFunc)								GET_PROC_ADDR("vkCreatePipelineCache");
m_vk.destroyPipelineCache							= (DestroyPipelineCacheFunc)							GET_PROC_ADDR("vkDestroyPipelineCache");
m_vk.getPipelineCacheSize							= (GetPipelineCacheSizeFunc)							GET_PROC_ADDR("vkGetPipelineCacheSize");
m_vk.getPipelineCacheData							= (GetPipelineCacheDataFunc)							GET_PROC_ADDR("vkGetPipelineCacheData");
m_vk.mergePipelineCaches							= (MergePipelineCachesFunc)								GET_PROC_ADDR("vkMergePipelineCaches");
m_vk.createGraphicsPipelines						= (CreateGraphicsPipelinesFunc)							GET_PROC_ADDR("vkCreateGraphicsPipelines");
m_vk.createComputePipelines							= (CreateComputePipelinesFunc)							GET_PROC_ADDR("vkCreateComputePipelines");
m_vk.destroyPipeline								= (DestroyPipelineFunc)									GET_PROC_ADDR("vkDestroyPipeline");
m_vk.createPipelineLayout							= (CreatePipelineLayoutFunc)							GET_PROC_ADDR("vkCreatePipelineLayout");
m_vk.destroyPipelineLayout							= (DestroyPipelineLayoutFunc)							GET_PROC_ADDR("vkDestroyPipelineLayout");
m_vk.createSampler									= (CreateSamplerFunc)									GET_PROC_ADDR("vkCreateSampler");
m_vk.destroySampler									= (DestroySamplerFunc)									GET_PROC_ADDR("vkDestroySampler");
m_vk.createDescriptorSetLayout						= (CreateDescriptorSetLayoutFunc)						GET_PROC_ADDR("vkCreateDescriptorSetLayout");
m_vk.destroyDescriptorSetLayout						= (DestroyDescriptorSetLayoutFunc)						GET_PROC_ADDR("vkDestroyDescriptorSetLayout");
m_vk.createDescriptorPool							= (CreateDescriptorPoolFunc)							GET_PROC_ADDR("vkCreateDescriptorPool");
m_vk.destroyDescriptorPool							= (DestroyDescriptorPoolFunc)							GET_PROC_ADDR("vkDestroyDescriptorPool");
m_vk.resetDescriptorPool							= (ResetDescriptorPoolFunc)								GET_PROC_ADDR("vkResetDescriptorPool");
m_vk.allocDescriptorSets							= (AllocDescriptorSetsFunc)								GET_PROC_ADDR("vkAllocDescriptorSets");
m_vk.updateDescriptorSets							= (UpdateDescriptorSetsFunc)							GET_PROC_ADDR("vkUpdateDescriptorSets");
m_vk.createDynamicViewportState						= (CreateDynamicViewportStateFunc)						GET_PROC_ADDR("vkCreateDynamicViewportState");
m_vk.destroyDynamicViewportState					= (DestroyDynamicViewportStateFunc)						GET_PROC_ADDR("vkDestroyDynamicViewportState");
m_vk.createDynamicRasterState						= (CreateDynamicRasterStateFunc)						GET_PROC_ADDR("vkCreateDynamicRasterState");
m_vk.destroyDynamicRasterState						= (DestroyDynamicRasterStateFunc)						GET_PROC_ADDR("vkDestroyDynamicRasterState");
m_vk.createDynamicColorBlendState					= (CreateDynamicColorBlendStateFunc)					GET_PROC_ADDR("vkCreateDynamicColorBlendState");
m_vk.destroyDynamicColorBlendState					= (DestroyDynamicColorBlendStateFunc)					GET_PROC_ADDR("vkDestroyDynamicColorBlendState");
m_vk.createDynamicDepthStencilState					= (CreateDynamicDepthStencilStateFunc)					GET_PROC_ADDR("vkCreateDynamicDepthStencilState");
m_vk.destroyDynamicDepthStencilState				= (DestroyDynamicDepthStencilStateFunc)					GET_PROC_ADDR("vkDestroyDynamicDepthStencilState");
m_vk.createFramebuffer								= (CreateFramebufferFunc)								GET_PROC_ADDR("vkCreateFramebuffer");
m_vk.destroyFramebuffer								= (DestroyFramebufferFunc)								GET_PROC_ADDR("vkDestroyFramebuffer");
m_vk.createRenderPass								= (CreateRenderPassFunc)								GET_PROC_ADDR("vkCreateRenderPass");
m_vk.destroyRenderPass								= (DestroyRenderPassFunc)								GET_PROC_ADDR("vkDestroyRenderPass");
m_vk.getRenderAreaGranularity						= (GetRenderAreaGranularityFunc)						GET_PROC_ADDR("vkGetRenderAreaGranularity");
m_vk.createCommandPool								= (CreateCommandPoolFunc)								GET_PROC_ADDR("vkCreateCommandPool");
m_vk.destroyCommandPool								= (DestroyCommandPoolFunc)								GET_PROC_ADDR("vkDestroyCommandPool");
m_vk.resetCommandPool								= (ResetCommandPoolFunc)								GET_PROC_ADDR("vkResetCommandPool");
m_vk.createCommandBuffer							= (CreateCommandBufferFunc)								GET_PROC_ADDR("vkCreateCommandBuffer");
m_vk.destroyCommandBuffer							= (DestroyCommandBufferFunc)							GET_PROC_ADDR("vkDestroyCommandBuffer");
m_vk.beginCommandBuffer								= (BeginCommandBufferFunc)								GET_PROC_ADDR("vkBeginCommandBuffer");
m_vk.endCommandBuffer								= (EndCommandBufferFunc)								GET_PROC_ADDR("vkEndCommandBuffer");
m_vk.resetCommandBuffer								= (ResetCommandBufferFunc)								GET_PROC_ADDR("vkResetCommandBuffer");
m_vk.cmdBindPipeline								= (CmdBindPipelineFunc)									GET_PROC_ADDR("vkCmdBindPipeline");
m_vk.cmdBindDynamicViewportState					= (CmdBindDynamicViewportStateFunc)						GET_PROC_ADDR("vkCmdBindDynamicViewportState");
m_vk.cmdBindDynamicRasterState						= (CmdBindDynamicRasterStateFunc)						GET_PROC_ADDR("vkCmdBindDynamicRasterState");
m_vk.cmdBindDynamicColorBlendState					= (CmdBindDynamicColorBlendStateFunc)					GET_PROC_ADDR("vkCmdBindDynamicColorBlendState");
m_vk.cmdBindDynamicDepthStencilState				= (CmdBindDynamicDepthStencilStateFunc)					GET_PROC_ADDR("vkCmdBindDynamicDepthStencilState");
m_vk.cmdBindDescriptorSets							= (CmdBindDescriptorSetsFunc)							GET_PROC_ADDR("vkCmdBindDescriptorSets");
m_vk.cmdBindIndexBuffer								= (CmdBindIndexBufferFunc)								GET_PROC_ADDR("vkCmdBindIndexBuffer");
m_vk.cmdBindVertexBuffers							= (CmdBindVertexBuffersFunc)							GET_PROC_ADDR("vkCmdBindVertexBuffers");
m_vk.cmdDraw										= (CmdDrawFunc)											GET_PROC_ADDR("vkCmdDraw");
m_vk.cmdDrawIndexed									= (CmdDrawIndexedFunc)									GET_PROC_ADDR("vkCmdDrawIndexed");
m_vk.cmdDrawIndirect								= (CmdDrawIndirectFunc)									GET_PROC_ADDR("vkCmdDrawIndirect");
m_vk.cmdDrawIndexedIndirect							= (CmdDrawIndexedIndirectFunc)							GET_PROC_ADDR("vkCmdDrawIndexedIndirect");
m_vk.cmdDispatch									= (CmdDispatchFunc)										GET_PROC_ADDR("vkCmdDispatch");
m_vk.cmdDispatchIndirect							= (CmdDispatchIndirectFunc)								GET_PROC_ADDR("vkCmdDispatchIndirect");
m_vk.cmdCopyBuffer									= (CmdCopyBufferFunc)									GET_PROC_ADDR("vkCmdCopyBuffer");
m_vk.cmdCopyImage									= (CmdCopyImageFunc)									GET_PROC_ADDR("vkCmdCopyImage");
m_vk.cmdBlitImage									= (CmdBlitImageFunc)									GET_PROC_ADDR("vkCmdBlitImage");
m_vk.cmdCopyBufferToImage							= (CmdCopyBufferToImageFunc)							GET_PROC_ADDR("vkCmdCopyBufferToImage");
m_vk.cmdCopyImageToBuffer							= (CmdCopyImageToBufferFunc)							GET_PROC_ADDR("vkCmdCopyImageToBuffer");
m_vk.cmdUpdateBuffer								= (CmdUpdateBufferFunc)									GET_PROC_ADDR("vkCmdUpdateBuffer");
m_vk.cmdFillBuffer									= (CmdFillBufferFunc)									GET_PROC_ADDR("vkCmdFillBuffer");
m_vk.cmdClearColorImage								= (CmdClearColorImageFunc)								GET_PROC_ADDR("vkCmdClearColorImage");
m_vk.cmdClearDepthStencilImage						= (CmdClearDepthStencilImageFunc)						GET_PROC_ADDR("vkCmdClearDepthStencilImage");
m_vk.cmdClearColorAttachment						= (CmdClearColorAttachmentFunc)							GET_PROC_ADDR("vkCmdClearColorAttachment");
m_vk.cmdClearDepthStencilAttachment					= (CmdClearDepthStencilAttachmentFunc)					GET_PROC_ADDR("vkCmdClearDepthStencilAttachment");
m_vk.cmdResolveImage								= (CmdResolveImageFunc)									GET_PROC_ADDR("vkCmdResolveImage");
m_vk.cmdSetEvent									= (CmdSetEventFunc)										GET_PROC_ADDR("vkCmdSetEvent");
m_vk.cmdResetEvent									= (CmdResetEventFunc)									GET_PROC_ADDR("vkCmdResetEvent");
m_vk.cmdWaitEvents									= (CmdWaitEventsFunc)									GET_PROC_ADDR("vkCmdWaitEvents");
m_vk.cmdPipelineBarrier								= (CmdPipelineBarrierFunc)								GET_PROC_ADDR("vkCmdPipelineBarrier");
m_vk.cmdBeginQuery									= (CmdBeginQueryFunc)									GET_PROC_ADDR("vkCmdBeginQuery");
m_vk.cmdEndQuery									= (CmdEndQueryFunc)										GET_PROC_ADDR("vkCmdEndQuery");
m_vk.cmdResetQueryPool								= (CmdResetQueryPoolFunc)								GET_PROC_ADDR("vkCmdResetQueryPool");
m_vk.cmdWriteTimestamp								= (CmdWriteTimestampFunc)								GET_PROC_ADDR("vkCmdWriteTimestamp");
m_vk.cmdCopyQueryPoolResults						= (CmdCopyQueryPoolResultsFunc)							GET_PROC_ADDR("vkCmdCopyQueryPoolResults");
m_vk.cmdPushConstants								= (CmdPushConstantsFunc)								GET_PROC_ADDR("vkCmdPushConstants");
m_vk.cmdBeginRenderPass								= (CmdBeginRenderPassFunc)								GET_PROC_ADDR("vkCmdBeginRenderPass");
m_vk.cmdNextSubpass									= (CmdNextSubpassFunc)									GET_PROC_ADDR("vkCmdNextSubpass");
m_vk.cmdEndRenderPass								= (CmdEndRenderPassFunc)								GET_PROC_ADDR("vkCmdEndRenderPass");
m_vk.cmdExecuteCommands								= (CmdExecuteCommandsFunc)								GET_PROC_ADDR("vkCmdExecuteCommands");
