/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKBCompatInputView : UIView

@property (nonatomic, readonly) UIView *touchableView;

+ (BOOL)_retroactivelyRequiresConstraintBasedLayout;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_compatibleBounds;
- (BOOL)_hasAutolayoutHeightConstraint;
- (void)_resizeForKeyplaneSize:(struct CGSize { float x1; float x2; })arg1 splitWidthsChanged:(BOOL)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)touchableView;

@end
