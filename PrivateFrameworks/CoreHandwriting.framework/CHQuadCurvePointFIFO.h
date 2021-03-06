/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHQuadCurvePointFIFO : CHPointFIFO {
    float _lineWidth;
    struct CGPath { } *_path;
    NSMutableArray *_prevPoints;
    UIView *_view;
}

@property (nonatomic) float lineWidth;
@property (nonatomic) struct CGPath { }*path;
@property (nonatomic, retain) NSMutableArray *prevPoints;
@property (nonatomic, retain) UIView *view;

- (void)addPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)clear;
- (void)dealloc;
- (void)flush;
- (id)initWithFIFO:(id)arg1 strokeView:(id)arg2;
- (float)lineWidth;
- (struct CGPath { }*)path;
- (id)prevPoints;
- (void)setLineWidth:(float)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setPrevPoints:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
