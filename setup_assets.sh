#!/usr/bin/env bash
set -e
echo "============================================================"
echo " DGX SPARK DLSS-NR Environment Setup"
echo "============================================================"
echo "[*] Compiling native ARM64 Linux nvngx_dlssnr.so wrapper..."
make all

echo "[*] Downloading official OptiScaler release (MIT License)..."
mkdir -p optiscaler_tmp
curl -sL https://github.com/cdozdil/OptiScaler/releases/latest/download/OptiScaler.zip -o optiscaler_tmp/optiscaler.zip || \
curl -sL https://github.com/wilsjo2/OptiScaler-DLSSNR-PreSR-Multipass/releases/download/v0.8.3/OptiScaler-NR-v0.8.3.zip -o optiscaler_tmp/optiscaler.zip

echo "[*] Setup complete! Place your authentic game nvngx_dlssnr.dll beside nvngx_dlssnr.so."
