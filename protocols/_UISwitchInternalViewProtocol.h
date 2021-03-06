/* Generated by RuntimeBrowser.
 */

@protocol _UISwitchInternalViewProtocol <NSObject>

@required

- (void)_cleanUpAfterAnimating;
- (void)_prepareForInteraction;
- (void)_setOn:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
- (void)_setPressed:(BOOL)arg1;
- (void)_setPressed:(void *)arg1 on:(void *)arg2 animated:(void *)arg3 shouldAnimateLabels:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: BOOL, BOOL, BOOL, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)_setProgress:(float)arg1;
- (void)_setProgress:(float)arg1 animated:(BOOL)arg2 withDuration:(float)arg3 force:(BOOL)arg4 sendAction:(BOOL)arg5;
- (UIImage *)offImage;
- (BOOL)on;
- (UIImage *)onImage;
- (UIColor *)onTintColor;
- (void)setOffImage:(UIImage *)arg1;
- (void)setOn:(BOOL)arg1;
- (void)setOnImage:(UIImage *)arg1;
- (void)setOnTintColor:(UIColor *)arg1;
- (void)setSendAction:(BOOL)arg1;
- (void)setThumbTintColor:(UIColor *)arg1;
- (void)setTintColor:(UIColor *)arg1;
- (void)setUseAlternateColor:(BOOL)arg1;
- (UIColor *)thumbTintColor;
- (UIColor *)tintColor;
- (BOOL)useAlternateColor;

@end
