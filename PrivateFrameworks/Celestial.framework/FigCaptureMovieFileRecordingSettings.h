/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary;

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings <NSCoding> {
    NSDictionary *_audioSettings;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _movieFragmentInterval;
    NSDictionary *_movieLevelMetadata;
    BOOL _sendThumbnailIOSurface;
    BOOL _videoMirrored;
    int _videoOrientation;
    NSDictionary *_videoSettings;
}

@property(copy) NSDictionary * audioSettings;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property(copy) NSDictionary * movieLevelMetadata;
@property BOOL sendThumbnailIOSurface;
@property BOOL videoMirrored;
@property int videoOrientation;
@property(copy) NSDictionary * videoSettings;

- (id)audioSettings;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (id)movieLevelMetadata;
- (BOOL)sendThumbnailIOSurface;
- (void)setAudioSettings:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieLevelMetadata:(id)arg1;
- (void)setSendThumbnailIOSurface:(BOOL)arg1;
- (void)setVideoMirrored:(BOOL)arg1;
- (void)setVideoOrientation:(int)arg1;
- (void)setVideoSettings:(id)arg1;
- (BOOL)videoMirrored;
- (int)videoOrientation;
- (id)videoSettings;

@end
