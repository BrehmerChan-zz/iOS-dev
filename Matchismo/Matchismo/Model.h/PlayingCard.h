//
//  PlayingCard.h
//  Matchismo
//
//  Created by Brehmer Chan on 6/7/17.
//  Copyright © 2017 CS193p. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
