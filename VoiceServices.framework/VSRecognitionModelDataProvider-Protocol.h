/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol VSRecognitionModelDataProvider <NSObject>
- (int)valueCountForClassWithIdentifier:(id)arg1 inModelWithIdentifier:(id)arg2;

@optional
- (id)valueAtIndex:(int)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3;
- (BOOL)getValue:(id *)arg1 weight:(int *)arg2 atIndex:(int)arg3 forClassWithIdentifier:(id)arg4 inModelWithIdentifier:(id)arg5;
- (id)phoneticValueAtIndex:(int)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3;
- (id)cacheValidityIdentifier;
- (BOOL)isCacheValidityIdentifierValid:(id)arg1;
- (void)beginReportingChanges;
- (void)stopReportingChanges;
@end

