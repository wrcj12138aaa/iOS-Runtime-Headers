/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionSequence : SCNAction {
    NSArray *_actions;
    struct SCNCActionSequence { int (**x1)(); float x2; id /* block */ x3; id x4; double x5; double x6; float x7; float x8; double x9; bool x10; bool x11; id /* block */ x12; struct __CFString {} *x13; int x14; float x15; float x16; float x17; float x18; struct vector<SCNCAction *, std::__1::allocator<SCNCAction *> > { struct SCNCAction {} **x_19_1_1; struct SCNCAction {} **x_19_1_2; struct __compressed_pair<SCNCAction **, std::__1::allocator<SCNCAction *> > { struct SCNCAction {} **x_3_2_1; } x_19_1_3; } x19; unsigned long x20; } *_mycaction;
}

+ (id)sequenceWithActions:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCustom;
- (id)reversedAction;

@end
