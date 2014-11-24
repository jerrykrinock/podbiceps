//  PodPersistentOrder.h
//  Created by David Phillip Oster, DavidPhillipOster+podbiceps@gmail.com on 11/22/14.
//  Copyright (c) 2014 David Phillip Oster.
//  Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.

#import <Foundation/Foundation.h>

@class MPMediaItem;

// When the user re-orders the items save that order here
@interface PodPersistent : NSObject

+ (instancetype)sharedInstance;

- (void)rememberMediaItems:(NSArray *)mediaItems; // of MPMediaItem *

// NSNotFound if we don't know.
- (NSUInteger)indexOrderOfMediaItem:(MPMediaItem *)mediaItem;

// put item on a permanent stoplist.
- (void)deleteItem:(MPMediaItem *)mediaItem;
- (BOOL)isDeletedItem:(MPMediaItem *)mediaItem;

// 0 if unknown.
- (NSTimeInterval)bookmarkTimeOfMediaItem:(MPMediaItem *)mediaItem;
- (BOOL)hasBookmarkTimeOfMediaItem:(MPMediaItem *)mediaItem;
- (void)setBookmarkTime:(NSTimeInterval)time ofMediaItem:(MPMediaItem *)mediaItem;

@end
