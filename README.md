# DGX SPARK: Native ARM64 Linux DLSS-NR Wrapper

> **Status: BETA**
> Developed for **NVIDIA DGX SPARK / Ubuntu 26 ARM64** (ARM Cortex-X925 + NVIDIA Blackwell).

Open-source native Linux ARM64 (aarch64) shared-object wrapper (nvngx_dlssnr.so) bridging Windows PE DirectX 12 / Streamline neural rendering directly to host Blackwell Tensor Cores under FEX-Emu, Box64, and GE-Proton.

---

## Compatibility Status
* **Verified:** Tested across DirectX 12 titles including Warhammer 40,000: Space Marine 2, Starfield, and Cyberpunk 2077.
* **Experimental / In Development:** Resident Evil Requiem (re9.exe / Capcom RE Engine). Anti-tamper memory checks and DirectStorage decompression conflicts occurred in our test copy; ongoing research is underway.

---

## Clean-Room Legal Notice
This repository DOES NOT contain any copyrighted NVIDIA proprietary software, neural model weights, or binary DLLs.
* The wrapper is independent, clean-room C code.
* Users must supply their own authentic nvngx_dlssnr.dll from their legally owned software.
* Third-party upscaler integrations (e.g. OptiScaler) are open-source under the MIT License.

---

## Building & Usage
* Compile: run `make all` on your ARM64 system to generate `nvngx_dlssnr.so`.
* Place `nvngx_dlssnr.so` beside your game executable alongside your authentic `nvngx_dlssnr.dll`.

---

## License
Released under the MIT License.
