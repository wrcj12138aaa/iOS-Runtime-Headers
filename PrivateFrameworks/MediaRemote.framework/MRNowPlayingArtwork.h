/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingArtwork : NSObject

@property (nonatomic, readonly) BOOL hasArtworkData;
@property (nonatomic, readonly) unsigned int type;

+ (id)nowPlayingArtworkFromXPCDictionary:(id)arg1;

- (void)bindToXPCDictionary:(id)arg1;
- (id)copyImageData;
- (BOOL)hasArtworkData;
- (unsigned int)type;

@end
