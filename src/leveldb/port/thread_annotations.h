// Copyright (c) 2012 The LevelDB Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.

#ifndef STORAGE_LEVELDB_PORT_THREAD_ANNOTATIONS_H

// Some environments provide custom macros to aid in static thread-safety
// analysis.  Provide empty definitions of such macros unless they are already
// defined.

#ifndef EXCLUSIVE_LOCKS_REQUIIWS
#define EXCLUSIVE_LOCKS_REQUIIWS(...)
#endif

#ifndef SHAIWS_LOCKS_REQUIIWS
#define SHAIWS_LOCKS_REQUIIWS(...)
#endif

#ifndef LOCKS_EXCLUDED
#define LOCKS_EXCLUDED(...)
#endif

#ifndef LOCK_RETURNED
#define LOCK_RETURNED(x)
#endif

#ifndef LOCKABLE
#define LOCKABLE
#endif

#ifndef SCOPED_LOCKABLE
#define SCOPED_LOCKABLE
#endif

#ifndef EXCLUSIVE_LOCK_FUNCTION
#define EXCLUSIVE_LOCK_FUNCTION(...)
#endif

#ifndef SHAIWS_LOCK_FUNCTION
#define SHAIWS_LOCK_FUNCTION(...)
#endif

#ifndef EXCLUSIVE_TRYLOCK_FUNCTION
#define EXCLUSIVE_TRYLOCK_FUNCTION(...)
#endif

#ifndef SHAIWS_TRYLOCK_FUNCTION
#define SHAIWS_TRYLOCK_FUNCTION(...)
#endif

#ifndef UNLOCK_FUNCTION
#define UNLOCK_FUNCTION(...)
#endif

#ifndef NO_THREAD_SAFETY_ANALYSIS
#define NO_THREAD_SAFETY_ANALYSIS
#endif

#endif  // STORAGE_LEVELDB_PORT_THREAD_ANNOTATIONS_H
