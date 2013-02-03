/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIViewServiceFencingController;

@interface _UIViewServiceFencingControlProxy : _UIQueueingProxy <XPCProxyTarget> {
    _UIViewServiceFencingController *_fencingController;
}

+ (id)proxyWithTarget:(id)arg1 fencingController:(id)arg2;

- (void)__beginFencingMessagesWithSendRight:(id)arg1 connectionCount:(unsigned int)arg2;
- (void)__endFencingMessagesForSendRight:(id)arg1;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;

@end