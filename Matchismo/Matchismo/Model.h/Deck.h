//
//  Deck.h
//  Matchismo
//
//  Created by Brehmer Chan on 6/7/17.
//  Copyright © 2017 CS193p. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
