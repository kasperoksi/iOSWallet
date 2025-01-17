//
//  SignedTransaction.h
//  CocosSDK
//
//  Created by SYLing on 2019/3/6.
//

#import "Transaction.h"
@class CocosPrivateKey,CocosPublicKey;

@interface SignedTransaction : Transaction

@property (nonatomic, copy) NSArray <NSString *>*signatures;

- (void)signWithPrikey:(CocosPrivateKey *)prikey;

- (NSArray <CocosPublicKey *>*)needSignedKeys;

@end
