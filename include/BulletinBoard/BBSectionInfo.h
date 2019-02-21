@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding> {

    NSString* _sectionID;
    NSString* _subsectionID;
    long long _sectionType;
    long long _sectionCategory;
    BOOL _showsInNotificationCenter;
    unsigned long long _suppressedSettings;
    unsigned long long _pushSettings;
    unsigned long long _alertType;
    unsigned long long _notificationCenterLimit;
    BOOL _showsInLockScreen;
    BOOL _showsOnBluetoothDevices;
    NSString* _pathToWeeAppPluginBundle;
    NSString* _displayName;
    id _icon;
    NSArray* _subsections;
    BBSectionInfo* _parentSection;
    NSString* _factorySectionID;
    NSArray* _dataProviderIDs;
    BOOL _suppressFromSettings;
    BOOL _displaysCriticalBulletins;
    BOOL _allowsNotifications;
    BOOL _showsOnExternalDevices;
    BOOL _hideWeeApp;
    BOOL _showsMessagePreview;
    long long _subsectionPriority;
    unsigned long long _version;

}

@property (nonatomic,copy) NSString * sectionID;                                      //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,copy) NSString * subsectionID;                                   //@synthesize subsectionID=_subsectionID - In the implementation block
@property (assign,nonatomic) long long sectionType;                                   //@synthesize sectionType=_sectionType - In the implementation block
@property (assign,nonatomic) long long sectionCategory;                               //@synthesize sectionCategory=_sectionCategory - In the implementation block
@property (assign,nonatomic) BOOL suppressFromSettings;                               //@synthesize suppressFromSettings=_suppressFromSettings - In the implementation block
@property (assign,nonatomic) BOOL showsInNotificationCenter;                          //@synthesize showsInNotificationCenter=_showsInNotificationCenter - In the implementation block
@property (assign,nonatomic) BOOL showsInLockScreen;                                  //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL showsOnExternalDevices;                             //@synthesize showsOnExternalDevices=_showsOnExternalDevices - In the implementation block
@property (assign,nonatomic) unsigned long long notificationCenterLimit;              //@synthesize notificationCenterLimit=_notificationCenterLimit - In the implementation block
@property (assign,nonatomic) unsigned long long pushSettings;                         //@synthesize pushSettings=_pushSettings - In the implementation block
@property (assign,nonatomic) unsigned long long alertType;                            //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) BOOL showsMessagePreview;                                //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
@property (assign,nonatomic) BOOL allowsNotifications;
@property (assign,nonatomic) unsigned long long suppressedSettings;                   //@synthesize suppressedSettings=_suppressedSettings - In the implementation block
@property (assign,nonatomic) BOOL hideWeeApp;                                         //@synthesize hideWeeApp=_hideWeeApp - In the implementation block
@property (nonatomic,copy) NSString * pathToWeeAppPluginBundle;                       //@synthesize pathToWeeAppPluginBundle=_pathToWeeAppPluginBundle - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) id icon;                                      //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL displaysCriticalBulletins;                          //@synthesize displaysCriticalBulletins=_displaysCriticalBulletins - In the implementation block
@property (nonatomic,copy) NSArray * subsections;                                     //@synthesize subsections=_subsections - In the implementation block
@property (assign,nonatomic) BBSectionInfo * parentSection;                           //@synthesize parentSection=_parentSection - In the implementation block
@property (assign,nonatomic) long long subsectionPriority;                            //@synthesize subsectionPriority=_subsectionPriority - In the implementation block
@property (assign,nonatomic) unsigned long long version;                              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL enabled;
@property (assign,nonatomic) unsigned long long bulletinCount;
@property (nonatomic,copy,readonly) NSData * iconData;
@property (nonatomic,copy) NSString * factorySectionID;                               //@synthesize factorySectionID=_factorySectionID - In the implementation block
@property (nonatomic,copy) NSArray * dataProviderIDs;                                 //@synthesize dataProviderIDs=_dataProviderIDs - In the implementation block
+(id)defaultSectionInfoForSection:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)defaultStateForSetting:(unsigned long long)arg1 inSectionType:(long long)arg2 ;
+(id)defaultSectionInfoForType:(long long)arg1 ;
-(void)updateWithDefaultSectionInfo:(id)arg1 ;
-(id)effectiveSectionInfoWithFactoryInfo:(id)arg1 ;
-(id)effectiveSectionInfo;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(long long)sectionType;
-(id)icon;
-(void)setSectionType:(long long)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setIcon:(id)arg1 ;
-(BOOL)enabled;
-(NSString *)displayName;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(BOOL)showsMessagePreview;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(unsigned long long)notificationCenterLimit;
-(NSArray *)dataProviderIDs;
-(BOOL)showsInLockScreen;
-(NSString *)factorySectionID;
-(id)_subsectionForID:(id)arg1 ;
-(void)_replaceSubsection:(id)arg1 ;
-(unsigned long long)pushSettings;
-(BOOL)hideWeeApp;
-(void)setHideWeeApp:(BOOL)arg1 ;
-(void)setSuppressFromSettings:(BOOL)arg1 ;
-(void)setFactorySectionID:(NSString *)arg1 ;
-(void)setAllowsNotifications:(BOOL)arg1 ;
-(long long)sectionCategory;
-(void)_configureWithDefaultsForSectionType:(long long)arg1 ;
-(void)setParentSection:(BBSectionInfo *)arg1 ;
-(void)setSuppressedSettings:(unsigned long long)arg1 ;
-(void)setShowsInNotificationCenter:(BOOL)arg1 ;
-(void)setShowsInLockScreen:(BOOL)arg1 ;
-(void)setShowsOnExternalDevices:(BOOL)arg1 ;
-(void)setPushSettings:(unsigned long long)arg1 ;
-(void)setBulletinCount:(unsigned long long)arg1 ;
-(BBSectionInfo *)parentSection;
-(BOOL)allowsNotifications;
-(void)setSubsections:(NSArray *)arg1 ;
-(void)setDataProviderIDs:(NSArray *)arg1 ;
-(void)setNotificationCenterLimit:(unsigned long long)arg1 ;
-(void)setSubsectionID:(NSString *)arg1 ;
-(void)setSectionCategory:(long long)arg1 ;
-(BOOL)suppressFromSettings;
-(BOOL)showsOnExternalDevices;
-(void)setPathToWeeAppPluginBundle:(NSString *)arg1 ;
-(BOOL)displaysCriticalBulletins;
-(void)setDisplaysCriticalBulletins:(BOOL)arg1 ;
-(void)_addSubsection:(id)arg1 ;
-(long long)subsectionPriority;
-(void)setSubsectionPriority:(long long)arg1 ;
-(void)_associateDataProviderSectionInfo:(id)arg1 ;
-(void)_dissociateDataProviderSectionInfo:(id)arg1 ;
-(unsigned long long)bulletinCount;
-(NSString *)sectionID;
-(void)setAlertType:(unsigned long long)arg1 ;
-(unsigned long long)alertType;
-(NSData *)iconData;
-(NSString *)pathToWeeAppPluginBundle;
-(unsigned long long)suppressedSettings;
-(NSString *)subsectionID;
-(NSArray *)subsections;
-(BOOL)showsInNotificationCenter;
@end
