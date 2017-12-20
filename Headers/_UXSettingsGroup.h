//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/_UXSettings.h>

#import "NSFastEnumeration.h"

@class NSHashTable, NSMutableArray;

@interface _UXSettingsGroup : _UXSettings <NSFastEnumeration>
{
    NSMutableArray *_internal_group;
    NSHashTable *_internal_groupObservers;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)_sendMove:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)_sendRemove:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_sendInsert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)_stopObservingPropertiesAndChildren;
- (void)_startObservingPropertiesAndChildren;
- (BOOL)_hasObservers;
- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;
- (void)setValuesFromModel:(id)arg1;
- (id)archiveDictionary;
- (void)removeGroupObserver:(id)arg1;
- (void)addGroupObserver:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)enumerateSettingsUsingBlock:(CDUnknownBlockType)arg1;
- (void)moveSettingsAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)moveSettings:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeSettingsAtIndex:(unsigned long long)arg1;
- (void)removeSettings:(id)arg1;
- (void)insertSettings:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addSettings:(id)arg1;
- (unsigned long long)indexOfSettings:(id)arg1;
- (BOOL)containsSettings:(id)arg1;
- (id)settingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)_completeInitByApplyingArchiveDictionary:(id)arg1;
- (void)_continueInitBySettingDefaultValues;
- (id)_startInit;

@end
