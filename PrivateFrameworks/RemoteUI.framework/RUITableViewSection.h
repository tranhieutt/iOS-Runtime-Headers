/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class <RUITableViewSectionDelegate>, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString, RUITableViewRow, UIView<RemoteUITableFooter>, UIView<RemoteUITableHeader>;

@interface RUITableViewSection : RUIElement <RUITableFooterDelegate, RUITableHeaderDelegate> {
    NSString *_HTMLFooterContent;
    NSString *_HTMLHeaderContent;
    BOOL _configured;
    <RUITableViewSectionDelegate> *_delegate;
    NSString *_detailHeaderText;
    int _disclosureLimit;
    NSNumber *_drawsTopSeparator;
    NSDictionary *_footerAttributes;
    float _footerHeight;
    NSString *_footerText;
    UIView<RemoteUITableFooter> *_footerView;
    NSDictionary *_headerAttributes;
    float _headerHeight;
    NSString *_headerText;
    UIView<RemoteUITableHeader> *_headerView;
    NSMutableArray *_rows;
    RUITableViewRow *_showAllRow;
    NSDictionary *_subHeaderAttributes;
    NSString *_subHeaderText;
}

@property(copy) NSString * HTMLFooterContent;
@property(copy) NSString * HTMLHeaderContent;
@property BOOL configured;
@property <RUITableViewSectionDelegate> * delegate;
@property(copy) NSString * detailHeaderText;
@property BOOL drawTopSeparator;
@property(copy) NSDictionary * footerAttributes;
@property float footerHeight;
@property(copy) NSString * footerText;
@property(retain) UIView<RemoteUITableFooter> * footerView;
@property(copy) NSDictionary * headerAttributes;
@property float headerHeight;
@property(copy) NSString * headerText;
@property(retain) UIView<RemoteUITableHeader> * headerView;
@property(readonly) NSArray * rows;
@property(copy) NSDictionary * subHeaderAttributes;
@property(copy) NSString * subHeaderText;

- (void).cxx_destruct;
- (id)HTMLFooterContent;
- (id)HTMLHeaderContent;
- (Class)_customFooterClass;
- (Class)_customHeaderClass;
- (void)addRow:(id)arg1;
- (id)colorFromAttributeString:(id)arg1;
- (BOOL)configured;
- (id)delegate;
- (id)detailHeaderText;
- (void)didTapShowAllRowWithTable:(id)arg1;
- (BOOL)drawTopSeparator;
- (id)footerAttributes;
- (float)footerHeight;
- (id)footerText;
- (id)footerView;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (BOOL)hasCustomFooter;
- (BOOL)hasCustomHeader;
- (BOOL)hasValueForDrawsTopSeparator;
- (id)headerAttributes;
- (float)headerHeight;
- (id)headerText;
- (id)headerView;
- (void)headerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (id)init;
- (void)insertRow:(id)arg1 atIndex:(unsigned int)arg2;
- (void)populatePostbackDictionary:(id)arg1;
- (void)removeRowAtIndex:(unsigned int)arg1;
- (id)rows;
- (void)setAttributes:(id)arg1;
- (void)setConfigured:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailHeaderText:(id)arg1;
- (void)setDrawTopSeparator:(BOOL)arg1;
- (void)setFooterAttributes:(id)arg1;
- (void)setFooterHeight:(float)arg1;
- (void)setFooterText:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHTMLFooterContent:(id)arg1;
- (void)setHTMLHeaderContent:(id)arg1;
- (void)setHeaderAttributes:(id)arg1;
- (void)setHeaderHeight:(float)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSubHeaderAttributes:(id)arg1;
- (void)setSubHeaderText:(id)arg1;
- (id)sourceURL;
- (id)subElementsWithName:(id)arg1;
- (id)subHeaderAttributes;
- (id)subHeaderText;

@end
