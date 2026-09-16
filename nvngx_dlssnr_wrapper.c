#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <dlfcn.h>

#define EXPORT __attribute__((visibility("default")))

static void* orig_dll = NULL;

__attribute__((constructor))
static void init_proxy(void) {
    orig_dll = dlopen("nvngx_dlssnr_orig.dll", RTLD_NOW | RTLD_LOCAL);
    if (!orig_dll) {
        fprintf(stderr, "[PROXY] Warning: nvngx_dlssnr_orig.dll not loaded: %s\n", dlerror());
    } else {
        fprintf(stderr, "[PROXY] Successfully loaded target library\n");
    }
}

EXPORT void* NVSDK_NGX_CUDA_CreateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_CreateFeature called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_CreateFeature");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_CUDA_CreateFeature1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_CreateFeature1 called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_CreateFeature1");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_CUDA_EvaluateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_EvaluateFeature called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_EvaluateFeature");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_CUDA_GetFeatureRequirements(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_GetFeatureRequirements called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_GetFeatureRequirements");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_CUDA_GetScratchBufferSize(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_GetScratchBufferSize called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_GetScratchBufferSize");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_CUDA_Init(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_Init called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_Init");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_CUDA_Init1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_Init1 called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_Init1");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_CUDA_Init_Ext(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_Init_Ext called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_Init_Ext");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_CUDA_Init_Ext1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_Init_Ext1 called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_Init_Ext1");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_CUDA_PopulateParameters_Impl(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_PopulateParameters_Impl called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_PopulateParameters_Impl");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_CUDA_ReleaseFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_ReleaseFeature called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_ReleaseFeature");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_CUDA_Shutdown(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_Shutdown called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_Shutdown");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_CUDA_Shutdown1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_CUDA_Shutdown1 called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_CUDA_Shutdown1");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D11_CreateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D11_CreateFeature called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D11_CreateFeature");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D11_EvaluateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D11_EvaluateFeature called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D11_EvaluateFeature");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D11_GetFeatureRequirements(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D11_GetFeatureRequirements called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D11_GetFeatureRequirements");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D11_GetScratchBufferSize(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D11_GetScratchBufferSize called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D11_GetScratchBufferSize");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D11_Init(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D11_Init called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D11_Init");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D11_Init_Ext(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D11_Init_Ext called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D11_Init_Ext");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D11_PopulateParameters_Impl(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D11_PopulateParameters_Impl called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D11_PopulateParameters_Impl");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D11_ReleaseFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D11_ReleaseFeature called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D11_ReleaseFeature");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D11_Shutdown(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D11_Shutdown called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D11_Shutdown");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D11_Shutdown1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D11_Shutdown1 called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D11_Shutdown1");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D12_CreateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D12_CreateFeature called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D12_CreateFeature");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D12_EvaluateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D12_EvaluateFeature called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D12_EvaluateFeature");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D12_GetFeatureRequirements(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D12_GetFeatureRequirements called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D12_GetFeatureRequirements");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D12_GetScratchBufferSize(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D12_GetScratchBufferSize called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D12_GetScratchBufferSize");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D12_Init(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D12_Init called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D12_Init");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D12_Init_Ext(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D12_Init_Ext called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D12_Init_Ext");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D12_PopulateParameters_Impl(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D12_PopulateParameters_Impl called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D12_PopulateParameters_Impl");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D12_ReleaseFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D12_ReleaseFeature called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D12_ReleaseFeature");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D12_Shutdown(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D12_Shutdown called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D12_Shutdown");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_D3D12_Shutdown1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_D3D12_Shutdown1 called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_D3D12_Shutdown1");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_GetAPIVersion(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_GetAPIVersion called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_GetAPIVersion");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_GetApplicationId(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_GetApplicationId called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_GetApplicationId");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_GetDriverVersionEx(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_GetDriverVersionEx called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_GetDriverVersionEx");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_GetGPUArchitecture(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_GetGPUArchitecture called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_GetGPUArchitecture");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_GetSnippetVersion(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_GetSnippetVersion called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_GetSnippetVersion");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_SetOverrideStatusCallback(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_SetOverrideStatusCallback called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_SetOverrideStatusCallback");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_SetRuntimeParamsCallback(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_SetRuntimeParamsCallback called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_SetRuntimeParamsCallback");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_SetTelemetryEvaluateCallback(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_SetTelemetryEvaluateCallback called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_SetTelemetryEvaluateCallback");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_CreateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_CreateFeature called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_CreateFeature");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_CreateFeature1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_CreateFeature1 called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_CreateFeature1");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_EvaluateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_EvaluateFeature called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_EvaluateFeature");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_GetFeatureRequirements(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_GetFeatureRequirements called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_GetFeatureRequirements");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_GetScratchBufferSize(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_GetScratchBufferSize called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_GetScratchBufferSize");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_Init(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_Init called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_Init");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_Init_Ext(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_Init_Ext called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_Init_Ext");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_Init_Ext2(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_Init_Ext2 called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_Init_Ext2");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_PopulateParameters_Impl(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_PopulateParameters_Impl called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_PopulateParameters_Impl");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_ReleaseFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_ReleaseFeature called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_ReleaseFeature");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_Shutdown(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_Shutdown called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_Shutdown");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

EXPORT void* NVSDK_NGX_VULKAN_Shutdown1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    fprintf(stderr, "[PROXY CALL] NVSDK_NGX_VULKAN_Shutdown1 called\n");
    if (orig_dll) {
        void* (*orig_fn)(void*, void*, void*, void*, void*, void*, void*, void*) = dlsym(orig_dll, "NVSDK_NGX_VULKAN_Shutdown1");
        if (orig_fn) return orig_fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}

