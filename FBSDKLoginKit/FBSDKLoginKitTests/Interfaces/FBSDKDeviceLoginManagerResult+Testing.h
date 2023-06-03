/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

NS_ASSUME_NONNULL_BEGIN

@interface FBSDKDeviceLoginManagerResult (Testing)

- (instancetype)initWithToken:(nullable FBSDKAccessToken *)token
                  isCancelled:(BOOL)cancelled;

@end

NS_ASSUME_NONNULL_END
