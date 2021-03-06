/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSASearchCanvasDelegate : NSObject <TSDCanvasDelegate, TSKSearchCanvasDelegate> {
    TSDCanvas * mCanvas;
    TSKDocumentRoot * mDocumentRoot;
}

@property (nonatomic, readonly) TSDCanvas *canvas;
@property (nonatomic, readonly) <TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)canvas;
- (id)canvasSelectionPathForInfo:(id)arg1;
- (void)dealloc;
- (id)documentRoot;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1 canvas:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;

@end
