//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDESaveDestinationController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class DVTTableView, NSString, Xcode3TargetMembershipDataSource;

@interface Xcode3SaveDestinationController : IDESaveDestinationController <NSTableViewDelegate, NSTableViewDataSource>
{
    DVTTableView *_targetsTableView;
    Xcode3TargetMembershipDataSource *_dataSource;
}

@property(retain) DVTTableView *targetsTableView; // @synthesize targetsTableView=_targetsTableView;
- (void).cxx_destruct;
- (void)didFinishSaveSuccessfully:(BOOL)arg1;
- (void)destinationManagerGroupDidChange:(id)arg1;
- (void)loadView;
- (void)configureTargetsTableView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
