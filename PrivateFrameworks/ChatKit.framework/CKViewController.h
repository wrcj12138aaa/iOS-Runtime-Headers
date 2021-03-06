/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKViewController : UIViewController {
    BOOL _appeared;
    BOOL _appearing;
    BOOL _dissapearing;
}

@property (nonatomic) BOOL appeared;
@property (nonatomic) BOOL appearing;
@property (nonatomic) BOOL dissapearing;

- (BOOL)appeared;
- (BOOL)appearing;
- (void)childViewControllersPerform:(SEL)arg1;
- (BOOL)dissapearing;
- (void)parentControllerDidBecomeActive;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)performResumeDeferredSetup;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)setAppeared:(BOOL)arg1;
- (void)setAppearing:(BOOL)arg1;
- (void)setDissapearing:(BOOL)arg1;
- (void)significantTimeChange;
- (void)systemApplicationWillEnterForeground;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
