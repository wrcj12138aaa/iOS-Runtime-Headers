/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFCardEmulation : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _ceEnable;
    <NFCardEmulationDelegate> *_delegate;
    BOOL _fieldDetectEnable;
    unsigned char _source;
}

- (void)_didCEChangeSuspended:(BOOL)arg1;
- (void)_didDetectField:(BOOL)arg1;
- (void)_didEndTransaction:(id)arg1;
- (void)_didFDChangeSuspended:(BOOL)arg1;
- (void)_didReceiveButtonPressed:(id)arg1;
- (void)_didReceiveCardSelect:(id)arg1;
- (void)_didReceiveEvent:(id)arg1;
- (void)_didReceiveRestrictedModeChanged:(BOOL)arg1;
- (void)_didReceiveTimerExpired:(id)arg1;
- (void)_didStartTransaction:(id)arg1;
- (void)_startCardEmulation;
- (void)_startFieldDetect;
- (void)_stopCardEmulation;
- (void)_stopFieldDetect;
- (void)dealloc;
- (id)initWithSource:(unsigned char)arg1 delegate:(id)arg2 queue:(id)arg3;
- (id)initWithSource:(unsigned char)arg1 delegate:(id)arg2 queue:(id)arg3 idleExit:(BOOL)arg4;
- (void)startCardEmulation;
- (void)startFieldDetect;
- (void)stopCardEmulation;
- (void)stopFieldDetect;

@end
