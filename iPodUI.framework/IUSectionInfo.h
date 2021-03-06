/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IUSectionInfo : NSObject
{
    unsigned int _hideIndexBar:1;
    unsigned int _hideSections:1;
    unsigned int _showHeadersInShortLists:1;
}

- (unsigned int)indexOfSectionForSectionIndexTitleAtIndex:(unsigned int)arg1;
- (id)titleOfIndexBarSectionAtIndex:(unsigned int)arg1;
- (id)titleOfSectionAtIndex:(unsigned int)arg1;
@property(nonatomic) BOOL showHeadersInShortLists;
@property(nonatomic) BOOL hideSections;
@property(nonatomic) BOOL hideIndexBar;
- (id)sectionIndexTitles;
@property(readonly, nonatomic) unsigned int numberOfIndexBarTitles;
@property(readonly, nonatomic) unsigned int numberOfSections;
- (unsigned int)indexOfSectionAtIndex:(unsigned int)arg1;

@end

