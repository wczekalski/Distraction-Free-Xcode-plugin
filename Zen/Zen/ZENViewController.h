//
//  ZENViewController.h
//  Zen
//
//  Created by Wojciech Czekalski on 15.06.2015.
//  Copyright (c) 2015 Wojciech Czekalski. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol ZENEditorLayout <NSObject>

- (CGRect)editorRectInBounds:(CGRect)bounds;

@end

@interface ZENViewController : NSViewController

- (instancetype)initWithEditorViewController:(NSViewController *)editorViewController layout:(id<ZENEditorLayout>)layout;

@property (nonatomic, strong, readonly) id<ZENEditorLayout> layout;
@property (nonatomic, strong, readonly) NSViewController *editorViewController;

@end