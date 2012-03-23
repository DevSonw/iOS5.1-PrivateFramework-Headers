/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable, NSMutableSet;

@interface VMUTraceData : NSObject
{
    NSMapTable *pcMap;
    NSMapTable *threadTraces;
    NSMapTable *libXrefs;
    NSMapTable *fnXrefs;
    NSMutableSet *threadIDnumbers;
    unsigned int maxDepth;
    unsigned int threadCount;
}

- (id)init;
- (void)freeXrefTable:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)addEvent:(id)arg1;
- (void)buildPCMap:(long *)arg1 withNumPages:(unsigned int)arg2 forTask:(unsigned int)arg3;
- (id)initWithLogRecords:(CDStruct_32d0cbe3 *)arg1 forTask:(unsigned int)arg2;
- (id)initWithBacktraces:(id)arg1 forTask:(unsigned int)arg2;
- (id)symbolForPC:(unsigned long long)arg1;
- (id)threadIDs;
- (id)traceForThread:(unsigned int)arg1;
- (id)numberForThread:(unsigned int)arg1;
- (unsigned int)maxDepth;
- (void)writeToFile:(struct __sFILE *)arg1;
- (unsigned long long)readAddressFromFile:(struct __sFILE *)arg1 has64bitAddresses:(BOOL)arg2 needSwap:(BOOL)arg3;
- (BOOL)readFromFile:(struct __sFILE *)arg1;
- (void)addOrIncrementXref:(id)arg1 withParent:(id)arg2 withChild:(id)arg3 withSelector:(SEL)arg4 commutative:(BOOL)arg5;
- (void)generateXref:(id)arg1 withSelector:(SEL)arg2 commutative:(BOOL)arg3;
- (id)functionXref;
- (id)libraryXref;
- (void)printXrefs:(id)arg1 toString:(id)arg2;

@end
