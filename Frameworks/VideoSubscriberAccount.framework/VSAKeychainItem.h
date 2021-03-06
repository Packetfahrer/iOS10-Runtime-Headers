/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAKeychainItem : NSObject {
    NSMutableDictionary * _committedValues;
    bool  _deleted;
    VSAKeychainEditingContext * _editingContext;
    bool  _inserted;
    VSAKeychainItemKind * _itemKind;
    NSMutableDictionary * _primitiveValues;
    bool  _updated;
}

@property (nonatomic, retain) NSMutableDictionary *committedValues;
@property (getter=isDeleted, nonatomic) bool deleted;
@property (nonatomic) VSAKeychainEditingContext *editingContext;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) bool hasPersistentChangedValues;
@property (getter=isInserted, nonatomic) bool inserted;
@property (nonatomic, readonly, copy) VSAKeychainItemKind *itemKind;
@property (nonatomic, retain) NSMutableDictionary *primitiveValues;
@property (getter=isUpdated, nonatomic) bool updated;

- (void).cxx_destruct;
- (id)changedValues;
- (id)committedValues;
- (id)committedValuesForKeys:(id)arg1;
- (id)description;
- (id)editingContext;
- (bool)hasChanges;
- (bool)hasPersistentChangedValues;
- (id)init;
- (id)initWithItemKind:(id)arg1 insertIntoEditingContext:(id)arg2;
- (bool)isDeleted;
- (bool)isInserted;
- (bool)isUpdated;
- (id)itemKind;
- (id)primitiveValueForKey:(id)arg1;
- (id)primitiveValues;
- (void)setCommittedValues:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setEditingContext:(id)arg1;
- (void)setInserted:(bool)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (void)setPrimitiveValues:(id)arg1;
- (void)setUpdated:(bool)arg1;

@end
