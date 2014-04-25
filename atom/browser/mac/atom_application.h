// Copyright (c) 2013 GitHub, Inc. All rights reserved.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#import "base/mac/scoped_sending_event.h"

@interface AtomApplication : NSApplication<CrAppProtocol,
                                           CrAppControlProtocol> {
 @private
  BOOL handlingSendEvent_;
}

+ (AtomApplication*)sharedApplication;

// CrAppProtocol:
- (BOOL)isHandlingSendEvent;

// CrAppControlProtocol:
- (void)setHandlingSendEvent:(BOOL)handlingSendEvent;

- (IBAction)closeAllWindows:(id)sender;

@end
