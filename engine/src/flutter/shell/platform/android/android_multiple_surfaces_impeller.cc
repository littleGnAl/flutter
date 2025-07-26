// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "flutter/shell/platform/android/android_multiple_surfaces_impeller.h"

#include <memory>

#include "flutter/fml/memory/ref_ptr.h"

namespace flutter {

AndroidMultipleSurfacesImpeller::AndroidMultipleSurfacesImpeller(
  std::shared_ptr<AndroidSurfaceFactory> surface_factory
) : surface_factory_(surface_factory) {}

AndroidMultipleSurfacesImpeller::~AndroidMultipleSurfacesImpeller() = default;

bool AndroidMultipleSurfacesImpeller::IsValid() const {
  return true;
}

void AndroidMultipleSurfacesImpeller::TeardownOnScreenContext() {
  // if (vulkan_surface_) {
  //   vulkan_surface_->TeardownOnScreenContext();
  // } else if (gl_surface_) {
  //   gl_surface_->TeardownOnScreenContext();
  // }
}

std::unique_ptr<Surface> AndroidMultipleSurfacesImpeller::CreateGPUSurface(
    GrDirectContext* gr_context) {
  //     FML_LOG(ERROR) << "AndroidMultipleSurfacesImpeller::CreateGPUSurface";
  // if (vulkan_surface_) {
  //   if (window_) {
  //     vulkan_surface_->SetNativeWindow(window_, jni_facade_);
  //   }
  //   return vulkan_surface_->CreateGPUSurface(gr_context);
  // }
  // if (gl_surface_) {
  //   if (window_) {
  //     gl_surface_->SetNativeWindow(window_, jni_facade_);
  //   }
  //   return gl_surface_->CreateGPUSurface(gr_context);
  // }
  return nullptr;
}

void AndroidMultipleSurfacesImpeller::SetupImpellerSurface() {
  // AndroidRenderingAPI api = android_context_->RenderingApi();
  // if (api == AndroidRenderingAPI::kImpellerVulkan) {
  //   vulkan_surface_ = std::make_unique<AndroidSurfaceVKImpeller>(
  //       android_context_->GetVKContext());
  // } else if (api == AndroidRenderingAPI::kImpellerOpenGLES) {
  //   gl_surface_ = std::make_unique<AndroidSurfaceGLImpeller>(
  //       android_context_->GetGLContext());
  // } else {
  //   FML_UNREACHABLE();
  // }
}

bool AndroidMultipleSurfacesImpeller::OnScreenSurfaceResize(const SkISize& size) {
  // if (vulkan_surface_) {
  //   return vulkan_surface_->OnScreenSurfaceResize(size);
  // }
  // if (gl_surface_) {
  //   return gl_surface_->OnScreenSurfaceResize(size);
  // }
  return false;
}

bool AndroidMultipleSurfacesImpeller::ResourceContextMakeCurrent() {
  // if (vulkan_surface_) {
  //   return vulkan_surface_->ResourceContextMakeCurrent();
  // }
  // if (gl_surface_) {
  //   return gl_surface_->ResourceContextMakeCurrent();
  // }
  return false;
}

bool AndroidMultipleSurfacesImpeller::ResourceContextClearCurrent() {
  // if (vulkan_surface_) {
  //   return vulkan_surface_->ResourceContextClearCurrent();
  // }
  // if (gl_surface_) {
  //   return gl_surface_->ResourceContextClearCurrent();
  // }
  return false;
}

bool AndroidMultipleSurfacesImpeller::SetNativeWindow(
    fml::RefPtr<AndroidNativeWindow> window,
    const std::shared_ptr<PlatformViewAndroidJNI>& jni_facade) {
  // if (vulkan_surface_) {
  //   return vulkan_surface_->SetNativeWindow(window, jni_facade);
  // }
  // if (gl_surface_) {
  //   return gl_surface_->SetNativeWindow(window, jni_facade);
  // }
  // window_ = window;
  // jni_facade_ = jni_facade;
  return true;
}

std::unique_ptr<Surface>
AndroidMultipleSurfacesImpeller::CreateSnapshotSurface() {
  // if (vulkan_surface_) {
  //   return vulkan_surface_->CreateSnapshotSurface();
  // }
  // if (gl_surface_) {
  //   return gl_surface_->CreateSnapshotSurface();
  // }
  return nullptr;
}

std::shared_ptr<impeller::Context>
AndroidMultipleSurfacesImpeller::GetImpellerContext() {
  // return android_context_->GetImpellerContext();
  return nullptr;
}

}  // namespace flutter
