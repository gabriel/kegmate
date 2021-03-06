//
//  KBNotifications.h
//  KegPad
//
//  Created by Gabriel Handford on 7/29/10.
//  Copyright 2010 Yelp. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

extern NSString *const KBKegSelectionDidChangeNotification;
extern NSString *const KBKegTemperatureDidChangeNotification;
extern NSString *const KBKegVolumeDidChangeNotification;
extern NSString *const KBKegDidStartPourNotification;
extern NSString *const KBKegDidEndPourNotification;
extern NSString *const KBKegDidSavePourNotification;
extern NSString *const KBUserDidLoginNotification; // With user (KBUser)
extern NSString *const KBUserDidLogoutNotification;

extern NSString *const KBUserDidEditNotification; // With user (KBUser)
extern NSString *const KBUserDidUpdateUserNotification; // With user (KBUser)
extern NSString *const KBUserDidSetRatingNotification; // With rating (KBRating)

extern NSString *const KBBeerDidEditNotification; // With beer (KBBeer)
extern NSString *const KBKegDidEditNotification; // With keg (KBKeg)

extern NSString *const KBUnknownTagIdNotification; // With tag id (NSString), if an unknown tag is read

extern NSString *const KBDidSelectUserNotification; // With user (KBUser)

extern NSString *const KBActivityNotification; // If there is an user activity

extern NSString *const KBKegDidUpdatePourNotification; // For when an active pour is updated

extern NSString *const KBTwitterCredentialsDidChange; // When twitter credentials change
