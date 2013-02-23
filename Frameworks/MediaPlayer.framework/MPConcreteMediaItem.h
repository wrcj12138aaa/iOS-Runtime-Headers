/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaLibrary, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MPConcreteMediaItem : MPMediaItem <NSCoding, NSCopying> {
    BOOL _cachesProperties;
    MPMediaLibrary *_library;
    unsigned long long _persistentID;
    NSMutableDictionary *_properties;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1;
+ (void)persistentID:(unsigned long long)arg1 didChange:(BOOL)arg2;

- (id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 cachesProperties:(BOOL)arg3;
- (id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(BOOL*)arg2;
- (void)clearBookmarkTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)delete;
- (id)description;
- (BOOL)didSkipWithPlayedToTime:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (BOOL)existsInLibrary;
- (void)incrementPlayCountForPlayingToEnd;
- (BOOL)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementSkipCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (void)invalidate;
- (void)markNominalAmountHasBeenPlayed;
- (id)mediaLibrary;
- (double)nominalHasBeenPlayedThreshold;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2;
- (unsigned long long)persistentID;
- (void)reallyIncrementPlayCount;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (void)updateLastUsedDateToCurrentDate;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end