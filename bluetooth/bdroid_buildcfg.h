/*
 * Copyright (C) 2012 The Android Open Source Project
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

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#define BLUETOOTH_QTI_SW TRUE

#define SC_MODE_INCLUDED FALSE

// Enables Interleave scan
#define BTA_HOST_INTERLEAVE_SEARCH  TRUE
// skips conn update at conn completion
#define BTA_BLE_SKIP_CONN_UPD  TRUE
// Disables read remote device feature
#define BTA_SKIP_BLE_READ_REMOTE_FEAT TRUE
// If BLE_VND_INCLUDED enabled, crashes the stack when bluetooth is turned on.
#define BLE_VND_INCLUDED FALSE
#endif
