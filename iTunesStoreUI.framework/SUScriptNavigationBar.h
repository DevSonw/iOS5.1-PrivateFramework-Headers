/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SUScriptButton, SUScriptNavigationItem;

@interface SUScriptNavigationBar : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_topNavigationItem;
- (id)_nativeNavigationBar;
- (id)_copyTopNavigationItem;
- (id)_copyNavigationItems;
- (id)_copyBackNavigationItem;
- (void)setRightButton:(id)arg1 animated:(BOOL)arg2;
@property(retain) SUScriptButton *rightButton;
- (void)setLeftButton:(id)arg1 animated:(BOOL)arg2;
@property(retain) SUScriptButton *leftButton;
- (id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4;
@property(readonly) SUScriptNavigationItem *topNavigationItem;
- (void)setTopNavigationItem:(id)arg1;
- (void)setRightItem:(id)arg1 animated:(BOOL)arg2;
@property(retain) id <SUScriptNavigationItem> rightItem;
@property(retain) NSString *prompt;
- (void)setNavigationItems:(id)arg1;
- (void)setLeftItem:(id)arg1 animated:(BOOL)arg2;
@property(retain) id <SUScriptNavigationItem> leftItem;
- (void)setBackNavigationItem:(id)arg1;
@property(readonly) NSArray *navigationItems;
- (id)_className;
@property(readonly) SUScriptNavigationItem *backNavigationItem;
- (void)tearDownUserInterface;
- (id)initWithNativeNavigationBar:(id)arg1;
- (id)init;

@end
