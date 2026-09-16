#include <windows.h>
#include <stdio.h>

static HMODULE hOrig = NULL;
static FILE* log_file = NULL;

static void log_call(const char* name) {
    if (!log_file) log_file = fopen("dlssnr_proxy.log", "a");
    if (log_file) {
        fprintf(log_file, "[DLSSNR PROXY] %s called\n", name);
        fflush(log_file);
    }
    fprintf(stderr, "[DLSSNR PROXY] %s called\n", name);
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    if (fdwReason == DLL_PROCESS_ATTACH) {
        log_call("DLL_PROCESS_ATTACH");
        hOrig = LoadLibraryA("nvngx_dlssnr_orig.dll");
        if (!hOrig) {
            log_call("Warning: Failed to load nvngx_dlssnr_orig.dll");
        } else {
            log_call("Successfully chained nvngx_dlssnr_orig.dll");
        }
    }
    return TRUE;
}
void* NVSDK_NGX_CUDA_CreateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_CreateFeature");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_CreateFeature");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_CUDA_CreateFeature1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_CreateFeature1");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_CreateFeature1");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_CUDA_EvaluateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_EvaluateFeature");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_EvaluateFeature");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_CUDA_GetFeatureRequirements(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_GetFeatureRequirements");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_GetFeatureRequirements");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_CUDA_GetScratchBufferSize(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_GetScratchBufferSize");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_GetScratchBufferSize");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_CUDA_Init(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_Init");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_Init");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_CUDA_Init1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_Init1");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_Init1");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_CUDA_Init_Ext(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_Init_Ext");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_Init_Ext");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_CUDA_Init_Ext1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_Init_Ext1");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_Init_Ext1");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_CUDA_PopulateParameters_Impl(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_PopulateParameters_Impl");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_PopulateParameters_Impl");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_CUDA_ReleaseFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_ReleaseFeature");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_ReleaseFeature");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_CUDA_Shutdown(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_Shutdown");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_Shutdown");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_CUDA_Shutdown1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_CUDA_Shutdown1");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_CUDA_Shutdown1");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D11_CreateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D11_CreateFeature");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D11_CreateFeature");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D11_EvaluateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D11_EvaluateFeature");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D11_EvaluateFeature");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D11_GetFeatureRequirements(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D11_GetFeatureRequirements");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D11_GetFeatureRequirements");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D11_GetScratchBufferSize(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D11_GetScratchBufferSize");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D11_GetScratchBufferSize");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D11_Init(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D11_Init");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D11_Init");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D11_Init_Ext(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D11_Init_Ext");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D11_Init_Ext");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D11_PopulateParameters_Impl(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D11_PopulateParameters_Impl");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D11_PopulateParameters_Impl");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D11_ReleaseFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D11_ReleaseFeature");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D11_ReleaseFeature");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D11_Shutdown(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D11_Shutdown");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D11_Shutdown");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D11_Shutdown1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D11_Shutdown1");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D11_Shutdown1");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D12_CreateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D12_CreateFeature");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D12_CreateFeature");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D12_EvaluateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D12_EvaluateFeature");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D12_EvaluateFeature");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D12_GetFeatureRequirements(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D12_GetFeatureRequirements");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D12_GetFeatureRequirements");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D12_GetScratchBufferSize(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D12_GetScratchBufferSize");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D12_GetScratchBufferSize");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D12_Init(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D12_Init");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D12_Init");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D12_Init_Ext(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D12_Init_Ext");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D12_Init_Ext");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D12_PopulateParameters_Impl(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D12_PopulateParameters_Impl");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D12_PopulateParameters_Impl");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D12_ReleaseFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D12_ReleaseFeature");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D12_ReleaseFeature");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D12_Shutdown(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D12_Shutdown");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D12_Shutdown");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_D3D12_Shutdown1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_D3D12_Shutdown1");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_D3D12_Shutdown1");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_GetAPIVersion(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_GetAPIVersion");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_GetAPIVersion");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_GetApplicationId(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_GetApplicationId");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_GetApplicationId");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_GetDriverVersionEx(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_GetDriverVersionEx");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_GetDriverVersionEx");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_GetGPUArchitecture(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_GetGPUArchitecture");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_GetGPUArchitecture");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_GetSnippetVersion(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_GetSnippetVersion");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_GetSnippetVersion");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_SetOverrideStatusCallback(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_SetOverrideStatusCallback");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_SetOverrideStatusCallback");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_SetRuntimeParamsCallback(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_SetRuntimeParamsCallback");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_SetRuntimeParamsCallback");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_SetTelemetryEvaluateCallback(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_SetTelemetryEvaluateCallback");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_SetTelemetryEvaluateCallback");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_CreateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_CreateFeature");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_CreateFeature");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_CreateFeature1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_CreateFeature1");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_CreateFeature1");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_EvaluateFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_EvaluateFeature");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_EvaluateFeature");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_GetFeatureDeviceExtensionRequirements");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_GetFeatureRequirements(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_GetFeatureRequirements");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_GetFeatureRequirements");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_GetScratchBufferSize(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_GetScratchBufferSize");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_GetScratchBufferSize");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_Init(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_Init");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_Init");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_Init_Ext(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_Init_Ext");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_Init_Ext");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_Init_Ext2(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_Init_Ext2");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_Init_Ext2");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_PopulateParameters_Impl(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_PopulateParameters_Impl");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_PopulateParameters_Impl");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_ReleaseFeature(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_ReleaseFeature");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_ReleaseFeature");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_Shutdown(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_Shutdown");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_Shutdown");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
void* NVSDK_NGX_VULKAN_Shutdown1(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8) {
    log_call("NVSDK_NGX_VULKAN_Shutdown1");
    if (hOrig) {
        void* (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) = 
            (void*)GetProcAddress(hOrig, "NVSDK_NGX_VULKAN_Shutdown1");
        if (fn) return fn(a1, a2, a3, a4, a5, a6, a7, a8);
    }
    return NULL;
}
