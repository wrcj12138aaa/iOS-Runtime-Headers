/* Generated by RuntimeBrowser.
 */

@protocol _GEOPlaceDataCacheProxy <NSObject>

@required

- (NSDictionary *)allCacheEntries;
- (void)calculateFreeableSpaceWithHandler:(void *)arg1 onQueue:(void *)arg2; // needs 2 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*, NSObject<OS_dispatch_queue> *
- (void)deletePhoneNumberMapping;
- (void)evictAllEntries;
- (void)evictPlaceDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (void)evictPlaceDataForMUID:(unsigned long long)arg1;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (GEOPDPlace *)placeDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (GEOPDPlace *)placeDataForMUID:(unsigned long long)arg1;
- (GEOPDPlace *)placeDataForPhoneNumber:(unsigned long long)arg1;
- (void)setPlaceData:(GEOPDPlace *)arg1 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg2;
- (void)setPlaceData:(GEOPDPlace *)arg1 forMUID:(unsigned long long)arg2;
- (void)shrinkToSize:(void *)arg1 finished:(void *)arg2 onQueue:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*, NSObject<OS_dispatch_queue> *

@end
