//
//  SBImageBrowserView.h
//  Subler
//
//  Created by Damiano Galassi on 02/09/13.
//
//

#import <Quartz/Quartz.h>

@protocol SBImageBrowserViewDelegate
@optional
- (void)_pasteToImageBrowserView:(IKImageBrowserView *)ImageBrowserView;
@end

@interface SBImageBrowserView : IKImageBrowserView {
    NSArray *_pasteboardTypes;
}
@property(readwrite, retain) NSArray *pasteboardTypes;
@end
