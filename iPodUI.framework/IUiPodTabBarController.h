/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITabBarController.h"

#import "UINavigationControllerDelegate-Protocol.h"
#import "ViewControllerArchiveNode-Protocol.h"

@class IUModalContext, IUMoreListDelegateProxy, NSArray, NSString, UIViewController;

@interface IUiPodTabBarController : UITabBarController <UINavigationControllerDelegate, ViewControllerArchiveNode>
{
    IUModalContext *_modalContext;
    IUMoreListDelegateProxy *_moreListDelegateProxy;
    IUModalContext *_presentedModalContext;
    NSArray *_availableIdentifiers;
    unsigned int _allowsSearch:1;
    int _archivedContextsToBeRestored;
    NSString *_initialIdentifier;
}

+ (id)_newNavigationControllerWithRootContextIdentifier:(id)arg1;
+ (Class)_moreNavigationControllerClass;
+ (id)defaultIdentifiers;
@property(retain, nonatomic) IUModalContext *modalContext; // @synthesize modalContext=_modalContext;
- (id)_navigationControllerForIdentifier:(id)arg1 outIndex:(unsigned int *)arg2;
- (void)_updateViewControllersModalContext;
- (void)_switchToContextBehindCurrentController:(id)arg1 withRootControllerIdentifier:(id)arg2 withPlaybackDataSource:(id)arg3;
- (void)_setNavigationControllerDelegates:(id)arg1;
- (void)_reloadIPodViewControllers;
- (BOOL)_pushContextForSpecifier:(id)arg1 unlessMatchesFinalIdentifier:(id)arg2 animated:(BOOL)arg3;
- (void)_fixMoreListNavigationBar;
- (id)_copyTabBarOrdering;
- (BOOL)_shouldPushContextDuringSwitch:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_updateControllersAvailable;
- (BOOL)_canDisplayItemWithIdentifier:(id)arg1;
- (BOOL)restoreArchivedContexts:(id)arg1;
- (id)copyArchivableContexts;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)_setSelectedViewController:(id)arg1;
- (id)moreNavigationController;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
@property(nonatomic) BOOL allowsSearch;
@property(readonly, nonatomic) UIViewController *topViewController;
- (void)switchToShortcutIdentifier:(id)arg1;
- (void)switchToPlaylistContextForSpecifier:(id)arg1 behindTopController:(BOOL)arg2 withPlaybackDataSource:(id)arg3;
- (void)switchToPlaylistContextForSpecifier:(id)arg1 behindTopController:(BOOL)arg2;
- (void)switchToContext:(id)arg1 withRootControllerIdentifier:(id)arg2;
- (void)switchToAlbumContextForSpecifier:(id)arg1 behindTopController:(BOOL)arg2;
- (void)selectNextIdentifier;
@property(readonly, nonatomic) NSString *selectedIdentifier;
- (id)_rawSelectedIdentifier;
- (void)selectControllerWithIdentifier:(id)arg1;
- (id)visibleCustomViewControllers;
- (void)saveOrderingToDefaults;
- (void)willRestoreArchivedContexts:(id)arg1;
- (void)presentModalContext:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *identifiers;
- (void)dealloc;
- (id)initWithControllersWithAvailableIdentifiers:(id)arg1 initialIdentifier:(id)arg2 maximumNumberOfItems:(int)arg3;
- (id)initWithControllersWithAvailableIdentifiers:(id)arg1 initialIdentifier:(id)arg2;
- (id)initWithControllersWithAvailableIdentifiers:(id)arg1;
- (id)init;

@end

