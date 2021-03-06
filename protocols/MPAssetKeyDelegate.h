/* Generated by RuntimeBrowser.
 */

@protocol MPAssetKeyDelegate <NSObject>

@required

- (NSString *)absolutePathForAssetKey:(NSString *)arg1;
- (NSString *)absolutePathForAssetKey:(NSString *)arg1 andSize:(struct CGSize { float x1; float x2; })arg2;
- (NSString *)absolutePathForStillAssetAtPath:(NSString *)arg1 andSize:(struct CGSize { float x1; float x2; })arg2;

@optional

- (id)attributeForKey:(NSString *)arg1 forAssetKey:(NSString *)arg2 withOptions:(NSDictionary *)arg3;
- (NSDictionary *)attributesforAssetPath:(NSString *)arg1;
- (struct CGImage { }*)cgImageForAssetKey:(NSString *)arg1 andSize:(struct CGSize { float x1; float x2; })arg2;
- (NSArray *)detectRegionsOfInterestForAssetKey:(NSString *)arg1;
- (<MPMapFlightProtocol> *)flightPlanFrom:(struct CGPoint { float x1; float x2; })arg1 to:(struct CGPoint { float x1; float x2; })arg2;
- (NSData *)imageDataForAssetKey:(NSString *)arg1 andSize:(struct CGSize { float x1; float x2; })arg2;
- (<MPMapTileProtocol> *)mapTileCenteredAt:(NSArray *)arg1 size:(struct CGSize { float x1; float x2; })arg2 inset:(struct CGSize { float x1; float x2; })arg3;
- (<MPMapTileProtocol> *)mapTileForPath:(NSString *)arg1;
- (NSString *)relativePathForAssetWithAttributes:(NSDictionary *)arg1;
- (NSArray *)relativeTiledPathsForAssetWithAttributes:(NSDictionary *)arg1;
- (struct CGSize { float x1; float x2; })resolutionForAssetKey:(NSString *)arg1;
- (struct CGImage { }*)retainedCGImageForAssetKey:(NSString *)arg1 andSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGImage { }*)retainedCGImageForAssetKey:(NSString *)arg1 andSize:(struct CGSize { float x1; float x2; })arg2 orientation:(char *)arg3;
- (struct CGImage { }*)retainedCGImageForAssetKey:(NSString *)arg1 andSize:(struct CGSize { float x1; float x2; })arg2 orientation:(char *)arg3 thumbnailIfPossible:(BOOL)arg4 now:(BOOL)arg5;
- (struct __IOSurface { }*)retainedIOSurfaceForAssetKey:(NSString *)arg1 andSize:(struct CGSize { float x1; float x2; })arg2;
- (struct __IOSurface { }*)retainedIOSurfaceForAssetKey:(NSString *)arg1 andSize:(struct CGSize { float x1; float x2; })arg2 orientation:(char *)arg3;
- (struct CGImage { }*)retainedThumbnailCGImageForAssetKey:(NSString *)arg1 andSize:(struct CGSize { float x1; float x2; })arg2;

@end
