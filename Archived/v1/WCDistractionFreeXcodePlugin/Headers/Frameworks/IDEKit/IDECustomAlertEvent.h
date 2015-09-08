//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEAlertEvent.h"

@class IDEKeyboardShortcut;

@interface IDECustomAlertEvent : IDEAlertEvent
{
    IDEKeyboardShortcut *_keyboardShortcut;
}

+ (id)createNewEvent;
+ (id)customAlertEventForIdentifier:(id)arg1;
+ (id)customAlertEvents;
+ (void)initialize;
@property(retain, nonatomic) IDEKeyboardShortcut *keyboardShortcut; // @synthesize keyboardShortcut=_keyboardShortcut;
- (void).cxx_destruct;
- (id)description;
- (void)remove;
- (void)saveToUserDefaults;
- (id)propertyList;
- (id)alertDefaults;
- (void)changeKeyboardShortcut:(id)arg1;
- (id)keyBinding;
- (id)initWithDefaults:(id)arg1;
- (id)init;

@end
