/*
 * Copyright (C) 2006 The Android Open Source Project
 * Copyright (C) 2013 Daniel Himmelein
 * Copyright (C) 2016 E.S.R.Labs
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <mindroid/content/ContextWrapper.h>
#include <mindroid/lang/IllegalStateException.h>

namespace mindroid {

void ContextWrapper::attachBaseContext(const sp<Context> baseContext) {
    if (mBaseContext != nullptr) {
        throw IllegalStateException("Base context already set");
    }
    mBaseContext = baseContext;
}

} /* namespace mindroid */
