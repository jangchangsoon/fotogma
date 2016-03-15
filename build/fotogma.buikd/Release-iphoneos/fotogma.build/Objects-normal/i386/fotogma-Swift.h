// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;
@class NSURL;

SWIFT_CLASS("_TtC7fotogma11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * __nullable window;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * __nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * __nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * __nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * __nonnull)application;
- (void)applicationWillTerminate:(UIApplication * __nonnull)application;
- (BOOL)application:(UIApplication * __nonnull)application openURL:(NSURL * __nonnull)url sourceApplication:(NSString * __nullable)sourceApplication annotation:(id __nonnull)annotation;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class NSCache;
@class NSIndexPath;
@class UITableViewCell;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC7fotogma6FeedVC")
@interface FeedVC : UIViewController <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) IBOutlet UITableView * __null_unspecified tableView;
+ (NSCache * __nonnull)imageCache;
+ (void)setImageCache:(NSCache * __nonnull)value;
- (void)viewDidLoad;
- (void)initObservers;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (NSInteger)numberOfSectionsInTableView:(UITableView * __nonnull)tableView;
- (NSInteger)tableView:(UITableView * __nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * __nonnull)tableView:(UITableView * __nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (CGFloat)tableView:(UITableView * __nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7fotogma15LoginButtonView")
@interface LoginButtonView : UIButton
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7fotogma18LoginTextFieldView")
@interface LoginTextFieldView : UITextField
- (void)awakeFromNib;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImageView;
@class UILabel;

SWIFT_CLASS("_TtC7fotogma8PostCell")
@interface PostCell : UITableViewCell
@property (nonatomic, strong) IBOutlet UIImageView * __null_unspecified postedImg;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified postText;
@property (nonatomic, strong) IBOutlet UIButton * __null_unspecified heartImg;
@property (nonatomic, strong) IBOutlet UILabel * __null_unspecified numberOfLikes;
- (void)awakeFromNib;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * __nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITextView;
@class UIImagePickerController;
@class UIImage;

SWIFT_CLASS("_TtC7fotogma6PostVC")
@interface PostVC : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (nonatomic, strong) IBOutlet UIImageView * __null_unspecified pickedImg;
@property (nonatomic, strong) IBOutlet UITextView * __null_unspecified textView;
@property (nonatomic, strong) UIImagePickerController * __null_unspecified imagePicker;
@property (nonatomic) BOOL imageSelected;
- (void)viewDidLoad;
- (void)imagePickerController:(UIImagePickerController * __nonnull)picker didFinishPickingImage:(UIImage * __nonnull)image editingInfo:(NSDictionary<NSString *, id> * __nullable)editingInfo;
- (IBAction)addImage:(id __nonnull)sender;
- (IBAction)savePost:(id __nonnull)sender;
- (void)postToFirebase:(NSString * __nullable)imgUrl;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC7fotogma14ViewController")
@interface ViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, strong) IBOutlet LoginTextFieldView * __null_unspecified emailField;
@property (nonatomic, strong) IBOutlet LoginTextFieldView * __null_unspecified passwordField;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)touchesBegan:(NSSet<UITouch *> * __nonnull)touches withEvent:(UIEvent * __nullable)event;
- (BOOL)resignFirstResponder;
- (BOOL)textFieldShouldReturn:(UITextField * __nonnull)textField;
- (IBAction)fbBtnPressed:(UIButton * __null_unspecified)sender;
- (IBAction)attempLogin:(UIButton * __null_unspecified)sender;
- (void)showErrorAlert:(NSString * __nonnull)title msg:(NSString * __nonnull)msg;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
