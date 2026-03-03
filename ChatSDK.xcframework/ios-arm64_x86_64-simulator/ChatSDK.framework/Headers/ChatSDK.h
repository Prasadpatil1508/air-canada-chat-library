#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CSDKAwsChatPayload, CSDKAwsChatPayloadCompanion, CSDKAwsSocketEnvelope, CSDKAwsSocketEnvelopeCompanion, CSDKBotMessage, CSDKBotMessageCompanion, CSDKBotPayload, CSDKBotPayloadCompanion, CSDKChatConstants, CSDKChatConstantsConnectErrors, CSDKChatConstantsDimensions, CSDKChatConstantsMessageIdPrefixes, CSDKChatConstantsStrings, CSDKChatConstantsUrls, CSDKChatInputState, CSDKChatItem, CSDKChatItemChatEnded, CSDKChatItemFlightStatus, CSDKChatItemMarkdown, CSDKChatItemQuickReplies, CSDKChatItemSystem, CSDKChatItemText, CSDKChatLibraryConfig, CSDKChatLibraryLog, CSDKChatMessage, CSDKChatPoc, CSDKChatSessionStorage, CSDKChatUi, CSDKConnectChatDetails, CSDKConnectConfig, CSDKConnectionDetails, CSDKFlightAction, CSDKFlightActionCompanion, CSDKFlightLeg, CSDKFlightLegCompanion, CSDKFlightStatus, CSDKFlightStatusCompanion, CSDKFlightStatusPayload, CSDKFlightStatusPayloadCompanion, CSDKKotlinAbstractCoroutineContextElement, CSDKKotlinAbstractCoroutineContextKey<B, E>, CSDKKotlinArray<T>, CSDKKotlinByteArray, CSDKKotlinByteIterator, CSDKKotlinCancellationException, CSDKKotlinEnum<E>, CSDKKotlinEnumCompanion, CSDKKotlinException, CSDKKotlinFloatArray, CSDKKotlinFloatIterator, CSDKKotlinIllegalStateException, CSDKKotlinIntArray, CSDKKotlinIntIterator, CSDKKotlinIntProgression, CSDKKotlinIntProgressionCompanion, CSDKKotlinIntRange, CSDKKotlinIntRangeCompanion, CSDKKotlinKTypeProjection, CSDKKotlinKTypeProjectionCompanion, CSDKKotlinKVariance, CSDKKotlinMatchGroup, CSDKKotlinMatchResultDestructured, CSDKKotlinNothing, CSDKKotlinPair<__covariant A, __covariant B>, CSDKKotlinRegex, CSDKKotlinRegexCompanion, CSDKKotlinRegexOption, CSDKKotlinRuntimeException, CSDKKotlinShortArray, CSDKKotlinShortIterator, CSDKKotlinThrowable, CSDKKotlinUnit, CSDKKotlinx_coroutines_coreCoroutineDispatcher, CSDKKotlinx_coroutines_coreCoroutineDispatcherKey, CSDKKotlinx_serialization_coreSerialKind, CSDKKotlinx_serialization_coreSerializersModule, CSDKKotlinx_serialization_jsonClassDiscriminatorMode, CSDKKotlinx_serialization_jsonJson, CSDKKotlinx_serialization_jsonJsonConfiguration, CSDKKotlinx_serialization_jsonJsonDefault, CSDKKotlinx_serialization_jsonJsonElement, CSDKKotlinx_serialization_jsonJsonElementCompanion, CSDKKtor_client_coreHttpClient, CSDKKtor_client_coreHttpClientCall, CSDKKtor_client_coreHttpClientCallCompanion, CSDKKtor_client_coreHttpClientConfig<T>, CSDKKtor_client_coreHttpClientEngineConfig, CSDKKtor_client_coreHttpReceivePipeline, CSDKKtor_client_coreHttpReceivePipelinePhases, CSDKKtor_client_coreHttpRequestBuilder, CSDKKtor_client_coreHttpRequestBuilderCompanion, CSDKKtor_client_coreHttpRequestData, CSDKKtor_client_coreHttpRequestPipeline, CSDKKtor_client_coreHttpRequestPipelinePhases, CSDKKtor_client_coreHttpResponse, CSDKKtor_client_coreHttpResponseContainer, CSDKKtor_client_coreHttpResponseData, CSDKKtor_client_coreHttpResponsePipeline, CSDKKtor_client_coreHttpResponsePipelinePhases, CSDKKtor_client_coreHttpSendPipeline, CSDKKtor_client_coreHttpSendPipelinePhases, CSDKKtor_client_coreProxyConfig, CSDKKtor_eventsEventDefinition<T>, CSDKKtor_eventsEvents, CSDKKtor_httpContentType, CSDKKtor_httpContentTypeCompanion, CSDKKtor_httpHeaderValueParam, CSDKKtor_httpHeaderValueWithParameters, CSDKKtor_httpHeaderValueWithParametersCompanion, CSDKKtor_httpHeadersBuilder, CSDKKtor_httpHttpMethod, CSDKKtor_httpHttpMethodCompanion, CSDKKtor_httpHttpProtocolVersion, CSDKKtor_httpHttpProtocolVersionCompanion, CSDKKtor_httpHttpStatusCode, CSDKKtor_httpHttpStatusCodeCompanion, CSDKKtor_httpOutgoingContent, CSDKKtor_httpURLBuilder, CSDKKtor_httpURLBuilderCompanion, CSDKKtor_httpURLProtocol, CSDKKtor_httpURLProtocolCompanion, CSDKKtor_httpUrl, CSDKKtor_httpUrlCompanion, CSDKKtor_ioBuffer, CSDKKtor_ioBufferCompanion, CSDKKtor_ioByteReadPacket, CSDKKtor_ioByteReadPacketCompanion, CSDKKtor_ioChunkBuffer, CSDKKtor_ioChunkBufferCompanion, CSDKKtor_ioInput, CSDKKtor_ioInputCompanion, CSDKKtor_ioMemory, CSDKKtor_ioMemoryCompanion, CSDKKtor_utilsAttributeKey<T>, CSDKKtor_utilsGMTDate, CSDKKtor_utilsGMTDateCompanion, CSDKKtor_utilsMonth, CSDKKtor_utilsMonthCompanion, CSDKKtor_utilsPipeline<TSubject, TContext>, CSDKKtor_utilsPipelinePhase, CSDKKtor_utilsStringValuesBuilderImpl, CSDKKtor_utilsTypeInfo, CSDKKtor_utilsWeekDay, CSDKKtor_utilsWeekDayCompanion, CSDKLibraryConnectConfig, CSDKLibraryDrawableResource, CSDKLibraryFontResource, CSDKLibraryPluralStringResource, CSDKLibraryResource, CSDKLibraryResourceItem, CSDKLibraryStringArrayResource, CSDKLibraryStringResource, CSDKMarkdownRenderer, CSDKMaterial3Typography, CSDKMessageDirection, CSDKParsedChatMessage, CSDKQuickReply, CSDKQuickReplyCompanion, CSDKRes, CSDKResArray, CSDKResDrawable, CSDKResFont, CSDKResPlurals, CSDKResString, CSDKSender, CSDKSkikoBackendRenderTarget, CSDKSkikoBackendRenderTargetCompanion, CSDKSkikoBackendTexture, CSDKSkikoBackendTextureCompanion, CSDKSkikoBitmap, CSDKSkikoBitmapCompanion, CSDKSkikoBlendMode, CSDKSkikoCanvas, CSDKSkikoCanvasCompanion, CSDKSkikoCanvasSaveLayerFlags, CSDKSkikoCanvasSaveLayerFlagsSet, CSDKSkikoCanvasSaveLayerRec, CSDKSkikoClipMode, CSDKSkikoColor4f, CSDKSkikoColor4fCompanion, CSDKSkikoColorAlphaType, CSDKSkikoColorChannel, CSDKSkikoColorFilter, CSDKSkikoColorFilterCompanion, CSDKSkikoColorInfo, CSDKSkikoColorInfoCompanion, CSDKSkikoColorMatrix, CSDKSkikoColorSpace, CSDKSkikoColorSpaceCompanion, CSDKSkikoColorType, CSDKSkikoColorTypeCompanion, CSDKSkikoContentChangeMode, CSDKSkikoData, CSDKSkikoDataCompanion, CSDKSkikoDirectContext, CSDKSkikoDirectContextCompanion, CSDKSkikoDrawable, CSDKSkikoDrawableCompanion, CSDKSkikoEncodedImageFormat, CSDKSkikoFilterBlurMode, CSDKSkikoFilterMode, CSDKSkikoFilterTileMode, CSDKSkikoFont, CSDKSkikoFontCompanion, CSDKSkikoFontEdging, CSDKSkikoFontFamilyName, CSDKSkikoFontFeature, CSDKSkikoFontFeatureCompanion, CSDKSkikoFontHinting, CSDKSkikoFontMetrics, CSDKSkikoFontMetricsCompanion, CSDKSkikoFontMgr, CSDKSkikoFontMgrCompanion, CSDKSkikoFontSlant, CSDKSkikoFontStyle, CSDKSkikoFontStyleCompanion, CSDKSkikoFontStyleSet, CSDKSkikoFontStyleSetCompanion, CSDKSkikoFontVariation, CSDKSkikoFontVariationAxis, CSDKSkikoFontVariationCompanion, CSDKSkikoGLBackendState, CSDKSkikoGradientStyle, CSDKSkikoGradientStyleCompanion, CSDKSkikoIPoint, CSDKSkikoIPointCompanion, CSDKSkikoIRect, CSDKSkikoIRectCompanion, CSDKSkikoISize, CSDKSkikoISizeCompanion, CSDKSkikoImage, CSDKSkikoImageCompanion, CSDKSkikoImageFilter, CSDKSkikoImageFilterCompanion, CSDKSkikoImageInfo, CSDKSkikoImageInfoCompanion, CSDKSkikoInversionMode, CSDKSkikoManaged, CSDKSkikoMaskFilter, CSDKSkikoMaskFilterCompanion, CSDKSkikoMatcher, CSDKSkikoMatrix22, CSDKSkikoMatrix22Companion, CSDKSkikoMatrix33, CSDKSkikoMatrix33Companion, CSDKSkikoMatrix44, CSDKSkikoMatrix44Companion, CSDKSkikoNative, CSDKSkikoNativeCompanion, CSDKSkikoPaint, CSDKSkikoPaintCompanion, CSDKSkikoPaintMode, CSDKSkikoPaintStrokeCap, CSDKSkikoPaintStrokeJoin, CSDKSkikoPath, CSDKSkikoPathCompanion, CSDKSkikoPathDirection, CSDKSkikoPathEffect, CSDKSkikoPathEffectCompanion, CSDKSkikoPathEffectStyle, CSDKSkikoPathEllipseArc, CSDKSkikoPathFillMode, CSDKSkikoPathOp, CSDKSkikoPathSegment, CSDKSkikoPathSegmentIterator, CSDKSkikoPathSegmentIteratorCompanion, CSDKSkikoPathVerb, CSDKSkikoPattern, CSDKSkikoPicture, CSDKSkikoPictureCompanion, CSDKSkikoPixelGeometry, CSDKSkikoPixelRef, CSDKSkikoPixelRefCompanion, CSDKSkikoPixmap, CSDKSkikoPixmapCompanion, CSDKSkikoPoint, CSDKSkikoPointCompanion, CSDKSkikoRRect, CSDKSkikoRRectCompanion, CSDKSkikoRSXform, CSDKSkikoRSXformCompanion, CSDKSkikoRect, CSDKSkikoRectCompanion, CSDKSkikoRefCnt, CSDKSkikoRegion, CSDKSkikoRegionCompanion, CSDKSkikoRegionOp, CSDKSkikoRegionOpCompanion, CSDKSkikoRuntimeEffect, CSDKSkikoRuntimeEffectCompanion, CSDKSkikoRuntimeShaderBuilder, CSDKSkikoRuntimeShaderBuilderCompanion, CSDKSkikoShader, CSDKSkikoShaderCompanion, CSDKSkikoShapingOptions, CSDKSkikoShapingOptionsCompanion, CSDKSkikoSurface, CSDKSkikoSurfaceColorFormat, CSDKSkikoSurfaceCompanion, CSDKSkikoSurfaceOrigin, CSDKSkikoSurfaceProps, CSDKSkikoTextBlob, CSDKSkikoTextBlobCompanion, CSDKSkikoTextLine, CSDKSkikoTextLineCompanion, CSDKSkikoTypeface, CSDKSkikoTypefaceCompanion, CSDKSkikoVertexMode, CSDKStartChatApiResponseDto, CSDKStartChatApiResponseDtoCompanion, CSDKStartChatDataDto, CSDKStartChatDataDtoCompanion, CSDKStartChatRequest, CSDKStartChatRequestCompanion, CSDKStartChatResponse, CSDKStartChatResponseCompanion, CSDKStartChatResultDto, CSDKStartChatResultDtoCompanion, CSDKUi_graphicsBrush, CSDKUi_graphicsBrushCompanion, CSDKUi_graphicsColorFilter, CSDKUi_graphicsColorFilterCompanion, CSDKUi_graphicsDrawStyle, CSDKUi_graphicsShadow, CSDKUi_graphicsShadowCompanion, CSDKUi_textFontFamily, CSDKUi_textFontFamilyCompanion, CSDKUi_textFontHinting, CSDKUi_textFontRasterizationSettings, CSDKUi_textFontRasterizationSettingsCompanion, CSDKUi_textFontSmoothing, CSDKUi_textFontWeight, CSDKUi_textFontWeightCompanion, CSDKUi_textGenericFontFamily, CSDKUi_textLineHeightStyle, CSDKUi_textLineHeightStyleCompanion, CSDKUi_textLocale, CSDKUi_textLocaleCompanion, CSDKUi_textLocaleList, CSDKUi_textLocaleListCompanion, CSDKUi_textParagraphStyle, CSDKUi_textPlatformParagraphStyle, CSDKUi_textPlatformParagraphStyleCompanion, CSDKUi_textPlatformSpanStyle, CSDKUi_textPlatformSpanStyleCompanion, CSDKUi_textPlatformTextStyle, CSDKUi_textSpanStyle, CSDKUi_textSystemFontFamily, CSDKUi_textTextDecoration, CSDKUi_textTextDecorationCompanion, CSDKUi_textTextGeometricTransform, CSDKUi_textTextGeometricTransformCompanion, CSDKUi_textTextIndent, CSDKUi_textTextIndentCompanion, CSDKUi_textTextMotion, CSDKUi_textTextMotionCompanion, CSDKUi_textTextStyle, CSDKUi_textTextStyleCompanion, CSDKUrlOpener, NSLocale, UIViewController;

@protocol CSDKChatLibraryCallbacks, CSDKConnectChatSession, CSDKKotlinAnnotation, CSDKKotlinAppendable, CSDKKotlinClosedRange, CSDKKotlinCollection, CSDKKotlinComparable, CSDKKotlinContinuation, CSDKKotlinContinuationInterceptor, CSDKKotlinCoroutineContext, CSDKKotlinCoroutineContextElement, CSDKKotlinCoroutineContextKey, CSDKKotlinFunction, CSDKKotlinIterable, CSDKKotlinIterator, CSDKKotlinKAnnotatedElement, CSDKKotlinKClass, CSDKKotlinKClassifier, CSDKKotlinKDeclarationContainer, CSDKKotlinKType, CSDKKotlinMapEntry, CSDKKotlinMatchGroupCollection, CSDKKotlinMatchResult, CSDKKotlinMutableIterator, CSDKKotlinOpenEndRange, CSDKKotlinSequence, CSDKKotlinSuspendFunction1, CSDKKotlinSuspendFunction2, CSDKKotlinx_coroutines_coreChildHandle, CSDKKotlinx_coroutines_coreChildJob, CSDKKotlinx_coroutines_coreCoroutineScope, CSDKKotlinx_coroutines_coreDisposableHandle, CSDKKotlinx_coroutines_coreJob, CSDKKotlinx_coroutines_coreParentJob, CSDKKotlinx_coroutines_coreRunnable, CSDKKotlinx_coroutines_coreSelectClause, CSDKKotlinx_coroutines_coreSelectClause0, CSDKKotlinx_coroutines_coreSelectInstance, CSDKKotlinx_serialization_coreCompositeDecoder, CSDKKotlinx_serialization_coreCompositeEncoder, CSDKKotlinx_serialization_coreDecoder, CSDKKotlinx_serialization_coreDeserializationStrategy, CSDKKotlinx_serialization_coreEncoder, CSDKKotlinx_serialization_coreKSerializer, CSDKKotlinx_serialization_coreSerialDescriptor, CSDKKotlinx_serialization_coreSerialFormat, CSDKKotlinx_serialization_coreSerializationStrategy, CSDKKotlinx_serialization_coreSerializersModuleCollector, CSDKKotlinx_serialization_coreStringFormat, CSDKKotlinx_serialization_jsonJsonNamingStrategy, CSDKKtor_client_coreHttpClientEngine, CSDKKtor_client_coreHttpClientEngineCapability, CSDKKtor_client_coreHttpClientPlugin, CSDKKtor_client_coreHttpRequest, CSDKKtor_httpHeaders, CSDKKtor_httpHttpMessage, CSDKKtor_httpHttpMessageBuilder, CSDKKtor_httpParameters, CSDKKtor_httpParametersBuilder, CSDKKtor_ioByteReadChannel, CSDKKtor_ioCloseable, CSDKKtor_ioObjectPool, CSDKKtor_ioReadSession, CSDKKtor_utilsAttributes, CSDKKtor_utilsStringValues, CSDKKtor_utilsStringValuesBuilder, CSDKLibraryQualifier, CSDKParticipantConnectionApi, CSDKSkikoIHasImageInfo, CSDKSkikoSamplingMode, CSDKStartChatApi, CSDKUi_graphicsPaint, CSDKUi_graphicsPathEffect, CSDKUi_textAnnotatedStringAnnotation;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface CSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface CSDKBase (CSDKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface CSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorCSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface CSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface CSDKByte : CSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface CSDKUByte : CSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface CSDKShort : CSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface CSDKUShort : CSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface CSDKInt : CSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface CSDKUInt : CSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface CSDKLong : CSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface CSDKULong : CSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface CSDKFloat : CSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface CSDKDouble : CSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface CSDKBoolean : CSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * Callbacks from the Chat Library to the host app (library → host).
 *
 * Implement in the host app and pass when showing the bottom sheet.
 * Override only the methods you need; defaults are no-op.
 *
 * Use [onActionButtonClicked] when the user taps the primary action button.
 * Use [onDataToHost] when the library needs to send data back (e.g. selected item, form result).
 */
__attribute__((swift_name("ChatLibraryCallbacks")))
@protocol CSDKChatLibraryCallbacks
@required

/**
 * Called when the user taps the action button in the bottom sheet.
 * Host can perform navigation, analytics, or any custom logic.
 */
- (void)onActionButtonClicked __attribute__((swift_name("onActionButtonClicked()")));

/**
 * Called when the library sends data to the host (e.g. user selection, payload).
 * Host can update UI, persist data, or call APIs.
 */
- (void)onDataToHostData:(NSString *)data __attribute__((swift_name("onDataToHost(data:)")));
@end


/**
 * Input configuration for the Chat Library (host → library).
 *
 * Pass from the host app when showing the bottom sheet (e.g. auth token, title, messages).
 * Connect/start-chat API config is owned by the library (from local.properties at build time).
 *
 * @param authToken Optional token for library API calls (e.g. Bearer token).
 * @param displayTitle Optional title/subtitle in header (e.g. "Chatting with Air Canada"); main title is "Virtual Assistant".
 * @param displaySubtitle Optional subtitle line in header (e.g. user name: "Chatting with Bryan"). If null, shows default "Chatting with Air Canada".
 * @param displayMessages List of messages to show in the sheet (e.g. from host or dummy).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatLibraryConfig")))
@interface CSDKChatLibraryConfig : CSDKBase
- (instancetype)initWithAuthToken:(NSString *)authToken displayTitle:(NSString *)displayTitle displaySubtitle:(NSString * _Nullable)displaySubtitle displayMessages:(NSArray<NSString *> *)displayMessages __attribute__((swift_name("init(authToken:displayTitle:displaySubtitle:displayMessages:)"))) __attribute__((objc_designated_initializer));
- (CSDKChatLibraryConfig *)doCopyAuthToken:(NSString *)authToken displayTitle:(NSString *)displayTitle displaySubtitle:(NSString * _Nullable)displaySubtitle displayMessages:(NSArray<NSString *> *)displayMessages __attribute__((swift_name("doCopy(authToken:displayTitle:displaySubtitle:displayMessages:)")));

/**
 * Input configuration for the Chat Library (host → library).
 *
 * Pass from the host app when showing the bottom sheet (e.g. auth token, title, messages).
 * Connect/start-chat API config is owned by the library (from local.properties at build time).
 *
 * @param authToken Optional token for library API calls (e.g. Bearer token).
 * @param displayTitle Optional title/subtitle in header (e.g. "Chatting with Air Canada"); main title is "Virtual Assistant".
 * @param displaySubtitle Optional subtitle line in header (e.g. user name: "Chatting with Bryan"). If null, shows default "Chatting with Air Canada".
 * @param displayMessages List of messages to show in the sheet (e.g. from host or dummy).
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Input configuration for the Chat Library (host → library).
 *
 * Pass from the host app when showing the bottom sheet (e.g. auth token, title, messages).
 * Connect/start-chat API config is owned by the library (from local.properties at build time).
 *
 * @param authToken Optional token for library API calls (e.g. Bearer token).
 * @param displayTitle Optional title/subtitle in header (e.g. "Chatting with Air Canada"); main title is "Virtual Assistant".
 * @param displaySubtitle Optional subtitle line in header (e.g. user name: "Chatting with Bryan"). If null, shows default "Chatting with Air Canada".
 * @param displayMessages List of messages to show in the sheet (e.g. from host or dummy).
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/** Subtitle shown in header below "Virtual Assistant". Use [displaySubtitle] for e.g. user name ("Chatting with …"); otherwise shows default. */
- (NSString *)headerSubtitle __attribute__((swift_name("headerSubtitle()")));

/**
 * Input configuration for the Chat Library (host → library).
 *
 * Pass from the host app when showing the bottom sheet (e.g. auth token, title, messages).
 * Connect/start-chat API config is owned by the library (from local.properties at build time).
 *
 * @param authToken Optional token for library API calls (e.g. Bearer token).
 * @param displayTitle Optional title/subtitle in header (e.g. "Chatting with Air Canada"); main title is "Virtual Assistant".
 * @param displaySubtitle Optional subtitle line in header (e.g. user name: "Chatting with Bryan"). If null, shows default "Chatting with Air Canada".
 * @param displayMessages List of messages to show in the sheet (e.g. from host or dummy).
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authToken __attribute__((swift_name("authToken")));
@property (readonly) NSArray<NSString *> *displayMessages __attribute__((swift_name("displayMessages")));
@property (readonly) NSString * _Nullable displaySubtitle __attribute__((swift_name("displaySubtitle")));
@property (readonly) NSString *displayTitle __attribute__((swift_name("displayTitle")));
@property (readonly) BOOL hasAuthToken __attribute__((swift_name("hasAuthToken")));
@end


/**
 * Entry point for the Chat Library (commonMain).
 *
 * - **Android**: Call [showBottomSheet] with a [androidx.activity.ComponentActivity],
 *   optional [ChatLibraryConfig], and optional [ChatLibraryCallbacks].
 *
 * - **iOS**: Call [createBottomSheetViewController] (from platform bridge) with optional
 *   config and callbacks; present the returned UIViewController modally.
 *
 * Config: pass data into the library (e.g. auth token, title, messages).
 * Callbacks: override in the host to handle button clicks and data from the library.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatPoc")))
@interface CSDKChatPoc : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Entry point for the Chat Library (commonMain).
 *
 * - **Android**: Call [showBottomSheet] with a [androidx.activity.ComponentActivity],
 *   optional [ChatLibraryConfig], and optional [ChatLibraryCallbacks].
 *
 * - **iOS**: Call [createBottomSheetViewController] (from platform bridge) with optional
 *   config and callbacks; present the returned UIViewController modally.
 *
 * Config: pass data into the library (e.g. auth token, title, messages).
 * Callbacks: override in the host to handle button clicks and data from the library.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatPoc __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKChatPoc *shared __attribute__((swift_name("shared")));
@end


/**
 * Port for fetching the start-chat token (DIP: depend on abstraction).
 */
__attribute__((swift_name("StartChatApi")))
@protocol CSDKStartChatApi
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchTokenConfig:(CSDKConnectConfig *)config completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchToken(config:completionHandler:)")));
@end


/**
 * Start-chat API implementation using Ktor (commonMain).
 * Uses [createHttpClient] for the engine (OkHttp/Darwin provided by platform).
 * Logs raw response/error body for debugging API structure.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorStartChatApi")))
@interface CSDKKtorStartChatApi : CSDKBase <CSDKStartChatApi>
- (instancetype)initWithClient:(CSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchTokenConfig:(CSDKConnectConfig *)config completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchToken(config:completionHandler:)")));
@end


/**
 * AWS Connect / start-chat API configuration (host → library).
 *
 * **Do not hardcode values.** The host app should load these from its environment
 * (e.g. .env, BuildConfig, xcconfig) and pass [ConnectConfig] when calling the library.
 *
 * @param apiGatewayUrl Base URL of the start-chat API (e.g. from API_GATEWAY env).
 * @param contactFlowId Contact flow ID (e.g. from CONTACT_FLOW_ID env).
 * @param instanceId Connect instance ID (e.g. from INSTANCE_ID env).
 * @param region AWS region (e.g. from REGION env). Used to call AWS Participant Service (participant-connect.{region}.amazonaws.com) for connect and send.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectConfig")))
@interface CSDKConnectConfig : CSDKBase
- (instancetype)initWithApiGatewayUrl:(NSString *)apiGatewayUrl contactFlowId:(NSString *)contactFlowId instanceId:(NSString *)instanceId region:(NSString *)region __attribute__((swift_name("init(apiGatewayUrl:contactFlowId:instanceId:region:)"))) __attribute__((objc_designated_initializer));
- (CSDKConnectConfig *)doCopyApiGatewayUrl:(NSString *)apiGatewayUrl contactFlowId:(NSString *)contactFlowId instanceId:(NSString *)instanceId region:(NSString *)region __attribute__((swift_name("doCopy(apiGatewayUrl:contactFlowId:instanceId:region:)")));

/**
 * AWS Connect / start-chat API configuration (host → library).
 *
 * **Do not hardcode values.** The host app should load these from its environment
 * (e.g. .env, BuildConfig, xcconfig) and pass [ConnectConfig] when calling the library.
 *
 * @param apiGatewayUrl Base URL of the start-chat API (e.g. from API_GATEWAY env).
 * @param contactFlowId Contact flow ID (e.g. from CONTACT_FLOW_ID env).
 * @param instanceId Connect instance ID (e.g. from INSTANCE_ID env).
 * @param region AWS region (e.g. from REGION env). Used to call AWS Participant Service (participant-connect.{region}.amazonaws.com) for connect and send.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * AWS Connect / start-chat API configuration (host → library).
 *
 * **Do not hardcode values.** The host app should load these from its environment
 * (e.g. .env, BuildConfig, xcconfig) and pass [ConnectConfig] when calling the library.
 *
 * @param apiGatewayUrl Base URL of the start-chat API (e.g. from API_GATEWAY env).
 * @param contactFlowId Contact flow ID (e.g. from CONTACT_FLOW_ID env).
 * @param instanceId Connect instance ID (e.g. from INSTANCE_ID env).
 * @param region AWS region (e.g. from REGION env). Used to call AWS Participant Service (participant-connect.{region}.amazonaws.com) for connect and send.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isValid __attribute__((swift_name("isValid()")));

/**
 * AWS Connect / start-chat API configuration (host → library).
 *
 * **Do not hardcode values.** The host app should load these from its environment
 * (e.g. .env, BuildConfig, xcconfig) and pass [ConnectConfig] when calling the library.
 *
 * @param apiGatewayUrl Base URL of the start-chat API (e.g. from API_GATEWAY env).
 * @param contactFlowId Contact flow ID (e.g. from CONTACT_FLOW_ID env).
 * @param instanceId Connect instance ID (e.g. from INSTANCE_ID env).
 * @param region AWS region (e.g. from REGION env). Used to call AWS Participant Service (participant-connect.{region}.amazonaws.com) for connect and send.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiGatewayUrl __attribute__((swift_name("apiGatewayUrl")));
@property (readonly) NSString *contactFlowId __attribute__((swift_name("contactFlowId")));
@property (readonly) NSString *instanceId __attribute__((swift_name("instanceId")));
@property (readonly) NSString *region __attribute__((swift_name("region")));
@end


/**
 * Connect config baked in at library build time from local.properties.
 * Do not edit; generated by Gradle task generateConnectConfig.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryConnectConfig")))
@interface CSDKLibraryConnectConfig : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Connect config baked in at library build time from local.properties.
 * Do not edit; generated by Gradle task generateConnectConfig.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)libraryConnectConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKLibraryConnectConfig *shared __attribute__((swift_name("shared")));
- (CSDKConnectConfig * _Nullable)get __attribute__((swift_name("get()")));
@end


/**
 * Abstraction for participant connection (AWS CreateParticipantConnection or proxy).
 * Use [AwsParticipantConnectionApi] to call AWS directly with participant token + region.
 */
__attribute__((swift_name("ParticipantConnectionApi")))
@protocol CSDKParticipantConnectionApi
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConnectionRegion:(NSString *)region participantToken:(NSString *)participantToken completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getConnection(region:participantToken:completionHandler:)")));
@end


/**
 * Calls AWS Connect Participant Service CreateParticipantConnection directly.
 * Uses participant token (from start-chat) and region.
 *
 * Request: POST https://participant-connect.{region}.amazonaws.com/participant/connection
 * Header: X-Amz-Bearer: {participantToken}
 * Body: { "Type": ["WEBSOCKET", "CONNECTION_CREDENTIALS"] }
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwsParticipantConnectionApi")))
@interface CSDKAwsParticipantConnectionApi : CSDKBase <CSDKParticipantConnectionApi>
- (instancetype)initWithClient:(CSDKKtor_client_coreHttpClient *)client json:(CSDKKotlinx_serialization_jsonJson *)json __attribute__((swift_name("init(client:json:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConnectionRegion:(NSString *)region participantToken:(NSString *)participantToken completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getConnection(region:participantToken:completionHandler:)")));
@end


/**
 * Layer 3 — Bot message (parsed from [AwsChatPayload.Content] when Type == "MESSAGE" and ParticipantRole == "CUSTOM_BOT").
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BotMessage")))
@interface CSDKBotMessage : CSDKBase
- (instancetype)initWithMessageType:(NSString *)messageType payload:(CSDKBotPayload * _Nullable)payload __attribute__((swift_name("init(messageType:payload:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKBotMessageCompanion *companion __attribute__((swift_name("companion")));
- (CSDKBotMessage *)doCopyMessageType:(NSString *)messageType payload:(CSDKBotPayload * _Nullable)payload __attribute__((swift_name("doCopy(messageType:payload:)")));

/**
 * Layer 3 — Bot message (parsed from [AwsChatPayload.Content] when Type == "MESSAGE" and ParticipantRole == "CUSTOM_BOT").
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Layer 3 — Bot message (parsed from [AwsChatPayload.Content] when Type == "MESSAGE" and ParticipantRole == "CUSTOM_BOT").
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Layer 3 — Bot message (parsed from [AwsChatPayload.Content] when Type == "MESSAGE" and ParticipantRole == "CUSTOM_BOT").
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@property (readonly) CSDKBotPayload * _Nullable payload __attribute__((swift_name("payload")));
@end


/**
 * Layer 3 — Bot message (parsed from [AwsChatPayload.Content] when Type == "MESSAGE" and ParticipantRole == "CUSTOM_BOT").
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BotMessage.Companion")))
@interface CSDKBotMessageCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Layer 3 — Bot message (parsed from [AwsChatPayload.Content] when Type == "MESSAGE" and ParticipantRole == "CUSTOM_BOT").
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKBotMessageCompanion *shared __attribute__((swift_name("shared")));

/**
 * Layer 3 — Bot message (parsed from [AwsChatPayload.Content] when Type == "MESSAGE" and ParticipantRole == "CUSTOM_BOT").
 */
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BotPayload")))
@interface CSDKBotPayload : CSDKBase
- (instancetype)initWithText:(NSString * _Nullable)text title:(NSString * _Nullable)title options:(NSArray<CSDKQuickReply *> * _Nullable)options __attribute__((swift_name("init(text:title:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKBotPayloadCompanion *companion __attribute__((swift_name("companion")));
- (CSDKBotPayload *)doCopyText:(NSString * _Nullable)text title:(NSString * _Nullable)title options:(NSArray<CSDKQuickReply *> * _Nullable)options __attribute__((swift_name("doCopy(text:title:options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CSDKQuickReply *> * _Nullable options __attribute__((swift_name("options")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BotPayload.Companion")))
@interface CSDKBotPayloadCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKBotPayloadCompanion *shared __attribute__((swift_name("shared")));
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Domain model for parsed WebSocket messages. Platform-neutral; no AWS or platform APIs.
 */
__attribute__((swift_name("ChatItem")))
@interface CSDKChatItem : CSDKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatItem.ChatEnded")))
@interface CSDKChatItemChatEnded : CSDKChatItem
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatEnded __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKChatItemChatEnded *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatItem.FlightStatus")))
@interface CSDKChatItemFlightStatus : CSDKChatItem
- (instancetype)initWithPayload:(CSDKFlightStatusPayload *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));
- (CSDKChatItemFlightStatus *)doCopyPayload:(CSDKFlightStatusPayload *)payload __attribute__((swift_name("doCopy(payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKFlightStatusPayload *payload __attribute__((swift_name("payload")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatItem.Markdown")))
@interface CSDKChatItemMarkdown : CSDKChatItem
- (instancetype)initWithText:(NSString *)text __attribute__((swift_name("init(text:)"))) __attribute__((objc_designated_initializer));
- (CSDKChatItemMarkdown *)doCopyText:(NSString *)text __attribute__((swift_name("doCopy(text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatItem.QuickReplies")))
@interface CSDKChatItemQuickReplies : CSDKChatItem
- (instancetype)initWithTitle:(NSString * _Nullable)title options:(NSArray<CSDKQuickReply *> *)options __attribute__((swift_name("init(title:options:)"))) __attribute__((objc_designated_initializer));
- (CSDKChatItemQuickReplies *)doCopyTitle:(NSString * _Nullable)title options:(NSArray<CSDKQuickReply *> *)options __attribute__((swift_name("doCopy(title:options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CSDKQuickReply *> *options __attribute__((swift_name("options")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatItem.System")))
@interface CSDKChatItemSystem : CSDKChatItem
- (instancetype)initWithText:(NSString *)text __attribute__((swift_name("init(text:)"))) __attribute__((objc_designated_initializer));
- (CSDKChatItemSystem *)doCopyText:(NSString *)text __attribute__((swift_name("doCopy(text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatItem.Text")))
@interface CSDKChatItemText : CSDKChatItem
- (instancetype)initWithText:(NSString *)text sender:(CSDKSender *)sender __attribute__((swift_name("init(text:sender:)"))) __attribute__((objc_designated_initializer));
- (CSDKChatItemText *)doCopyText:(NSString *)text sender:(CSDKSender *)sender __attribute__((swift_name("doCopy(text:sender:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKSender *sender __attribute__((swift_name("sender")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end


/**
 * Simple message model for library callbacks (avoids leaking SDK-specific types into commonMain).
 * When [isMarkdown] is true, platform UI should render [text] with a Markdown renderer.
 * When [quickReplies] is non-null, UI should show [text] as title and option buttons.
 * When [flightStatusPayload] is non-null, UI should render the flight status with a custom widget.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatMessage")))
@interface CSDKChatMessage : CSDKBase
- (instancetype)initWithId:(NSString *)id text:(NSString *)text participantId:(NSString * _Nullable)participantId displayName:(NSString * _Nullable)displayName timestamp:(NSString *)timestamp direction:(CSDKMessageDirection *)direction isMarkdown:(BOOL)isMarkdown quickReplies:(NSArray<CSDKQuickReply *> * _Nullable)quickReplies flightStatusPayload:(CSDKFlightStatusPayload * _Nullable)flightStatusPayload isPending:(BOOL)isPending sendFailed:(BOOL)sendFailed isRealAgent:(BOOL)isRealAgent __attribute__((swift_name("init(id:text:participantId:displayName:timestamp:direction:isMarkdown:quickReplies:flightStatusPayload:isPending:sendFailed:isRealAgent:)"))) __attribute__((objc_designated_initializer));
- (CSDKChatMessage *)doCopyId:(NSString *)id text:(NSString *)text participantId:(NSString * _Nullable)participantId displayName:(NSString * _Nullable)displayName timestamp:(NSString *)timestamp direction:(CSDKMessageDirection *)direction isMarkdown:(BOOL)isMarkdown quickReplies:(NSArray<CSDKQuickReply *> * _Nullable)quickReplies flightStatusPayload:(CSDKFlightStatusPayload * _Nullable)flightStatusPayload isPending:(BOOL)isPending sendFailed:(BOOL)sendFailed isRealAgent:(BOOL)isRealAgent __attribute__((swift_name("doCopy(id:text:participantId:displayName:timestamp:direction:isMarkdown:quickReplies:flightStatusPayload:isPending:sendFailed:isRealAgent:)")));

/**
 * Simple message model for library callbacks (avoids leaking SDK-specific types into commonMain).
 * When [isMarkdown] is true, platform UI should render [text] with a Markdown renderer.
 * When [quickReplies] is non-null, UI should show [text] as title and option buttons.
 * When [flightStatusPayload] is non-null, UI should render the flight status with a custom widget.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Simple message model for library callbacks (avoids leaking SDK-specific types into commonMain).
 * When [isMarkdown] is true, platform UI should render [text] with a Markdown renderer.
 * When [quickReplies] is non-null, UI should show [text] as title and option buttons.
 * When [flightStatusPayload] is non-null, UI should render the flight status with a custom widget.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Simple message model for library callbacks (avoids leaking SDK-specific types into commonMain).
 * When [isMarkdown] is true, platform UI should render [text] with a Markdown renderer.
 * When [quickReplies] is non-null, UI should show [text] as title and option buttons.
 * When [flightStatusPayload] is non-null, UI should render the flight status with a custom widget.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKMessageDirection *direction __attribute__((swift_name("direction")));
@property (readonly) NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property (readonly) CSDKFlightStatusPayload * _Nullable flightStatusPayload __attribute__((swift_name("flightStatusPayload")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isMarkdown __attribute__((swift_name("isMarkdown")));

/** True when sent locally but not yet confirmed by WebSocket echo. */
@property (readonly) BOOL isPending __attribute__((swift_name("isPending")));

/** True when this incoming message is from a real (human) agent; use agent avatar. False = AI, use AI avatar. */
@property (readonly) BOOL isRealAgent __attribute__((swift_name("isRealAgent")));
@property (readonly) NSString * _Nullable participantId __attribute__((swift_name("participantId")));
@property (readonly) NSArray<CSDKQuickReply *> * _Nullable quickReplies __attribute__((swift_name("quickReplies")));

/** True when send was attempted but no echo received (show "Failed to send"). */
@property (readonly) BOOL sendFailed __attribute__((swift_name("sendFailed")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSString *timestamp __attribute__((swift_name("timestamp")));
@end


/**
 * Details from StartChatContact used to connect to AWS Connect chat.
 * Pass to [ConnectChatSession.connect].
 *
 * @param participantToken Required; from start-chat API.
 * @param contactId Optional; from start-chat response (ContactId).
 * @param participantId Optional; from start-chat response (ParticipantId).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectChatDetails")))
@interface CSDKConnectChatDetails : CSDKBase
- (instancetype)initWithParticipantToken:(NSString *)participantToken contactId:(NSString * _Nullable)contactId participantId:(NSString * _Nullable)participantId __attribute__((swift_name("init(participantToken:contactId:participantId:)"))) __attribute__((objc_designated_initializer));
- (CSDKConnectChatDetails *)doCopyParticipantToken:(NSString *)participantToken contactId:(NSString * _Nullable)contactId participantId:(NSString * _Nullable)participantId __attribute__((swift_name("doCopy(participantToken:contactId:participantId:)")));

/**
 * Details from StartChatContact used to connect to AWS Connect chat.
 * Pass to [ConnectChatSession.connect].
 *
 * @param participantToken Required; from start-chat API.
 * @param contactId Optional; from start-chat response (ContactId).
 * @param participantId Optional; from start-chat response (ParticipantId).
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Details from StartChatContact used to connect to AWS Connect chat.
 * Pass to [ConnectChatSession.connect].
 *
 * @param participantToken Required; from start-chat API.
 * @param contactId Optional; from start-chat response (ContactId).
 * @param participantId Optional; from start-chat response (ParticipantId).
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Details from StartChatContact used to connect to AWS Connect chat.
 * Pass to [ConnectChatSession.connect].
 *
 * @param participantToken Required; from start-chat API.
 * @param contactId Optional; from start-chat response (ContactId).
 * @param participantId Optional; from start-chat response (ParticipantId).
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable contactId __attribute__((swift_name("contactId")));
@property (readonly) NSString * _Nullable participantId __attribute__((swift_name("participantId")));
@property (readonly) NSString *participantToken __attribute__((swift_name("participantToken")));
@end


/**
 * Result of CreateParticipantConnection (or backend proxy).
 * Used to establish WebSocket and call SendMessage.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionDetails")))
@interface CSDKConnectionDetails : CSDKBase
- (instancetype)initWithWebsocketUrl:(NSString *)websocketUrl connectionToken:(NSString *)connectionToken __attribute__((swift_name("init(websocketUrl:connectionToken:)"))) __attribute__((objc_designated_initializer));
- (CSDKConnectionDetails *)doCopyWebsocketUrl:(NSString *)websocketUrl connectionToken:(NSString *)connectionToken __attribute__((swift_name("doCopy(websocketUrl:connectionToken:)")));

/**
 * Result of CreateParticipantConnection (or backend proxy).
 * Used to establish WebSocket and call SendMessage.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Result of CreateParticipantConnection (or backend proxy).
 * Used to establish WebSocket and call SendMessage.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Result of CreateParticipantConnection (or backend proxy).
 * Used to establish WebSocket and call SendMessage.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *connectionToken __attribute__((swift_name("connectionToken")));
@property (readonly) NSString *websocketUrl __attribute__((swift_name("websocketUrl")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlightAction")))
@interface CSDKFlightAction : CSDKBase
- (instancetype)initWithType:(NSString *)type label:(NSString *)label href:(NSString *)href __attribute__((swift_name("init(type:label:href:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKFlightActionCompanion *companion __attribute__((swift_name("companion")));
- (CSDKFlightAction *)doCopyType:(NSString *)type label:(NSString *)label href:(NSString *)href __attribute__((swift_name("doCopy(type:label:href:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *href __attribute__((swift_name("href")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlightAction.Companion")))
@interface CSDKFlightActionCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKFlightActionCompanion *shared __attribute__((swift_name("shared")));
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlightLeg")))
@interface CSDKFlightLeg : CSDKBase
- (instancetype)initWithAirport:(NSString *)airport city:(NSString *)city sched:(NSString *)sched est:(NSString *)est gate:(NSString *)gate terminal:(NSString *)terminal __attribute__((swift_name("init(airport:city:sched:est:gate:terminal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKFlightLegCompanion *companion __attribute__((swift_name("companion")));
- (CSDKFlightLeg *)doCopyAirport:(NSString *)airport city:(NSString *)city sched:(NSString *)sched est:(NSString *)est gate:(NSString *)gate terminal:(NSString *)terminal __attribute__((swift_name("doCopy(airport:city:sched:est:gate:terminal:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *airport __attribute__((swift_name("airport")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *est __attribute__((swift_name("est")));
@property (readonly) NSString *gate __attribute__((swift_name("gate")));
@property (readonly) NSString *sched __attribute__((swift_name("sched")));
@property (readonly) NSString *terminal __attribute__((swift_name("terminal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlightLeg.Companion")))
@interface CSDKFlightLegCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKFlightLegCompanion *shared __attribute__((swift_name("shared")));
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlightStatus")))
@interface CSDKFlightStatus : CSDKBase
- (instancetype)initWithCode:(NSString *)code delayMinutes:(int32_t)delayMinutes reason:(NSString *)reason __attribute__((swift_name("init(code:delayMinutes:reason:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKFlightStatusCompanion *companion __attribute__((swift_name("companion")));
- (CSDKFlightStatus *)doCopyCode:(NSString *)code delayMinutes:(int32_t)delayMinutes reason:(NSString *)reason __attribute__((swift_name("doCopy(code:delayMinutes:reason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) int32_t delayMinutes __attribute__((swift_name("delayMinutes")));
@property (readonly) NSString *reason __attribute__((swift_name("reason")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlightStatus.Companion")))
@interface CSDKFlightStatusCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKFlightStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/** FLIGHT_STATUS bot payload (nested in CUSTOM_BOT Content when messageType == "FLIGHT_STATUS").
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlightStatusPayload")))
@interface CSDKFlightStatusPayload : CSDKBase
- (instancetype)initWithAirline:(NSString *)airline flightNumber:(NSString *)flightNumber dateLocal:(NSString *)dateLocal departure:(CSDKFlightLeg * _Nullable)departure arrival:(CSDKFlightLeg * _Nullable)arrival status:(CSDKFlightStatus * _Nullable)status actions:(NSArray<CSDKFlightAction *> * _Nullable)actions __attribute__((swift_name("init(airline:flightNumber:dateLocal:departure:arrival:status:actions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKFlightStatusPayloadCompanion *companion __attribute__((swift_name("companion")));
- (CSDKFlightStatusPayload *)doCopyAirline:(NSString *)airline flightNumber:(NSString *)flightNumber dateLocal:(NSString *)dateLocal departure:(CSDKFlightLeg * _Nullable)departure arrival:(CSDKFlightLeg * _Nullable)arrival status:(CSDKFlightStatus * _Nullable)status actions:(NSArray<CSDKFlightAction *> * _Nullable)actions __attribute__((swift_name("doCopy(airline:flightNumber:dateLocal:departure:arrival:status:actions:)")));

/** FLIGHT_STATUS bot payload (nested in CUSTOM_BOT Content when messageType == "FLIGHT_STATUS"). */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/** FLIGHT_STATUS bot payload (nested in CUSTOM_BOT Content when messageType == "FLIGHT_STATUS"). */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/** FLIGHT_STATUS bot payload (nested in CUSTOM_BOT Content when messageType == "FLIGHT_STATUS"). */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CSDKFlightAction *> * _Nullable actions __attribute__((swift_name("actions")));
@property (readonly) NSString *airline __attribute__((swift_name("airline")));
@property (readonly) CSDKFlightLeg * _Nullable arrival __attribute__((swift_name("arrival")));
@property (readonly) NSString *dateLocal __attribute__((swift_name("dateLocal")));
@property (readonly) CSDKFlightLeg * _Nullable departure __attribute__((swift_name("departure")));
@property (readonly) NSString *flightNumber __attribute__((swift_name("flightNumber")));
@property (readonly) CSDKFlightStatus * _Nullable status __attribute__((swift_name("status")));
@end


/** FLIGHT_STATUS bot payload (nested in CUSTOM_BOT Content when messageType == "FLIGHT_STATUS"). */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlightStatusPayload.Companion")))
@interface CSDKFlightStatusPayloadCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/** FLIGHT_STATUS bot payload (nested in CUSTOM_BOT Content when messageType == "FLIGHT_STATUS"). */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKFlightStatusPayloadCompanion *shared __attribute__((swift_name("shared")));

/** FLIGHT_STATUS bot payload (nested in CUSTOM_BOT Content when messageType == "FLIGHT_STATUS"). */
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol CSDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface CSDKKotlinEnum<E> : CSDKBase <CSDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageDirection")))
@interface CSDKMessageDirection : CSDKKotlinEnum<CSDKMessageDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKMessageDirection *incoming __attribute__((swift_name("incoming")));
@property (class, readonly) CSDKMessageDirection *outgoing __attribute__((swift_name("outgoing")));
@property (class, readonly) CSDKMessageDirection *common __attribute__((swift_name("common")));
+ (CSDKKotlinArray<CSDKMessageDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKMessageDirection *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuickReply")))
@interface CSDKQuickReply : CSDKBase
- (instancetype)initWithId:(NSString *)id label:(NSString *)label value:(NSString *)value __attribute__((swift_name("init(id:label:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKQuickReplyCompanion *companion __attribute__((swift_name("companion")));
- (CSDKQuickReply *)doCopyId:(NSString *)id label:(NSString *)label value:(NSString *)value __attribute__((swift_name("doCopy(id:label:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuickReply.Companion")))
@interface CSDKQuickReplyCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKQuickReplyCompanion *shared __attribute__((swift_name("shared")));
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sender")))
@interface CSDKSender : CSDKKotlinEnum<CSDKSender *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSender *customer __attribute__((swift_name("customer")));
@property (class, readonly) CSDKSender *bot __attribute__((swift_name("bot")));
@property (class, readonly) CSDKSender *system __attribute__((swift_name("system")));
+ (CSDKKotlinArray<CSDKSender *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSender *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Layer 2 — Amazon Connect chat payload (parsed from [AwsSocketEnvelope.content]).
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwsChatPayload")))
@interface CSDKAwsChatPayload : CSDKBase
- (instancetype)initWithType:(NSString *)Type Content:(NSString * _Nullable)Content ContentType:(NSString * _Nullable)ContentType ParticipantRole:(NSString * _Nullable)ParticipantRole DisplayName:(NSString * _Nullable)DisplayName AbsoluteTime:(NSString * _Nullable)AbsoluteTime ContactId:(NSString * _Nullable)ContactId InitialContactId:(NSString * _Nullable)InitialContactId __attribute__((swift_name("init(Type:Content:ContentType:ParticipantRole:DisplayName:AbsoluteTime:ContactId:InitialContactId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKAwsChatPayloadCompanion *companion __attribute__((swift_name("companion")));
- (CSDKAwsChatPayload *)doCopyType:(NSString *)Type Content:(NSString * _Nullable)Content ContentType:(NSString * _Nullable)ContentType ParticipantRole:(NSString * _Nullable)ParticipantRole DisplayName:(NSString * _Nullable)DisplayName AbsoluteTime:(NSString * _Nullable)AbsoluteTime ContactId:(NSString * _Nullable)ContactId InitialContactId:(NSString * _Nullable)InitialContactId __attribute__((swift_name("doCopy(Type:Content:ContentType:ParticipantRole:DisplayName:AbsoluteTime:ContactId:InitialContactId:)")));

/**
 * Layer 2 — Amazon Connect chat payload (parsed from [AwsSocketEnvelope.content]).
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Layer 2 — Amazon Connect chat payload (parsed from [AwsSocketEnvelope.content]).
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Layer 2 — Amazon Connect chat payload (parsed from [AwsSocketEnvelope.content]).
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable AbsoluteTime __attribute__((swift_name("AbsoluteTime")));
@property (readonly) NSString * _Nullable ContactId __attribute__((swift_name("ContactId")));
@property (readonly) NSString * _Nullable Content __attribute__((swift_name("Content")));
@property (readonly) NSString * _Nullable ContentType __attribute__((swift_name("ContentType")));
@property (readonly) NSString * _Nullable DisplayName __attribute__((swift_name("DisplayName")));
@property (readonly) NSString * _Nullable InitialContactId __attribute__((swift_name("InitialContactId")));
@property (readonly) NSString * _Nullable ParticipantRole __attribute__((swift_name("ParticipantRole")));
@property (readonly) NSString *Type __attribute__((swift_name("Type")));
@end


/**
 * Layer 2 — Amazon Connect chat payload (parsed from [AwsSocketEnvelope.content]).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwsChatPayload.Companion")))
@interface CSDKAwsChatPayloadCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Layer 2 — Amazon Connect chat payload (parsed from [AwsSocketEnvelope.content]).
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKAwsChatPayloadCompanion *shared __attribute__((swift_name("shared")));

/**
 * Layer 2 — Amazon Connect chat payload (parsed from [AwsSocketEnvelope.content]).
 */
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Layer 1 — WebSocket envelope. [content] is always a JSON string and must be parsed again.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwsSocketEnvelope")))
@interface CSDKAwsSocketEnvelope : CSDKBase
- (instancetype)initWithTopic:(NSString *)topic contentType:(NSString * _Nullable)contentType content:(NSString *)content __attribute__((swift_name("init(topic:contentType:content:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKAwsSocketEnvelopeCompanion *companion __attribute__((swift_name("companion")));
- (CSDKAwsSocketEnvelope *)doCopyTopic:(NSString *)topic contentType:(NSString * _Nullable)contentType content:(NSString *)content __attribute__((swift_name("doCopy(topic:contentType:content:)")));

/**
 * Layer 1 — WebSocket envelope. [content] is always a JSON string and must be parsed again.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Layer 1 — WebSocket envelope. [content] is always a JSON string and must be parsed again.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Layer 1 — WebSocket envelope. [content] is always a JSON string and must be parsed again.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSString * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) NSString *topic __attribute__((swift_name("topic")));
@end


/**
 * Layer 1 — WebSocket envelope. [content] is always a JSON string and must be parsed again.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwsSocketEnvelope.Companion")))
@interface CSDKAwsSocketEnvelopeCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Layer 1 — WebSocket envelope. [content] is always a JSON string and must be parsed again.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKAwsSocketEnvelopeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Layer 1 — WebSocket envelope. [content] is always a JSON string and must be parsed again.
 */
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/** Result of parsing a WebSocket message: the chat item and its optional timestamp (AbsoluteTime from payload). */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParsedChatMessage")))
@interface CSDKParsedChatMessage : CSDKBase
- (instancetype)initWithItem:(CSDKChatItem *)item timestamp:(NSString * _Nullable)timestamp __attribute__((swift_name("init(item:timestamp:)"))) __attribute__((objc_designated_initializer));
- (CSDKParsedChatMessage *)doCopyItem:(CSDKChatItem *)item timestamp:(NSString * _Nullable)timestamp __attribute__((swift_name("doCopy(item:timestamp:)")));

/** Result of parsing a WebSocket message: the chat item and its optional timestamp (AbsoluteTime from payload). */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/** Result of parsing a WebSocket message: the chat item and its optional timestamp (AbsoluteTime from payload). */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/** Result of parsing a WebSocket message: the chat item and its optional timestamp (AbsoluteTime from payload). */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKChatItem *item __attribute__((swift_name("item")));
@property (readonly) NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));
@end


/**
 * Abstraction for an AWS Connect chat session.
 * Implementations: platform SDK (Android) or shared Ktor (Android/iOS).
 *
 * Flow: [connect] with [ConnectChatDetails] from start-chat → [onConnectionEstablished] → [sendMessage] / [onMessageReceived] → [disconnect].
 */
__attribute__((swift_name("ConnectChatSession")))
@protocol CSDKConnectChatSession
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectDetails:(CSDKConnectChatDetails *)details completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("connect(details:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disconnectWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("disconnect(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMessageText:(NSString *)text completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("sendMessage(text:completionHandler:)")));
@property void (^ _Nullable onChatItemReceived)(CSDKChatItem *) __attribute__((swift_name("onChatItemReceived")));
@property void (^ _Nullable onConnectionBroken)(CSDKKotlinThrowable * _Nullable) __attribute__((swift_name("onConnectionBroken")));
@property void (^ _Nullable onConnectionEstablished)(void) __attribute__((swift_name("onConnectionEstablished")));
@property void (^ _Nullable onMessageReceived)(CSDKChatMessage *) __attribute__((swift_name("onMessageReceived")));
@property void (^ _Nullable onTranscriptUpdated)(NSArray<CSDKChatMessage *> *) __attribute__((swift_name("onTranscriptUpdated")));
@end


/**
 * Shared [ConnectChatSession] implementation using AWS Connect Participant Service directly.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectSessionKtor")))
@interface CSDKConnectSessionKtor : CSDKBase <CSDKConnectChatSession>
- (instancetype)initWithConfig:(CSDKConnectConfig *)config client:(CSDKKtor_client_coreHttpClient *)client connectionApi:(id<CSDKParticipantConnectionApi>)connectionApi json:(CSDKKotlinx_serialization_jsonJson *)json __attribute__((swift_name("init(config:client:connectionApi:json:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectDetails:(CSDKConnectChatDetails *)details completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("connect(details:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)disconnectWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("disconnect(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMessageText:(NSString *)text completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("sendMessage(text:completionHandler:)")));
@property void (^ _Nullable onChatItemReceived)(CSDKChatItem *) __attribute__((swift_name("onChatItemReceived")));
@property void (^ _Nullable onConnectionBroken)(CSDKKotlinThrowable * _Nullable) __attribute__((swift_name("onConnectionBroken")));
@property void (^ _Nullable onConnectionEstablished)(void) __attribute__((swift_name("onConnectionEstablished")));
@property void (^ _Nullable onMessageReceived)(CSDKChatMessage *) __attribute__((swift_name("onMessageReceived")));
@property void (^ _Nullable onTranscriptUpdated)(NSArray<CSDKChatMessage *> *) __attribute__((swift_name("onTranscriptUpdated")));
@end


/**
 * Use case: fetch start-chat token/details for AWS Connect.
 * Depends on [StartChatApi] (default: [KtorStartChatApi]); host can inject a different implementation.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FetchConnectTokenUseCase")))
@interface CSDKFetchConnectTokenUseCase : CSDKBase
- (instancetype)initWithApi:(id<CSDKStartChatApi>)api __attribute__((swift_name("init(api:)"))) __attribute__((objc_designated_initializer));

/** Returns full chat details (token + contactId + participantId) for [ConnectChatSession.connect].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeConfig:(CSDKConnectConfig *)config completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(config:completionHandler:)")));
@end


/**
 * Renders markdown on iOS using [mikepenz multiplatform-markdown-renderer](https://github.com/mikepenz/multiplatform-markdown-renderer).
 * Typography set to body size so headings and content match normal message size.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarkdownRenderer")))
@interface CSDKMarkdownRenderer : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Renders markdown on iOS using [mikepenz multiplatform-markdown-renderer](https://github.com/mikepenz/multiplatform-markdown-renderer).
 * Typography set to body size so headings and content match normal message size.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)markdownRenderer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKMarkdownRenderer *shared __attribute__((swift_name("shared")));
@end


/**
 * Raw API response shape: { "data": { "startChatResult": { "ParticipantToken": "...", ... } } }.
 * Maps to [StartChatResponse] for the rest of the app.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartChatApiResponseDto")))
@interface CSDKStartChatApiResponseDto : CSDKBase
- (instancetype)initWithData:(CSDKStartChatDataDto * _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKStartChatApiResponseDtoCompanion *companion __attribute__((swift_name("companion")));
- (CSDKStartChatApiResponseDto *)doCopyData:(CSDKStartChatDataDto * _Nullable)data __attribute__((swift_name("doCopy(data:)")));

/**
 * Raw API response shape: { "data": { "startChatResult": { "ParticipantToken": "...", ... } } }.
 * Maps to [StartChatResponse] for the rest of the app.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Raw API response shape: { "data": { "startChatResult": { "ParticipantToken": "...", ... } } }.
 * Maps to [StartChatResponse] for the rest of the app.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Raw API response shape: { "data": { "startChatResult": { "ParticipantToken": "...", ... } } }.
 * Maps to [StartChatResponse] for the rest of the app.
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) CSDKStartChatDataDto * _Nullable data __attribute__((swift_name("data")));
@end


/**
 * Raw API response shape: { "data": { "startChatResult": { "ParticipantToken": "...", ... } } }.
 * Maps to [StartChatResponse] for the rest of the app.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartChatApiResponseDto.Companion")))
@interface CSDKStartChatApiResponseDtoCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Raw API response shape: { "data": { "startChatResult": { "ParticipantToken": "...", ... } } }.
 * Maps to [StartChatResponse] for the rest of the app.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKStartChatApiResponseDtoCompanion *shared __attribute__((swift_name("shared")));

/**
 * Raw API response shape: { "data": { "startChatResult": { "ParticipantToken": "...", ... } } }.
 * Maps to [StartChatResponse] for the rest of the app.
 */
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartChatDataDto")))
@interface CSDKStartChatDataDto : CSDKBase
- (instancetype)initWithStartChatResult:(CSDKStartChatResultDto * _Nullable)startChatResult __attribute__((swift_name("init(startChatResult:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKStartChatDataDtoCompanion *companion __attribute__((swift_name("companion")));
- (CSDKStartChatDataDto *)doCopyStartChatResult:(CSDKStartChatResultDto * _Nullable)startChatResult __attribute__((swift_name("doCopy(startChatResult:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="startChatResult")
*/
@property (readonly) CSDKStartChatResultDto * _Nullable startChatResult __attribute__((swift_name("startChatResult")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartChatDataDto.Companion")))
@interface CSDKStartChatDataDtoCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKStartChatDataDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Request body for the start-chat API (get token for AWS Connect).
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartChatRequest")))
@interface CSDKStartChatRequest : CSDKBase
- (instancetype)initWithContactFlowId:(NSString *)contactFlowId instanceId:(NSString *)instanceId region:(NSString *)region __attribute__((swift_name("init(contactFlowId:instanceId:region:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKStartChatRequestCompanion *companion __attribute__((swift_name("companion")));
- (CSDKStartChatRequest *)doCopyContactFlowId:(NSString *)contactFlowId instanceId:(NSString *)instanceId region:(NSString *)region __attribute__((swift_name("doCopy(contactFlowId:instanceId:region:)")));

/**
 * Request body for the start-chat API (get token for AWS Connect).
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Request body for the start-chat API (get token for AWS Connect).
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Request body for the start-chat API (get token for AWS Connect).
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="contactFlowId")
*/
@property (readonly) NSString *contactFlowId __attribute__((swift_name("contactFlowId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="instanceId")
*/
@property (readonly) NSString *instanceId __attribute__((swift_name("instanceId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="region")
*/
@property (readonly) NSString *region __attribute__((swift_name("region")));
@end


/**
 * Request body for the start-chat API (get token for AWS Connect).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartChatRequest.Companion")))
@interface CSDKStartChatRequestCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Request body for the start-chat API (get token for AWS Connect).
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKStartChatRequestCompanion *shared __attribute__((swift_name("shared")));

/**
 * Request body for the start-chat API (get token for AWS Connect).
 */
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Response from the start-chat API (token for AWS Connect session).
 * Supports both "participantToken" and "ParticipantToken" (some APIs use capital P).
 * Includes contactId and participantId for [ConnectChatDetails] / ChatSession.connect().
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartChatResponse")))
@interface CSDKStartChatResponse : CSDKBase
- (instancetype)initWithParticipantToken:(NSString * _Nullable)participantToken participantTokenCapitalP:(NSString * _Nullable)participantTokenCapitalP token:(NSString * _Nullable)token sessionId:(NSString * _Nullable)sessionId contactId:(NSString * _Nullable)contactId participantId:(NSString * _Nullable)participantId __attribute__((swift_name("init(participantToken:participantTokenCapitalP:token:sessionId:contactId:participantId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKStartChatResponseCompanion *companion __attribute__((swift_name("companion")));
- (CSDKStartChatResponse *)doCopyParticipantToken:(NSString * _Nullable)participantToken participantTokenCapitalP:(NSString * _Nullable)participantTokenCapitalP token:(NSString * _Nullable)token sessionId:(NSString * _Nullable)sessionId contactId:(NSString * _Nullable)contactId participantId:(NSString * _Nullable)participantId __attribute__((swift_name("doCopy(participantToken:participantTokenCapitalP:token:sessionId:contactId:participantId:)")));

/** Resolved token: participantToken (either casing) or token. Use this to avoid JVM clash with property getter. */
- (NSString * _Nullable)effectiveToken __attribute__((swift_name("effectiveToken()")));

/**
 * Response from the start-chat API (token for AWS Connect session).
 * Supports both "participantToken" and "ParticipantToken" (some APIs use capital P).
 * Includes contactId and participantId for [ConnectChatDetails] / ChatSession.connect().
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Response from the start-chat API (token for AWS Connect session).
 * Supports both "participantToken" and "ParticipantToken" (some APIs use capital P).
 * Includes contactId and participantId for [ConnectChatDetails] / ChatSession.connect().
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Response from the start-chat API (token for AWS Connect session).
 * Supports both "participantToken" and "ParticipantToken" (some APIs use capital P).
 * Includes contactId and participantId for [ConnectChatDetails] / ChatSession.connect().
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="contactId")
*/
@property (readonly) NSString * _Nullable contactId __attribute__((swift_name("contactId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="participantId")
*/
@property (readonly) NSString * _Nullable participantId __attribute__((swift_name("participantId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="participantToken")
*/
@property (readonly) NSString * _Nullable participantToken __attribute__((swift_name("participantToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ParticipantToken")
*/
@property (readonly) NSString * _Nullable participantTokenCapitalP __attribute__((swift_name("participantTokenCapitalP")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sessionId")
*/
@property (readonly) NSString * _Nullable sessionId __attribute__((swift_name("sessionId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * Response from the start-chat API (token for AWS Connect session).
 * Supports both "participantToken" and "ParticipantToken" (some APIs use capital P).
 * Includes contactId and participantId for [ConnectChatDetails] / ChatSession.connect().
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartChatResponse.Companion")))
@interface CSDKStartChatResponseCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Response from the start-chat API (token for AWS Connect session).
 * Supports both "participantToken" and "ParticipantToken" (some APIs use capital P).
 * Includes contactId and participantId for [ConnectChatDetails] / ChatSession.connect().
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKStartChatResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * Response from the start-chat API (token for AWS Connect session).
 * Supports both "participantToken" and "ParticipantToken" (some APIs use capital P).
 * Includes contactId and participantId for [ConnectChatDetails] / ChatSession.connect().
 */
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartChatResultDto")))
@interface CSDKStartChatResultDto : CSDKBase
- (instancetype)initWithParticipantToken:(NSString * _Nullable)participantToken contactId:(NSString * _Nullable)contactId participantId:(NSString * _Nullable)participantId __attribute__((swift_name("init(participantToken:contactId:participantId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKStartChatResultDtoCompanion *companion __attribute__((swift_name("companion")));
- (CSDKStartChatResultDto *)doCopyParticipantToken:(NSString * _Nullable)participantToken contactId:(NSString * _Nullable)contactId participantId:(NSString * _Nullable)participantId __attribute__((swift_name("doCopy(participantToken:contactId:participantId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ContactId")
*/
@property (readonly) NSString * _Nullable contactId __attribute__((swift_name("contactId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ParticipantId")
*/
@property (readonly) NSString * _Nullable participantId __attribute__((swift_name("participantId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ParticipantToken")
*/
@property (readonly) NSString * _Nullable participantToken __attribute__((swift_name("participantToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartChatResultDto.Companion")))
@interface CSDKStartChatResultDtoCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKStartChatResultDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatSessionStorage")))
@interface CSDKChatSessionStorage : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatSessionStorage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKChatSessionStorage *shared __attribute__((swift_name("shared")));
- (void)clear __attribute__((swift_name("clear()")));
- (NSString * _Nullable)getContactId __attribute__((swift_name("getContactId()")));
- (NSString * _Nullable)getParticipantToken __attribute__((swift_name("getParticipantToken()")));
- (void)setContactIdValue:(NSString * _Nullable)value __attribute__((swift_name("setContactId(value:)")));
- (void)setParticipantTokenValue:(NSString * _Nullable)value __attribute__((swift_name("setParticipantToken(value:)")));
@end


/**
 * Central place for all hardcoded UI strings, URLs, and dimensions used by the chat library.
 * Update these values to change copy, links, and layout in one place (Android + iOS).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConstants")))
@interface CSDKChatConstants : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Central place for all hardcoded UI strings, URLs, and dimensions used by the chat library.
 * Update these values to change copy, links, and layout in one place (Android + iOS).
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConstants __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKChatConstants *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConstants.ConnectErrors")))
@interface CSDKChatConstantsConnectErrors : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)connectErrors __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKChatConstantsConnectErrors *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *CONFIG_NOT_SET __attribute__((swift_name("CONFIG_NOT_SET")));
@property (readonly) NSString *CONFIG_NOT_SET_HINT __attribute__((swift_name("CONFIG_NOT_SET_HINT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConstants.Dimensions")))
@interface CSDKChatConstantsDimensions : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dimensions __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKChatConstantsDimensions *shared __attribute__((swift_name("shared")));

/** AI agent avatar: slightly larger than message text line height (bodyMedium). */
@property (readonly) float avatarSize __attribute__((swift_name("avatarSize")));
@property (readonly) float avatarSpacer __attribute__((swift_name("avatarSpacer")));

/** Inner padding for bottom section content (buttons, input). */
@property (readonly) float bottomSectionPadding __attribute__((swift_name("bottomSectionPadding")));

/** Reusable bottom section: top-only shadow, rounded top corners, full width to bottom. */
@property (readonly) float bottomSectionTopCornerRadius __attribute__((swift_name("bottomSectionTopCornerRadius")));

/** Height of the top shadow strip (shadow only above the panel). */
@property (readonly) float bottomSectionTopShadowHeight __attribute__((swift_name("bottomSectionTopShadowHeight")));
@property (readonly) float buttonCornerRadius __attribute__((swift_name("buttonCornerRadius")));
@property (readonly) float feedbackButtonSize __attribute__((swift_name("feedbackButtonSize")));
@property (readonly) float feedbackButtonSpacing __attribute__((swift_name("feedbackButtonSpacing")));
@property (readonly) float feedbackCardPaddingHorizontal __attribute__((swift_name("feedbackCardPaddingHorizontal")));
@property (readonly) float feedbackCardPaddingVertical __attribute__((swift_name("feedbackCardPaddingVertical")));
@property (readonly) float feedbackCardRadius __attribute__((swift_name("feedbackCardRadius")));
@property (readonly) float feedbackIconSize __attribute__((swift_name("feedbackIconSize")));
@property (readonly) float feedbackSubtitleBottomSpacing __attribute__((swift_name("feedbackSubtitleBottomSpacing")));
@property (readonly) float feedbackTitleBottomSpacing __attribute__((swift_name("feedbackTitleBottomSpacing")));

/** Horizontal (side) inner padding from sheet edges (Figma: 15.dp). */
@property (readonly) float getStartedBlockPaddingHorizontal __attribute__((swift_name("getStartedBlockPaddingHorizontal")));

/** Content block width (Figma). Height is wrap-content so all five buttons are visible. */
@property (readonly) float getStartedBlockWidth __attribute__((swift_name("getStartedBlockWidth")));
@property (readonly) float getStartedButtonCornerRadius __attribute__((swift_name("getStartedButtonCornerRadius")));
@property (readonly) float getStartedButtonHeight __attribute__((swift_name("getStartedButtonHeight")));
@property (readonly) float getStartedButtonPaddingHorizontal __attribute__((swift_name("getStartedButtonPaddingHorizontal")));

/** Inner padding: 15.dp above and below label, 15.dp left/right. */
@property (readonly) float getStartedButtonPaddingVertical __attribute__((swift_name("getStartedButtonPaddingVertical")));

/** Default Material shadow elevation for floated buttons. */
@property (readonly) float getStartedButtonShadowElevation __attribute__((swift_name("getStartedButtonShadowElevation")));
@property (readonly) float getStartedButtonSpacingHorizontal __attribute__((swift_name("getStartedButtonSpacingHorizontal")));

/** Button size (Figma). */
@property (readonly) float getStartedButtonWidth __attribute__((swift_name("getStartedButtonWidth")));
@property (readonly) float getStartedSectionPaddingBottom __attribute__((swift_name("getStartedSectionPaddingBottom")));
@property (readonly) float getStartedSectionPaddingTop __attribute__((swift_name("getStartedSectionPaddingTop")));

/** Vertical spacing between prompt and button rows (Figma: 15.dp). */
@property (readonly) float getStartedVerticalSpacing __attribute__((swift_name("getStartedVerticalSpacing")));
@property (readonly) float headerBetaPillPaddingH __attribute__((swift_name("headerBetaPillPaddingH")));
@property (readonly) float headerBetaPillPaddingV __attribute__((swift_name("headerBetaPillPaddingV")));
@property (readonly) float headerBetaPillRadius __attribute__((swift_name("headerBetaPillRadius")));
@property (readonly) float headerContentPaddingBottom __attribute__((swift_name("headerContentPaddingBottom")));
@property (readonly) float headerDisclaimerTop __attribute__((swift_name("headerDisclaimerTop")));
@property (readonly) float headerGrabHandleBottomMargin __attribute__((swift_name("headerGrabHandleBottomMargin")));
@property (readonly) float headerGrabHandleHeight __attribute__((swift_name("headerGrabHandleHeight")));
@property (readonly) float headerGrabHandleTopMargin __attribute__((swift_name("headerGrabHandleTopMargin")));
@property (readonly) float headerGrabHandleWidth __attribute__((swift_name("headerGrabHandleWidth")));
@property (readonly) float headerLogoSize __attribute__((swift_name("headerLogoSize")));
@property (readonly) float headerLogoSpacer __attribute__((swift_name("headerLogoSpacer")));

/** Spacing between logo and title in the top row. */
@property (readonly) float headerLogoTitleSpacer __attribute__((swift_name("headerLogoTitleSpacer")));

/** Inner padding for header content (left, right, bottom) – design 15. */
@property (readonly) float headerPaddingHorizontal __attribute__((swift_name("headerPaddingHorizontal")));
@property (readonly) float headerSeparatorHeight __attribute__((swift_name("headerSeparatorHeight")));
@property (readonly) float headerSeparatorTopMargin __attribute__((swift_name("headerSeparatorTopMargin")));

/** Spacing between title and Beta tag. */
@property (readonly) float headerTitleBetaSpacer __attribute__((swift_name("headerTitleBetaSpacer")));

/** Vertical gap between title row and subtitle row – less than bottom padding. */
@property (readonly) float headerTitleToSubtitleSpacer __attribute__((swift_name("headerTitleToSubtitleSpacer")));
@property (readonly) float headerTopCornerRadius __attribute__((swift_name("headerTopCornerRadius")));

/** Corner radius for message input field (pill shape). */
@property (readonly) float inputBoxCornerRadius __attribute__((swift_name("inputBoxCornerRadius")));

/** Height of message input field and row. */
@property (readonly) float inputBoxHeight __attribute__((swift_name("inputBoxHeight")));
@property (readonly) float inputDisclaimerTop __attribute__((swift_name("inputDisclaimerTop")));

/** Inner padding for message input field (start, top, end, bottom). */
@property (readonly) float inputFieldPadding __attribute__((swift_name("inputFieldPadding")));
@property (readonly) float inputRowPadding __attribute__((swift_name("inputRowPadding")));
@property (readonly) float inputRowSpacer __attribute__((swift_name("inputRowSpacer")));

/** Horizontal padding for message list. Kept >= sheet corner radius so avatars are not clipped by rounded corners. */
@property (readonly) float messageListPaddingHorizontal __attribute__((swift_name("messageListPaddingHorizontal")));
@property (readonly, getter=doNewChatCardPadding) float newChatCardPadding __attribute__((swift_name("newChatCardPadding")));
@property (readonly, getter=doNewChatCardRadius) float newChatCardRadius __attribute__((swift_name("newChatCardRadius")));
@property (readonly, getter=doNewChatChatEndedTop) float newChatChatEndedTop __attribute__((swift_name("newChatChatEndedTop")));

/** No bottom padding so BottomSection extends to sheet bottom. */
@property (readonly, getter=doNewChatContentPaddingBottom) float newChatContentPaddingBottom __attribute__((swift_name("newChatContentPaddingBottom")));
@property (readonly, getter=doNewChatContentPaddingHorizontal) float newChatContentPaddingHorizontal __attribute__((swift_name("newChatContentPaddingHorizontal")));
@property (readonly, getter=doNewChatContentPaddingTop) float newChatContentPaddingTop __attribute__((swift_name("newChatContentPaddingTop")));
@property (readonly, getter=doNewChatDisclaimerTop) float newChatDisclaimerTop __attribute__((swift_name("newChatDisclaimerTop")));
@property (readonly, getter=doNewChatErrorTop) float newChatErrorTop __attribute__((swift_name("newChatErrorTop")));
@property (readonly, getter=doNewChatInfoIconSize) float newChatInfoIconSize __attribute__((swift_name("newChatInfoIconSize")));
@property (readonly, getter=doNewChatInfoIconSpacer) float newChatInfoIconSpacer __attribute__((swift_name("newChatInfoIconSpacer")));
@property (readonly, getter=doNewChatPrivacyLinkBottom) float newChatPrivacyLinkBottom __attribute__((swift_name("newChatPrivacyLinkBottom")));
@property (readonly, getter=doNewChatSpacerBeforeButtons) float newChatSpacerBeforeButtons __attribute__((swift_name("newChatSpacerBeforeButtons")));
@property (readonly, getter=doNewChatWelcomePaddingVertical) float newChatWelcomePaddingVertical __attribute__((swift_name("newChatWelcomePaddingVertical")));
@property (readonly) float outgoingAvatarSize __attribute__((swift_name("outgoingAvatarSize")));

/** Send button: circular, sized smaller than input row per design. */
@property (readonly) float sendButtonSize __attribute__((swift_name("sendButtonSize")));

/** Send icon size, proportional to [sendButtonSize]. */
@property (readonly) float sendIconSize __attribute__((swift_name("sendIconSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConstants.MessageIdPrefixes")))
@interface CSDKChatConstantsMessageIdPrefixes : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)messageIdPrefixes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKChatConstantsMessageIdPrefixes *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *FAILED __attribute__((swift_name("FAILED")));
@property (readonly) NSString *FAILED_IMMEDIATE __attribute__((swift_name("FAILED_IMMEDIATE")));
@property (readonly) NSString *PENDING __attribute__((swift_name("PENDING")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConstants.Strings")))
@interface CSDKChatConstantsStrings : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)strings __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKChatConstantsStrings *shared __attribute__((swift_name("shared")));

/** BETA pill label next to title. */
@property (readonly) NSString *BETA __attribute__((swift_name("BETA")));

/** Shown when the session has ended. */
@property (readonly) NSString *CHAT_ENDED __attribute__((swift_name("CHAT_ENDED")));

/** Close button character. */
@property (readonly) NSString *CLOSE_ICON __attribute__((swift_name("CLOSE_ICON")));
@property (readonly) NSString *CONNECTING __attribute__((swift_name("CONNECTING")));

/** AI disclaimer shown in header and footer. */
@property (readonly) NSString *DISCLAIMER __attribute__((swift_name("DISCLAIMER")));

/** Error message prefix (e.g. "Error: Connection failed"). */
@property (readonly) NSString *ERROR_PREFIX __attribute__((swift_name("ERROR_PREFIX")));

/** Shown when a sent message was not confirmed. */
@property (readonly) NSString *FAILED_TO_SEND __attribute__((swift_name("FAILED_TO_SEND")));

/** Feedback widget subtitle. */
@property (readonly) NSString *FEEDBACK_SUBTITLE __attribute__((swift_name("FEEDBACK_SUBTITLE")));

/** Accessibility description for thumbs down button. */
@property (readonly) NSString *FEEDBACK_THUMBS_DOWN_DESCRIPTION __attribute__((swift_name("FEEDBACK_THUMBS_DOWN_DESCRIPTION")));

/** Accessibility description for thumbs up button. */
@property (readonly) NSString *FEEDBACK_THUMBS_UP_DESCRIPTION __attribute__((swift_name("FEEDBACK_THUMBS_UP_DESCRIPTION")));

/** Feedback widget title. */
@property (readonly) NSString *FEEDBACK_TITLE __attribute__((swift_name("FEEDBACK_TITLE")));

/** Default get-started option labels (hardcoded until backend provides). Order: row1 left, row1 right, row2 left, row2 right, row3 center. */
@property (readonly) NSArray<NSString *> *GET_STARTED_OPTIONS __attribute__((swift_name("GET_STARTED_OPTIONS")));

/** Get-started prompt shown when chat is opened for the first time (floated buttons). */
@property (readonly) NSString *GET_STARTED_PROMPT __attribute__((swift_name("GET_STARTED_PROMPT")));

/** Default header subtitle when no custom subtitle is provided (e.g. later replace with user name). */
@property (readonly) NSString *HEADER_SUBTITLE_DEFAULT __attribute__((swift_name("HEADER_SUBTITLE_DEFAULT")));

/** Fixed header title (main line in bottom sheet header). */
@property (readonly) NSString *HEADER_TITLE __attribute__((swift_name("HEADER_TITLE")));

/** Default agent name when [ChatMessage.displayName] is null/blank or system (shown next to avatar). */
@property (readonly) NSString *INCOMING_AGENT_NAME_DEFAULT __attribute__((swift_name("INCOMING_AGENT_NAME_DEFAULT")));

/** displayName values treated as system/internal; show [INCOMING_AGENT_NAME_DEFAULT] instead. */
@property (readonly) NSSet<NSString *> *INCOMING_AGENT_NAME_SYSTEM_VALUES __attribute__((swift_name("INCOMING_AGENT_NAME_SYSTEM_VALUES")));

/** Prefix for incoming message label (e.g. "BETA 09:54"). */
@property (readonly) NSString *INCOMING_LABEL_PREFIX __attribute__((swift_name("INCOMING_LABEL_PREFIX")));

/** Disclaimer below input (bottom section). */
@property (readonly) NSString *INPUT_DISCLAIMER __attribute__((swift_name("INPUT_DISCLAIMER")));

/** Input field placeholder (bottom section). */
@property (readonly) NSString *INPUT_PLACEHOLDER __attribute__((swift_name("INPUT_PLACEHOLDER")));

/** Message input placeholder. */
@property (readonly) NSString *MESSAGE_PLACEHOLDER __attribute__((swift_name("MESSAGE_PLACEHOLDER")));

/** Minimize button character. */
@property (readonly) NSString *MINIMIZE_ICON __attribute__((swift_name("MINIMIZE_ICON")));

/** Label for outgoing (user) messages shown at top right above the bubble (Figma). */
@property (readonly) NSString *OUTGOING_SENDER_LABEL __attribute__((swift_name("OUTGOING_SENDER_LABEL")));

/** Privacy policy link label (appended after WELCOME_MESSAGE). */
@property (readonly) NSString *PRIVACY_POLICY_LINK __attribute__((swift_name("PRIVACY_POLICY_LINK")));

/** Fallback title above quick reply buttons when the response does not provide one. */
@property (readonly) NSString *QUICK_REPLIES_DEFAULT_TITLE __attribute__((swift_name("QUICK_REPLIES_DEFAULT_TITLE")));

/** Resume existing session button. */
@property (readonly) NSString *RESUME_CHAT __attribute__((swift_name("RESUME_CHAT")));
@property (readonly) NSString *RESUMING __attribute__((swift_name("RESUMING")));

/** Send message button icon. */
@property (readonly) NSString *SEND_ICON __attribute__((swift_name("SEND_ICON")));

/** Icon shown next to "Start a new chat" (chat bubble). */
@property (readonly) NSString *START_CHAT_ICON __attribute__((swift_name("START_CHAT_ICON")));

/** Start new chat button. */
@property (readonly) NSString *START_NEW_CHAT __attribute__((swift_name("START_NEW_CHAT")));

/** Welcome message when chat has ended / new chat (card body). */
@property (readonly) NSString *WELCOME_MESSAGE __attribute__((swift_name("WELCOME_MESSAGE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConstants.Urls")))
@interface CSDKChatConstantsUrls : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)urls __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKChatConstantsUrls *shared __attribute__((swift_name("shared")));

/** Privacy policy opened from the new-chat screen. */
@property (readonly) NSString *PRIVACY_POLICY __attribute__((swift_name("PRIVACY_POLICY")));
@end


/**
 * Chat UI constants and composables. Change these values to adjust bubble look and layout.
 * All chat bubble styling is centralized here for easy customization.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatUi")))
@interface CSDKChatUi : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Chat UI constants and composables. Change these values to adjust bubble look and layout.
 * All chat bubble styling is centralized here for easy customization.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatUi __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKChatUi *shared __attribute__((swift_name("shared")));

/** Corner radius of message bubbles. */
@property (readonly) float bubbleCornerRadius __attribute__((swift_name("bubbleCornerRadius")));

/** Maximum bubble width as fraction of row (0.0–1.0). Incoming/outgoing can use ~85%. */
@property (readonly) float bubbleMaxWidthFraction __attribute__((swift_name("bubbleMaxWidthFraction")));

/** Horizontal padding inside a bubble. */
@property (readonly) float bubblePaddingHorizontal __attribute__((swift_name("bubblePaddingHorizontal")));

/** Vertical padding inside a bubble. */
@property (readonly) float bubblePaddingVertical __attribute__((swift_name("bubblePaddingVertical")));

/** Vertical spacing between messages. */
@property (readonly) float messageSpacing __attribute__((swift_name("messageSpacing")));

/** Vertical spacing between message bubble and timestamp (when shown). */
@property (readonly) float messageTimestampSpacing __attribute__((swift_name("messageTimestampSpacing")));

/** Padding around the quick-replies block (no bubble). */
@property (readonly) float quickReplyBlockPadding __attribute__((swift_name("quickReplyBlockPadding")));

/** Horizontal/vertical spacing between quick reply chips. */
@property (readonly) float quickReplyChipSpacing __attribute__((swift_name("quickReplyChipSpacing")));

/** Vertical spacing between title and chips in quick replies. */
@property (readonly) float quickReplyTitleSpacing __attribute__((swift_name("quickReplyTitleSpacing")));

/** Time to wait for WebSocket echo of sent message before showing "Failed to send" (ms). */
@property (readonly) int64_t sendEchoTimeoutMs __attribute__((swift_name("sendEchoTimeoutMs")));
@end


/**
 * State of the bottom section chat input (Material 3).
 * - [Disabled]: Input with border, no send button (e.g. chat not connected).
 * - [Default]: Input with inactive (grey) send button; no text entered.
 * - [Active]: Input with active (blue) send button; text entered, can send.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatInputState")))
@interface CSDKChatInputState : CSDKKotlinEnum<CSDKChatInputState *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * State of the bottom section chat input (Material 3).
 * - [Disabled]: Input with border, no send button (e.g. chat not connected).
 * - [Default]: Input with inactive (grey) send button; no text entered.
 * - [Active]: Input with active (blue) send button; text entered, can send.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKChatInputState *disabled __attribute__((swift_name("disabled")));
@property (class, readonly) CSDKChatInputState *default_ __attribute__((swift_name("default_")));
@property (class, readonly) CSDKChatInputState *active __attribute__((swift_name("active")));
+ (CSDKKotlinArray<CSDKChatInputState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKChatInputState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatLibraryLog")))
@interface CSDKChatLibraryLog : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatLibraryLog __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKChatLibraryLog *shared __attribute__((swift_name("shared")));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("e(tag:message:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("w(tag:message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlOpener")))
@interface CSDKUrlOpener : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)urlOpener __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUrlOpener *shared __attribute__((swift_name("shared")));
- (void)openUrlUrl:(NSString *)url __attribute__((swift_name("openUrl(url:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Res")))
@interface CSDKRes : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)res __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKRes *shared __attribute__((swift_name("shared")));

/**
 * Returns the URI string of the resource file at the specified path.
 *
 * Example: `val uri = Res.getUri("files/key.bin")`
 *
 * @param path The path of the file in the compose resource's directory.
 * @return The URI string of the file.
 */
- (NSString *)getUriPath:(NSString *)path __attribute__((swift_name("getUri(path:)")));

/**
 * Reads the content of the resource file at the specified path and returns it as a byte array.
 *
 * Example: `val bytes = Res.readBytes("files/key.bin")`
 *
 * @param path The path of the file to read in the compose resource's directory.
 * @return The content of the file as a byte array.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBytesPath:(NSString *)path completionHandler:(void (^)(CSDKKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBytes(path:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Res.array")))
@interface CSDKResArray : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)array __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKResArray *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Res.drawable")))
@interface CSDKResDrawable : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)drawable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKResDrawable *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Res.font")))
@interface CSDKResFont : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)font __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKResFont *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Res.plurals")))
@interface CSDKResPlurals : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)plurals __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKResPlurals *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Res.string")))
@interface CSDKResString : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)string __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKResString *shared __attribute__((swift_name("shared")));
@end

@interface CSDKRes (Extensions)
@property (readonly) NSDictionary<NSString *, CSDKLibraryDrawableResource *> *allDrawableResources __attribute__((swift_name("allDrawableResources")));
@property (readonly) NSDictionary<NSString *, CSDKLibraryFontResource *> *allFontResources __attribute__((swift_name("allFontResources")));
@property (readonly) NSDictionary<NSString *, CSDKLibraryPluralStringResource *> *allPluralStringResources __attribute__((swift_name("allPluralStringResources")));
@property (readonly) NSDictionary<NSString *, CSDKLibraryStringArrayResource *> *allStringArrayResources __attribute__((swift_name("allStringArrayResources")));
@property (readonly) NSDictionary<NSString *, CSDKLibraryStringResource *> *allStringResources __attribute__((swift_name("allStringResources")));
@end

@interface CSDKResDrawable (Extensions)
@property (readonly) CSDKLibraryDrawableResource *Layer_1 __attribute__((swift_name("Layer_1")));
@property (readonly) CSDKLibraryDrawableResource *LogoACRondele __attribute__((swift_name("LogoACRondele")));
@property (readonly) CSDKLibraryDrawableResource *ac_agent_dark __attribute__((swift_name("ac_agent_dark")));
@property (readonly) CSDKLibraryDrawableResource *ac_agent_light __attribute__((swift_name("ac_agent_light")));
@property (readonly) CSDKLibraryDrawableResource *ac_logo __attribute__((swift_name("ac_logo")));
@property (readonly) CSDKLibraryDrawableResource *ai_agent_avatar __attribute__((swift_name("ai_agent_avatar")));
@property (readonly) CSDKLibraryDrawableResource *ai_avatar __attribute__((swift_name("ai_avatar")));
@property (readonly) CSDKLibraryDrawableResource *customer_avatar __attribute__((swift_name("customer_avatar")));
@property (readonly) CSDKLibraryDrawableResource *header_logo __attribute__((swift_name("header_logo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64UtilKt")))
@interface CSDKBase64UtilKt : CSDKBase

/**
 * Decodes a Base64-encoded string to [ByteArray].
 * Works on all platforms (used by iOS; Android uses android.util.Base64 in platform code).
 */
+ (CSDKKotlinByteArray *)decodeBase64Str:(NSString *)str __attribute__((swift_name("decodeBase64(str:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatPoc_iosKt")))
@interface CSDKChatPoc_iosKt : CSDKBase

/**
 * iOS bridge: returns a UIViewController that shows the chat bottom sheet.
 * Pass [config] to send data into the library, [callbacks] to receive events.
 * Logic lives in commonMain; this only wires Compose to UIKit.
 */
+ (UIViewController *)createBottomSheetViewControllerConfig:(CSDKChatLibraryConfig *)config callbacks:(id<CSDKChatLibraryCallbacks> _Nullable)callbacks __attribute__((swift_name("createBottomSheetViewController(config:callbacks:)")));

/**
 * Swift-friendly overload: pass primitives and closures. Builds [ChatLibraryConfig]
 * and a [ChatLibraryCallbacks] implementation that delegates to the closures.
 */
+ (UIViewController *)createBottomSheetViewControllerTitle:(NSString *)title messages:(NSArray<NSString *> *)messages authToken:(NSString *)authToken onActionButtonClicked:(void (^ _Nullable)(void))onActionButtonClicked onDataToHost:(void (^ _Nullable)(NSString *))onDataToHost __attribute__((swift_name("createBottomSheetViewController(title:messages:authToken:onActionButtonClicked:onDataToHost:)")));

/**
 * Returns a default [ChatLibraryConfig] for use from Swift.
 * Swift does not see Kotlin default parameters, so use this instead of ChatLibraryConfig().
 */
+ (CSDKChatLibraryConfig *)defaultChatLibraryConfig __attribute__((swift_name("defaultChatLibraryConfig()")));

/**
 * Set from Swift before presenting so that when the user dismisses the sheet,
 * the host can call vc.dismiss(animated: true).
 */
+ (void)setBottomSheetDismissHandlerHandler:(void (^)(void))handler __attribute__((swift_name("setBottomSheetDismissHandler(handler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorKt")))
@interface CSDKColorKt : CSDKBase

/** Bottom section background – light theme (Figma: pure white). Dark theme uses [HeaderBackgroundDark] via MaterialTheme.colorScheme.surface. */
@property (class, readonly) uint64_t BottomSectionBackgroundLight __attribute__((swift_name("BottomSectionBackgroundLight")));
@property (class, readonly) uint64_t ChatDisclaimer __attribute__((swift_name("ChatDisclaimer")));

/** Secondary text and disclaimers. */
@property (class, readonly) uint64_t ChatOnSurfaceVariant __attribute__((swift_name("ChatOnSurfaceVariant")));

/** Primary blue for buttons and accents (Air Canada–style). */
@property (class, readonly) uint64_t ChatPrimary __attribute__((swift_name("ChatPrimary")));
@property (class, readonly) uint64_t ChatPrimaryLight __attribute__((swift_name("ChatPrimaryLight")));

/** Get-started button background – dark (dark grey). */
@property (class, readonly) uint64_t GetStartedButtonBgDark __attribute__((swift_name("GetStartedButtonBgDark")));

/** Get-started button background – light (white). */
@property (class, readonly) uint64_t GetStartedButtonBgLight __attribute__((swift_name("GetStartedButtonBgLight")));

/** Get-started button text – dark (white). */
@property (class, readonly) uint64_t GetStartedButtonTextDark __attribute__((swift_name("GetStartedButtonTextDark")));

/** Get-started button text – light (black). */
@property (class, readonly) uint64_t GetStartedButtonTextLight __attribute__((swift_name("GetStartedButtonTextLight")));

/** Header background – dark theme. */
@property (class, readonly) uint64_t HeaderBackgroundDark __attribute__((swift_name("HeaderBackgroundDark")));

/** Header background – light theme. */
@property (class, readonly) uint64_t HeaderBackgroundLight __attribute__((swift_name("HeaderBackgroundLight")));

/** Beta badge border/icon blue – same in both themes. */
@property (class, readonly) uint64_t HeaderBetaBadgeBackground __attribute__((swift_name("HeaderBetaBadgeBackground")));

/** Beta badge text on dark pill – white. */
@property (class, readonly) uint64_t HeaderBetaBadgeOnBackground __attribute__((swift_name("HeaderBetaBadgeOnBackground")));

/** Beta badge pill background – dark theme (dark/black). */
@property (class, readonly) uint64_t HeaderBetaBadgePillBackgroundDark __attribute__((swift_name("HeaderBetaBadgePillBackgroundDark")));

/** Grab handle pill – dark theme. */
@property (class, readonly) uint64_t HeaderGrabHandleDark __attribute__((swift_name("HeaderGrabHandleDark")));

/** Grab handle pill – light theme. */
@property (class, readonly) uint64_t HeaderGrabHandleLight __attribute__((swift_name("HeaderGrabHandleLight")));

/** Air Canada logo accent (red) – same in light and dark. */
@property (class, readonly) uint64_t HeaderLogoAccent __attribute__((swift_name("HeaderLogoAccent")));

/** Icon and title text – dark theme. */
@property (class, readonly) uint64_t HeaderOnBackgroundDark __attribute__((swift_name("HeaderOnBackgroundDark")));

/** Icon and title text – light theme. */
@property (class, readonly) uint64_t HeaderOnBackgroundLight __attribute__((swift_name("HeaderOnBackgroundLight")));

/** Header separator line – dark theme. */
@property (class, readonly) uint64_t HeaderSeparatorDark __attribute__((swift_name("HeaderSeparatorDark")));

/** Header separator line – light theme. */
@property (class, readonly) uint64_t HeaderSeparatorLight __attribute__((swift_name("HeaderSeparatorLight")));

/** Subtitle text – dark theme. */
@property (class, readonly) uint64_t HeaderSubtitleDark __attribute__((swift_name("HeaderSubtitleDark")));

/** Subtitle text – light theme. */
@property (class, readonly) uint64_t HeaderSubtitleLight __attribute__((swift_name("HeaderSubtitleLight")));

/** Input field background – dark (default/active). */
@property (class, readonly) uint64_t InputBackgroundDark __attribute__((swift_name("InputBackgroundDark")));

/** Input field inner background – dark (disabled state). */
@property (class, readonly) uint64_t InputBackgroundDisabledDark __attribute__((swift_name("InputBackgroundDisabledDark")));

/** Input field inner background – light (disabled state, white interior). */
@property (class, readonly) uint64_t InputBackgroundDisabledLight __attribute__((swift_name("InputBackgroundDisabledLight")));

/** Input field background – light (default/active). AltCardOverSheet. */
@property (class, readonly) uint64_t InputBackgroundLight __attribute__((swift_name("InputBackgroundLight")));

/** Input field border – dark (disabled state). */
@property (class, readonly) uint64_t InputBorderDark __attribute__((swift_name("InputBorderDark")));

/** Input field border – light (disabled state). PlaceholderText. */
@property (class, readonly) uint64_t InputBorderLight __attribute__((swift_name("InputBorderLight")));

/** Input placeholder – dark. */
@property (class, readonly) uint64_t InputPlaceholderDark __attribute__((swift_name("InputPlaceholderDark")));

/** Input placeholder – dark (disabled). */
@property (class, readonly) uint64_t InputPlaceholderDisabledDark __attribute__((swift_name("InputPlaceholderDisabledDark")));

/** Input placeholder – light (disabled, lighter). */
@property (class, readonly) uint64_t InputPlaceholderDisabledLight __attribute__((swift_name("InputPlaceholderDisabledLight")));

/** Input placeholder – light (default/active). */
@property (class, readonly) uint64_t InputPlaceholderLight __attribute__((swift_name("InputPlaceholderLight")));

/** Outgoing (user) message bubble background – Grey/Grey-9 (#2A2A2A), same in light and dark mode. */
@property (class, readonly) uint64_t OutgoingBubbleBackground __attribute__((swift_name("OutgoingBubbleBackground")));

/** Text/content color on outgoing bubble (light for contrast). */
@property (class, readonly) uint64_t OutgoingBubbleOnBackground __attribute__((swift_name("OutgoingBubbleOnBackground")));
@property (class, readonly) uint64_t Pink40 __attribute__((swift_name("Pink40")));
@property (class, readonly) uint64_t Pink80 __attribute__((swift_name("Pink80")));
@property (class, readonly) uint64_t Purple40 __attribute__((swift_name("Purple40")));

/**
 * Chat library color palette.
 * Primary blue and grey for Air Canada–style chat UI (Android + iOS).
 * Header and surface colors support light/dark themes.
 */
@property (class, readonly) uint64_t Purple80 __attribute__((swift_name("Purple80")));
@property (class, readonly) uint64_t PurpleGrey40 __attribute__((swift_name("PurpleGrey40")));
@property (class, readonly) uint64_t PurpleGrey80 __attribute__((swift_name("PurpleGrey80")));

/** Send button active – same blue in both themes. */
@property (class, readonly) uint64_t SendButtonActive __attribute__((swift_name("SendButtonActive")));

/** Send button inactive – dark. */
@property (class, readonly) uint64_t SendButtonInactiveDark __attribute__((swift_name("SendButtonInactiveDark")));

/** Send button inactive – light. */
@property (class, readonly) uint64_t SendButtonInactiveLight __attribute__((swift_name("SendButtonInactiveLight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectChatKt")))
@interface CSDKConnectChatKt : CSDKBase

/**
 * Creates a [ConnectChatSession] for AWS Connect chat.
 * Uses [ConnectChatDetails] from start-chat and [ConnectConfig.region].
 *
 * @param config Connect config with valid region.
 * @return Session instance; call [ConnectChatSession.connect] with [ConnectChatDetails] from [fetchConnectChatDetails].
 */
+ (id<CSDKConnectChatSession>)createConnectChatSessionConfig:(CSDKConnectConfig *)config __attribute__((swift_name("createConnectChatSession(config:)")));

/** Creates a session using library config from local.properties. Returns null if config not set. */
+ (id<CSDKConnectChatSession> _Nullable)createConnectChatSessionOrNull __attribute__((swift_name("createConnectChatSessionOrNull()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectTokenKt")))
@interface CSDKConnectTokenKt : CSDKBase

/**
 * Fetches full chat details (token + contactId + participantId) for [ConnectChatSession.connect].
 *
 * @return [Result] with [ConnectChatDetails] on success.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)fetchConnectChatDetailsWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchConnectChatDetails(completionHandler:)")));

/** Fetches chat details with an explicit config (e.g. for tests).
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)fetchConnectChatDetailsConfig:(CSDKConnectConfig *)config completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchConnectChatDetails(config:completionHandler:)")));

/**
 * Fetches the start-chat token using the library's config (from local.properties at build time).
 * Call from the library UI or from the host.
 *
 * @return [Result] with the token string on success; failure if config is missing or API fails.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)fetchConnectTokenWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchConnectToken(completionHandler:)")));

/** Fetches token with an explicit config (e.g. for tests).
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)fetchConnectTokenConfig:(CSDKConnectConfig *)config completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchConnectToken(config:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectWebSocketParserKt")))
@interface CSDKConnectWebSocketParserKt : CSDKBase

/**
 * Parses a single WebSocket frame into zero or more [ParsedChatMessage].
 * Pure function; never throws. Returns empty list on invalid JSON or when topic != "aws/chat".
 */
+ (NSArray<CSDKParsedChatMessage *> *)parseWebSocketMessageRaw:(NSString *)raw json:(CSDKKotlinx_serialization_jsonJson *)json __attribute__((swift_name("parseWebSocketMessage(raw:json:)")));
@property (class, readonly) CSDKKotlinx_serialization_jsonJson *DefaultJson __attribute__((swift_name("DefaultJson")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarkdownPreprocessKt")))
@interface CSDKMarkdownPreprocessKt : CSDKBase

/**
 * Preprocesses raw markdown before rendering so it displays correctly on both Android and iOS.
 * - Unescapes JSON-style Unicode (e.g. \u2708\ufe0f → ✈️)
 * - Converts HTML <a href="...">text</a> to markdown [text](url) for consistent link handling
 * - Normalizes table separator lines (e.g. |--------|| → |--------|) to avoid parser issues
 */
+ (NSString *)preprocessMarkdownForRenderRaw:(NSString *)raw __attribute__((swift_name("preprocessMarkdownForRender(raw:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformHttpClient_iosKt")))
@interface CSDKPlatformHttpClient_iosKt : CSDKBase
+ (CSDKKtor_client_coreHttpClient *)createHttpClient __attribute__((swift_name("createHttpClient()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimestampFormatKt")))
@interface CSDKTimestampFormatKt : CSDKBase

/**
 * Formats an ISO 8601 timestamp (e.g. "2026-02-05T05:32:17.697Z") to "HH:mm".
 * Returns empty string if the input is blank or not in the expected format.
 */
+ (NSString *)formatMessageTimeIsoTimestamp:(NSString *)isoTimestamp __attribute__((swift_name("formatMessageTime(isoTimestamp:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TypeKt")))
@interface CSDKTypeKt : CSDKBase

/**
 * Chat library typography aligned with
 * [amazon-connect-chat-ui-examples](https://github.com/amazon-connect/amazon-connect-chat-ui-examples).
 * Includes header-specific styles for bottom sheet.
 */
@property (class, readonly) CSDKMaterial3Typography *ChatTypography __attribute__((swift_name("ChatTypography")));

/** Subtitle in bottom sheet header (e.g. "Chatting with Air Canada"). */
@property (class, readonly) CSDKUi_textTextStyle *HeaderSubtitleStyle __attribute__((swift_name("HeaderSubtitleStyle")));

/** Main title in bottom sheet header (e.g. "Virtual Assistant"). */
@property (class, readonly) CSDKUi_textTextStyle *HeaderTitleStyle __attribute__((swift_name("HeaderTitleStyle")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface CSDKKotlinThrowable : CSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (CSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface CSDKKotlinException : CSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface CSDKKotlinRuntimeException : CSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CSDKKotlinIllegalStateException : CSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface CSDKKotlinCancellationException : CSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol CSDKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<CSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol CSDKKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface CSDKKtor_client_coreHttpClient : CSDKBase <CSDKKotlinx_coroutines_coreCoroutineScope, CSDKKtor_ioCloseable>
- (instancetype)initWithEngine:(id<CSDKKtor_client_coreHttpClientEngine>)engine userConfig:(CSDKKtor_client_coreHttpClientConfig<CSDKKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (CSDKKtor_client_coreHttpClient *)configBlock:(void (^)(CSDKKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<CSDKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<CSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<CSDKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) CSDKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) CSDKKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) CSDKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) CSDKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) CSDKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) CSDKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol CSDKKotlinx_serialization_coreSerialFormat
@required
@property (readonly) CSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol CSDKKotlinx_serialization_coreStringFormat <CSDKKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<CSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<CSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface CSDKKotlinx_serialization_jsonJson : CSDKBase <CSDKKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) CSDKKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<CSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(CSDKKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<CSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (CSDKKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<CSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<CSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (CSDKKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) CSDKKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) CSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CSDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CSDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CSDKKotlinx_serialization_coreKSerializer <CSDKKotlinx_serialization_coreSerializationStrategy, CSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface CSDKKotlinEnumCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CSDKKotlinArray<T> : CSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface CSDKKotlinByteArray : CSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CSDKByte *(^)(CSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CSDKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * Represents a resource with an ID and a set of resource items.
 *
 * @property id The ID of the resource.
 * @property items The set of resource items associated with the resource.
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("LibraryResource")))
@interface CSDKLibraryResource : CSDKBase
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@end


/**
 * Represents a drawable resource.
 *
 * @param id The unique identifier of the drawable resource.
 * @param items The set of resource items associated with the image resource.
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryDrawableResource")))
@interface CSDKLibraryDrawableResource : CSDKLibraryResource
- (instancetype)initWithId:(NSString *)id items:(NSSet<CSDKLibraryResourceItem *> *)items __attribute__((swift_name("init(id:items:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * Represents a font resource.
 *
 * @param id The identifier of the font resource.
 * @param items The set of resource items associated with the font resource.
 *
 * @see Resource
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryFontResource")))
@interface CSDKLibraryFontResource : CSDKLibraryResource
- (instancetype)initWithId:(NSString *)id items:(NSSet<CSDKLibraryResourceItem *> *)items __attribute__((swift_name("init(id:items:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * Represents a quantity string resource in the application.
 *
 * @param id The unique identifier of the resource.
 * @param key The key used to retrieve the string resource.
 * @param items The set of resource items associated with the string resource.
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryPluralStringResource")))
@interface CSDKLibraryPluralStringResource : CSDKLibraryResource
- (instancetype)initWithId:(NSString *)id key:(NSString *)key items:(NSSet<CSDKLibraryResourceItem *> *)items __attribute__((swift_name("init(id:key:items:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@end


/**
 * Represents a string array resource in the application.
 *
 * @param id The unique identifier of the resource.
 * @param key The key used to retrieve the string array resource.
 * @param items The set of resource items associated with the string array resource.
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryStringArrayResource")))
@interface CSDKLibraryStringArrayResource : CSDKLibraryResource
- (instancetype)initWithId:(NSString *)id key:(NSString *)key items:(NSSet<CSDKLibraryResourceItem *> *)items __attribute__((swift_name("init(id:key:items:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@end


/**
 * Represents a string resource in the application.
 *
 * @param id The unique identifier of the resource.
 * @param key The key used to retrieve the string resource.
 * @param items The set of resource items associated with the string resource.
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryStringResource")))
@interface CSDKLibraryStringResource : CSDKLibraryResource
- (instancetype)initWithId:(NSString *)id key:(NSString *)key items:(NSSet<CSDKLibraryResourceItem *> *)items __attribute__((swift_name("init(id:key:items:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Material3Typography")))
@interface CSDKMaterial3Typography : CSDKBase
- (instancetype)initWithDisplayLarge:(CSDKUi_textTextStyle *)displayLarge displayMedium:(CSDKUi_textTextStyle *)displayMedium displaySmall:(CSDKUi_textTextStyle *)displaySmall headlineLarge:(CSDKUi_textTextStyle *)headlineLarge headlineMedium:(CSDKUi_textTextStyle *)headlineMedium headlineSmall:(CSDKUi_textTextStyle *)headlineSmall titleLarge:(CSDKUi_textTextStyle *)titleLarge titleMedium:(CSDKUi_textTextStyle *)titleMedium titleSmall:(CSDKUi_textTextStyle *)titleSmall bodyLarge:(CSDKUi_textTextStyle *)bodyLarge bodyMedium:(CSDKUi_textTextStyle *)bodyMedium bodySmall:(CSDKUi_textTextStyle *)bodySmall labelLarge:(CSDKUi_textTextStyle *)labelLarge labelMedium:(CSDKUi_textTextStyle *)labelMedium labelSmall:(CSDKUi_textTextStyle *)labelSmall __attribute__((swift_name("init(displayLarge:displayMedium:displaySmall:headlineLarge:headlineMedium:headlineSmall:titleLarge:titleMedium:titleSmall:bodyLarge:bodyMedium:bodySmall:labelLarge:labelMedium:labelSmall:)"))) __attribute__((objc_designated_initializer));
- (CSDKMaterial3Typography *)doCopyDisplayLarge:(CSDKUi_textTextStyle *)displayLarge displayMedium:(CSDKUi_textTextStyle *)displayMedium displaySmall:(CSDKUi_textTextStyle *)displaySmall headlineLarge:(CSDKUi_textTextStyle *)headlineLarge headlineMedium:(CSDKUi_textTextStyle *)headlineMedium headlineSmall:(CSDKUi_textTextStyle *)headlineSmall titleLarge:(CSDKUi_textTextStyle *)titleLarge titleMedium:(CSDKUi_textTextStyle *)titleMedium titleSmall:(CSDKUi_textTextStyle *)titleSmall bodyLarge:(CSDKUi_textTextStyle *)bodyLarge bodyMedium:(CSDKUi_textTextStyle *)bodyMedium bodySmall:(CSDKUi_textTextStyle *)bodySmall labelLarge:(CSDKUi_textTextStyle *)labelLarge labelMedium:(CSDKUi_textTextStyle *)labelMedium labelSmall:(CSDKUi_textTextStyle *)labelSmall __attribute__((swift_name("doCopy(displayLarge:displayMedium:displaySmall:headlineLarge:headlineMedium:headlineSmall:titleLarge:titleMedium:titleSmall:bodyLarge:bodyMedium:bodySmall:labelLarge:labelMedium:labelSmall:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKUi_textTextStyle *bodyLarge __attribute__((swift_name("bodyLarge")));
@property (readonly) CSDKUi_textTextStyle *bodyMedium __attribute__((swift_name("bodyMedium")));
@property (readonly) CSDKUi_textTextStyle *bodySmall __attribute__((swift_name("bodySmall")));
@property (readonly) CSDKUi_textTextStyle *displayLarge __attribute__((swift_name("displayLarge")));
@property (readonly) CSDKUi_textTextStyle *displayMedium __attribute__((swift_name("displayMedium")));
@property (readonly) CSDKUi_textTextStyle *displaySmall __attribute__((swift_name("displaySmall")));
@property (readonly) CSDKUi_textTextStyle *headlineLarge __attribute__((swift_name("headlineLarge")));
@property (readonly) CSDKUi_textTextStyle *headlineMedium __attribute__((swift_name("headlineMedium")));
@property (readonly) CSDKUi_textTextStyle *headlineSmall __attribute__((swift_name("headlineSmall")));
@property (readonly) CSDKUi_textTextStyle *labelLarge __attribute__((swift_name("labelLarge")));
@property (readonly) CSDKUi_textTextStyle *labelMedium __attribute__((swift_name("labelMedium")));
@property (readonly) CSDKUi_textTextStyle *labelSmall __attribute__((swift_name("labelSmall")));
@property (readonly) CSDKUi_textTextStyle *titleLarge __attribute__((swift_name("titleLarge")));
@property (readonly) CSDKUi_textTextStyle *titleMedium __attribute__((swift_name("titleMedium")));
@property (readonly) CSDKUi_textTextStyle *titleSmall __attribute__((swift_name("titleSmall")));
@end


/**
 * Styling configuration for a `Text`.
 *
 * @sample androidx.compose.ui.text.samples.TextStyleSample
 * @param platformStyle Platform specific [TextStyle] parameters.
 * @see AnnotatedString
 * @see SpanStyle
 * @see ParagraphStyle
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextStyle")))
@interface CSDKUi_textTextStyle : CSDKBase

/**
 * Styling configuration for a `Text`.
 *
 * @sample androidx.compose.ui.text.samples.TextStyleSample
 * @param color The text color.
 * @param fontSize The size of glyphs to use when painting the text. This may be
 *   [TextUnit.Unspecified] for inheriting from another [TextStyle].
 * @param fontWeight The typeface thickness to use when painting the text (e.g., bold).
 * @param fontStyle The typeface variant to use when drawing the letters (e.g., italic).
 * @param fontSynthesis Whether to synthesize font weight and/or style when the requested weight
 *   or style cannot be found in the provided font family.
 * @param fontFamily The font family to be used when rendering the text.
 * @param fontFeatureSettings The advanced typography settings provided by font. The format is
 *   the same as the CSS font-feature-settings attribute:
 *   https://www.w3.org/TR/css-fonts-3/#font-feature-settings-prop
 * @param letterSpacing The amount of space to add between each letter.
 * @param baselineShift The amount by which the text is shifted up from the current baseline.
 * @param textGeometricTransform The geometric transformation applied the text.
 * @param localeList The locale list used to select region-specific glyphs.
 * @param background The background color for the text.
 * @param textDecoration The decorations to paint on the text (e.g., an underline).
 * @param shadow The shadow effect applied on the text.
 * @param drawStyle Drawing style of text, whether fill in the text while drawing or stroke
 *   around the edges.
 * @param textAlign The alignment of the text within the lines of the paragraph.
 * @param textDirection The algorithm to be used to resolve the final text and paragraph
 *   direction: Left To Right or Right To Left. If no value is provided the system will use the
 *   [LayoutDirection] as the primary signal.
 * @param lineHeight Line height for the [Paragraph] in [TextUnit] unit, e.g. SP or EM.
 * @param textIndent The indentation of the paragraph.
 * @param platformStyle Platform specific [TextStyle] parameters.
 * @param lineHeightStyle the configuration for line height such as vertical alignment of the
 *   line, whether to apply additional space as a result of line height to top of first line top
 *   and bottom of last line. The configuration is applied only when a [lineHeight] is defined.
 *   When null, [LineHeightStyle.Default] is used.
 * @param lineBreak The line breaking configuration for the text.
 * @param hyphens The configuration of hyphenation.
 * @param textMotion Text character placement, whether to optimize for animated or static text.
 */
- (instancetype)initWithColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(CSDKUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(CSDKUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(CSDKUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(CSDKUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(CSDKUi_textTextDecoration * _Nullable)textDecoration shadow:(CSDKUi_graphicsShadow * _Nullable)shadow drawStyle:(CSDKUi_graphicsDrawStyle * _Nullable)drawStyle textAlign:(int32_t)textAlign textDirection:(int32_t)textDirection lineHeight:(int64_t)lineHeight textIndent:(CSDKUi_textTextIndent * _Nullable)textIndent platformStyle:(CSDKUi_textPlatformTextStyle * _Nullable)platformStyle lineHeightStyle:(CSDKUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(int32_t)lineBreak hyphens:(int32_t)hyphens textMotion:(CSDKUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("init(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:drawStyle:textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)"))) __attribute__((objc_designated_initializer));

/**
 * Styling configuration for a `Text`.
 *
 * @sample androidx.compose.ui.text.samples.TextStyleBrushSample
 * @param brush The brush to use when painting the text. If brush is given as null, it will be
 *   treated as unspecified. It is equivalent to calling the alternative color constructor with
 *   [Color.Unspecified]
 * @param alpha Opacity to be applied to [brush] from 0.0f to 1.0f representing fully
 *   transparent to fully opaque respectively.
 * @param fontSize The size of glyphs to use when painting the text. This may be
 *   [TextUnit.Unspecified] for inheriting from another [TextStyle].
 * @param fontWeight The typeface thickness to use when painting the text (e.g., bold).
 * @param fontStyle The typeface variant to use when drawing the letters (e.g., italic).
 * @param fontSynthesis Whether to synthesize font weight and/or style when the requested weight
 *   or style cannot be found in the provided font family.
 * @param fontFamily The font family to be used when rendering the text.
 * @param fontFeatureSettings The advanced typography settings provided by font. The format is
 *   the same as the CSS font-feature-settings attribute:
 *   https://www.w3.org/TR/css-fonts-3/#font-feature-settings-prop
 * @param letterSpacing The amount of space to add between each letter.
 * @param baselineShift The amount by which the text is shifted up from the current baseline.
 * @param textGeometricTransform The geometric transformation applied the text.
 * @param localeList The locale list used to select region-specific glyphs.
 * @param background The background color for the text.
 * @param textDecoration The decorations to paint on the text (e.g., an underline).
 * @param shadow The shadow effect applied on the text.
 * @param drawStyle Drawing style of text, whether fill in the text while drawing or stroke
 *   around the edges.
 * @param textAlign The alignment of the text within the lines of the paragraph.
 * @param textDirection The algorithm to be used to resolve the final text and paragraph
 *   direction: Left To Right or Right To Left. If no value is provided the system will use the
 *   [LayoutDirection] as the primary signal.
 * @param lineHeight Line height for the [Paragraph] in [TextUnit] unit, e.g. SP or EM.
 * @param textIndent The indentation of the paragraph.
 * @param platformStyle Platform specific [TextStyle] parameters.
 * @param lineHeightStyle the configuration for line height such as vertical alignment of the
 *   line, whether to apply additional space as a result of line height to top of first line top
 *   and bottom of last line. The configuration is applied only when a [lineHeight] is defined.
 * @param lineBreak The line breaking configuration for the text.
 * @param hyphens The configuration of hyphenation.
 * @param textMotion Text character placement, whether to optimize for animated or static text.
 */
- (instancetype)initWithBrush:(CSDKUi_graphicsBrush * _Nullable)brush alpha:(float)alpha fontSize:(int64_t)fontSize fontWeight:(CSDKUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(CSDKUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(CSDKUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(CSDKUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(CSDKUi_textTextDecoration * _Nullable)textDecoration shadow:(CSDKUi_graphicsShadow * _Nullable)shadow drawStyle:(CSDKUi_graphicsDrawStyle * _Nullable)drawStyle textAlign:(int32_t)textAlign textDirection:(int32_t)textDirection lineHeight:(int64_t)lineHeight textIndent:(CSDKUi_textTextIndent * _Nullable)textIndent platformStyle:(CSDKUi_textPlatformTextStyle * _Nullable)platformStyle lineHeightStyle:(CSDKUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(int32_t)lineBreak hyphens:(int32_t)hyphens textMotion:(CSDKUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("init(brush:alpha:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:drawStyle:textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKUi_textTextStyleCompanion *companion __attribute__((swift_name("companion")));
- (CSDKUi_textTextStyle *)doCopyColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(CSDKUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(CSDKUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(CSDKUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(CSDKUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(CSDKUi_textTextDecoration * _Nullable)textDecoration shadow:(CSDKUi_graphicsShadow * _Nullable)shadow drawStyle:(CSDKUi_graphicsDrawStyle * _Nullable)drawStyle textAlign:(int32_t)textAlign textDirection:(int32_t)textDirection lineHeight:(int64_t)lineHeight textIndent:(CSDKUi_textTextIndent * _Nullable)textIndent platformStyle:(CSDKUi_textPlatformTextStyle * _Nullable)platformStyle lineHeightStyle:(CSDKUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(int32_t)lineBreak hyphens:(int32_t)hyphens textMotion:(CSDKUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("doCopy(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:drawStyle:textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)")));
- (CSDKUi_textTextStyle *)doCopyBrush:(CSDKUi_graphicsBrush * _Nullable)brush alpha:(float)alpha fontSize:(int64_t)fontSize fontWeight:(CSDKUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(CSDKUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(CSDKUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(CSDKUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(CSDKUi_textTextDecoration * _Nullable)textDecoration shadow:(CSDKUi_graphicsShadow * _Nullable)shadow drawStyle:(CSDKUi_graphicsDrawStyle * _Nullable)drawStyle textAlign:(int32_t)textAlign textDirection:(int32_t)textDirection lineHeight:(int64_t)lineHeight textIndent:(CSDKUi_textTextIndent * _Nullable)textIndent platformStyle:(CSDKUi_textPlatformTextStyle * _Nullable)platformStyle lineHeightStyle:(CSDKUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(int32_t)lineBreak hyphens:(int32_t)hyphens textMotion:(CSDKUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("doCopy(brush:alpha:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:drawStyle:textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasSameDrawAffectingAttributesOther:(CSDKUi_textTextStyle *)other __attribute__((swift_name("hasSameDrawAffectingAttributes(other:)")));

/**
 * Returns true if text layout affecting attributes between this TextStyle and other are the
 * same.
 *
 * The attributes that do not require a layout change are color, textDecoration and shadow.
 *
 * Majority of attributes change text layout, and examples are line height, font properties,
 * font size, locale etc.
 *
 * This function can be used to identify if a new text layout is required for a given TextStyle.
 *
 * @param other The TextStyle to compare to.
 */
- (BOOL)hasSameLayoutAffectingAttributesOther:(CSDKUi_textTextStyle *)other __attribute__((swift_name("hasSameLayoutAffectingAttributes(other:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Returns a new text style that is a combination of this style and the given [other] style.
 *
 * @see merge
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textTextStyle *)mergeOther:(CSDKUi_textParagraphStyle *)other __attribute__((swift_name("merge(other:)")));

/**
 * Returns a new text style that is a combination of this style and the given [other] style.
 *
 * @see merge
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textTextStyle *)mergeOther_:(CSDKUi_textSpanStyle *)other __attribute__((swift_name("merge(other_:)")));

/**
 * Returns a new text style that is a combination of this style and the given [other] style.
 *
 * [other] text style's null or inherit properties are replaced with the non-null properties of
 * this text style. Another way to think of it is that the "missing" properties of the [other]
 * style are _filled_ by the properties of this style.
 *
 * If the given text style is null, returns this text style.
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textTextStyle *)mergeOther__:(CSDKUi_textTextStyle * _Nullable)other __attribute__((swift_name("merge(other__:)")));

/**
 * Fast merge non-default values and parameters.
 *
 * This is the same algorithm as [merge] but does not require allocating it's parameter and may
 * return this instead of allocating a result when all values are default.
 *
 * This is a similar algorithm to [copy] but when either this or a parameter are set to a
 * default value, the other value will take precedent.
 *
 * To explain better, consider the following examples:
 *
 * Example 1:
 * - this.color = [Color.Unspecified]
 * - [color] = [Color.Red]
 * - result => [Color.Red]
 *
 * Example 2:
 * - this.color = [Color.Red]
 * - [color] = [Color.Unspecified]
 * - result => [Color.Red]
 *
 * Example 3:
 * - this.color = [Color.Red]
 * - [color] = [Color.Blue]
 * - result => [Color.Blue]
 *
 * You should _always_ use this method over the [merge]([TextStyle]) overload when you do not
 * already have a TextStyle allocated. You should chose this over [copy] when building a theming
 * system and applying styling information to a specific usage.
 *
 * @return this or a new TextLayoutResult with all parameters chosen to the non-default option
 *   provided.
 * @see merge
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textTextStyle *)mergeColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(CSDKUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(CSDKUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(CSDKUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(CSDKUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(CSDKUi_textTextDecoration * _Nullable)textDecoration shadow:(CSDKUi_graphicsShadow * _Nullable)shadow drawStyle:(CSDKUi_graphicsDrawStyle * _Nullable)drawStyle textAlign:(int32_t)textAlign textDirection:(int32_t)textDirection lineHeight:(int64_t)lineHeight textIndent:(CSDKUi_textTextIndent * _Nullable)textIndent lineHeightStyle:(CSDKUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(int32_t)lineBreak hyphens:(int32_t)hyphens platformStyle:(CSDKUi_textPlatformTextStyle * _Nullable)platformStyle textMotion:(CSDKUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("merge(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:drawStyle:textAlign:textDirection:lineHeight:textIndent:lineHeightStyle:lineBreak:hyphens:platformStyle:textMotion:)")));

/** Plus operator overload that applies a [merge].
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textTextStyle *)plusOther:(CSDKUi_textParagraphStyle *)other __attribute__((swift_name("plus(other:)")));

/** Plus operator overload that applies a [merge].
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textTextStyle *)plusOther_:(CSDKUi_textSpanStyle *)other __attribute__((swift_name("plus(other_:)")));

/** Plus operator overload that applies a [merge].
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textTextStyle *)plusOther__:(CSDKUi_textTextStyle *)other __attribute__((swift_name("plus(other__:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textParagraphStyle *)toParagraphStyle __attribute__((swift_name("toParagraphStyle()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textSpanStyle *)toSpanStyle __attribute__((swift_name("toSpanStyle()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Opacity of text. This value is either provided along side Brush, or via alpha channel in
 * color.
 */
@property (readonly) float alpha __attribute__((swift_name("alpha")));

/** The background color for the text. */
@property (readonly) uint64_t background __attribute__((swift_name("background")));

/** The amount by which the text is shifted up from the current baseline. */
@property (readonly) id _Nullable baselineShift __attribute__((swift_name("baselineShift")));

/** The brush to use when drawing text. If not null, overrides [color]. */
@property (readonly) CSDKUi_graphicsBrush * _Nullable brush __attribute__((swift_name("brush")));

/** The text color. */
@property (readonly) uint64_t color __attribute__((swift_name("color")));
@property (readonly) id _Nullable deprecated_boxing_hyphens __attribute__((swift_name("deprecated_boxing_hyphens"))) __attribute__((deprecated("Kept for backwards compatibility.")));
@property (readonly) id _Nullable deprecated_boxing_lineBreak __attribute__((swift_name("deprecated_boxing_lineBreak"))) __attribute__((deprecated("Kept for backwards compatibility.")));
@property (readonly) id _Nullable deprecated_boxing_textAlign __attribute__((swift_name("deprecated_boxing_textAlign"))) __attribute__((deprecated("Kept for backwards compatibility.")));
@property (readonly) id _Nullable deprecated_boxing_textDirection __attribute__((swift_name("deprecated_boxing_textDirection"))) __attribute__((deprecated("Kept for backwards compatibility.")));

/** Drawing style of text, whether fill in the text while drawing or stroke around the edges. */
@property (readonly) CSDKUi_graphicsDrawStyle * _Nullable drawStyle __attribute__((swift_name("drawStyle")));

/** The font family to be used when rendering the text. */
@property (readonly) CSDKUi_textFontFamily * _Nullable fontFamily __attribute__((swift_name("fontFamily")));

/**
 * The advanced typography settings provided by font. The format is the same as the CSS
 * font-feature-settings attribute:
 * https://www.w3.org/TR/css-fonts-3/#font-feature-settings-prop
 */
@property (readonly) NSString * _Nullable fontFeatureSettings __attribute__((swift_name("fontFeatureSettings")));

/**
 * The size of glyphs to use when painting the text. This may be [TextUnit.Unspecified] for
 * inheriting from another [TextStyle].
 */
@property (readonly) int64_t fontSize __attribute__((swift_name("fontSize")));

/** The typeface variant to use when drawing the letters (e.g., italic). */
@property (readonly) id _Nullable fontStyle __attribute__((swift_name("fontStyle")));

/**
 * Whether to synthesize font weight and/or style when the requested weight or style cannot be
 * found in the provided font family.
 */
@property (readonly) id _Nullable fontSynthesis __attribute__((swift_name("fontSynthesis")));

/** The typeface thickness to use when painting the text (e.g., bold). */
@property (readonly) CSDKUi_textFontWeight * _Nullable fontWeight __attribute__((swift_name("fontWeight")));

/** The hyphens configuration of the paragraph. */
@property (readonly) int32_t hyphens __attribute__((swift_name("hyphens")));

/** The amount of space to add between each letter. */
@property (readonly) int64_t letterSpacing __attribute__((swift_name("letterSpacing")));

/** The line breaking configuration of the paragraph. */
@property (readonly) int32_t lineBreak __attribute__((swift_name("lineBreak")));

/** Line height for the [Paragraph] in [TextUnit] unit, e.g. SP or EM. */
@property (readonly) int64_t lineHeight __attribute__((swift_name("lineHeight")));

/**
 * The configuration for line height such as vertical alignment of the line, whether to apply
 * additional space as a result of line height to top of first line top and bottom of last line.
 *
 * The configuration is applied only when a [lineHeight] is defined.
 *
 * When null, [LineHeightStyle.Default] is used.
 */
@property (readonly) CSDKUi_textLineHeightStyle * _Nullable lineHeightStyle __attribute__((swift_name("lineHeightStyle")));

/** The locale list used to select region-specific glyphs. */
@property (readonly) CSDKUi_textLocaleList * _Nullable localeList __attribute__((swift_name("localeList")));
@property (readonly) CSDKUi_textPlatformTextStyle * _Nullable platformStyle __attribute__((swift_name("platformStyle")));

/** The shadow effect applied on the text. */
@property (readonly) CSDKUi_graphicsShadow * _Nullable shadow __attribute__((swift_name("shadow")));

/** The alignment of the text within the lines of the paragraph. */
@property (readonly) int32_t textAlign __attribute__((swift_name("textAlign")));

/** The decorations to paint on the text (e.g., an underline). */
@property (readonly) CSDKUi_textTextDecoration * _Nullable textDecoration __attribute__((swift_name("textDecoration")));

/**
 * The algorithm to be used to resolve the final text and paragraph direction: Left To Right or
 * Right To Left. If no value is provided the system will use the [LayoutDirection] as the
 * primary signal.
 */
@property (readonly) int32_t textDirection __attribute__((swift_name("textDirection")));

/** The geometric transformation applied the text. */
@property (readonly) CSDKUi_textTextGeometricTransform * _Nullable textGeometricTransform __attribute__((swift_name("textGeometricTransform")));

/** The indentation of the paragraph. */
@property (readonly) CSDKUi_textTextIndent * _Nullable textIndent __attribute__((swift_name("textIndent")));

/** Text character placement configuration, whether to optimize for animated or static text. */
@property (readonly) CSDKUi_textTextMotion * _Nullable textMotion __attribute__((swift_name("textMotion")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol CSDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<CSDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<CSDKKotlinCoroutineContextElement> _Nullable)getKey:(id<CSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<CSDKKotlinCoroutineContext>)minusKeyKey:(id<CSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<CSDKKotlinCoroutineContext>)plusContext:(id<CSDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol CSDKKtor_client_coreHttpClientEngine <CSDKKotlinx_coroutines_coreCoroutineScope, CSDKKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(CSDKKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(CSDKKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(CSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) CSDKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) CSDKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<CSDKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface CSDKKtor_client_coreHttpClientEngineConfig : CSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property CSDKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((deprecated("The [threadsCount] property is deprecated. The [Dispatchers.IO] is used by default.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface CSDKKtor_client_coreHttpClientConfig<T> : CSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CSDKKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(CSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<CSDKKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(CSDKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(CSDKKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol CSDKKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol CSDKKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(CSDKKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(CSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(CSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(CSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(CSDKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(CSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(CSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(CSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<CSDKKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface CSDKKtor_eventsEvents : CSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(CSDKKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<CSDKKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(CSDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(CSDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface CSDKKtor_utilsPipeline<TSubject, TContext> : CSDKBase
- (instancetype)initWithPhases:(CSDKKotlinArray<CSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(CSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(CSDKKtor_utilsPipelinePhase *)reference phase:(CSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(CSDKKtor_utilsPipelinePhase *)reference phase:(CSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(CSDKKtor_utilsPipelinePhase *)phase block:(id<CSDKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<CSDKKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(CSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(CSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(CSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(CSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<CSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<CSDKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface CSDKKtor_client_coreHttpReceivePipeline : CSDKKtor_utilsPipeline<CSDKKtor_client_coreHttpResponse *, CSDKKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CSDKKotlinArray<CSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(CSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface CSDKKtor_client_coreHttpRequestPipeline : CSDKKtor_utilsPipeline<id, CSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CSDKKotlinArray<CSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(CSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface CSDKKtor_client_coreHttpResponsePipeline : CSDKKtor_utilsPipeline<CSDKKtor_client_coreHttpResponseContainer *, CSDKKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CSDKKotlinArray<CSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(CSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface CSDKKtor_client_coreHttpSendPipeline : CSDKKtor_utilsPipeline<id, CSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CSDKKotlinArray<CSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(CSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CSDKKotlinx_serialization_coreSerializersModule : CSDKBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<CSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<CSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<CSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface CSDKKotlinx_serialization_jsonJsonDefault : CSDKKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface CSDKKotlinx_serialization_jsonJsonElement : CSDKBase
@property (class, readonly, getter=companion) CSDKKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface CSDKKotlinx_serialization_jsonJsonConfiguration : CSDKBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property CSDKKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<CSDKKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CSDKKotlinx_serialization_coreEncoder
@required
- (id<CSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<CSDKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<CSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CSDKKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<CSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<CSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<CSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) CSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CSDKKotlinx_serialization_coreDecoder
@required
- (id<CSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<CSDKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (CSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol CSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface CSDKKotlinByteIterator : CSDKBase <CSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CSDKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end


/**
 * Represents a resource item with qualifiers and a path.
 *
 * @property qualifiers The qualifiers of the resource item.
 * @property path The path of the resource item.
 * @property offset The offset in bytes of the resource in the file. '-1' means the resource is whole file
 * @property size The size in bytes of the resource in the file. '-1' means the resource is whole file
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryResourceItem")))
@interface CSDKLibraryResourceItem : CSDKBase
- (instancetype)initWithQualifiers:(NSSet<id<CSDKLibraryQualifier>> *)qualifiers path:(NSString *)path offset:(int64_t)offset size:(int64_t)size __attribute__((swift_name("init(qualifiers:path:offset:size:)"))) __attribute__((objc_designated_initializer));
- (CSDKLibraryResourceItem *)doCopyQualifiers:(NSSet<id<CSDKLibraryQualifier>> *)qualifiers path:(NSString *)path offset:(int64_t)offset size:(int64_t)size __attribute__((swift_name("doCopy(qualifiers:path:offset:size:)")));

/**
 * Represents a resource item with qualifiers and a path.
 *
 * @property qualifiers The qualifiers of the resource item.
 * @property path The path of the resource item.
 * @property offset The offset in bytes of the resource in the file. '-1' means the resource is whole file
 * @property size The size in bytes of the resource in the file. '-1' means the resource is whole file
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents a resource item with qualifiers and a path.
 *
 * @property qualifiers The qualifiers of the resource item.
 * @property path The path of the resource item.
 * @property offset The offset in bytes of the resource in the file. '-1' means the resource is whole file
 * @property size The size in bytes of the resource in the file. '-1' means the resource is whole file
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a resource item with qualifiers and a path.
 *
 * @property qualifiers The qualifiers of the resource item.
 * @property path The path of the resource item.
 * @property offset The offset in bytes of the resource in the file. '-1' means the resource is whole file
 * @property size The size in bytes of the resource in the file. '-1' means the resource is whole file
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * The thickness of the glyphs, in a range of [1, 1000].
 *
 * @param weight Font weight value in the range of [1, 1000]
 * @see Font
 * @see FontFamily
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontWeight")))
@interface CSDKUi_textFontWeight : CSDKBase <CSDKKotlinComparable>
- (instancetype)initWithWeight:(int32_t)weight __attribute__((swift_name("init(weight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKUi_textFontWeightCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(CSDKUi_textFontWeight *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t weight __attribute__((swift_name("weight")));
@end


/**
 * The primary typography interface for Compose applications.
 *
 * @see FontListFontFamily
 * @see GenericFontFamily
 * @see FontFamily.Resolver
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Ui_textFontFamily")))
@interface CSDKUi_textFontFamily : CSDKBase
@property (class, readonly, getter=companion) CSDKUi_textFontFamilyCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL canLoadSynchronously __attribute__((swift_name("canLoadSynchronously")));
@end


/**
 * Define a geometric transformation on text.
 *
 * @param scaleX The scale of the text on the horizontal direction. The default value is 1.0f, i.e
 *   no scaling.
 * @param skewX The shear of the text on the horizontal direction. A pixel at (x, y), where y is the
 *   distance above baseline, will be transformed to (x + y * skewX, y). The default value is 0.0f
 *   i.e. no skewing.
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextGeometricTransform")))
@interface CSDKUi_textTextGeometricTransform : CSDKBase
- (instancetype)initWithScaleX:(float)scaleX skewX:(float)skewX __attribute__((swift_name("init(scaleX:skewX:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKUi_textTextGeometricTransformCompanion *companion __attribute__((swift_name("companion")));
- (CSDKUi_textTextGeometricTransform *)doCopyScaleX:(float)scaleX skewX:(float)skewX __attribute__((swift_name("doCopy(scaleX:skewX:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float scaleX __attribute__((swift_name("scaleX")));
@property (readonly) float skewX __attribute__((swift_name("skewX")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol CSDKKotlinIterable
@required
- (id<CSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinCollection")))
@protocol CSDKKotlinCollection <CSDKKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * Defines a list of [Locale] objects.
 *
 * @see TextStyle
 * @see SpanStyle
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLocaleList")))
@interface CSDKUi_textLocaleList : CSDKBase <CSDKKotlinCollection>

/** Creates a [LocaleList] object from a list of [Locale]s. */
- (instancetype)initWithLocales:(CSDKKotlinArray<CSDKUi_textLocale *> *)locales __attribute__((swift_name("init(locales:)"))) __attribute__((objc_designated_initializer));

/**
 * Create a [LocaleList] object from comma separated language tags.
 *
 * @param languageTags A comma separated [IETF BCP47](https://tools.ietf.org/html/bcp47)
 *   compliant language tag.
 */
- (instancetype)initWithLanguageTags:(NSString *)languageTags __attribute__((swift_name("init(languageTags:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLocaleList:(NSArray<CSDKUi_textLocale *> *)localeList __attribute__((swift_name("init(localeList:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKUi_textLocaleListCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsElement:(CSDKUi_textLocale *)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (CSDKUi_textLocale *)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (id<CSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CSDKUi_textLocale *> *localeList __attribute__((swift_name("localeList")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * Defines a horizontal line to be drawn on the text.
 *
 * @property mask The integer representation of the TextDecoration.
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextDecoration")))
@interface CSDKUi_textTextDecoration : CSDKBase
@property (class, readonly, getter=companion) CSDKUi_textTextDecorationCompanion *companion __attribute__((swift_name("companion")));

/**
 * Check whether this [TextDecoration] contains the given decoration.
 *
 * @param other The [TextDecoration] to be checked.
 */
- (BOOL)containsOther:(CSDKUi_textTextDecoration *)other __attribute__((swift_name("contains(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Creates a decoration that includes both of the TextDecorations.
 *
 * @sample androidx.compose.ui.text.samples.TextDecorationCombinedSample
 */
- (CSDKUi_textTextDecoration *)plusDecoration:(CSDKUi_textTextDecoration *)decoration __attribute__((swift_name("plus(decoration:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t mask __attribute__((swift_name("mask")));
@end


/** A single shadow.
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsShadow")))
@interface CSDKUi_graphicsShadow : CSDKBase
- (instancetype)initWithColor:(uint64_t)color offset:(int64_t)offset blurRadius:(float)blurRadius __attribute__((swift_name("init(color:offset:blurRadius:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKUi_graphicsShadowCompanion *companion __attribute__((swift_name("companion")));
- (CSDKUi_graphicsShadow *)doCopyColor:(uint64_t)color offset:(int64_t)offset blurRadius:(float)blurRadius __attribute__((swift_name("doCopy(color:offset:blurRadius:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float blurRadius __attribute__((swift_name("blurRadius")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) uint64_t color __attribute__((swift_name("color")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) int64_t offset __attribute__((swift_name("offset")));
@end


/** Represents how the shapes should be drawn within a [DrawScope] */
__attribute__((swift_name("Ui_graphicsDrawStyle")))
@interface CSDKUi_graphicsDrawStyle : CSDKBase
@end


/**
 * Specify the indentation of a paragraph.
 *
 * @param firstLine the amount of indentation applied to the first line.
 * @param restLine the amount of indentation applied to every line except the first line.
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextIndent")))
@interface CSDKUi_textTextIndent : CSDKBase
- (instancetype)initWithFirstLine:(int64_t)firstLine restLine:(int64_t)restLine __attribute__((swift_name("init(firstLine:restLine:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKUi_textTextIndentCompanion *companion __attribute__((swift_name("companion")));
- (CSDKUi_textTextIndent *)doCopyFirstLine:(int64_t)firstLine restLine:(int64_t)restLine __attribute__((swift_name("doCopy(firstLine:restLine:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t firstLine __attribute__((swift_name("firstLine")));
@property (readonly) int64_t restLine __attribute__((swift_name("restLine")));
@end


/**
 * Provides configuration options for behavior compatibility for TextStyle.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformTextStyle")))
@interface CSDKUi_textPlatformTextStyle : CSDKBase

/**
 * Allows specifying the style of the decoration line for the text.
 *
 * This parameter is relevant only if `textDecoration` is specified, for example in
 * `TextStyle(textDecoration = )` or in `SpanStyle(textDecoration = )`
 */
- (instancetype)initWithTextDecorationLineStyle:(id _Nullable)textDecorationLineStyle __attribute__((swift_name("init(textDecorationLineStyle:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSpanStyle:(CSDKUi_textPlatformSpanStyle * _Nullable)spanStyle paragraphStyle:(CSDKUi_textPlatformParagraphStyle * _Nullable)paragraphStyle __attribute__((swift_name("init(spanStyle:paragraphStyle:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) CSDKUi_textPlatformParagraphStyle * _Nullable paragraphStyle __attribute__((swift_name("paragraphStyle")));
@property (readonly) CSDKUi_textPlatformSpanStyle * _Nullable spanStyle __attribute__((swift_name("spanStyle")));
@end


/**
 * The configuration for line height such as alignment of the line in the provided line height,
 * whether to apply additional space as a result of line height to top of first line top and bottom
 * of last line.
 *
 * The configuration is applied only when a line height is defined on the text.
 *
 * [trim] feature is available only when [PlatformParagraphStyle.includeFontPadding] is false.
 *
 * Please check [Trim] and [Alignment] for more description.
 *
 * @param alignment defines how to align the line in the space provided by the line height.
 * @param trim defines whether the space that would be added to the top of first line, and bottom of
 *   the last line should be trimmed or not. This feature is available only when
 *   [PlatformParagraphStyle.includeFontPadding] is false.
 * @param mode defines the behavior when the specified line height is smaller than system preferred
 *   line height. By specifying [Mode.Fixed], the line height is always set to the specified value.
 *   This is the default value. By specifying [Mode.Minimum], the specified line height is smaller
 *   than the system preferred value, the system preferred one is used instead.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLineHeightStyle")))
@interface CSDKUi_textLineHeightStyle : CSDKBase
- (instancetype)initWithAlignment:(float)alignment trim:(int32_t)trim __attribute__((swift_name("init(alignment:trim:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAlignment:(float)alignment trim:(int32_t)trim mode:(int32_t)mode __attribute__((swift_name("init(alignment:trim:mode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKUi_textLineHeightStyleCompanion *companion __attribute__((swift_name("companion")));

/** Returns a copy of this [LineHeightStyle], optionally overriding some of the values. */
- (CSDKUi_textLineHeightStyle *)doCopyAlignment:(float)alignment trim:(int32_t)trim mode:(int32_t)mode __attribute__((swift_name("doCopy(alignment:trim:mode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float alignment __attribute__((swift_name("alignment")));
@property (readonly) int32_t mode __attribute__((swift_name("mode")));
@property (readonly) int32_t trim __attribute__((swift_name("trim")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextMotion")))
@interface CSDKUi_textTextMotion : CSDKBase
@property (class, readonly, getter=companion) CSDKUi_textTextMotionCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Ui_graphicsBrush")))
@interface CSDKUi_graphicsBrush : CSDKBase
@property (class, readonly, getter=companion) CSDKUi_graphicsBrushCompanion *companion __attribute__((swift_name("companion")));
- (void)applyToSize:(int64_t)size p:(id<CSDKUi_graphicsPaint>)p alpha:(float)alpha __attribute__((swift_name("applyTo(size:p:alpha:)")));

/**
 * Return the intrinsic size of the [Brush]. If the there is no intrinsic size (i.e. filling
 * bounds with an arbitrary color) return [Size.Unspecified]. If there is no intrinsic size in a
 * single dimension, return [Size] with [Float.NaN] in the desired dimension.
 */
@property (readonly) int64_t intrinsicSize __attribute__((swift_name("intrinsicSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextStyle.Companion")))
@interface CSDKUi_textTextStyleCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textTextStyleCompanion *shared __attribute__((swift_name("shared")));

/** Constant for default text style.
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textTextStyle *Default __attribute__((swift_name("Default")));
@end


/**
 * Defines annotations that specify additional information to apply to ranges of text within the
 * given AnnotatedString.
 *
 * The AnnotatedString supports annotations that provide different kind of information, such as
 * * [SpanStyle] specifies character level styling such as color, font, letter spacing etc.
 * * [ParagraphStyle] for configuring styling on a paragraph level such as line heights, text
 *   aligning, text direction etc.
 * * [LinkAnnotation] to mark links in the text.
 * * [TtsAnnotation] provides information to assistive technologies such as screen readers.
 * * Custom annotations using the [StringAnnotation].
 */
__attribute__((swift_name("Ui_textAnnotatedStringAnnotation")))
@protocol CSDKUi_textAnnotatedStringAnnotation
@required
@end


/**
 * Paragraph styling configuration for a paragraph. The difference between [SpanStyle] and
 * `ParagraphStyle` is that, `ParagraphStyle` can be applied to a whole [Paragraph] while
 * [SpanStyle] can be applied at the character level. Once a portion of the text is marked with a
 * `ParagraphStyle`, that portion will be separated from the remaining as if a line feed character
 * was added.
 *
 * @sample androidx.compose.ui.text.samples.ParagraphStyleSample
 * @sample androidx.compose.ui.text.samples.ParagraphStyleAnnotatedStringsSample
 * @param textAlign The alignment of the text within the lines of the paragraph.
 * @param textDirection The algorithm to be used to resolve the final text direction: Left To Right
 *   or Right To Left.
 * @param lineHeight Line height for the [Paragraph] in [TextUnit] unit, e.g. SP or EM.
 * @param textIndent The indentation of the paragraph.
 * @param platformStyle Platform specific [ParagraphStyle] parameters.
 * @param lineHeightStyle the configuration for line height such as vertical alignment of the line,
 *   whether to apply additional space as a result of line height to top of first line top and
 *   bottom of last line. The configuration is applied only when a [lineHeight] is defined. When
 *   null, [LineHeightStyle.Default] is used.
 * @param lineBreak The line breaking configuration for the text.
 * @param hyphens The configuration of hyphenation.
 * @param textMotion Text character placement, whether to optimize for animated or static text.
 * @see Paragraph
 * @see AnnotatedString
 * @see SpanStyle
 * @see TextStyle
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textParagraphStyle")))
@interface CSDKUi_textParagraphStyle : CSDKBase <CSDKUi_textAnnotatedStringAnnotation>
- (instancetype)initWithTextAlign:(int32_t)textAlign textDirection:(int32_t)textDirection lineHeight:(int64_t)lineHeight textIndent:(CSDKUi_textTextIndent * _Nullable)textIndent platformStyle:(CSDKUi_textPlatformParagraphStyle * _Nullable)platformStyle lineHeightStyle:(CSDKUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(int32_t)lineBreak hyphens:(int32_t)hyphens textMotion:(CSDKUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("init(textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)"))) __attribute__((objc_designated_initializer));
- (CSDKUi_textParagraphStyle *)doCopyTextAlign:(int32_t)textAlign textDirection:(int32_t)textDirection lineHeight:(int64_t)lineHeight textIndent:(CSDKUi_textTextIndent * _Nullable)textIndent platformStyle:(CSDKUi_textPlatformParagraphStyle * _Nullable)platformStyle lineHeightStyle:(CSDKUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(int32_t)lineBreak hyphens:(int32_t)hyphens textMotion:(CSDKUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("doCopy(textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Returns a new paragraph style that is a combination of this style and the given [other]
 * style.
 *
 * If the given paragraph style is null, returns this paragraph style.
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textParagraphStyle *)mergeOther:(CSDKUi_textParagraphStyle * _Nullable)other __attribute__((swift_name("merge(other:)")));

/** Plus operator overload that applies a [merge].
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textParagraphStyle *)plusOther:(CSDKUi_textParagraphStyle *)other __attribute__((swift_name("plus(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable deprecated_boxing_hyphens __attribute__((swift_name("deprecated_boxing_hyphens"))) __attribute__((deprecated("Kept for backwards compatibility.")));
@property (readonly) id _Nullable deprecated_boxing_lineBreak __attribute__((swift_name("deprecated_boxing_lineBreak"))) __attribute__((deprecated("Kept for backwards compatibility.")));
@property (readonly) id _Nullable deprecated_boxing_textAlign __attribute__((swift_name("deprecated_boxing_textAlign"))) __attribute__((deprecated("Kept for backwards compatibility.")));
@property (readonly) id _Nullable deprecated_boxing_textDirection __attribute__((swift_name("deprecated_boxing_textDirection"))) __attribute__((deprecated("Kept for backwards compatibility.")));
@property (readonly) int32_t hyphens __attribute__((swift_name("hyphens")));
@property (readonly) int32_t lineBreak __attribute__((swift_name("lineBreak")));
@property (readonly) int64_t lineHeight __attribute__((swift_name("lineHeight")));
@property (readonly) CSDKUi_textLineHeightStyle * _Nullable lineHeightStyle __attribute__((swift_name("lineHeightStyle")));
@property (readonly) CSDKUi_textPlatformParagraphStyle * _Nullable platformStyle __attribute__((swift_name("platformStyle")));
@property (readonly) int32_t textAlign __attribute__((swift_name("textAlign")));
@property (readonly) int32_t textDirection __attribute__((swift_name("textDirection")));
@property (readonly) CSDKUi_textTextIndent * _Nullable textIndent __attribute__((swift_name("textIndent")));
@property (readonly) CSDKUi_textTextMotion * _Nullable textMotion __attribute__((swift_name("textMotion")));
@end


/**
 * Styling configuration for a text span. This configuration only allows character level styling, in
 * order to set paragraph level styling such as line height, or text alignment please see
 * [ParagraphStyle].
 *
 * @sample androidx.compose.ui.text.samples.SpanStyleSample
 * @sample androidx.compose.ui.text.samples.AnnotatedStringBuilderSample
 * @param fontSize The size of glyphs (in logical pixels) to use when painting the text. This may be
 *   [TextUnit.Unspecified] for inheriting from another [SpanStyle].
 * @param fontWeight The typeface thickness to use when painting the text (e.g., bold).
 * @param fontStyle The typeface variant to use when drawing the letters (e.g., italic).
 * @param fontSynthesis Whether to synthesize font weight and/or style when the requested weight or
 *   style cannot be found in the provided font family.
 * @param fontFamily The font family to be used when rendering the text.
 * @param fontFeatureSettings The advanced typography settings provided by font. The format is the
 *   same as the CSS font-feature-settings attribute:
 *   https://www.w3.org/TR/css-fonts-3/#font-feature-settings-prop
 * @param letterSpacing The amount of space (in em) to add between each letter.
 * @param baselineShift The amount by which the text is shifted up from the current baseline.
 * @param textGeometricTransform The geometric transformation applied the text.
 * @param localeList The locale list used to select region-specific glyphs.
 * @param background The background color for the text.
 * @param textDecoration The decorations to paint on the text (e.g., an underline).
 * @param shadow The shadow effect applied on the text.
 * @param platformStyle Platform specific [SpanStyle] parameters.
 * @param drawStyle Drawing style of text, whether fill in the text while drawing or stroke around
 *   the edges.
 * @see AnnotatedString
 * @see TextStyle
 * @see ParagraphStyle
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textSpanStyle")))
@interface CSDKUi_textSpanStyle : CSDKBase <CSDKUi_textAnnotatedStringAnnotation>

/**
 * Styling configuration for a text span. This configuration only allows character level
 * styling, in order to set paragraph level styling such as line height, or text alignment
 * please see [ParagraphStyle].
 *
 * @sample androidx.compose.ui.text.samples.SpanStyleSample
 * @sample androidx.compose.ui.text.samples.AnnotatedStringBuilderSample
 * @param color The color to draw the text.
 * @param fontSize The size of glyphs (in logical pixels) to use when painting the text. This
 *   may be [TextUnit.Unspecified] for inheriting from another [SpanStyle].
 * @param fontWeight The typeface thickness to use when painting the text (e.g., bold).
 * @param fontStyle The typeface variant to use when drawing the letters (e.g., italic).
 * @param fontSynthesis Whether to synthesize font weight and/or style when the requested weight
 *   or style cannot be found in the provided font family.
 * @param fontFamily The font family to be used when rendering the text.
 * @param fontFeatureSettings The advanced typography settings provided by font. The format is
 *   the same as the CSS font-feature-settings attribute:
 *   https://www.w3.org/TR/css-fonts-3/#font-feature-settings-prop
 * @param letterSpacing The amount of space (in em) to add between each letter.
 * @param baselineShift The amount by which the text is shifted up from the current baseline.
 * @param textGeometricTransform The geometric transformation applied the text.
 * @param localeList The locale list used to select region-specific glyphs.
 * @param background The background color for the text.
 * @param textDecoration The decorations to paint on the text (e.g., an underline).
 * @param shadow The shadow effect applied on the text.
 * @param platformStyle Platform specific [SpanStyle] parameters.
 * @param drawStyle Drawing style of text, whether fill in the text while drawing or stroke
 *   around the edges.
 * @see AnnotatedString
 * @see TextStyle
 * @see ParagraphStyle
 */
- (instancetype)initWithColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(CSDKUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(CSDKUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(CSDKUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(CSDKUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(CSDKUi_textTextDecoration * _Nullable)textDecoration shadow:(CSDKUi_graphicsShadow * _Nullable)shadow platformStyle:(CSDKUi_textPlatformSpanStyle * _Nullable)platformStyle drawStyle:(CSDKUi_graphicsDrawStyle * _Nullable)drawStyle __attribute__((swift_name("init(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:drawStyle:)"))) __attribute__((objc_designated_initializer));

/**
 * Styling configuration for a text span. This configuration only allows character level
 * styling, in order to set paragraph level styling such as line height, or text alignment
 * please see [ParagraphStyle].
 *
 * @sample androidx.compose.ui.text.samples.SpanStyleBrushSample
 * @sample androidx.compose.ui.text.samples.AnnotatedStringBuilderSample
 * @param brush The brush to use when painting the text. If brush is given as null, it will be
 *   treated as unspecified. It is equivalent to calling the alternative color constructor with
 *   [Color.Unspecified]
 * @param alpha Opacity to be applied to [brush] from 0.0f to 1.0f representing fully
 *   transparent to fully opaque respectively.
 * @param fontSize The size of glyphs (in logical pixels) to use when painting the text. This
 *   may be [TextUnit.Unspecified] for inheriting from another [SpanStyle].
 * @param fontWeight The typeface thickness to use when painting the text (e.g., bold).
 * @param fontStyle The typeface variant to use when drawing the letters (e.g., italic).
 * @param fontSynthesis Whether to synthesize font weight and/or style when the requested weight
 *   or style cannot be found in the provided font family.
 * @param fontFamily The font family to be used when rendering the text.
 * @param fontFeatureSettings The advanced typography settings provided by font. The format is
 *   the same as the CSS font-feature-settings attribute:
 *   https://www.w3.org/TR/css-fonts-3/#font-feature-settings-prop
 * @param letterSpacing The amount of space (in em) to add between each letter.
 * @param baselineShift The amount by which the text is shifted up from the current baseline.
 * @param textGeometricTransform The geometric transformation applied the text.
 * @param localeList The locale list used to select region-specific glyphs.
 * @param background The background color for the text.
 * @param textDecoration The decorations to paint on the text (e.g., an underline).
 * @param shadow The shadow effect applied on the text.
 * @param platformStyle Platform specific [SpanStyle] parameters.
 * @param drawStyle Drawing style of text, whether fill in the text while drawing or stroke
 *   around the edges.
 * @see AnnotatedString
 * @see TextStyle
 * @see ParagraphStyle
 */
- (instancetype)initWithBrush:(CSDKUi_graphicsBrush * _Nullable)brush alpha:(float)alpha fontSize:(int64_t)fontSize fontWeight:(CSDKUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(CSDKUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(CSDKUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(CSDKUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(CSDKUi_textTextDecoration * _Nullable)textDecoration shadow:(CSDKUi_graphicsShadow * _Nullable)shadow platformStyle:(CSDKUi_textPlatformSpanStyle * _Nullable)platformStyle drawStyle:(CSDKUi_graphicsDrawStyle * _Nullable)drawStyle __attribute__((swift_name("init(brush:alpha:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:drawStyle:)"))) __attribute__((objc_designated_initializer));
- (CSDKUi_textSpanStyle *)doCopyColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(CSDKUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(CSDKUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(CSDKUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(CSDKUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(CSDKUi_textTextDecoration * _Nullable)textDecoration shadow:(CSDKUi_graphicsShadow * _Nullable)shadow platformStyle:(CSDKUi_textPlatformSpanStyle * _Nullable)platformStyle drawStyle:(CSDKUi_graphicsDrawStyle * _Nullable)drawStyle __attribute__((swift_name("doCopy(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:drawStyle:)")));
- (CSDKUi_textSpanStyle *)doCopyBrush:(CSDKUi_graphicsBrush * _Nullable)brush alpha:(float)alpha fontSize:(int64_t)fontSize fontWeight:(CSDKUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(CSDKUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(CSDKUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(CSDKUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(CSDKUi_textTextDecoration * _Nullable)textDecoration shadow:(CSDKUi_graphicsShadow * _Nullable)shadow platformStyle:(CSDKUi_textPlatformSpanStyle * _Nullable)platformStyle drawStyle:(CSDKUi_graphicsDrawStyle * _Nullable)drawStyle __attribute__((swift_name("doCopy(brush:alpha:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:drawStyle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Returns a new span style that is a combination of this style and the given [other] style.
 *
 * [other] span style's null or inherit properties are replaced with the non-null properties of
 * this span style. Another way to think of it is that the "missing" properties of the [other]
 * style are _filled_ by the properties of this style.
 *
 * If the given span style is null, returns this span style.
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textSpanStyle *)mergeOther:(CSDKUi_textSpanStyle * _Nullable)other __attribute__((swift_name("merge(other:)")));

/** Plus operator overload that applies a [merge].
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_textSpanStyle *)plusOther:(CSDKUi_textSpanStyle *)other __attribute__((swift_name("plus(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Opacity of text. This value is either provided along side Brush, or via alpha channel in
 * color.
 */
@property (readonly) float alpha __attribute__((swift_name("alpha")));
@property (readonly) uint64_t background __attribute__((swift_name("background")));
@property (readonly) id _Nullable baselineShift __attribute__((swift_name("baselineShift")));

/** Brush to draw text. If not null, overrides [color]. */
@property (readonly) CSDKUi_graphicsBrush * _Nullable brush __attribute__((swift_name("brush")));

/** Color to draw text. */
@property (readonly) uint64_t color __attribute__((swift_name("color")));
@property (readonly) CSDKUi_graphicsDrawStyle * _Nullable drawStyle __attribute__((swift_name("drawStyle")));
@property (readonly) CSDKUi_textFontFamily * _Nullable fontFamily __attribute__((swift_name("fontFamily")));
@property (readonly) NSString * _Nullable fontFeatureSettings __attribute__((swift_name("fontFeatureSettings")));
@property (readonly) int64_t fontSize __attribute__((swift_name("fontSize")));
@property (readonly) id _Nullable fontStyle __attribute__((swift_name("fontStyle")));
@property (readonly) id _Nullable fontSynthesis __attribute__((swift_name("fontSynthesis")));
@property (readonly) CSDKUi_textFontWeight * _Nullable fontWeight __attribute__((swift_name("fontWeight")));
@property (readonly) int64_t letterSpacing __attribute__((swift_name("letterSpacing")));
@property (readonly) CSDKUi_textLocaleList * _Nullable localeList __attribute__((swift_name("localeList")));
@property (readonly) CSDKUi_textPlatformSpanStyle * _Nullable platformStyle __attribute__((swift_name("platformStyle")));
@property (readonly) CSDKUi_graphicsShadow * _Nullable shadow __attribute__((swift_name("shadow")));
@property (readonly) CSDKUi_textTextDecoration * _Nullable textDecoration __attribute__((swift_name("textDecoration")));
@property (readonly) CSDKUi_textTextGeometricTransform * _Nullable textGeometricTransform __attribute__((swift_name("textGeometricTransform")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol CSDKKotlinCoroutineContextElement <CSDKKotlinCoroutineContext>
@required
@property (readonly) id<CSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol CSDKKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface CSDKKtor_client_coreHttpRequestData : CSDKBase
- (instancetype)initWithUrl:(CSDKKtor_httpUrl *)url method:(CSDKKtor_httpHttpMethod *)method headers:(id<CSDKKtor_httpHeaders>)headers body:(CSDKKtor_httpOutgoingContent *)body executionContext:(id<CSDKKotlinx_coroutines_coreJob>)executionContext attributes:(id<CSDKKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<CSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CSDKKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<CSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<CSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface CSDKKtor_client_coreHttpResponseData : CSDKBase
- (instancetype)initWithStatusCode:(CSDKKtor_httpHttpStatusCode *)statusCode requestTime:(CSDKKtor_utilsGMTDate *)requestTime headers:(id<CSDKKtor_httpHeaders>)headers version:(CSDKKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<CSDKKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<CSDKKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<CSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) CSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) CSDKKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) CSDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface CSDKKotlinAbstractCoroutineContextElement : CSDKBase <CSDKKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<CSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol CSDKKotlinContinuationInterceptor <CSDKKotlinCoroutineContextElement>
@required
- (id<CSDKKotlinContinuation>)interceptContinuationContinuation:(id<CSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<CSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface CSDKKotlinx_coroutines_coreCoroutineDispatcher : CSDKKotlinAbstractCoroutineContextElement <CSDKKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<CSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<CSDKKotlinCoroutineContext>)context block:(id<CSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<CSDKKotlinCoroutineContext>)context block:(id<CSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<CSDKKotlinContinuation>)interceptContinuationContinuation:(id<CSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<CSDKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (CSDKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (CSDKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(CSDKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<CSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface CSDKKtor_client_coreProxyConfig : CSDKBase
- (instancetype)initWithUrl:(CSDKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol CSDKKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(CSDKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) CSDKKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface CSDKKtor_utilsAttributeKey<T> : CSDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface CSDKKtor_eventsEventDefinition<T> : CSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol CSDKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface CSDKKtor_utilsPipelinePhase : CSDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol CSDKKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol CSDKKotlinSuspendFunction2 <CSDKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface CSDKKtor_client_coreHttpReceivePipelinePhases : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) CSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) CSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol CSDKKtor_httpHttpMessage
@required
@property (readonly) id<CSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface CSDKKtor_client_coreHttpResponse : CSDKBase <CSDKKtor_httpHttpMessage, CSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<CSDKKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) CSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) CSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) CSDKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) CSDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CSDKKotlinUnit : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface CSDKKtor_client_coreHttpRequestPipelinePhases : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) CSDKKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) CSDKKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) CSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) CSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol CSDKKtor_httpHttpMessageBuilder
@required
@property (readonly) CSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface CSDKKtor_client_coreHttpRequestBuilder : CSDKBase <CSDKKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CSDKKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (CSDKKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<CSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<CSDKKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<CSDKKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (CSDKKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(CSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (CSDKKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(CSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(CSDKKtor_httpURLBuilder *, CSDKKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<CSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property CSDKKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<CSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) CSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property CSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CSDKKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface CSDKKtor_client_coreHttpResponsePipelinePhases : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) CSDKKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) CSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) CSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) CSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface CSDKKtor_client_coreHttpResponseContainer : CSDKBase
- (instancetype)initWithExpectedType:(CSDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (CSDKKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(CSDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface CSDKKtor_client_coreHttpClientCall : CSDKBase <CSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(CSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(CSDKKtor_client_coreHttpClient *)client requestData:(CSDKKtor_client_coreHttpRequestData *)requestData responseData:(CSDKKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(CSDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(CSDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<CSDKKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<CSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CSDKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<CSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<CSDKKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property CSDKKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface CSDKKtor_client_coreHttpSendPipelinePhases : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) CSDKKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) CSDKKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) CSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) CSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CSDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CSDKKotlinKClass>)kClass provider:(id<CSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<CSDKKotlinx_serialization_coreKSerializer>> *typeArgumentsSerializers))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<CSDKKotlinKClass>)kClass serializer:(id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CSDKKotlinKClass>)baseClass actualClass:(id<CSDKKotlinKClass>)actualClass actualSerializer:(id<CSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<CSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<CSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<CSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<CSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<CSDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id value))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CSDKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CSDKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol CSDKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol CSDKKotlinKClass <CSDKKotlinKDeclarationContainer, CSDKKotlinKAnnotatedElement, CSDKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface CSDKKotlinx_serialization_jsonJsonElementCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<CSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface CSDKKotlinx_serialization_jsonClassDiscriminatorMode : CSDKKotlinEnum<CSDKKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) CSDKKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) CSDKKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (CSDKKotlinArray<CSDKKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol CSDKKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CSDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<CSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol CSDKKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CSDKKotlinx_serialization_coreSerialKind : CSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CSDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<CSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CSDKKotlinNothing : CSDKBase
@end

__attribute__((swift_name("LibraryQualifier")))
@protocol CSDKLibraryQualifier
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontWeight.Companion")))
@interface CSDKUi_textFontWeightCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textFontWeightCompanion *shared __attribute__((swift_name("shared")));

/** Alias for [W900]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *Black __attribute__((swift_name("Black")));

/** A commonly used font weight that is heavier than normal - alias for [W700]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *Bold __attribute__((swift_name("Bold")));

/** Alias for [W800]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *ExtraBold __attribute__((swift_name("ExtraBold")));

/** Alias for [W200]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *ExtraLight __attribute__((swift_name("ExtraLight")));

/** Alias for [W300]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *Light __attribute__((swift_name("Light")));

/** Alias for [W500]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *Medium __attribute__((swift_name("Medium")));

/** The default font weight - alias for [W400]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *Normal __attribute__((swift_name("Normal")));

/** Alias for [W600]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *SemiBold __attribute__((swift_name("SemiBold")));

/** Alias for [W100]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *Thin __attribute__((swift_name("Thin")));

/** [Thin]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *W100 __attribute__((swift_name("W100")));

/** [ExtraLight]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *W200 __attribute__((swift_name("W200")));

/** [Light]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *W300 __attribute__((swift_name("W300")));

/** [Normal] / regular / plain
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *W400 __attribute__((swift_name("W400")));

/** [Medium]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *W500 __attribute__((swift_name("W500")));

/** [SemiBold]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *W600 __attribute__((swift_name("W600")));

/** [Bold]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *W700 __attribute__((swift_name("W700")));

/** [ExtraBold]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *W800 __attribute__((swift_name("W800")));

/** [Black]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textFontWeight *W900 __attribute__((swift_name("W900")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontFamily.Companion")))
@interface CSDKUi_textFontFamilyCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textFontFamilyCompanion *shared __attribute__((swift_name("shared")));

/**
 * Cursive, hand-written like font family.
 *
 * If the device doesn't support this font family, the system will fallback to the default
 * font.
 *
 * @sample androidx.compose.ui.text.samples.FontFamilyCursiveSample
 *
 * See [CSS cursive](https://www.w3.org/TR/css-fonts-3/#cursive)
 */
@property (readonly) CSDKUi_textGenericFontFamily *Cursive __attribute__((swift_name("Cursive")));

/** The platform default font. */
@property (readonly) CSDKUi_textSystemFontFamily *Default __attribute__((swift_name("Default")));

/**
 * Font family where glyphs have the same fixed width.
 *
 * @sample androidx.compose.ui.text.samples.FontFamilyMonospaceSample
 *
 * See [CSS monospace](https://www.w3.org/TR/css-fonts-3/#monospace)
 */
@property (readonly) CSDKUi_textGenericFontFamily *Monospace __attribute__((swift_name("Monospace")));

/**
 * Font family with low contrast and plain stroke endings.
 *
 * @sample androidx.compose.ui.text.samples.FontFamilySansSerifSample
 *
 * See [CSS sans-serif](https://www.w3.org/TR/css-fonts-3/#sans-serif)
 */
@property (readonly) CSDKUi_textGenericFontFamily *SansSerif __attribute__((swift_name("SansSerif")));

/**
 * The formal text style for scripts.
 *
 * @sample androidx.compose.ui.text.samples.FontFamilySerifSample
 *
 * See [CSS serif](https://www.w3.org/TR/css-fonts-3/#serif)
 */
@property (readonly) CSDKUi_textGenericFontFamily *Serif __attribute__((swift_name("Serif")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextGeometricTransform.Companion")))
@interface CSDKUi_textTextGeometricTransformCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textTextGeometricTransformCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * A `Locale` object represents a specific geographical, political, or cultural region. An operation
 * that requires a `Locale` to perform its task is called _locale-sensitive_ and uses the `Locale`
 * to tailor information for the user. For example, displaying a number is a locale-sensitive
 * operation— the number should be formatted according to the customs and conventions of the user's
 * native country, region, or culture.
 *
 * @param platformLocale Platform specific Locale object that provides the actual values for the
 *   members of this class.
 * @see TextStyle
 * @see SpanStyle
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLocale")))
@interface CSDKUi_textLocale : CSDKBase

/**
 * Create Locale object from a language tag.
 *
 * @param languageTag A [IETF BCP47](https://tools.ietf.org/html/bcp47) compliant language tag.
 * @return a locale object
 */
- (instancetype)initWithLanguageTag:(NSString *)languageTag __attribute__((swift_name("init(languageTag:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKUi_textLocaleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Returns a IETF BCP47 compliant language tag representation of this Locale.
 *
 * @return A IETF BCP47 compliant language tag.
 */
- (NSString *)toLanguageTag __attribute__((swift_name("toLanguageTag()")));
- (NSString *)description __attribute__((swift_name("description()")));

/** The ISO 639 compliant language code. */
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSLocale *platformLocale __attribute__((swift_name("platformLocale")));

/** The ISO 3166 compliant region code. */
@property (readonly) NSString *region __attribute__((swift_name("region")));

/** The ISO 15924 compliant 4-letter script code. */
@property (readonly) NSString *script __attribute__((swift_name("script")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLocaleList.Companion")))
@interface CSDKUi_textLocaleListCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textLocaleListCompanion *shared __attribute__((swift_name("shared")));

/**
 * An empty instance of [LocaleList]. Usually used to reference a lack of explicit [Locale]
 * configuration.
 */
@property (readonly) CSDKUi_textLocaleList *Empty __attribute__((swift_name("Empty")));

/** Returns Locale object which represents current locale */
@property (readonly) CSDKUi_textLocaleList *current __attribute__((swift_name("current")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextDecoration.Companion")))
@interface CSDKUi_textTextDecorationCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textTextDecorationCompanion *shared __attribute__((swift_name("shared")));

/**
 * Creates a decoration that includes all the given decorations.
 *
 * @sample androidx.compose.ui.text.samples.TextDecorationCombinedSample
 * @param decorations The decorations to be added
 */
- (CSDKUi_textTextDecoration *)combineDecorations:(NSArray<CSDKUi_textTextDecoration *> *)decorations __attribute__((swift_name("combine(decorations:)")));

/**
 * Construct a TextDecoration instance from the underlying [TextDecoration.mask]. This
 * method will attempt to avoid allocations in cases of well known decorations, but is not
 * guaranteed to not allocate.
 *
 * @param mask The integer representation of the TextDecoration.
 * @throws IllegalArgumentException if the [mask] is not recognized.
 * @see androidx.compose.ui.text.style.TextDecoration.mask
 */
- (CSDKUi_textTextDecoration *)valueOfMask:(int32_t)mask __attribute__((swift_name("valueOf(mask:)")));

/**
 * Draws a horizontal line over the text.
 *
 * @sample androidx.compose.ui.text.samples.TextDecorationLineThroughSample
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textTextDecoration *LineThrough __attribute__((swift_name("LineThrough")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textTextDecoration *None __attribute__((swift_name("None")));

/**
 * Draws a horizontal line below the text.
 *
 * @sample androidx.compose.ui.text.samples.TextDecorationUnderlineSample
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textTextDecoration *Underline __attribute__((swift_name("Underline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsShadow.Companion")))
@interface CSDKUi_graphicsShadowCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_graphicsShadowCompanion *shared __attribute__((swift_name("shared")));

/** Constant for no shadow.
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_graphicsShadow *None __attribute__((swift_name("None")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextIndent.Companion")))
@interface CSDKUi_textTextIndentCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textTextIndentCompanion *shared __attribute__((swift_name("shared")));

/** Constant fot no text indent.
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) CSDKUi_textTextIndent *None __attribute__((swift_name("None")));
@end


/**
 * Provides configuration options for behavior compatibility for SpanStyle.
 *
 * @param textDecorationLineStyle The style of the text decoration line. Note that this parameter is
 * relevant only if `textDecoration` is specified, for example in `TextStyle(textDecoration = )` or
 * in `SpanStyle(textDecoration = )`.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformSpanStyle")))
@interface CSDKUi_textPlatformSpanStyle : CSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTextDecorationLineStyle:(id _Nullable)textDecorationLineStyle __attribute__((swift_name("init(textDecorationLineStyle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKUi_textPlatformSpanStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (CSDKUi_textPlatformSpanStyle *)mergeOther:(CSDKUi_textPlatformSpanStyle * _Nullable)other __attribute__((swift_name("merge(other:)")));
@property (readonly) id _Nullable textDecorationLineStyle __attribute__((swift_name("textDecorationLineStyle")));
@end


/**
 * Provides configuration options for behavior compatibility for SpanStyle.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformParagraphStyle")))
@interface CSDKUi_textPlatformParagraphStyle : CSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithFontRasterizationSettings:(CSDKUi_textFontRasterizationSettings *)fontRasterizationSettings __attribute__((swift_name("init(fontRasterizationSettings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKUi_textPlatformParagraphStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (CSDKUi_textPlatformParagraphStyle *)mergeOther:(CSDKUi_textPlatformParagraphStyle * _Nullable)other __attribute__((swift_name("merge(other:)")));
@property (readonly) CSDKUi_textFontRasterizationSettings *fontRasterizationSettings __attribute__((swift_name("fontRasterizationSettings")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLineHeightStyle.Companion")))
@interface CSDKUi_textLineHeightStyleCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textLineHeightStyleCompanion *shared __attribute__((swift_name("shared")));

/**
 * The default configuration for [LineHeightStyle]:
 * - alignment = [Alignment.Proportional]
 * - trim = [Trim.Both]
 * - mode = [Mode.Fixed]
 */
@property (readonly) CSDKUi_textLineHeightStyle *Default __attribute__((swift_name("Default")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextMotion.Companion")))
@interface CSDKUi_textTextMotionCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textTextMotionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKUi_textTextMotion *Animated __attribute__((swift_name("Animated")));
@property (readonly) CSDKUi_textTextMotion *Static __attribute__((swift_name("Static")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsBrush.Companion")))
@interface CSDKUi_graphicsBrushCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_graphicsBrushCompanion *shared __attribute__((swift_name("shared")));

/**
 * Creates a composited result between 2 [Brush] instances and the specified BlendMode. The
 * specified destination and source [Brush] inputs will be consumed as the source and
 * destination images for the corresponding blending algorithm.
 *
 * @sample androidx.compose.ui.graphics.samples.CompositeShaderSample
 * @param dstBrush ShaderBrush used as the destination content
 * @param srcBrush ShaderBrush used as the source content
 * @param blendMode BlendMode used to composite the source against the destination shader
 * @see BlendMode
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsBrush *)compositeDstBrush:(CSDKUi_graphicsBrush *)dstBrush srcBrush:(CSDKUi_graphicsBrush *)srcBrush blendMode:(int32_t)blendMode __attribute__((swift_name("composite(dstBrush:srcBrush:blendMode:)")));

/**
 * Creates a horizontal gradient with the given colors dispersed at the provided offset
 * defined in the colorstop pair.
 *
 * Ex:
 * ```
 *  Brush.horizontalGradient(
 *      0.0f to Color.Red,
 *      0.3f to Color.Green,
 *      1.0f to Color.Blue,
 *      startX = 0.0f,
 *      endX = 100.0f
 * )
 * ```
 *
 * @sample androidx.compose.ui.graphics.samples.HorizontalGradientColorStopSample
 * @sample androidx.compose.ui.graphics.samples.GradientBrushSample
 * @param colorStops Colors and offsets to determine how the colors are dispersed throughout
 *   the vertical gradient
 * @param startX Starting x position of the horizontal gradient. Defaults to 0 which
 *   represents the left of the drawing area
 * @param endX Ending x position of the horizontal gradient. Defaults to
 *   [Float.POSITIVE_INFINITY] which indicates the right of the specified drawing area
 * @param tileMode Determines the behavior for how the shader is to fill a region outside
 *   its bounds. Defaults to [TileMode.Clamp] to repeat the edge pixels
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsBrush *)horizontalGradientColorStops:(CSDKKotlinArray<CSDKKotlinPair<CSDKFloat *, id> *> *)colorStops startX:(float)startX endX:(float)endX tileMode:(int32_t)tileMode __attribute__((swift_name("horizontalGradient(colorStops:startX:endX:tileMode:)")));

/**
 * Creates a horizontal gradient with the given colors evenly dispersed within the gradient
 *
 * Ex:
 * ```
 *  Brush.horizontalGradient(
 *      listOf(Color.Red, Color.Green, Color.Blue),
 *      startX = 10.0f,
 *      endX = 20.0f
 * )
 * ```
 *
 * @sample androidx.compose.ui.graphics.samples.HorizontalGradientSample
 * @sample androidx.compose.ui.graphics.samples.GradientBrushSample
 * @param colors colors Colors to be rendered as part of the gradient
 * @param startX Starting x position of the horizontal gradient. Defaults to 0 which
 *   represents the left of the drawing area
 * @param endX Ending x position of the horizontal gradient. Defaults to
 *   [Float.POSITIVE_INFINITY] which indicates the right of the specified drawing area
 * @param tileMode Determines the behavior for how the shader is to fill a region outside
 *   its bounds. Defaults to [TileMode.Clamp] to repeat the edge pixels
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsBrush *)horizontalGradientColors:(NSArray<id> *)colors startX:(float)startX endX:(float)endX tileMode:(int32_t)tileMode __attribute__((swift_name("horizontalGradient(colors:startX:endX:tileMode:)")));

/**
 * Creates a linear gradient with the provided colors along the given start and end
 * coordinates. The colors are dispersed at the provided offset defined in the colorstop
 * pair.
 *
 * ```
 *  Brush.linearGradient(
 *      0.0f to Color.Red,
 *      0.3f to Color.Green,
 *      1.0f to Color.Blue,
 *      start = Offset(0.0f, 50.0f),
 *      end = Offset(0.0f, 100.0f)
 * )
 * ```
 *
 * @sample androidx.compose.ui.graphics.samples.LinearGradientColorStopSample
 * @sample androidx.compose.ui.graphics.samples.GradientBrushSample
 * @param colorStops Colors and their offset in the gradient area
 * @param start Starting position of the linear gradient. This can be set to [Offset.Zero]
 *   to position at the far left and top of the drawing area
 * @param end Ending position of the linear gradient. This can be set to [Offset.Infinite]
 *   to position at the far right and bottom of the drawing area
 * @param tileMode Determines the behavior for how the shader is to fill a region outside
 *   its bounds. Defaults to [TileMode.Clamp] to repeat the edge pixels
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsBrush *)linearGradientColorStops:(CSDKKotlinArray<CSDKKotlinPair<CSDKFloat *, id> *> *)colorStops start:(int64_t)start end:(int64_t)end tileMode:(int32_t)tileMode __attribute__((swift_name("linearGradient(colorStops:start:end:tileMode:)")));

/**
 * Creates a linear gradient with the provided colors along the given start and end
 * coordinates. The colors are
 *
 * ```
 *  Brush.linearGradient(
 *      listOf(Color.Red, Color.Green, Color.Blue),
 *      start = Offset(0.0f, 50.0f),
 *      end = Offset(0.0f, 100.0f)
 * )
 * ```
 *
 * @sample androidx.compose.ui.graphics.samples.LinearGradientSample
 * @sample androidx.compose.ui.graphics.samples.GradientBrushSample
 * @param colors Colors to be rendered as part of the gradient
 * @param start Starting position of the linear gradient. This can be set to [Offset.Zero]
 *   to position at the far left and top of the drawing area
 * @param end Ending position of the linear gradient. This can be set to [Offset.Infinite]
 *   to position at the far right and bottom of the drawing area
 * @param tileMode Determines the behavior for how the shader is to fill a region outside
 *   its bounds. Defaults to [TileMode.Clamp] to repeat the edge pixels
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsBrush *)linearGradientColors:(NSArray<id> *)colors start:(int64_t)start end:(int64_t)end tileMode:(int32_t)tileMode __attribute__((swift_name("linearGradient(colors:start:end:tileMode:)")));

/**
 * Creates a radial gradient with the given colors at the provided offset defined in the
 * colorstop pair.
 *
 * ```
 * Brush.radialGradient(
 *      0.0f to Color.Red,
 *      0.3f to Color.Green,
 *      1.0f to Color.Blue,
 *      center = Offset(side1 / 2.0f, side2 / 2.0f),
 *      radius = side1 / 2.0f,
 *      tileMode = TileMode.Repeated
 * )
 * ```
 *
 * @sample androidx.compose.ui.graphics.samples.RadialBrushColorStopSample
 * @sample androidx.compose.ui.graphics.samples.GradientBrushSample
 * @param colorStops Colors and offsets to determine how the colors are dispersed throughout
 *   the radial gradient
 * @param center Center position of the radial gradient circle. If this is set to
 *   [Offset.Unspecified] then the center of the drawing area is used as the center for the
 *   radial gradient. [Float.POSITIVE_INFINITY] can be used for either [Offset.x] or
 *   [Offset.y] to indicate the far right or far bottom of the drawing area respectively.
 * @param radius Radius for the radial gradient. Defaults to positive infinity to indicate
 *   the largest radius that can fit within the bounds of the drawing area
 * @param tileMode Determines the behavior for how the shader is to fill a region outside
 *   its bounds. Defaults to [TileMode.Clamp] to repeat the edge pixels
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsBrush *)radialGradientColorStops:(CSDKKotlinArray<CSDKKotlinPair<CSDKFloat *, id> *> *)colorStops center:(int64_t)center radius:(float)radius tileMode:(int32_t)tileMode __attribute__((swift_name("radialGradient(colorStops:center:radius:tileMode:)")));

/**
 * Creates a radial gradient with the given colors evenly dispersed within the gradient
 *
 * ```
 * Brush.radialGradient(
 *      listOf(Color.Red, Color.Green, Color.Blue),
 *      center = Offset(side1 / 2.0f, side2 / 2.0f),
 *      radius = side1 / 2.0f,
 *      tileMode = TileMode.Repeated
 * )
 * ```
 *
 * @sample androidx.compose.ui.graphics.samples.RadialBrushSample
 * @sample androidx.compose.ui.graphics.samples.GradientBrushSample
 * @param colors Colors to be rendered as part of the gradient
 * @param center Center position of the radial gradient circle. If this is set to
 *   [Offset.Unspecified] then the center of the drawing area is used as the center for the
 *   radial gradient. [Float.POSITIVE_INFINITY] can be used for either [Offset.x] or
 *   [Offset.y] to indicate the far right or far bottom of the drawing area respectively.
 * @param radius Radius for the radial gradient. Defaults to positive infinity to indicate
 *   the largest radius that can fit within the bounds of the drawing area
 * @param tileMode Determines the behavior for how the shader is to fill a region outside
 *   its bounds. Defaults to [TileMode.Clamp] to repeat the edge pixels
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsBrush *)radialGradientColors:(NSArray<id> *)colors center:(int64_t)center radius:(float)radius tileMode:(int32_t)tileMode __attribute__((swift_name("radialGradient(colors:center:radius:tileMode:)")));

/**
 * Creates a sweep gradient with the given colors dispersed around the center with offsets
 * defined in each colorstop pair. The sweep begins relative to 3 o'clock and continues
 * clockwise until it reaches the starting position again.
 *
 * Ex:
 * ```
 *  Brush.sweepGradient(
 *      0.0f to Color.Red,
 *      0.3f to Color.Green,
 *      1.0f to Color.Blue,
 *      center = Offset(0.0f, 100.0f)
 * )
 * ```
 *
 * @sample androidx.compose.ui.graphics.samples.SweepGradientColorStopSample
 * @sample androidx.compose.ui.graphics.samples.GradientBrushSample
 * @param colorStops Colors and offsets to determine how the colors are dispersed throughout
 *   the sweep gradient
 * @param center Center position of the sweep gradient circle. If this is set to
 *   [Offset.Unspecified] then the center of the drawing area is used as the center for the
 *   sweep gradient
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsBrush *)sweepGradientColorStops:(CSDKKotlinArray<CSDKKotlinPair<CSDKFloat *, id> *> *)colorStops center:(int64_t)center __attribute__((swift_name("sweepGradient(colorStops:center:)")));

/**
 * Creates a sweep gradient with the given colors dispersed evenly around the center. The
 * sweep begins relative to 3 o'clock and continues clockwise until it reaches the starting
 * position again.
 *
 * Ex:
 * ```
 *  Brush.sweepGradient(
 *      listOf(Color.Red, Color.Green, Color.Blue),
 *      center = Offset(10.0f, 20.0f)
 * )
 * ```
 *
 * @sample androidx.compose.ui.graphics.samples.SweepGradientSample
 * @sample androidx.compose.ui.graphics.samples.GradientBrushSample
 * @param colors List of colors to fill the sweep gradient
 * @param center Center position of the sweep gradient circle. If this is set to
 *   [Offset.Unspecified] then the center of the drawing area is used as the center for the
 *   sweep gradient
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsBrush *)sweepGradientColors:(NSArray<id> *)colors center:(int64_t)center __attribute__((swift_name("sweepGradient(colors:center:)")));

/**
 * Creates a vertical gradient with the given colors at the provided offset defined in the
 * [Pair<Float, Color>]
 *
 * Ex:
 * ```
 *  Brush.verticalGradient(
 *      0.1f to Color.Red,
 *      0.3f to Color.Green,
 *      0.5f to Color.Blue,
 *      startY = 0.0f,
 *      endY = 100.0f
 * )
 * ```
 *
 * @sample androidx.compose.ui.graphics.samples.VerticalGradientColorStopSample
 * @sample androidx.compose.ui.graphics.samples.GradientBrushSample
 * @param colorStops Colors and offsets to determine how the colors are dispersed throughout
 *   the vertical gradient
 * @param startY Starting y position of the vertical gradient. Defaults to 0 which
 *   represents the top of the drawing area
 * @param endY Ending y position of the vertical gradient. Defaults to
 *   [Float.POSITIVE_INFINITY] which indicates the bottom of the specified drawing area
 * @param tileMode Determines the behavior for how the shader is to fill a region outside
 *   its bounds. Defaults to [TileMode.Clamp] to repeat the edge pixels
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsBrush *)verticalGradientColorStops:(CSDKKotlinArray<CSDKKotlinPair<CSDKFloat *, id> *> *)colorStops startY:(float)startY endY:(float)endY tileMode:(int32_t)tileMode __attribute__((swift_name("verticalGradient(colorStops:startY:endY:tileMode:)")));

/**
 * Creates a vertical gradient with the given colors evenly dispersed within the gradient
 * Ex:
 * ```
 *  Brush.verticalGradient(
 *      listOf(Color.Red, Color.Green, Color.Blue),
 *      startY = 0.0f,
 *      endY = 100.0f
 * )
 * ```
 *
 * @sample androidx.compose.ui.graphics.samples.VerticalGradientSample
 * @sample androidx.compose.ui.graphics.samples.GradientBrushSample
 * @param colors colors Colors to be rendered as part of the gradient
 * @param startY Starting y position of the vertical gradient. Defaults to 0 which
 *   represents the top of the drawing area
 * @param endY Ending y position of the vertical gradient. Defaults to
 *   [Float.POSITIVE_INFINITY] which indicates the bottom of the specified drawing area
 * @param tileMode Determines the behavior for how the shader is to fill a region outside
 *   its bounds. Defaults to [TileMode.Clamp] to repeat the edge pixels
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsBrush *)verticalGradientColors:(NSArray<id> *)colors startY:(float)startY endY:(float)endY tileMode:(int32_t)tileMode __attribute__((swift_name("verticalGradient(colors:startY:endY:tileMode:)")));
@end

__attribute__((swift_name("Ui_graphicsPaint")))
@protocol CSDKUi_graphicsPaint
@required
- (CSDKSkikoPaint *)asFrameworkPaint __attribute__((swift_name("asFrameworkPaint()")));

/**
 * Configures the alpha value between 0f to 1f representing fully transparent to fully opaque
 * for the color drawn with this Paint
 */
@property float alpha __attribute__((swift_name("alpha")));

/**
 * A blend mode to apply when a shape is drawn or a layer is composited. The source colors are
 * from the shape being drawn (e.g. from [Canvas.drawPath]) or layer being composited (the
 * graphics that were drawn between the [Canvas.saveLayer] and [Canvas.restore] calls), after
 * applying the [colorFilter], if any. The destination colors are from the background onto which
 * the shape or layer is being composited. Defaults to [BlendMode.SrcOver]. See also:
 * [Canvas.saveLayer], which uses its [Paint]'s [blendMode] to composite the layer when
 * [Canvas.restore] is called. [BlendMode], which discusses the user of [Canvas.saveLayer] with
 * [blendMode].
 */
@property int32_t blendMode __attribute__((swift_name("blendMode")));

/**
 * The color to use when stroking or filling a shape. Defaults to opaque black. See also:
 * [style], which controls whether to stroke or fill (or both). [colorFilter], which overrides
 * [color]. [shader], which overrides [color] with more elaborate effects. This color is not
 * used when compositing. To colorize a layer, use [colorFilter].
 */
@property uint64_t color __attribute__((swift_name("color")));

/**
 * A color filter to apply when a shape is drawn or when a layer is composited. See
 * [ColorFilter] for details. When a shape is being drawn, [colorFilter] overrides [color] and
 * [shader].
 */
@property CSDKUi_graphicsColorFilter * _Nullable colorFilter __attribute__((swift_name("colorFilter")));

/**
 * Controls the performance vs quality trade-off to use when applying when drawing images, as
 * with [Canvas.drawImageRect] Defaults to [FilterQuality.Low].
 */
@property int32_t filterQuality __attribute__((swift_name("filterQuality")));

/** Whether to apply anti-aliasing to lines and images drawn on the canvas. Defaults to true. */
@property BOOL isAntiAlias __attribute__((swift_name("isAntiAlias")));

/** Specifies the [PathEffect] applied to the geometry of the shape that is drawn */
@property id<CSDKUi_graphicsPathEffect> _Nullable pathEffect __attribute__((swift_name("pathEffect")));

/**
 * The shader to use when stroking or filling a shape.
 *
 * When this is null, the [color] is used instead.
 *
 * See also: [LinearGradientShader], [RadialGradientShader], or [SweepGradientShader] shaders
 * that paint a color gradient. [ImageShader], a shader that tiles an [ImageBitmap].
 * [colorFilter], which overrides [shader]. [color], which is used if [shader] and [colorFilter]
 * are null.
 */
@property CSDKSkikoShader * _Nullable shader __attribute__((swift_name("shader")));

/**
 * The kind of finish to place on the end of lines drawn when [style] is set to
 * [PaintingStyle.Stroke]. Defaults to [StrokeCap.Butt], i.e. no caps.
 */
@property int32_t strokeCap __attribute__((swift_name("strokeCap")));

/**
 * The kind of finish to place on the joins between segments. This applies to paths drawn when
 * [style] is set to [PaintingStyle.Stroke], It does not apply to points drawn as lines with
 * [Canvas.drawPoints]. Defaults to [StrokeJoin.Miter], i.e. sharp corners. See also
 * [strokeMiterLimit] to control when miters are replaced by bevels.
 */
@property int32_t strokeJoin __attribute__((swift_name("strokeJoin")));

/**
 * The limit for miters to be drawn on segments when the join is set to [StrokeJoin.Miter] and
 * the [style] is set to [PaintingStyle.Stroke]. If this limit is exceeded, then a
 * [StrokeJoin.Bevel] join will be drawn instead. This may cause some 'popping' of the corners
 * of a path if the angle between line segments is animated. This limit is expressed as a limit
 * on the length of the miter. Defaults to 4.0. Using zero as a limit will cause a
 * [StrokeJoin.Bevel] join to be used all the time.
 */
@property float strokeMiterLimit __attribute__((swift_name("strokeMiterLimit")));

/**
 * How wide to make edges drawn when [style] is set to [PaintingStyle.Stroke]. The width is
 * given in logical pixels measured in the direction orthogonal to the direction of the path.
 * Defaults to 0.0, which correspond to a hairline width.
 */
@property float strokeWidth __attribute__((swift_name("strokeWidth")));

/**
 * Whether to paint inside shapes, the edges of shapes, or both. Defaults to
 * [PaintingStyle.Fill].
 */
@property int32_t style __attribute__((swift_name("style")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface CSDKKtor_httpUrl : CSDKBase
@property (class, readonly, getter=companion) CSDKKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<CSDKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) CSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface CSDKKtor_httpHttpMethod : CSDKBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (CSDKKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol CSDKKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol CSDKKtor_httpHeaders <CSDKKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface CSDKKtor_httpOutgoingContent : CSDKBase
- (id _Nullable)getPropertyKey:(CSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(CSDKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<CSDKKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) CSDKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) CSDKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<CSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CSDKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol CSDKKotlinx_coroutines_coreJob <CSDKKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<CSDKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<CSDKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(CSDKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (CSDKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<CSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(CSDKKotlinThrowable * _Nullable cause))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<CSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(CSDKKotlinThrowable * _Nullable cause))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<CSDKKotlinx_coroutines_coreJob>)plusOther_:(id<CSDKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<CSDKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<CSDKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<CSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface CSDKKtor_httpHttpStatusCode : CSDKBase <CSDKKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(CSDKKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (CSDKKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (CSDKKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface CSDKKtor_utilsGMTDate : CSDKBase <CSDKKotlinComparable>
@property (class, readonly, getter=companion) CSDKKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(CSDKKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (CSDKKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(CSDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(CSDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) CSDKKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) CSDKKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface CSDKKtor_httpHttpProtocolVersion : CSDKBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (CSDKKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol CSDKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<CSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface CSDKKotlinAbstractCoroutineContextKey<B, E> : CSDKBase <CSDKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<CSDKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<CSDKKotlinCoroutineContextElement> element))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface CSDKKotlinx_coroutines_coreCoroutineDispatcherKey : CSDKKotlinAbstractCoroutineContextKey<id<CSDKKotlinContinuationInterceptor>, CSDKKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<CSDKKotlinCoroutineContextKey>)baseKey safeCast:(id<CSDKKotlinCoroutineContextElement> _Nullable (^)(id<CSDKKotlinCoroutineContextElement> element))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol CSDKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol CSDKKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(CSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(CSDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(CSDKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(CSDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(CSDKKtor_ioChunkBuffer *)dst completionHandler:(void (^)(CSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(CSDKKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(CSDKKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(CSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(CSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(CSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(CSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(CSDKByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(CSDKDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(CSDKFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(CSDKKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(CSDKKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(CSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(CSDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(CSDKKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(CSDKKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<CSDKKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(CSDKShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<CSDKKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<CSDKKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(CSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) CSDKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol CSDKKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<CSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<CSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<CSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface CSDKKtor_utilsStringValuesBuilderImpl : CSDKBase <CSDKKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<CSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<CSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<CSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) CSDKMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface CSDKKtor_httpHeadersBuilder : CSDKKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CSDKKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface CSDKKtor_client_coreHttpRequestBuilderCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface CSDKKtor_httpURLBuilder : CSDKBase
- (instancetype)initWithProtocol:(CSDKKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<CSDKKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (CSDKKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<CSDKKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<CSDKKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property CSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface CSDKKtor_utilsTypeInfo : CSDKBase
- (instancetype)initWithType:(id<CSDKKotlinKClass>)type reifiedType:(id<CSDKKotlinKType>)reifiedType kotlinType:(id<CSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (CSDKKtor_utilsTypeInfo *)doCopyType:(id<CSDKKotlinKClass>)type reifiedType:(id<CSDKKotlinKType>)reifiedType kotlinType:(id<CSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CSDKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<CSDKKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<CSDKKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface CSDKKtor_client_coreHttpClientCallCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol CSDKKtor_client_coreHttpRequest <CSDKKtor_httpHttpMessage, CSDKKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<CSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) CSDKKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) CSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/** A base class of [FontFamily]s installed on the system. */
__attribute__((swift_name("Ui_textSystemFontFamily")))
@interface CSDKUi_textSystemFontFamily : CSDKUi_textFontFamily
@end


/**
 * Defines a font family with a generic font family name.
 *
 * If the platform cannot find the passed generic font family, use the platform default one.
 *
 * @param name a generic font family name, e.g. "serif", "sans-serif"
 * @see FontFamily.SansSerif
 * @see FontFamily.Serif
 * @see FontFamily.Monospace
 * @see FontFamily.Cursive
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textGenericFontFamily")))
@interface CSDKUi_textGenericFontFamily : CSDKUi_textSystemFontFamily
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLocale.Companion")))
@interface CSDKUi_textLocaleCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textLocaleCompanion *shared __attribute__((swift_name("shared")));

/** Returns a [Locale] object which represents current locale */
@property (readonly) CSDKUi_textLocale *current __attribute__((swift_name("current")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformSpanStyle.Companion")))
@interface CSDKUi_textPlatformSpanStyleCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textPlatformSpanStyleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKUi_textPlatformSpanStyle *Default __attribute__((swift_name("Default")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontRasterizationSettings")))
@interface CSDKUi_textFontRasterizationSettings : CSDKBase
- (instancetype)initWithSmoothing:(CSDKUi_textFontSmoothing *)smoothing hinting:(CSDKUi_textFontHinting *)hinting subpixelPositioning:(BOOL)subpixelPositioning autoHintingForced:(BOOL)autoHintingForced __attribute__((swift_name("init(smoothing:hinting:subpixelPositioning:autoHintingForced:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKUi_textFontRasterizationSettingsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL autoHintingForced __attribute__((swift_name("autoHintingForced")));
@property (readonly) CSDKUi_textFontHinting *hinting __attribute__((swift_name("hinting")));
@property (readonly) CSDKUi_textFontSmoothing *smoothing __attribute__((swift_name("smoothing")));
@property (readonly) BOOL subpixelPositioning __attribute__((swift_name("subpixelPositioning")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformParagraphStyle.Companion")))
@interface CSDKUi_textPlatformParagraphStyleCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textPlatformParagraphStyleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKUi_textPlatformParagraphStyle *Default __attribute__((swift_name("Default")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface CSDKKotlinPair<__covariant A, __covariant B> : CSDKBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (CSDKKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((swift_name("SkikoNative")))
@interface CSDKSkikoNative : CSDKBase
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoNativeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("SkikoManaged")))
@interface CSDKSkikoManaged : CSDKSkikoNative
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
@property (readonly) BOOL isClosed __attribute__((swift_name("isClosed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaint")))
@interface CSDKSkikoPaint : CSDKSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoPaintCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)hasNothingToDraw __attribute__((swift_name("hasNothingToDraw()")));
- (CSDKSkikoPaint *)makeClone __attribute__((swift_name("makeClone()")));
- (CSDKSkikoPaint *)reset __attribute__((swift_name("reset()")));
- (CSDKSkikoPaint *)setARGBA:(int32_t)a r:(int32_t)r g:(int32_t)g b:(int32_t)b __attribute__((swift_name("setARGB(a:r:g:b:)")));
- (CSDKSkikoPaint *)setAlphafA:(float)a __attribute__((swift_name("setAlphaf(a:)")));
- (CSDKSkikoPaint *)setColor4fColor:(CSDKSkikoColor4f *)color colorSpace:(CSDKSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("setColor4f(color:colorSpace:)")));
- (CSDKSkikoPaint *)setStrokeValue:(BOOL)value __attribute__((swift_name("setStroke(value:)")));
@property int32_t alpha __attribute__((swift_name("alpha")));
@property (readonly) float alphaf __attribute__((swift_name("alphaf")));
@property CSDKSkikoBlendMode *blendMode __attribute__((swift_name("blendMode")));
@property int32_t color __attribute__((swift_name("color")));
@property CSDKSkikoColor4f *color4f __attribute__((swift_name("color4f")));
@property CSDKSkikoColorFilter * _Nullable colorFilter __attribute__((swift_name("colorFilter")));
@property CSDKSkikoImageFilter * _Nullable imageFilter __attribute__((swift_name("imageFilter")));
@property BOOL isAntiAlias __attribute__((swift_name("isAntiAlias")));
@property BOOL isDither __attribute__((swift_name("isDither")));
@property (readonly) BOOL isSrcOver __attribute__((swift_name("isSrcOver")));
@property CSDKSkikoMaskFilter * _Nullable maskFilter __attribute__((swift_name("maskFilter")));
@property CSDKSkikoPaintMode *mode __attribute__((swift_name("mode")));
@property CSDKSkikoPathEffect * _Nullable pathEffect __attribute__((swift_name("pathEffect")));
@property CSDKSkikoShader * _Nullable shader __attribute__((swift_name("shader")));
@property CSDKSkikoPaintStrokeCap *strokeCap __attribute__((swift_name("strokeCap")));
@property CSDKSkikoPaintStrokeJoin *strokeJoin __attribute__((swift_name("strokeJoin")));
@property float strokeMiter __attribute__((swift_name("strokeMiter")));
@property float strokeWidth __attribute__((swift_name("strokeWidth")));
@end


/** Effect used to modify the color of each pixel drawn on a [Paint] that it is installed on
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Ui_graphicsColorFilter")))
@interface CSDKUi_graphicsColorFilter : CSDKBase
@property (class, readonly, getter=companion) CSDKUi_graphicsColorFilterCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * Effect applied to the geometry of a drawing primitive. For example, this can be used to draw
 * shapes as a dashed or shaped pattern, or apply a treatment around line segment intersections.
 */
__attribute__((swift_name("Ui_graphicsPathEffect")))
@protocol CSDKUi_graphicsPathEffect
@required
@end

__attribute__((swift_name("SkikoRefCnt")))
@interface CSDKSkikoRefCnt : CSDKSkikoManaged

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t refCount __attribute__((swift_name("refCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShader")))
@interface CSDKSkikoShader : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoShaderCompanion *companion __attribute__((swift_name("companion")));
- (CSDKSkikoShader *)makeWithColorFilterFilter:(CSDKSkikoColorFilter * _Nullable)filter __attribute__((swift_name("makeWithColorFilter(filter:)")));
- (CSDKSkikoShader *)makeWithLocalMatrixLocalMatrix:(CSDKSkikoMatrix33 *)localMatrix __attribute__((swift_name("makeWithLocalMatrix(localMatrix:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface CSDKKtor_httpUrlCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol CSDKKtor_httpParameters <CSDKKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface CSDKKtor_httpURLProtocol : CSDKBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (CSDKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface CSDKKtor_httpHttpMethodCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<CSDKKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) CSDKKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) CSDKKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) CSDKKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) CSDKKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) CSDKKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) CSDKKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) CSDKKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol CSDKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface CSDKKtor_httpHeaderValueWithParameters : CSDKBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<CSDKKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface CSDKKtor_httpContentType : CSDKKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<CSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(CSDKKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (CSDKKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (CSDKKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol CSDKKotlinx_coroutines_coreChildHandle <CSDKKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(CSDKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<CSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol CSDKKotlinx_coroutines_coreChildJob <CSDKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<CSDKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol CSDKKotlinSequence
@required
- (id<CSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol CSDKKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) CSDKKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<CSDKKotlinx_coroutines_coreSelectInstance> select, id _Nullable param, id _Nullable internalResult))(CSDKKotlinThrowable *, id _Nullable, id<CSDKKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id clauseObject, id _Nullable param, id _Nullable clauseResult) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id clauseObject, id<CSDKKotlinx_coroutines_coreSelectInstance> select, id _Nullable param) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol CSDKKotlinx_coroutines_coreSelectClause0 <CSDKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface CSDKKtor_httpHttpStatusCodeCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) CSDKKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) CSDKKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) CSDKKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) CSDKKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) CSDKKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) CSDKKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) CSDKKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) CSDKKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) CSDKKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) CSDKKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) CSDKKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) CSDKKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) CSDKKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) CSDKKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) CSDKKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) CSDKKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) CSDKKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) CSDKKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) CSDKKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) CSDKKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) CSDKKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) CSDKKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) CSDKKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) CSDKKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) CSDKKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) CSDKKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) CSDKKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) CSDKKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) CSDKKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) CSDKKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) CSDKKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) CSDKKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) CSDKKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) CSDKKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) CSDKKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) CSDKKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) CSDKKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) CSDKKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) CSDKKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) CSDKKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) CSDKKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) CSDKKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) CSDKKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) CSDKKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) CSDKKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) CSDKKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) CSDKKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) CSDKKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) CSDKKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) CSDKKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) CSDKKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) CSDKKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) CSDKKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<CSDKKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface CSDKKtor_utilsGMTDateCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface CSDKKtor_utilsWeekDay : CSDKKotlinEnum<CSDKKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CSDKKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) CSDKKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) CSDKKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) CSDKKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) CSDKKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) CSDKKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) CSDKKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (CSDKKotlinArray<CSDKKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface CSDKKtor_utilsMonth : CSDKKotlinEnum<CSDKKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CSDKKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) CSDKKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) CSDKKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) CSDKKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) CSDKKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) CSDKKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) CSDKKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) CSDKKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) CSDKKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) CSDKKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) CSDKKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) CSDKKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (CSDKKotlinArray<CSDKKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface CSDKKtor_httpHttpProtocolVersionCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (CSDKKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) CSDKKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) CSDKKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) CSDKKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) CSDKKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) CSDKKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface CSDKKtor_ioMemory : CSDKBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(CSDKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(CSDKKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (CSDKKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (CSDKKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface CSDKKtor_ioBuffer : CSDKBase
- (instancetype)initWithMemory:(CSDKKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) CSDKKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (CSDKKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(CSDKKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) CSDKKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface CSDKKtor_ioChunkBuffer : CSDKKtor_ioBuffer
- (instancetype)initWithMemory:(CSDKKtor_ioMemory *)memory origin:(CSDKKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<CSDKKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(CSDKKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (CSDKKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (CSDKKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<CSDKKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) CSDKKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) CSDKKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface CSDKKtor_ioInput : CSDKBase <CSDKKtor_ioCloseable>
- (instancetype)initWithHead:(CSDKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<CSDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) CSDKKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (CSDKKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(CSDKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(CSDKKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(CSDKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<CSDKKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<CSDKKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<CSDKKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface CSDKKtor_ioByteReadPacket : CSDKKtor_ioInput
- (instancetype)initWithHead:(CSDKKtor_ioChunkBuffer *)head pool:(id<CSDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(CSDKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<CSDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (CSDKKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (CSDKKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(CSDKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol CSDKKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (CSDKKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol CSDKKotlinSuspendFunction1 <CSDKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol CSDKKotlinAppendable
@required

/**
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (id<CSDKKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));

/**
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (id<CSDKKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));

/**
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (id<CSDKKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface CSDKKtor_httpURLBuilderCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol CSDKKtor_httpParametersBuilder <CSDKKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol CSDKKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<CSDKKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<CSDKKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end


/**
 * Whether edge pixels draw opaque or with partial transparency.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontSmoothing")))
@interface CSDKUi_textFontSmoothing : CSDKKotlinEnum<CSDKUi_textFontSmoothing *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Whether edge pixels draw opaque or with partial transparency.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKUi_textFontSmoothing *none __attribute__((swift_name("none")));
@property (class, readonly) CSDKUi_textFontSmoothing *antialias __attribute__((swift_name("antialias")));
@property (class, readonly) CSDKUi_textFontSmoothing *subpixelantialias __attribute__((swift_name("subpixelantialias")));
+ (CSDKKotlinArray<CSDKUi_textFontSmoothing *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKUi_textFontSmoothing *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Level of glyph outline adjustment
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontHinting")))
@interface CSDKUi_textFontHinting : CSDKKotlinEnum<CSDKUi_textFontHinting *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Level of glyph outline adjustment
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKUi_textFontHinting *none __attribute__((swift_name("none")));
@property (class, readonly) CSDKUi_textFontHinting *slight __attribute__((swift_name("slight")));
@property (class, readonly) CSDKUi_textFontHinting *normal __attribute__((swift_name("normal")));
@property (class, readonly) CSDKUi_textFontHinting *full __attribute__((swift_name("full")));
+ (CSDKKotlinArray<CSDKUi_textFontHinting *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKUi_textFontHinting *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontRasterizationSettings.Companion")))
@interface CSDKUi_textFontRasterizationSettingsCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_textFontRasterizationSettingsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKUi_textFontRasterizationSettings *PlatformDefault __attribute__((swift_name("PlatformDefault")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoNative.Companion")))
@interface CSDKSkikoNativeCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoNativeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) void * _Nullable NullPointer __attribute__((swift_name("NullPointer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaint.Companion")))
@interface CSDKSkikoPaintCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoPaintCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColor4f")))
@interface CSDKSkikoColor4f : CSDKBase
- (instancetype)initWithRgba:(CSDKKotlinFloatArray *)rgba __attribute__((swift_name("init(rgba:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithC:(int32_t)c __attribute__((swift_name("init(c:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithR:(float)r g:(float)g b:(float)b a:(float)a __attribute__((swift_name("init(r:g:b:a:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoColor4fCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (CSDKKotlinFloatArray *)flatten __attribute__((swift_name("flatten()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (CSDKSkikoColor4f *)makeLerpOther:(CSDKSkikoColor4f *)other weight:(float)weight __attribute__((swift_name("makeLerp(other:weight:)")));
- (int32_t)toColor __attribute__((swift_name("toColor()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (CSDKSkikoColor4f *)withA_a:(float)_a __attribute__((swift_name("withA(_a:)")));
- (CSDKSkikoColor4f *)withB_b:(float)_b __attribute__((swift_name("withB(_b:)")));
- (CSDKSkikoColor4f *)withG_g:(float)_g __attribute__((swift_name("withG(_g:)")));
- (CSDKSkikoColor4f *)withR_r:(float)_r __attribute__((swift_name("withR(_r:)")));
@property (readonly) float a __attribute__((swift_name("a")));
@property (readonly) float b __attribute__((swift_name("b")));
@property (readonly) float g __attribute__((swift_name("g")));
@property (readonly) float r __attribute__((swift_name("r")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorSpace")))
@interface CSDKSkikoColorSpace : CSDKSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoColorSpaceCompanion *companion __attribute__((swift_name("companion")));
- (CSDKSkikoColor4f *)convertToColor:(CSDKSkikoColorSpace * _Nullable)toColor color:(CSDKSkikoColor4f *)color __attribute__((swift_name("convert(toColor:color:)")));
@property (readonly) BOOL isGammaCloseToSRGB __attribute__((swift_name("isGammaCloseToSRGB")));
@property (readonly) BOOL isGammaLinear __attribute__((swift_name("isGammaLinear")));
@property (readonly) BOOL isSRGB __attribute__((swift_name("isSRGB")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBlendMode")))
@interface CSDKSkikoBlendMode : CSDKKotlinEnum<CSDKSkikoBlendMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoBlendMode *clear __attribute__((swift_name("clear")));
@property (class, readonly) CSDKSkikoBlendMode *src __attribute__((swift_name("src")));
@property (class, readonly) CSDKSkikoBlendMode *dst __attribute__((swift_name("dst")));
@property (class, readonly) CSDKSkikoBlendMode *srcOver __attribute__((swift_name("srcOver")));
@property (class, readonly) CSDKSkikoBlendMode *dstOver __attribute__((swift_name("dstOver")));
@property (class, readonly) CSDKSkikoBlendMode *srcIn __attribute__((swift_name("srcIn")));
@property (class, readonly) CSDKSkikoBlendMode *dstIn __attribute__((swift_name("dstIn")));
@property (class, readonly) CSDKSkikoBlendMode *srcOut __attribute__((swift_name("srcOut")));
@property (class, readonly) CSDKSkikoBlendMode *dstOut __attribute__((swift_name("dstOut")));
@property (class, readonly) CSDKSkikoBlendMode *srcAtop __attribute__((swift_name("srcAtop")));
@property (class, readonly) CSDKSkikoBlendMode *dstAtop __attribute__((swift_name("dstAtop")));
@property (class, readonly) CSDKSkikoBlendMode *xor_ __attribute__((swift_name("xor_")));
@property (class, readonly) CSDKSkikoBlendMode *plus __attribute__((swift_name("plus")));
@property (class, readonly) CSDKSkikoBlendMode *modulate __attribute__((swift_name("modulate")));
@property (class, readonly) CSDKSkikoBlendMode *screen __attribute__((swift_name("screen")));
@property (class, readonly) CSDKSkikoBlendMode *overlay __attribute__((swift_name("overlay")));
@property (class, readonly) CSDKSkikoBlendMode *darken __attribute__((swift_name("darken")));
@property (class, readonly) CSDKSkikoBlendMode *lighten __attribute__((swift_name("lighten")));
@property (class, readonly) CSDKSkikoBlendMode *colorDodge __attribute__((swift_name("colorDodge")));
@property (class, readonly) CSDKSkikoBlendMode *colorBurn __attribute__((swift_name("colorBurn")));
@property (class, readonly) CSDKSkikoBlendMode *hardLight __attribute__((swift_name("hardLight")));
@property (class, readonly) CSDKSkikoBlendMode *softLight __attribute__((swift_name("softLight")));
@property (class, readonly) CSDKSkikoBlendMode *difference __attribute__((swift_name("difference")));
@property (class, readonly) CSDKSkikoBlendMode *exclusion __attribute__((swift_name("exclusion")));
@property (class, readonly) CSDKSkikoBlendMode *multiply __attribute__((swift_name("multiply")));
@property (class, readonly) CSDKSkikoBlendMode *hue __attribute__((swift_name("hue")));
@property (class, readonly) CSDKSkikoBlendMode *saturation __attribute__((swift_name("saturation")));
@property (class, readonly) CSDKSkikoBlendMode *color __attribute__((swift_name("color")));
@property (class, readonly) CSDKSkikoBlendMode *luminosity __attribute__((swift_name("luminosity")));
+ (CSDKKotlinArray<CSDKSkikoBlendMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoBlendMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorFilter")))
@interface CSDKSkikoColorFilter : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoColorFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageFilter")))
@interface CSDKSkikoImageFilter : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoImageFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMaskFilter")))
@interface CSDKSkikoMaskFilter : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoMaskFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaintMode")))
@interface CSDKSkikoPaintMode : CSDKKotlinEnum<CSDKSkikoPaintMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoPaintMode *fill __attribute__((swift_name("fill")));
@property (class, readonly) CSDKSkikoPaintMode *stroke __attribute__((swift_name("stroke")));
@property (class, readonly) CSDKSkikoPaintMode *strokeAndFill __attribute__((swift_name("strokeAndFill")));
+ (CSDKKotlinArray<CSDKSkikoPaintMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoPaintMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEffect")))
@interface CSDKSkikoPathEffect : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoPathEffectCompanion *companion __attribute__((swift_name("companion")));
- (CSDKSkikoPathEffect *)makeComposeInner:(CSDKSkikoPathEffect * _Nullable)inner __attribute__((swift_name("makeCompose(inner:)")));
- (CSDKSkikoPathEffect *)makeSumSecond:(CSDKSkikoPathEffect * _Nullable)second __attribute__((swift_name("makeSum(second:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaintStrokeCap")))
@interface CSDKSkikoPaintStrokeCap : CSDKKotlinEnum<CSDKSkikoPaintStrokeCap *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoPaintStrokeCap *butt __attribute__((swift_name("butt")));
@property (class, readonly) CSDKSkikoPaintStrokeCap *round __attribute__((swift_name("round")));
@property (class, readonly) CSDKSkikoPaintStrokeCap *square __attribute__((swift_name("square")));
+ (CSDKKotlinArray<CSDKSkikoPaintStrokeCap *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoPaintStrokeCap *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaintStrokeJoin")))
@interface CSDKSkikoPaintStrokeJoin : CSDKKotlinEnum<CSDKSkikoPaintStrokeJoin *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoPaintStrokeJoin *miter __attribute__((swift_name("miter")));
@property (class, readonly) CSDKSkikoPaintStrokeJoin *round __attribute__((swift_name("round")));
@property (class, readonly) CSDKSkikoPaintStrokeJoin *bevel __attribute__((swift_name("bevel")));
+ (CSDKKotlinArray<CSDKSkikoPaintStrokeJoin *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoPaintStrokeJoin *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsColorFilter.Companion")))
@interface CSDKUi_graphicsColorFilterCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKUi_graphicsColorFilterCompanion *shared __attribute__((swift_name("shared")));

/**
 * Create a [ColorFilter] that transforms colors through a 4x5 color matrix. This filter can
 * be used to change the saturation of pixels, convert from YUV to RGB, etc.
 *
 * @param colorMatrix ColorMatrix used to transform pixel values when drawn
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsColorFilter *)colorMatrixColorMatrix:(id)colorMatrix __attribute__((swift_name("colorMatrix(colorMatrix:)")));

/**
 * Create a [ColorFilter] that can be used to simulate simple lighting effects. A lighting
 * ColorFilter is defined by two parameters, one used to multiply the source color and one
 * used to add to the source color
 *
 * @param multiply Color used to multiply the source color when the color filter is applied.
 * @param add Color that will be added to the source color when the color filter is applied.
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsColorFilter *)lightingMultiply:(uint64_t)multiply add:(uint64_t)add __attribute__((swift_name("lighting(multiply:add:)")));

/**
 * Creates a color filter that applies the blend mode given as the second argument. The
 * source color is the one given as the first argument, and the destination color is the one
 * from the layer being composited.
 *
 * The output of this filter is then composited into the background according to the
 * [Paint.blendMode], using the output of this filter as the source and the background as
 * the destination.
 *
 * @param color Color used to blend source content
 * @param blendMode BlendMode used when compositing the tint color to the destination
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (CSDKUi_graphicsColorFilter *)tintColor:(uint64_t)color blendMode:(int32_t)blendMode __attribute__((swift_name("tint(color:blendMode:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShader.Companion")))
@interface CSDKSkikoShaderCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoShaderCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoShader *)makeBlendMode:(CSDKSkikoBlendMode *)mode dst:(CSDKSkikoShader * _Nullable)dst src:(CSDKSkikoShader * _Nullable)src __attribute__((swift_name("makeBlend(mode:dst:src:)")));
- (CSDKSkikoShader *)makeColorColor:(int32_t)color __attribute__((swift_name("makeColor(color:)")));
- (CSDKSkikoShader *)makeColorColor:(CSDKSkikoColor4f *)color space:(CSDKSkikoColorSpace * _Nullable)space __attribute__((swift_name("makeColor(color:space:)")));
- (CSDKSkikoShader *)makeEmpty __attribute__((swift_name("makeEmpty()")));
- (CSDKSkikoShader *)makeFractalNoiseBaseFrequencyX:(float)baseFrequencyX baseFrequencyY:(float)baseFrequencyY numOctaves:(int32_t)numOctaves seed:(float)seed tileSize:(CSDKSkikoISize *)tileSize __attribute__((swift_name("makeFractalNoise(baseFrequencyX:baseFrequencyY:numOctaves:seed:tileSize:)")));
- (CSDKSkikoShader *)makeLinearGradientP0:(CSDKSkikoPoint *)p0 p1:(CSDKSkikoPoint *)p1 colors:(CSDKKotlinIntArray *)colors __attribute__((swift_name("makeLinearGradient(p0:p1:colors:)")));
- (CSDKSkikoShader *)makeLinearGradientP0:(CSDKSkikoPoint *)p0 p1:(CSDKSkikoPoint *)p1 colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeLinearGradient(p0:p1:colors:positions:)")));
- (CSDKSkikoShader *)makeLinearGradientP0:(CSDKSkikoPoint *)p0 p1:(CSDKSkikoPoint *)p1 colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(p0:p1:colors:positions:style:)")));
- (CSDKSkikoShader *)makeLinearGradientP0:(CSDKSkikoPoint *)p0 p1:(CSDKSkikoPoint *)p1 colors:(CSDKKotlinArray<CSDKSkikoColor4f *> *)colors cs:(CSDKSkikoColorSpace * _Nullable)cs positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(p0:p1:colors:cs:positions:style:)")));
- (CSDKSkikoShader *)makeLinearGradientX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(x0:y0:x1:y1:colors:positions:style:)")));
- (CSDKSkikoShader *)makeLinearGradientX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 colors:(CSDKKotlinArray<CSDKSkikoColor4f *> *)colors cs:(CSDKSkikoColorSpace * _Nullable)cs positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(x0:y0:x1:y1:colors:cs:positions:style:)")));
- (CSDKSkikoShader *)makeRadialGradientCenter:(CSDKSkikoPoint *)center r:(float)r colors:(CSDKKotlinIntArray *)colors __attribute__((swift_name("makeRadialGradient(center:r:colors:)")));
- (CSDKSkikoShader *)makeRadialGradientCenter:(CSDKSkikoPoint *)center r:(float)r colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeRadialGradient(center:r:colors:positions:)")));
- (CSDKSkikoShader *)makeRadialGradientCenter:(CSDKSkikoPoint *)center r:(float)r colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(center:r:colors:positions:style:)")));
- (CSDKSkikoShader *)makeRadialGradientX:(float)x y:(float)y r:(float)r colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(x:y:r:colors:positions:style:)")));
- (CSDKSkikoShader *)makeRadialGradientCenter:(CSDKSkikoPoint *)center r:(float)r colors:(CSDKKotlinArray<CSDKSkikoColor4f *> *)colors cs:(CSDKSkikoColorSpace * _Nullable)cs positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(center:r:colors:cs:positions:style:)")));
- (CSDKSkikoShader *)makeRadialGradientX:(float)x y:(float)y r:(float)r colors:(CSDKKotlinArray<CSDKSkikoColor4f *> *)colors cs:(CSDKSkikoColorSpace * _Nullable)cs positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(x:y:r:colors:cs:positions:style:)")));
- (CSDKSkikoShader *)makeSweepGradientCenter:(CSDKSkikoPoint *)center colors:(CSDKKotlinIntArray *)colors __attribute__((swift_name("makeSweepGradient(center:colors:)")));
- (CSDKSkikoShader *)makeSweepGradientX:(float)x y:(float)y colors:(CSDKKotlinIntArray *)colors __attribute__((swift_name("makeSweepGradient(x:y:colors:)")));
- (CSDKSkikoShader *)makeSweepGradientCenter:(CSDKSkikoPoint *)center colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeSweepGradient(center:colors:positions:)")));
- (CSDKSkikoShader *)makeSweepGradientX:(float)x y:(float)y colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeSweepGradient(x:y:colors:positions:)")));
- (CSDKSkikoShader *)makeSweepGradientCenter:(CSDKSkikoPoint *)center colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(center:colors:positions:style:)")));
- (CSDKSkikoShader *)makeSweepGradientX:(float)x y:(float)y colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(x:y:colors:positions:style:)")));
- (CSDKSkikoShader *)makeSweepGradientCenter:(CSDKSkikoPoint *)center startAngle:(float)startAngle endAngle:(float)endAngle colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(center:startAngle:endAngle:colors:positions:style:)")));
- (CSDKSkikoShader *)makeSweepGradientX:(float)x y:(float)y startAngle:(float)startAngle endAngle:(float)endAngle colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(x:y:startAngle:endAngle:colors:positions:style:)")));
- (CSDKSkikoShader *)makeSweepGradientCenter:(CSDKSkikoPoint *)center startAngle:(float)startAngle endAngle:(float)endAngle colors:(CSDKKotlinArray<CSDKSkikoColor4f *> *)colors cs:(CSDKSkikoColorSpace * _Nullable)cs positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(center:startAngle:endAngle:colors:cs:positions:style:)")));
- (CSDKSkikoShader *)makeSweepGradientX:(float)x y:(float)y startAngle:(float)startAngle endAngle:(float)endAngle colors:(CSDKKotlinArray<CSDKSkikoColor4f *> *)colors cs:(CSDKSkikoColorSpace * _Nullable)cs positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(x:y:startAngle:endAngle:colors:cs:positions:style:)")));
- (CSDKSkikoShader *)makeTurbulenceBaseFrequencyX:(float)baseFrequencyX baseFrequencyY:(float)baseFrequencyY numOctaves:(int32_t)numOctaves seed:(float)seed tileSize:(CSDKSkikoISize *)tileSize __attribute__((swift_name("makeTurbulence(baseFrequencyX:baseFrequencyY:numOctaves:seed:tileSize:)")));
- (CSDKSkikoShader *)makeTwoPointConicalGradientP0:(CSDKSkikoPoint *)p0 r0:(float)r0 p1:(CSDKSkikoPoint *)p1 r1:(float)r1 colors:(CSDKKotlinIntArray *)colors __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:)")));
- (CSDKSkikoShader *)makeTwoPointConicalGradientP0:(CSDKSkikoPoint *)p0 r0:(float)r0 p1:(CSDKSkikoPoint *)p1 r1:(float)r1 colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:positions:)")));
- (CSDKSkikoShader *)makeTwoPointConicalGradientP0:(CSDKSkikoPoint *)p0 r0:(float)r0 p1:(CSDKSkikoPoint *)p1 r1:(float)r1 colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:positions:style:)")));
- (CSDKSkikoShader *)makeTwoPointConicalGradientP0:(CSDKSkikoPoint *)p0 r0:(float)r0 p1:(CSDKSkikoPoint *)p1 r1:(float)r1 colors:(CSDKKotlinArray<CSDKSkikoColor4f *> *)colors cs:(CSDKSkikoColorSpace * _Nullable)cs positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:cs:positions:style:)")));
- (CSDKSkikoShader *)makeTwoPointConicalGradientX0:(float)x0 y0:(float)y0 r0:(float)r0 x1:(float)x1 y1:(float)y1 r1:(float)r1 colors:(CSDKKotlinIntArray *)colors positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(x0:y0:r0:x1:y1:r1:colors:positions:style:)")));
- (CSDKSkikoShader *)makeTwoPointConicalGradientX0:(float)x0 y0:(float)y0 r0:(float)r0 x1:(float)x1 y1:(float)y1 r1:(float)r1 colors:(CSDKKotlinArray<CSDKSkikoColor4f *> *)colors cs:(CSDKSkikoColorSpace * _Nullable)cs positions:(CSDKKotlinFloatArray * _Nullable)positions style:(CSDKSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(x0:y0:r0:x1:y1:r1:colors:cs:positions:style:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix33")))
@interface CSDKSkikoMatrix33 : CSDKBase
- (instancetype)initWithMat:(CSDKKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoMatrix33Companion *companion __attribute__((swift_name("companion")));
- (CSDKSkikoMatrix44 *)asMatrix44 __attribute__((swift_name("asMatrix44()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (CSDKSkikoMatrix33 *)makeConcatOther:(CSDKSkikoMatrix33 *)other __attribute__((swift_name("makeConcat(other:)")));
- (CSDKSkikoMatrix33 *)makePreScaleSx:(float)sx sy:(float)sy __attribute__((swift_name("makePreScale(sx:sy:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface CSDKKtor_httpURLProtocolCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) CSDKKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) CSDKKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) CSDKKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) CSDKKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) CSDKKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, CSDKKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface CSDKKtor_httpHeaderValueParam : CSDKBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (CSDKKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface CSDKKtor_httpHeaderValueWithParametersCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<CSDKKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface CSDKKtor_httpContentTypeCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) CSDKKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol CSDKKotlinx_coroutines_coreParentJob <CSDKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (CSDKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol CSDKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<CSDKKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<CSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface CSDKKtor_utilsWeekDayCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (CSDKKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface CSDKKtor_utilsMonthCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (CSDKKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface CSDKKtor_ioMemoryCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface CSDKKtor_ioBufferCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol CSDKKtor_ioObjectPool <CSDKKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface CSDKKtor_ioChunkBufferCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<CSDKKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<CSDKKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface CSDKKtor_ioInputCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface CSDKKtor_ioByteReadPacketCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface CSDKKotlinKTypeProjection : CSDKBase
- (instancetype)initWithVariance:(CSDKKotlinKVariance * _Nullable)variance type:(id<CSDKKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (CSDKKotlinKTypeProjection *)doCopyVariance:(CSDKKotlinKVariance * _Nullable)variance type:(id<CSDKKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CSDKKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) CSDKKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface CSDKKotlinFloatArray : CSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CSDKFloat *(^)(CSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CSDKKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColor4f.Companion")))
@interface CSDKSkikoColor4fCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoColor4fCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKotlinFloatArray *)flattenArrayColors:(CSDKKotlinArray<CSDKSkikoColor4f *> *)colors __attribute__((swift_name("flattenArray(colors:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorSpace.Companion")))
@interface CSDKSkikoColorSpaceCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoColorSpaceCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKSkikoColorSpace *displayP3 __attribute__((swift_name("displayP3")));
@property (readonly) CSDKSkikoColorSpace *sRGB __attribute__((swift_name("sRGB")));
@property (readonly) CSDKSkikoColorSpace *sRGBLinear __attribute__((swift_name("sRGBLinear")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorFilter.Companion")))
@interface CSDKSkikoColorFilterCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoColorFilterCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoColorFilter *)makeBlendColor:(int32_t)color mode:(CSDKSkikoBlendMode *)mode __attribute__((swift_name("makeBlend(color:mode:)")));
- (CSDKSkikoColorFilter *)makeComposedOuter:(CSDKSkikoColorFilter * _Nullable)outer inner:(CSDKSkikoColorFilter * _Nullable)inner __attribute__((swift_name("makeComposed(outer:inner:)")));
- (CSDKSkikoColorFilter *)makeHSLAMatrixMatrix:(CSDKSkikoColorMatrix *)matrix __attribute__((swift_name("makeHSLAMatrix(matrix:)")));
- (CSDKSkikoColorFilter *)makeHighContrastGrayscale:(BOOL)grayscale mode:(CSDKSkikoInversionMode *)mode contrast:(float)contrast __attribute__((swift_name("makeHighContrast(grayscale:mode:contrast:)")));
- (CSDKSkikoColorFilter *)makeLerpDst:(CSDKSkikoColorFilter * _Nullable)dst src:(CSDKSkikoColorFilter * _Nullable)src t:(float)t __attribute__((swift_name("makeLerp(dst:src:t:)")));
- (CSDKSkikoColorFilter *)makeLightingColorMul:(int32_t)colorMul colorAdd:(int32_t)colorAdd __attribute__((swift_name("makeLighting(colorMul:colorAdd:)")));
- (CSDKSkikoColorFilter *)makeMatrixMatrix:(CSDKSkikoColorMatrix *)matrix __attribute__((swift_name("makeMatrix(matrix:)")));
- (CSDKSkikoColorFilter *)makeOverdrawColors:(CSDKKotlinIntArray *)colors __attribute__((swift_name("makeOverdraw(colors:)")));
- (CSDKSkikoColorFilter *)makeTableTable:(CSDKKotlinByteArray *)table __attribute__((swift_name("makeTable(table:)")));
- (CSDKSkikoColorFilter *)makeTableARGBA:(CSDKKotlinByteArray * _Nullable)a r:(CSDKKotlinByteArray * _Nullable)r g:(CSDKKotlinByteArray * _Nullable)g b:(CSDKKotlinByteArray * _Nullable)b __attribute__((swift_name("makeTableARGB(a:r:g:b:)")));
@property (readonly) CSDKSkikoColorFilter *luma __attribute__((swift_name("luma")));
@property (readonly) CSDKSkikoColorFilter *sRGBToLinearGamma __attribute__((swift_name("sRGBToLinearGamma")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageFilter.Companion")))
@interface CSDKSkikoImageFilterCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoImageFilterCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoImageFilter *)makeArithmeticK1:(float)k1 k2:(float)k2 k3:(float)k3 k4:(float)k4 enforcePMColor:(BOOL)enforcePMColor bg:(CSDKSkikoImageFilter * _Nullable)bg fg:(CSDKSkikoImageFilter * _Nullable)fg crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeArithmetic(k1:k2:k3:k4:enforcePMColor:bg:fg:crop:)")));
- (CSDKSkikoImageFilter *)makeBlendBlendMode:(CSDKSkikoBlendMode *)blendMode bg:(CSDKSkikoImageFilter * _Nullable)bg fg:(CSDKSkikoImageFilter * _Nullable)fg crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeBlend(blendMode:bg:fg:crop:)")));
- (CSDKSkikoImageFilter *)makeBlurSigmaX:(float)sigmaX sigmaY:(float)sigmaY mode:(CSDKSkikoFilterTileMode *)mode input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeBlur(sigmaX:sigmaY:mode:input:crop:)")));
- (CSDKSkikoImageFilter *)makeColorFilterF:(CSDKSkikoColorFilter * _Nullable)f input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeColorFilter(f:input:crop:)")));
- (CSDKSkikoImageFilter *)makeComposeOuter:(CSDKSkikoImageFilter * _Nullable)outer inner:(CSDKSkikoImageFilter * _Nullable)inner __attribute__((swift_name("makeCompose(outer:inner:)")));
- (CSDKSkikoImageFilter *)makeDilateRx:(float)rx ry:(float)ry input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDilate(rx:ry:input:crop:)")));
- (CSDKSkikoImageFilter *)makeDisplacementMapX:(CSDKSkikoColorChannel *)x y:(CSDKSkikoColorChannel *)y scale:(float)scale displacement:(CSDKSkikoImageFilter * _Nullable)displacement color:(CSDKSkikoImageFilter * _Nullable)color crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDisplacementMap(x:y:scale:displacement:color:crop:)")));
- (CSDKSkikoImageFilter *)makeDistantLitDiffuseX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale kd:(float)kd input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDistantLitDiffuse(x:y:z:lightColor:surfaceScale:kd:input:crop:)")));
- (CSDKSkikoImageFilter *)makeDistantLitSpecularX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale ks:(float)ks shininess:(float)shininess input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDistantLitSpecular(x:y:z:lightColor:surfaceScale:ks:shininess:input:crop:)")));
- (CSDKSkikoImageFilter *)makeDropShadowDx:(float)dx dy:(float)dy sigmaX:(float)sigmaX sigmaY:(float)sigmaY color:(int32_t)color input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDropShadow(dx:dy:sigmaX:sigmaY:color:input:crop:)")));
- (CSDKSkikoImageFilter *)makeDropShadowOnlyDx:(float)dx dy:(float)dy sigmaX:(float)sigmaX sigmaY:(float)sigmaY color:(int32_t)color input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDropShadowOnly(dx:dy:sigmaX:sigmaY:color:input:crop:)")));
- (CSDKSkikoImageFilter *)makeErodeRx:(float)rx ry:(float)ry input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeErode(rx:ry:input:crop:)")));
- (CSDKSkikoImageFilter *)makeImageImage:(CSDKSkikoImage *)image __attribute__((swift_name("makeImage(image:)")));
- (CSDKSkikoImageFilter *)makeImageImage:(CSDKSkikoImage * _Nullable)image src:(CSDKSkikoRect *)src dst:(CSDKSkikoRect *)dst mode:(id<CSDKSkikoSamplingMode>)mode __attribute__((swift_name("makeImage(image:src:dst:mode:)")));
- (CSDKSkikoImageFilter *)makeMagnifierR:(CSDKSkikoRect *)r zoomAmount:(float)zoomAmount inset:(float)inset samplingMode:(id<CSDKSkikoSamplingMode>)samplingMode input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeMagnifier(r:zoomAmount:inset:samplingMode:input:crop:)")));
- (CSDKSkikoImageFilter *)makeMatrixConvolutionKernelW:(int32_t)kernelW kernelH:(int32_t)kernelH kernel:(CSDKKotlinFloatArray * _Nullable)kernel gain:(float)gain bias:(float)bias offsetX:(int32_t)offsetX offsetY:(int32_t)offsetY tileMode:(CSDKSkikoFilterTileMode *)tileMode convolveAlpha:(BOOL)convolveAlpha input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeMatrixConvolution(kernelW:kernelH:kernel:gain:bias:offsetX:offsetY:tileMode:convolveAlpha:input:crop:)")));
- (CSDKSkikoImageFilter *)makeMatrixTransformMatrix:(CSDKSkikoMatrix33 *)matrix mode:(id<CSDKSkikoSamplingMode>)mode input:(CSDKSkikoImageFilter * _Nullable)input __attribute__((swift_name("makeMatrixTransform(matrix:mode:input:)")));
- (CSDKSkikoImageFilter *)makeMergeFilters:(CSDKKotlinArray<CSDKSkikoImageFilter *> *)filters crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeMerge(filters:crop:)")));
- (CSDKSkikoImageFilter *)makeOffsetDx:(float)dx dy:(float)dy input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeOffset(dx:dy:input:crop:)")));
- (CSDKSkikoImageFilter *)makePointLitDiffuseX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale kd:(float)kd input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makePointLitDiffuse(x:y:z:lightColor:surfaceScale:kd:input:crop:)")));
- (CSDKSkikoImageFilter *)makePointLitSpecularX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale ks:(float)ks shininess:(float)shininess input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makePointLitSpecular(x:y:z:lightColor:surfaceScale:ks:shininess:input:crop:)")));
- (CSDKSkikoImageFilter *)makeRuntimeShaderRuntimeShaderBuilder:(CSDKSkikoRuntimeShaderBuilder *)runtimeShaderBuilder shaderNames:(CSDKKotlinArray<NSString *> *)shaderNames inputs:(CSDKKotlinArray<CSDKSkikoImageFilter *> *)inputs __attribute__((swift_name("makeRuntimeShader(runtimeShaderBuilder:shaderNames:inputs:)")));
- (CSDKSkikoImageFilter *)makeRuntimeShaderRuntimeShaderBuilder:(CSDKSkikoRuntimeShaderBuilder *)runtimeShaderBuilder shaderName:(NSString *)shaderName input:(CSDKSkikoImageFilter * _Nullable)input __attribute__((swift_name("makeRuntimeShader(runtimeShaderBuilder:shaderName:input:)")));
- (CSDKSkikoImageFilter *)makeShaderShader:(CSDKSkikoShader *)shader dither:(BOOL)dither crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeShader(shader:dither:crop:)")));
- (CSDKSkikoImageFilter *)makeSpotLitDiffuseX0:(float)x0 y0:(float)y0 z0:(float)z0 x1:(float)x1 y1:(float)y1 z1:(float)z1 falloffExponent:(float)falloffExponent cutoffAngle:(float)cutoffAngle lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale kd:(float)kd input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeSpotLitDiffuse(x0:y0:z0:x1:y1:z1:falloffExponent:cutoffAngle:lightColor:surfaceScale:kd:input:crop:)")));
- (CSDKSkikoImageFilter *)makeSpotLitSpecularX0:(float)x0 y0:(float)y0 z0:(float)z0 x1:(float)x1 y1:(float)y1 z1:(float)z1 falloffExponent:(float)falloffExponent cutoffAngle:(float)cutoffAngle lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale ks:(float)ks shininess:(float)shininess input:(CSDKSkikoImageFilter * _Nullable)input crop:(CSDKSkikoIRect * _Nullable)crop __attribute__((swift_name("makeSpotLitSpecular(x0:y0:z0:x1:y1:z1:falloffExponent:cutoffAngle:lightColor:surfaceScale:ks:shininess:input:crop:)")));
- (CSDKSkikoImageFilter *)makeTileSrc:(CSDKSkikoRect *)src dst:(CSDKSkikoRect *)dst input:(CSDKSkikoImageFilter * _Nullable)input __attribute__((swift_name("makeTile(src:dst:input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMaskFilter.Companion")))
@interface CSDKSkikoMaskFilterCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoMaskFilterCompanion *shared __attribute__((swift_name("shared")));
- (float)convertRadiusToSigmaRadius:(float)radius __attribute__((swift_name("convertRadiusToSigma(radius:)")));
- (float)convertSigmaToRadiusSigma:(float)sigma __attribute__((swift_name("convertSigmaToRadius(sigma:)")));
- (CSDKSkikoMaskFilter *)makeBlurMode:(CSDKSkikoFilterBlurMode *)mode sigma:(float)sigma respectCTM:(BOOL)respectCTM __attribute__((swift_name("makeBlur(mode:sigma:respectCTM:)")));
- (CSDKSkikoMaskFilter *)makeClipMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("makeClip(min:max:)")));
- (CSDKSkikoMaskFilter *)makeGammaGamma:(float)gamma __attribute__((swift_name("makeGamma(gamma:)")));
- (CSDKSkikoMaskFilter *)makeShaderS:(CSDKSkikoShader * _Nullable)s __attribute__((swift_name("makeShader(s:)")));
- (CSDKSkikoMaskFilter *)makeTableTable:(CSDKKotlinByteArray *)table __attribute__((swift_name("makeTable(table:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEffect.Companion")))
@interface CSDKSkikoPathEffectCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoPathEffectCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoPathEffect *)makeCornerRadius:(float)radius __attribute__((swift_name("makeCorner(radius:)")));
- (CSDKSkikoPathEffect *)makeDashIntervals:(CSDKKotlinFloatArray *)intervals phase:(float)phase __attribute__((swift_name("makeDash(intervals:phase:)")));
- (CSDKSkikoPathEffect *)makeDiscreteSegLength:(float)segLength dev:(float)dev seed:(int32_t)seed __attribute__((swift_name("makeDiscrete(segLength:dev:seed:)")));
- (CSDKSkikoPathEffect *)makeLine2DWidth:(float)width matrix:(CSDKSkikoMatrix33 *)matrix __attribute__((swift_name("makeLine2D(width:matrix:)")));
- (CSDKSkikoPathEffect *)makePath1DPath:(CSDKSkikoPath *)path advance:(float)advance phase:(float)phase style:(CSDKSkikoPathEffectStyle *)style __attribute__((swift_name("makePath1D(path:advance:phase:style:)")));
- (CSDKSkikoPathEffect *)makePath2DMatrix:(CSDKSkikoMatrix33 *)matrix path:(CSDKSkikoPath *)path __attribute__((swift_name("makePath2D(matrix:path:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoISize")))
@interface CSDKSkikoISize : CSDKBase
@property (class, readonly, getter=companion) CSDKSkikoISizeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)area __attribute__((swift_name("area()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isZero __attribute__((swift_name("isZero()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPoint")))
@interface CSDKSkikoPoint : CSDKBase
- (instancetype)initWithX:(float)x y:(float)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoPointCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (CSDKSkikoPoint *)offsetVec:(CSDKSkikoPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (CSDKSkikoPoint *)offsetDx:(float)dx dy:(float)dy __attribute__((swift_name("offset(dx:dy:)")));
- (CSDKSkikoPoint *)scaleScale:(float)scale __attribute__((swift_name("scale(scale:)")));
- (CSDKSkikoPoint *)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface CSDKKotlinIntArray : CSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CSDKInt *(^)(CSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CSDKKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoGradientStyle")))
@interface CSDKSkikoGradientStyle : CSDKBase
- (instancetype)initWithTileMode:(CSDKSkikoFilterTileMode *)tileMode isPremul:(BOOL)isPremul localMatrix:(CSDKSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("init(tileMode:isPremul:localMatrix:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoGradientStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (CSDKSkikoGradientStyle *)withLocalMatrix_localMatrix:(CSDKSkikoMatrix33 *)_localMatrix __attribute__((swift_name("withLocalMatrix(_localMatrix:)")));
- (CSDKSkikoGradientStyle *)withPremul_premul:(BOOL)_premul __attribute__((swift_name("withPremul(_premul:)")));
- (CSDKSkikoGradientStyle *)withTileMode_tileMode:(CSDKSkikoFilterTileMode *)_tileMode __attribute__((swift_name("withTileMode(_tileMode:)")));
@property (readonly) BOOL isPremul __attribute__((swift_name("isPremul")));
@property (readonly) CSDKSkikoMatrix33 * _Nullable localMatrix __attribute__((swift_name("localMatrix")));
@property (readonly) CSDKSkikoFilterTileMode *tileMode __attribute__((swift_name("tileMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix33.Companion")))
@interface CSDKSkikoMatrix33Companion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoMatrix33Companion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoMatrix33 *)makeRotateDeg:(float)deg __attribute__((swift_name("makeRotate(deg:)")));
- (CSDKSkikoMatrix33 *)makeRotateDeg:(float)deg pivot:(CSDKSkikoPoint *)pivot __attribute__((swift_name("makeRotate(deg:pivot:)")));
- (CSDKSkikoMatrix33 *)makeRotateDeg:(float)deg pivotx:(float)pivotx pivoty:(float)pivoty __attribute__((swift_name("makeRotate(deg:pivotx:pivoty:)")));
- (CSDKSkikoMatrix33 *)makeScaleS:(float)s __attribute__((swift_name("makeScale(s:)")));
- (CSDKSkikoMatrix33 *)makeScaleSx:(float)sx sy:(float)sy __attribute__((swift_name("makeScale(sx:sy:)")));
- (CSDKSkikoMatrix33 *)makeSkewSx:(float)sx sy:(float)sy __attribute__((swift_name("makeSkew(sx:sy:)")));
- (CSDKSkikoMatrix33 *)makeTranslateDx:(float)dx dy:(float)dy __attribute__((swift_name("makeTranslate(dx:dy:)")));
@property (readonly) CSDKSkikoMatrix33 *IDENTITY __attribute__((swift_name("IDENTITY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix44")))
@interface CSDKSkikoMatrix44 : CSDKBase
- (instancetype)initWithMat:(CSDKKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoMatrix44Companion *companion __attribute__((swift_name("companion")));
- (CSDKSkikoMatrix33 *)asMatrix33 __attribute__((swift_name("asMatrix33()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface CSDKKotlinKVariance : CSDKKotlinEnum<CSDKKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) CSDKKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) CSDKKotlinKVariance *out __attribute__((swift_name("out")));
+ (CSDKKotlinArray<CSDKKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface CSDKKotlinKTypeProjectionCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKotlinKTypeProjection *)contravariantType:(id<CSDKKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (CSDKKotlinKTypeProjection *)covariantType:(id<CSDKKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (CSDKKotlinKTypeProjection *)invariantType:(id<CSDKKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) CSDKKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("KotlinFloatIterator")))
@interface CSDKKotlinFloatIterator : CSDKBase <CSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CSDKFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorMatrix")))
@interface CSDKSkikoColorMatrix : CSDKBase
- (instancetype)initWithMat:(CSDKKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoInversionMode")))
@interface CSDKSkikoInversionMode : CSDKKotlinEnum<CSDKSkikoInversionMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoInversionMode *no __attribute__((swift_name("no")));
@property (class, readonly) CSDKSkikoInversionMode *brightness __attribute__((swift_name("brightness")));
@property (class, readonly) CSDKSkikoInversionMode *lightness __attribute__((swift_name("lightness")));
+ (CSDKKotlinArray<CSDKSkikoInversionMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoInversionMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIRect")))
@interface CSDKSkikoIRect : CSDKBase
@property (class, readonly, getter=companion) CSDKSkikoIRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (CSDKSkikoIRect * _Nullable)intersectOther:(CSDKSkikoIRect *)other __attribute__((swift_name("intersect(other:)")));
- (CSDKSkikoIRect *)offsetVec:(CSDKSkikoIPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (CSDKSkikoIRect *)offsetDx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("offset(dx:dy:)")));
- (CSDKSkikoRect *)toRect __attribute__((swift_name("toRect()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t bottom __attribute__((swift_name("bottom")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t left __attribute__((swift_name("left")));
@property (readonly) int32_t right __attribute__((swift_name("right")));
@property (readonly) int32_t top __attribute__((swift_name("top")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFilterTileMode")))
@interface CSDKSkikoFilterTileMode : CSDKKotlinEnum<CSDKSkikoFilterTileMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoFilterTileMode *clamp __attribute__((swift_name("clamp")));
@property (class, readonly) CSDKSkikoFilterTileMode *repeat __attribute__((swift_name("repeat")));
@property (class, readonly) CSDKSkikoFilterTileMode *mirror __attribute__((swift_name("mirror")));
@property (class, readonly) CSDKSkikoFilterTileMode *decal __attribute__((swift_name("decal")));
+ (CSDKKotlinArray<CSDKSkikoFilterTileMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoFilterTileMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorChannel")))
@interface CSDKSkikoColorChannel : CSDKKotlinEnum<CSDKSkikoColorChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoColorChannel *r __attribute__((swift_name("r")));
@property (class, readonly) CSDKSkikoColorChannel *g __attribute__((swift_name("g")));
@property (class, readonly) CSDKSkikoColorChannel *b __attribute__((swift_name("b")));
@property (class, readonly) CSDKSkikoColorChannel *a __attribute__((swift_name("a")));
+ (CSDKKotlinArray<CSDKSkikoColorChannel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoColorChannel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("SkikoIHasImageInfo")))
@protocol CSDKSkikoIHasImageInfo
@required
@property (readonly) CSDKSkikoColorAlphaType *alphaType __attribute__((swift_name("alphaType")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) CSDKSkikoColorInfo *colorInfo __attribute__((swift_name("colorInfo")));
@property (readonly) CSDKSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) CSDKSkikoColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) CSDKSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImage")))
@interface CSDKSkikoImage : CSDKSkikoRefCnt <CSDKSkikoIHasImageInfo>

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoImageCompanion *companion __attribute__((swift_name("companion")));
- (CSDKSkikoData * _Nullable)encodeToDataFormat:(CSDKSkikoEncodedImageFormat *)format quality:(int32_t)quality __attribute__((swift_name("encodeToData(format:quality:)")));
- (CSDKSkikoShader *)makeShaderLocalMatrix:(CSDKSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(localMatrix:)")));
- (CSDKSkikoShader *)makeShaderTmx:(CSDKSkikoFilterTileMode *)tmx tmy:(CSDKSkikoFilterTileMode *)tmy localMatrix:(CSDKSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:localMatrix:)")));
- (CSDKSkikoShader *)makeShaderTmx:(CSDKSkikoFilterTileMode *)tmx tmy:(CSDKSkikoFilterTileMode *)tmy sampling:(id<CSDKSkikoSamplingMode>)sampling localMatrix:(CSDKSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:sampling:localMatrix:)")));
- (CSDKSkikoPixmap * _Nullable)peekPixels __attribute__((swift_name("peekPixels()")));
- (BOOL)peekPixelsPixmap:(CSDKSkikoPixmap * _Nullable)pixmap __attribute__((swift_name("peekPixels(pixmap:)")));
- (BOOL)readPixelsDst:(CSDKSkikoBitmap *)dst __attribute__((swift_name("readPixels(dst:)")));
- (BOOL)readPixelsContext:(CSDKSkikoDirectContext *)context dst:(CSDKSkikoBitmap *)dst __attribute__((swift_name("readPixels(context:dst:)")));
- (BOOL)readPixelsDst:(CSDKSkikoBitmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(dst:srcX:srcY:)")));
- (BOOL)readPixelsContext:(CSDKSkikoDirectContext *)context dst:(CSDKSkikoBitmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(context:dst:srcX:srcY:)")));
- (BOOL)readPixelsDst:(CSDKSkikoPixmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY cache:(BOOL)cache __attribute__((swift_name("readPixels(dst:srcX:srcY:cache:)")));
- (BOOL)readPixelsContext:(CSDKSkikoDirectContext * _Nullable)context dst:(CSDKSkikoBitmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY cache:(BOOL)cache __attribute__((swift_name("readPixels(context:dst:srcX:srcY:cache:)")));
- (BOOL)scalePixelsDst:(CSDKSkikoPixmap *)dst samplingMode:(id<CSDKSkikoSamplingMode>)samplingMode cache:(BOOL)cache __attribute__((swift_name("scalePixels(dst:samplingMode:cache:)")));
@property (readonly) CSDKSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@end

__attribute__((swift_name("SkikoRect")))
@interface CSDKSkikoRect : CSDKBase
- (instancetype)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (CSDKSkikoRect *)inflateSpread:(float)spread __attribute__((swift_name("inflate(spread:)")));
- (CSDKSkikoRect * _Nullable)intersectOther:(CSDKSkikoRect *)other __attribute__((swift_name("intersect(other:)")));
- (CSDKSkikoRect *)offsetVec:(CSDKSkikoPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (CSDKSkikoRect *)offsetDx:(float)dx dy:(float)dy __attribute__((swift_name("offset(dx:dy:)")));
- (CSDKSkikoRect *)scaleScale:(float)scale __attribute__((swift_name("scale(scale:)")));
- (CSDKSkikoRect *)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (CSDKSkikoIRect *)toIRect __attribute__((swift_name("toIRect()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float bottom __attribute__((swift_name("bottom")));
@property (readonly) float height_ __attribute__((swift_name("height_")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) float left __attribute__((swift_name("left")));
@property (readonly) float right __attribute__((swift_name("right")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) float width_ __attribute__((swift_name("width_")));
@end

__attribute__((swift_name("SkikoSamplingMode")))
@protocol CSDKSkikoSamplingMode
@required
- (int64_t)_pack __attribute__((swift_name("_pack()"))) __attribute__((deprecated("Long can't be used because Long is an object in kotlin/js. Consider using _packedInt1 and _packedInt2")));
- (int32_t)_packedInt1 __attribute__((swift_name("_packedInt1()")));
- (int32_t)_packedInt2 __attribute__((swift_name("_packedInt2()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeShaderBuilder")))
@interface CSDKSkikoRuntimeShaderBuilder : CSDKSkikoManaged
- (instancetype)initWithEffect:(CSDKSkikoRuntimeEffect *)effect __attribute__((swift_name("init(effect:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoRuntimeShaderBuilderCompanion *companion __attribute__((swift_name("companion")));
- (void)childName:(NSString *)name colorFilter:(CSDKSkikoColorFilter *)colorFilter __attribute__((swift_name("child(name:colorFilter:)")));
- (void)childName:(NSString *)name shader:(CSDKSkikoShader *)shader __attribute__((swift_name("child(name:shader:)")));
- (CSDKSkikoShader *)makeShaderLocalMatrix:(CSDKSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(localMatrix:)")));
- (void)uniformName:(NSString *)name value:(float)value __attribute__((swift_name("uniform(name:value:)")));
- (void)uniformName:(NSString *)name value_:(CSDKKotlinFloatArray *)value __attribute__((swift_name("uniform(name:value_:)")));
- (void)uniformName:(NSString *)name value__:(int32_t)value __attribute__((swift_name("uniform(name:value__:)")));
- (void)uniformName:(NSString *)name value___:(CSDKSkikoMatrix22 *)value __attribute__((swift_name("uniform(name:value___:)")));
- (void)uniformName:(NSString *)name value____:(CSDKSkikoMatrix33 *)value __attribute__((swift_name("uniform(name:value____:)")));
- (void)uniformName:(NSString *)name value_____:(CSDKSkikoMatrix44 *)value __attribute__((swift_name("uniform(name:value_____:)")));
- (void)uniformName:(NSString *)name value1:(float)value1 value2:(float)value2 __attribute__((swift_name("uniform(name:value1:value2:)")));
- (void)uniformName:(NSString *)name value1:(int32_t)value1 value2_:(int32_t)value2 __attribute__((swift_name("uniform(name:value1:value2_:)")));
- (void)uniformName:(NSString *)name value1:(float)value1 value2:(float)value2 value3:(float)value3 __attribute__((swift_name("uniform(name:value1:value2:value3:)")));
- (void)uniformName:(NSString *)name value1:(int32_t)value1 value2:(int32_t)value2 value3_:(int32_t)value3 __attribute__((swift_name("uniform(name:value1:value2:value3_:)")));
- (void)uniformName:(NSString *)name value1:(float)value1 value2:(float)value2 value3:(float)value3 value4:(float)value4 __attribute__((swift_name("uniform(name:value1:value2:value3:value4:)")));
- (void)uniformName:(NSString *)name value1:(int32_t)value1 value2:(int32_t)value2 value3:(int32_t)value3 value4_:(int32_t)value4 __attribute__((swift_name("uniform(name:value1:value2:value3:value4_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFilterBlurMode")))
@interface CSDKSkikoFilterBlurMode : CSDKKotlinEnum<CSDKSkikoFilterBlurMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoFilterBlurMode *normal __attribute__((swift_name("normal")));
@property (class, readonly) CSDKSkikoFilterBlurMode *solid __attribute__((swift_name("solid")));
@property (class, readonly) CSDKSkikoFilterBlurMode *outer __attribute__((swift_name("outer")));
@property (class, readonly) CSDKSkikoFilterBlurMode *inner __attribute__((swift_name("inner")));
+ (CSDKKotlinArray<CSDKSkikoFilterBlurMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoFilterBlurMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPath")))
@interface CSDKSkikoPath : CSDKSkikoManaged <CSDKKotlinIterable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoPathCompanion *companion __attribute__((swift_name("companion")));
- (CSDKSkikoPath *)addArcOval:(CSDKSkikoRect *)oval startAngle:(float)startAngle sweepAngle:(float)sweepAngle __attribute__((swift_name("addArc(oval:startAngle:sweepAngle:)")));
- (CSDKSkikoPath *)addCircleX:(float)x y:(float)y radius:(float)radius dir:(CSDKSkikoPathDirection *)dir __attribute__((swift_name("addCircle(x:y:radius:dir:)")));
- (CSDKSkikoPath *)addOvalOval:(CSDKSkikoRect *)oval dir:(CSDKSkikoPathDirection *)dir start:(int32_t)start __attribute__((swift_name("addOval(oval:dir:start:)")));
- (CSDKSkikoPath *)addPathSrc:(CSDKSkikoPath * _Nullable)src extend:(BOOL)extend __attribute__((swift_name("addPath(src:extend:)")));
- (CSDKSkikoPath *)addPathSrc:(CSDKSkikoPath * _Nullable)src matrix:(CSDKSkikoMatrix33 *)matrix extend:(BOOL)extend __attribute__((swift_name("addPath(src:matrix:extend:)")));
- (CSDKSkikoPath *)addPathSrc:(CSDKSkikoPath * _Nullable)src dx:(float)dx dy:(float)dy extend:(BOOL)extend __attribute__((swift_name("addPath(src:dx:dy:extend:)")));
- (CSDKSkikoPath *)addPolyPts:(CSDKKotlinArray<CSDKSkikoPoint *> *)pts close:(BOOL)close __attribute__((swift_name("addPoly(pts:close:)")));
- (CSDKSkikoPath *)addPolyPts:(CSDKKotlinFloatArray *)pts close_:(BOOL)close __attribute__((swift_name("addPoly(pts:close_:)")));
- (CSDKSkikoPath *)addRRectRrect:(CSDKSkikoRRect *)rrect dir:(CSDKSkikoPathDirection *)dir start:(int32_t)start __attribute__((swift_name("addRRect(rrect:dir:start:)")));
- (CSDKSkikoPath *)addRectRect:(CSDKSkikoRect *)rect dir:(CSDKSkikoPathDirection *)dir start:(int32_t)start __attribute__((swift_name("addRect(rect:dir:start:)")));
- (CSDKSkikoPath *)arcToOval:(CSDKSkikoRect *)oval startAngle:(float)startAngle sweepAngle:(float)sweepAngle forceMoveTo:(BOOL)forceMoveTo __attribute__((swift_name("arcTo(oval:startAngle:sweepAngle:forceMoveTo:)")));
- (CSDKSkikoPath *)closePath __attribute__((swift_name("closePath()")));
- (CSDKSkikoRect *)computeTightBounds __attribute__((swift_name("computeTightBounds()")));
- (CSDKSkikoPath *)conicToP1:(CSDKSkikoPoint *)p1 p2:(CSDKSkikoPoint *)p2 w:(float)w __attribute__((swift_name("conicTo(p1:p2:w:)")));
- (CSDKSkikoPath *)conicToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 w:(float)w __attribute__((swift_name("conicTo(x1:y1:x2:y2:w:)")));
- (BOOL)conservativelyContainsRectRect:(CSDKSkikoRect *)rect __attribute__((swift_name("conservativelyContainsRect(rect:)")));
- (BOOL)containsP:(CSDKSkikoPoint *)p __attribute__((swift_name("contains(p:)")));
- (BOOL)containsX:(float)x y:(float)y __attribute__((swift_name("contains(x:y:)")));
- (CSDKSkikoPath *)cubicToP1:(CSDKSkikoPoint *)p1 p2:(CSDKSkikoPoint *)p2 p3:(CSDKSkikoPoint *)p3 __attribute__((swift_name("cubicTo(p1:p2:p3:)")));
- (CSDKSkikoPath *)cubicToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 x3:(float)x3 y3:(float)y3 __attribute__((swift_name("cubicTo(x1:y1:x2:y2:x3:y3:)")));
- (CSDKSkikoPath *)dump __attribute__((swift_name("dump()")));
- (CSDKSkikoPath *)dumpHex __attribute__((swift_name("dumpHex()")));
- (CSDKSkikoPath *)ellipticalArcToR:(CSDKSkikoPoint *)r xAxisRotate:(float)xAxisRotate arc:(CSDKSkikoPathEllipseArc *)arc direction:(CSDKSkikoPathDirection *)direction xy:(CSDKSkikoPoint *)xy __attribute__((swift_name("ellipticalArcTo(r:xAxisRotate:arc:direction:xy:)")));
- (CSDKSkikoPath *)ellipticalArcToRx:(float)rx ry:(float)ry xAxisRotate:(float)xAxisRotate arc:(CSDKSkikoPathEllipseArc *)arc direction:(CSDKSkikoPathDirection *)direction x:(float)x y:(float)y __attribute__((swift_name("ellipticalArcTo(rx:ry:xAxisRotate:arc:direction:x:y:)")));
- (CSDKSkikoPoint *)getPointIndex:(int32_t)index __attribute__((swift_name("getPoint(index:)")));
- (int32_t)getPointsPoints:(CSDKKotlinArray<CSDKSkikoPoint *> * _Nullable)points max:(int32_t)max __attribute__((swift_name("getPoints(points:max:)")));
- (int32_t)getVerbsVerbs:(CSDKKotlinArray<CSDKSkikoPathVerb *> * _Nullable)verbs max:(int32_t)max __attribute__((swift_name("getVerbs(verbs:max:)")));
- (CSDKSkikoPath *)incReserveExtraPtCount:(int32_t)extraPtCount __attribute__((swift_name("incReserve(extraPtCount:)")));
- (BOOL)isInterpolatableCompare:(CSDKSkikoPath * _Nullable)compare __attribute__((swift_name("isInterpolatable(compare:)")));
- (CSDKSkikoPathSegmentIterator *)iterator __attribute__((swift_name("iterator()")));
- (CSDKSkikoPathSegmentIterator *)iteratorForceClose:(BOOL)forceClose __attribute__((swift_name("iterator(forceClose:)")));
- (CSDKSkikoPath *)lineToP:(CSDKSkikoPoint *)p __attribute__((swift_name("lineTo(p:)")));
- (CSDKSkikoPath *)lineToX:(float)x y:(float)y __attribute__((swift_name("lineTo(x:y:)")));
- (CSDKSkikoPath *)makeLerpEnding:(CSDKSkikoPath * _Nullable)ending weight:(float)weight __attribute__((swift_name("makeLerp(ending:weight:)")));
- (CSDKSkikoPath *)moveToP:(CSDKSkikoPoint *)p __attribute__((swift_name("moveTo(p:)")));
- (CSDKSkikoPath *)moveToX:(float)x y:(float)y __attribute__((swift_name("moveTo(x:y:)")));
- (CSDKSkikoPath *)offsetDx:(float)dx dy:(float)dy dst:(CSDKSkikoPath * _Nullable)dst __attribute__((swift_name("offset(dx:dy:dst:)")));
- (CSDKSkikoPath *)quadToP1:(CSDKSkikoPoint *)p1 p2:(CSDKSkikoPoint *)p2 __attribute__((swift_name("quadTo(p1:p2:)")));
- (CSDKSkikoPath *)quadToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 __attribute__((swift_name("quadTo(x1:y1:x2:y2:)")));
- (CSDKSkikoPath *)rConicToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 w:(float)w __attribute__((swift_name("rConicTo(dx1:dy1:dx2:dy2:w:)")));
- (CSDKSkikoPath *)rCubicToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 dx3:(float)dx3 dy3:(float)dy3 __attribute__((swift_name("rCubicTo(dx1:dy1:dx2:dy2:dx3:dy3:)")));
- (CSDKSkikoPath *)rEllipticalArcToRx:(float)rx ry:(float)ry xAxisRotate:(float)xAxisRotate arc:(CSDKSkikoPathEllipseArc *)arc direction:(CSDKSkikoPathDirection *)direction dx:(float)dx dy:(float)dy __attribute__((swift_name("rEllipticalArcTo(rx:ry:xAxisRotate:arc:direction:dx:dy:)")));
- (CSDKSkikoPath *)rLineToDx:(float)dx dy:(float)dy __attribute__((swift_name("rLineTo(dx:dy:)")));
- (CSDKSkikoPath *)rMoveToDx:(float)dx dy:(float)dy __attribute__((swift_name("rMoveTo(dx:dy:)")));
- (CSDKSkikoPath *)rQuadToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 __attribute__((swift_name("rQuadTo(dx1:dy1:dx2:dy2:)")));
- (CSDKSkikoPath *)reset __attribute__((swift_name("reset()")));
- (CSDKSkikoPath *)reverseAddPathSrc:(CSDKSkikoPath * _Nullable)src __attribute__((swift_name("reverseAddPath(src:)")));
- (CSDKSkikoPath *)rewind __attribute__((swift_name("rewind()")));
- (CSDKKotlinByteArray *)serializeToBytes __attribute__((swift_name("serializeToBytes()")));
- (CSDKSkikoPath *)setLastPtX:(float)x y:(float)y __attribute__((swift_name("setLastPt(x:y:)")));
- (CSDKSkikoPath *)setVolatileIsVolatile:(BOOL)isVolatile __attribute__((swift_name("setVolatile(isVolatile:)")));
- (CSDKSkikoPath *)swapOther:(CSDKSkikoPath * _Nullable)other __attribute__((swift_name("swap(other:)")));
- (CSDKSkikoPath *)tangentArcToP1:(CSDKSkikoPoint *)p1 p2:(CSDKSkikoPoint *)p2 radius:(float)radius __attribute__((swift_name("tangentArcTo(p1:p2:radius:)")));
- (CSDKSkikoPath *)tangentArcToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 radius:(float)radius __attribute__((swift_name("tangentArcTo(x1:y1:x2:y2:radius:)")));
- (CSDKSkikoPath *)transformMatrix:(CSDKSkikoMatrix33 *)matrix applyPerspectiveClip:(BOOL)applyPerspectiveClip __attribute__((swift_name("transform(matrix:applyPerspectiveClip:)")));
- (CSDKSkikoPath *)transformMatrix:(CSDKSkikoMatrix33 *)matrix dst:(CSDKSkikoPath * _Nullable)dst applyPerspectiveClip:(BOOL)applyPerspectiveClip __attribute__((swift_name("transform(matrix:dst:applyPerspectiveClip:)")));
- (CSDKSkikoPath *)updateBoundsCache __attribute__((swift_name("updateBoundsCache()")));
@property (readonly) void * _Nullable approximateBytesUsed __attribute__((swift_name("approximateBytesUsed")));
@property (readonly) CSDKKotlinArray<CSDKSkikoPoint *> * _Nullable asLine __attribute__((swift_name("asLine")));
@property (readonly) CSDKSkikoRect *bounds __attribute__((swift_name("bounds")));
@property CSDKSkikoPathFillMode *fillMode __attribute__((swift_name("fillMode")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) BOOL isConvex __attribute__((swift_name("isConvex")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isFinite __attribute__((swift_name("isFinite")));
@property (readonly) BOOL isLastContourClosed __attribute__((swift_name("isLastContourClosed")));
@property (readonly) CSDKSkikoRect * _Nullable isOval __attribute__((swift_name("isOval")));
@property (readonly) CSDKSkikoRRect * _Nullable isRRect __attribute__((swift_name("isRRect")));
@property (readonly) CSDKSkikoRect * _Nullable isRect __attribute__((swift_name("isRect")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
@property BOOL isVolatile __attribute__((swift_name("isVolatile")));
@property CSDKSkikoPoint *lastPt __attribute__((swift_name("lastPt")));
@property (readonly) CSDKKotlinArray<CSDKSkikoPoint *> *points __attribute__((swift_name("points")));
@property (readonly) int32_t pointsCount __attribute__((swift_name("pointsCount")));
@property (readonly) int32_t segmentMasks __attribute__((swift_name("segmentMasks")));
@property (readonly) CSDKKotlinArray<CSDKSkikoPathVerb *> *verbs __attribute__((swift_name("verbs")));
@property (readonly) int32_t verbsCount __attribute__((swift_name("verbsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEffect.Style")))
@interface CSDKSkikoPathEffectStyle : CSDKKotlinEnum<CSDKSkikoPathEffectStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoPathEffectStyle *translate __attribute__((swift_name("translate")));
@property (class, readonly) CSDKSkikoPathEffectStyle *rotate __attribute__((swift_name("rotate")));
@property (class, readonly) CSDKSkikoPathEffectStyle *morph __attribute__((swift_name("morph")));
+ (CSDKKotlinArray<CSDKSkikoPathEffectStyle *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoPathEffectStyle *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoISize.Companion")))
@interface CSDKSkikoISizeCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoISizeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoISize *)makeW:(int32_t)w h:(int32_t)h __attribute__((swift_name("make(w:h:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoISize *)makeEmpty __attribute__((swift_name("makeEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPoint.Companion")))
@interface CSDKSkikoPointCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoPointCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKotlinFloatArray * _Nullable)flattenArrayPts:(CSDKKotlinArray<CSDKSkikoPoint *> * _Nullable)pts __attribute__((swift_name("flattenArray(pts:)")));
- (CSDKKotlinArray<CSDKSkikoPoint *> * _Nullable)fromArrayPts:(CSDKKotlinFloatArray * _Nullable)pts __attribute__((swift_name("fromArray(pts:)")));
@property (readonly) CSDKSkikoPoint *ZERO __attribute__((swift_name("ZERO")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface CSDKKotlinIntIterator : CSDKBase <CSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CSDKInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoGradientStyle.Companion")))
@interface CSDKSkikoGradientStyleCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoGradientStyleCompanion *shared __attribute__((swift_name("shared")));
@property CSDKSkikoGradientStyle *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix44.Companion")))
@interface CSDKSkikoMatrix44Companion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoMatrix44Companion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKSkikoMatrix44 *IDENTITY __attribute__((swift_name("IDENTITY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIRect.Companion")))
@interface CSDKSkikoIRectCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoIRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoIRect *)makeLTRBL:(int32_t)l t:(int32_t)t r:(int32_t)r b:(int32_t)b __attribute__((swift_name("makeLTRB(l:t:r:b:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoIRect *)makeWHW:(int32_t)w h:(int32_t)h __attribute__((swift_name("makeWH(w:h:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoIRect *)makeXYWHL:(int32_t)l t:(int32_t)t w:(int32_t)w h:(int32_t)h __attribute__((swift_name("makeXYWH(l:t:w:h:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIPoint")))
@interface CSDKSkikoIPoint : CSDKBase
- (instancetype)initWithX:(int32_t)x y:(int32_t)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoIPointCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (CSDKSkikoIPoint *)offsetVec:(CSDKSkikoIPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (CSDKSkikoIPoint *)offsetDx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("offset(dx:dy:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) int32_t x __attribute__((swift_name("x")));
@property (readonly) int32_t y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorAlphaType")))
@interface CSDKSkikoColorAlphaType : CSDKKotlinEnum<CSDKSkikoColorAlphaType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoColorAlphaType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) CSDKSkikoColorAlphaType *opaque __attribute__((swift_name("opaque")));
@property (class, readonly) CSDKSkikoColorAlphaType *premul __attribute__((swift_name("premul")));
@property (class, readonly) CSDKSkikoColorAlphaType *unpremul __attribute__((swift_name("unpremul")));
+ (CSDKKotlinArray<CSDKSkikoColorAlphaType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoColorAlphaType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorInfo")))
@interface CSDKSkikoColorInfo : CSDKBase
- (instancetype)initWithColorType:(CSDKSkikoColorType *)colorType alphaType:(CSDKSkikoColorAlphaType *)alphaType colorSpace:(CSDKSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("init(colorType:alphaType:colorSpace:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoColorInfoCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (CSDKSkikoColorInfo *)withAlphaType_alphaType:(CSDKSkikoColorAlphaType *)_alphaType __attribute__((swift_name("withAlphaType(_alphaType:)")));
- (CSDKSkikoColorInfo *)withColorSpace_colorSpace:(CSDKSkikoColorSpace * _Nullable)_colorSpace __attribute__((swift_name("withColorSpace(_colorSpace:)")));
- (CSDKSkikoColorInfo *)withColorType_colorType:(CSDKSkikoColorType *)_colorType __attribute__((swift_name("withColorType(_colorType:)")));
@property (readonly) CSDKSkikoColorAlphaType *alphaType __attribute__((swift_name("alphaType")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) CSDKSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) CSDKSkikoColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) BOOL isGammaCloseToSRGB __attribute__((swift_name("isGammaCloseToSRGB")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorType")))
@interface CSDKSkikoColorType : CSDKKotlinEnum<CSDKSkikoColorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoColorTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CSDKSkikoColorType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) CSDKSkikoColorType *alpha8 __attribute__((swift_name("alpha8")));
@property (class, readonly) CSDKSkikoColorType *rgb565 __attribute__((swift_name("rgb565")));
@property (class, readonly) CSDKSkikoColorType *argb4444 __attribute__((swift_name("argb4444")));
@property (class, readonly) CSDKSkikoColorType *rgba8888 __attribute__((swift_name("rgba8888")));
@property (class, readonly) CSDKSkikoColorType *rgb888x __attribute__((swift_name("rgb888x")));
@property (class, readonly) CSDKSkikoColorType *bgra8888 __attribute__((swift_name("bgra8888")));
@property (class, readonly) CSDKSkikoColorType *rgba1010102 __attribute__((swift_name("rgba1010102")));
@property (class, readonly) CSDKSkikoColorType *bgra1010102 __attribute__((swift_name("bgra1010102")));
@property (class, readonly) CSDKSkikoColorType *rgb101010x __attribute__((swift_name("rgb101010x")));
@property (class, readonly) CSDKSkikoColorType *bgr101010x __attribute__((swift_name("bgr101010x")));
@property (class, readonly) CSDKSkikoColorType *bgr101010xXr __attribute__((swift_name("bgr101010xXr")));
@property (class, readonly) CSDKSkikoColorType *bgra10101010Xr __attribute__((swift_name("bgra10101010Xr")));
@property (class, readonly) CSDKSkikoColorType *rgba10x6 __attribute__((swift_name("rgba10x6")));
@property (class, readonly) CSDKSkikoColorType *gray8 __attribute__((swift_name("gray8")));
@property (class, readonly) CSDKSkikoColorType *rgbaF16norm __attribute__((swift_name("rgbaF16norm")));
@property (class, readonly) CSDKSkikoColorType *rgbaF16 __attribute__((swift_name("rgbaF16")));
@property (class, readonly) CSDKSkikoColorType *rgbaF32 __attribute__((swift_name("rgbaF32")));
@property (class, readonly) CSDKSkikoColorType *r8g8Unorm __attribute__((swift_name("r8g8Unorm")));
@property (class, readonly) CSDKSkikoColorType *a16Float __attribute__((swift_name("a16Float")));
@property (class, readonly) CSDKSkikoColorType *r16g16Float __attribute__((swift_name("r16g16Float")));
@property (class, readonly) CSDKSkikoColorType *a16Unorm __attribute__((swift_name("a16Unorm")));
@property (class, readonly) CSDKSkikoColorType *r16g16Unorm __attribute__((swift_name("r16g16Unorm")));
@property (class, readonly) CSDKSkikoColorType *r16g16b16a16Unorm __attribute__((swift_name("r16g16b16a16Unorm")));
+ (CSDKKotlinArray<CSDKSkikoColorType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoColorType *> *entries __attribute__((swift_name("entries")));
- (int64_t)computeOffsetX:(int32_t)x y:(int32_t)y rowBytes:(int64_t)rowBytes __attribute__((swift_name("computeOffset(x:y:rowBytes:)")));
- (float)getAColor:(int8_t)color __attribute__((swift_name("getA(color:)")));
- (float)getAColor_:(int32_t)color __attribute__((swift_name("getA(color_:)")));
- (float)getAColor__:(int16_t)color __attribute__((swift_name("getA(color__:)")));
- (float)getBColor:(int8_t)color __attribute__((swift_name("getB(color:)")));
- (float)getBColor_:(int32_t)color __attribute__((swift_name("getB(color_:)")));
- (float)getBColor__:(int16_t)color __attribute__((swift_name("getB(color__:)")));
- (float)getGColor:(int8_t)color __attribute__((swift_name("getG(color:)")));
- (float)getGColor_:(int32_t)color __attribute__((swift_name("getG(color_:)")));
- (float)getGColor__:(int16_t)color __attribute__((swift_name("getG(color__:)")));
- (float)getRColor:(int8_t)color __attribute__((swift_name("getR(color:)")));
- (float)getRColor_:(int32_t)color __attribute__((swift_name("getR(color_:)")));
- (float)getRColor__:(int16_t)color __attribute__((swift_name("getR(color__:)")));
- (CSDKSkikoColorAlphaType * _Nullable)validateAlphaTypeAlphaType:(CSDKSkikoColorAlphaType *)alphaType __attribute__((swift_name("validateAlphaType(alphaType:)")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) BOOL isAlwaysOpaque __attribute__((swift_name("isAlwaysOpaque")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageInfo")))
@interface CSDKSkikoImageInfo : CSDKBase
- (instancetype)initWithColorInfo:(CSDKSkikoColorInfo *)colorInfo width:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(colorInfo:width:height:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height colorType:(CSDKSkikoColorType *)colorType alphaType:(CSDKSkikoColorAlphaType *)alphaType __attribute__((swift_name("init(width:height:colorType:alphaType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height colorType:(CSDKSkikoColorType *)colorType alphaType:(CSDKSkikoColorAlphaType *)alphaType colorSpace:(CSDKSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("init(width:height:colorType:alphaType:colorSpace:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoImageInfoCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)computeByteSizeRowBytes:(int32_t)rowBytes __attribute__((swift_name("computeByteSize(rowBytes:)")));
- (int32_t)computeMinByteSize __attribute__((swift_name("computeMinByteSize()")));
- (int64_t)computeOffsetX:(int32_t)x y:(int32_t)y rowBytes:(int64_t)rowBytes __attribute__((swift_name("computeOffset(x:y:rowBytes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isRowBytesValidRowBytes:(int64_t)rowBytes __attribute__((swift_name("isRowBytesValid(rowBytes:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (CSDKSkikoImageInfo *)withColorAlphaTypeAlphaType:(CSDKSkikoColorAlphaType *)alphaType __attribute__((swift_name("withColorAlphaType(alphaType:)")));
- (CSDKSkikoImageInfo *)withColorInfo_colorInfo:(CSDKSkikoColorInfo *)_colorInfo __attribute__((swift_name("withColorInfo(_colorInfo:)")));
- (CSDKSkikoImageInfo *)withColorSpaceColorSpace:(CSDKSkikoColorSpace *)colorSpace __attribute__((swift_name("withColorSpace(colorSpace:)")));
- (CSDKSkikoImageInfo *)withColorTypeColorType:(CSDKSkikoColorType *)colorType __attribute__((swift_name("withColorType(colorType:)")));
- (CSDKSkikoImageInfo *)withHeight_height:(int32_t)_height __attribute__((swift_name("withHeight(_height:)")));
- (CSDKSkikoImageInfo *)withWidth_width:(int32_t)_width __attribute__((swift_name("withWidth(_width:)")));
- (CSDKSkikoImageInfo *)withWidthHeightWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("withWidthHeight(width:height:)")));
@property (readonly) CSDKSkikoIRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) CSDKSkikoColorAlphaType *colorAlphaType __attribute__((swift_name("colorAlphaType")));
@property (readonly) CSDKSkikoColorInfo *colorInfo __attribute__((swift_name("colorInfo")));
@property (readonly) CSDKSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) CSDKSkikoColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isGammaCloseToSRGB __attribute__((swift_name("isGammaCloseToSRGB")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) int32_t minRowBytes __attribute__((swift_name("minRowBytes")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImage.Companion")))
@interface CSDKSkikoImageCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoImageCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoImage *)adoptTextureFromContext:(CSDKSkikoDirectContext *)context backendTexture:(CSDKSkikoBackendTexture *)backendTexture origin:(CSDKSkikoSurfaceOrigin *)origin colorType:(CSDKSkikoColorType *)colorType __attribute__((swift_name("adoptTextureFrom(context:backendTexture:origin:colorType:)")));
- (CSDKSkikoImage *)makeFromBitmapBitmap:(CSDKSkikoBitmap *)bitmap __attribute__((swift_name("makeFromBitmap(bitmap:)")));
- (CSDKSkikoImage *)makeFromEncodedBytes:(CSDKKotlinByteArray *)bytes __attribute__((swift_name("makeFromEncoded(bytes:)")));
- (CSDKSkikoImage *)makeFromPixmapPixmap:(CSDKSkikoPixmap *)pixmap __attribute__((swift_name("makeFromPixmap(pixmap:)")));
- (CSDKSkikoImage *)makeRasterImageInfo:(CSDKSkikoImageInfo *)imageInfo bytes:(CSDKKotlinByteArray *)bytes rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRaster(imageInfo:bytes:rowBytes:)")));
- (CSDKSkikoImage *)makeRasterImageInfo:(CSDKSkikoImageInfo *)imageInfo data:(CSDKSkikoData *)data rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRaster(imageInfo:data:rowBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoData")))
@interface CSDKSkikoData : CSDKSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoDataCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (CSDKKotlinByteArray *)getBytesOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("getBytes(offset:length:)")));
- (CSDKSkikoData *)makeCopy __attribute__((swift_name("makeCopy()")));
- (CSDKSkikoData *)makeSubsetOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("makeSubset(offset:length:)")));
- (void * _Nullable)writableData __attribute__((swift_name("writableData()")));
@property (readonly) CSDKKotlinByteArray *bytes __attribute__((swift_name("bytes")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoEncodedImageFormat")))
@interface CSDKSkikoEncodedImageFormat : CSDKKotlinEnum<CSDKSkikoEncodedImageFormat *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoEncodedImageFormat *bmp __attribute__((swift_name("bmp")));
@property (class, readonly) CSDKSkikoEncodedImageFormat *gif __attribute__((swift_name("gif")));
@property (class, readonly) CSDKSkikoEncodedImageFormat *ico __attribute__((swift_name("ico")));
@property (class, readonly) CSDKSkikoEncodedImageFormat *jpeg __attribute__((swift_name("jpeg")));
@property (class, readonly) CSDKSkikoEncodedImageFormat *png __attribute__((swift_name("png")));
@property (class, readonly) CSDKSkikoEncodedImageFormat *wbmp __attribute__((swift_name("wbmp")));
@property (class, readonly) CSDKSkikoEncodedImageFormat *webp __attribute__((swift_name("webp")));
@property (class, readonly) CSDKSkikoEncodedImageFormat *pkm __attribute__((swift_name("pkm")));
@property (class, readonly) CSDKSkikoEncodedImageFormat *ktx __attribute__((swift_name("ktx")));
@property (class, readonly) CSDKSkikoEncodedImageFormat *astc __attribute__((swift_name("astc")));
@property (class, readonly) CSDKSkikoEncodedImageFormat *dng __attribute__((swift_name("dng")));
@property (class, readonly) CSDKSkikoEncodedImageFormat *heif __attribute__((swift_name("heif")));
+ (CSDKKotlinArray<CSDKSkikoEncodedImageFormat *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoEncodedImageFormat *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixmap")))
@interface CSDKSkikoPixmap : CSDKSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoPixmapCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)computeByteSize __attribute__((swift_name("computeByteSize()")));
- (BOOL)computeIsOpaque __attribute__((swift_name("computeIsOpaque()")));
- (BOOL)eraseColor:(int32_t)color __attribute__((swift_name("erase(color:)")));
- (BOOL)eraseColor:(int32_t)color subset:(CSDKSkikoIRect *)subset __attribute__((swift_name("erase(color:subset:)")));
- (BOOL)extractSubsetSubsetPtr:(void * _Nullable)subsetPtr area:(CSDKSkikoIRect *)area __attribute__((swift_name("extractSubset(subsetPtr:area:)")));
- (BOOL)extractSubsetSubset:(CSDKSkikoPixmap *)subset area:(CSDKSkikoIRect *)area __attribute__((swift_name("extractSubset(subset:area:)")));
- (void * _Nullable)getAddrX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getAddr(x:y:)")));
- (float)getAlphaFX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getAlphaF(x:y:)")));
- (int32_t)getColorX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getColor(x:y:)")));
- (BOOL)readPixelsPixmap:(CSDKSkikoPixmap * _Nullable)pixmap __attribute__((swift_name("readPixels(pixmap:)")));
- (BOOL)readPixelsInfo:(CSDKSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes __attribute__((swift_name("readPixels(info:addr:rowBytes:)")));
- (BOOL)readPixelsPixmap:(CSDKSkikoPixmap *)pixmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(pixmap:srcX:srcY:)")));
- (BOOL)readPixelsInfo:(CSDKSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(info:addr:rowBytes:srcX:srcY:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetInfo:(CSDKSkikoImageInfo *)info buffer:(CSDKSkikoData *)buffer rowBytes:(int32_t)rowBytes __attribute__((swift_name("reset(info:buffer:rowBytes:)")));
- (void)resetInfo:(CSDKSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes underlyingMemoryOwner:(CSDKSkikoManaged * _Nullable)underlyingMemoryOwner __attribute__((swift_name("reset(info:addr:rowBytes:underlyingMemoryOwner:)")));
- (BOOL)scalePixelsDstPixmap:(CSDKSkikoPixmap * _Nullable)dstPixmap samplingMode:(id<CSDKSkikoSamplingMode>)samplingMode __attribute__((swift_name("scalePixels(dstPixmap:samplingMode:)")));
- (void)setColorSpaceColorSpace:(CSDKSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("setColorSpace(colorSpace:)")));
@property (readonly) void * _Nullable addr __attribute__((swift_name("addr")));
@property (readonly) CSDKSkikoData *buffer __attribute__((swift_name("buffer")));
@property (readonly) CSDKSkikoImageInfo *info __attribute__((swift_name("info")));
@property (readonly) int32_t rowBytes __attribute__((swift_name("rowBytes")));
@property (readonly) int32_t rowBytesAsPixels __attribute__((swift_name("rowBytesAsPixels")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBitmap")))
@interface CSDKSkikoBitmap : CSDKSkikoManaged <CSDKSkikoIHasImageInfo>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoBitmapCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)doAllocN32PixelsWidth:(int32_t)width height:(int32_t)height opaque:(BOOL)opaque __attribute__((swift_name("doAllocN32Pixels(width:height:opaque:)")));
- (BOOL)doAllocPixels __attribute__((swift_name("doAllocPixels()")));
- (BOOL)doAllocPixelsImageInfo:(CSDKSkikoImageInfo *)imageInfo __attribute__((swift_name("doAllocPixels(imageInfo:)")));
- (BOOL)doAllocPixelsInfo:(CSDKSkikoImageInfo *)info rowBytes:(int32_t)rowBytes __attribute__((swift_name("doAllocPixels(info:rowBytes:)")));
- (BOOL)doAllocPixelsFlagsImageInfo:(CSDKSkikoImageInfo *)imageInfo zeroPixels:(BOOL)zeroPixels __attribute__((swift_name("doAllocPixelsFlags(imageInfo:zeroPixels:)")));
- (int32_t)computeByteSize __attribute__((swift_name("computeByteSize()")));
- (BOOL)computeIsOpaque __attribute__((swift_name("computeIsOpaque()")));
- (BOOL)drawsNothing __attribute__((swift_name("drawsNothing()")));
- (CSDKSkikoBitmap *)eraseColor:(int32_t)color __attribute__((swift_name("erase(color:)")));
- (CSDKSkikoBitmap *)eraseColor:(int32_t)color area:(CSDKSkikoIRect *)area __attribute__((swift_name("erase(color:area:)")));
- (BOOL)extractAlphaDst:(CSDKSkikoBitmap *)dst __attribute__((swift_name("extractAlpha(dst:)")));
- (CSDKSkikoIPoint * _Nullable)extractAlphaDst:(CSDKSkikoBitmap *)dst paint:(CSDKSkikoPaint * _Nullable)paint __attribute__((swift_name("extractAlpha(dst:paint:)")));
- (BOOL)extractSubsetDst:(CSDKSkikoBitmap *)dst subset:(CSDKSkikoIRect *)subset __attribute__((swift_name("extractSubset(dst:subset:)")));
- (float)getAlphafX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getAlphaf(x:y:)")));
- (int32_t)getColorX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getColor(x:y:)")));
- (BOOL)installPixelsPixels:(CSDKKotlinByteArray * _Nullable)pixels __attribute__((swift_name("installPixels(pixels:)")));
- (BOOL)installPixelsInfo:(CSDKSkikoImageInfo *)info pixels:(CSDKKotlinByteArray * _Nullable)pixels rowBytes:(int32_t)rowBytes __attribute__((swift_name("installPixels(info:pixels:rowBytes:)")));
- (CSDKSkikoBitmap *)makeClone __attribute__((swift_name("makeClone()")));
- (CSDKSkikoShader *)makeShaderLocalMatrix:(CSDKSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(localMatrix:)")));
- (CSDKSkikoShader *)makeShaderTmx:(CSDKSkikoFilterTileMode *)tmx tmy:(CSDKSkikoFilterTileMode *)tmy localMatrix:(CSDKSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:localMatrix:)")));
- (CSDKSkikoShader *)makeShaderTmx:(CSDKSkikoFilterTileMode *)tmx tmy:(CSDKSkikoFilterTileMode *)tmy sampling:(id<CSDKSkikoSamplingMode>)sampling localMatrix:(CSDKSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:sampling:localMatrix:)")));
- (CSDKSkikoBitmap *)notifyPixelsChanged __attribute__((swift_name("notifyPixelsChanged()")));
- (CSDKSkikoPixmap * _Nullable)peekPixels __attribute__((swift_name("peekPixels()")));
- (CSDKKotlinByteArray * _Nullable)readPixelsDstInfo:(CSDKSkikoImageInfo *)dstInfo dstRowBytes:(int32_t)dstRowBytes srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(dstInfo:dstRowBytes:srcX:srcY:)")));
- (CSDKSkikoBitmap *)reset __attribute__((swift_name("reset()")));
- (BOOL)setAlphaTypeAlphaType:(CSDKSkikoColorAlphaType *)alphaType __attribute__((swift_name("setAlphaType(alphaType:)")));
- (BOOL)setImageInfoImageInfo:(CSDKSkikoImageInfo *)imageInfo __attribute__((swift_name("setImageInfo(imageInfo:)")));
- (BOOL)setImageInfoImageInfo:(CSDKSkikoImageInfo *)imageInfo rowBytes:(int32_t)rowBytes __attribute__((swift_name("setImageInfo(imageInfo:rowBytes:)")));
- (CSDKSkikoBitmap *)setImmutable __attribute__((swift_name("setImmutable()")));
- (CSDKSkikoBitmap *)setPixelRefPixelRef:(CSDKSkikoPixelRef * _Nullable)pixelRef dx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("setPixelRef(pixelRef:dx:dy:)")));
- (void)swapOther:(CSDKSkikoBitmap *)other __attribute__((swift_name("swap(other:)")));
@property (readonly) CSDKSkikoIRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) CSDKSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@property (readonly) BOOL isImmutable __attribute__((swift_name("isImmutable")));
@property (readonly) BOOL isNull __attribute__((swift_name("isNull")));
@property (readonly) BOOL isReadyToDraw __attribute__((swift_name("isReadyToDraw")));
@property (readonly) CSDKSkikoPixelRef * _Nullable pixelRef __attribute__((swift_name("pixelRef")));
@property (readonly) CSDKSkikoIPoint *pixelRefOrigin __attribute__((swift_name("pixelRefOrigin")));
@property (readonly) int32_t rowBytes __attribute__((swift_name("rowBytes")));
@property (readonly) int32_t rowBytesAsPixels __attribute__((swift_name("rowBytesAsPixels")));
@property (readonly) CSDKSkikoIRect *subset __attribute__((swift_name("subset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoDirectContext")))
@interface CSDKSkikoDirectContext : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoDirectContextCompanion *companion __attribute__((swift_name("companion")));
- (void)abandon __attribute__((swift_name("abandon()")));
- (CSDKSkikoDirectContext *)flush __attribute__((swift_name("flush()")));
- (CSDKSkikoDirectContext *)flushSurface:(CSDKSkikoSurface *)surface __attribute__((swift_name("flush(surface:)")));
- (void)flushAndSubmitSurface:(CSDKSkikoSurface *)surface syncCpu:(BOOL)syncCpu __attribute__((swift_name("flushAndSubmit(surface:syncCpu:)")));
- (CSDKSkikoDirectContext *)resetAll __attribute__((swift_name("resetAll()")));
- (CSDKSkikoDirectContext *)resetGLStates:(CSDKKotlinArray<CSDKSkikoGLBackendState *> *)states __attribute__((swift_name("resetGL(states:)")));
- (CSDKSkikoDirectContext *)resetGLAll __attribute__((swift_name("resetGLAll()")));
- (void)submitSyncCpu:(BOOL)syncCpu __attribute__((swift_name("submit(syncCpu:)")));
@property int64_t resourceCacheLimit __attribute__((swift_name("resourceCacheLimit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRect.Companion")))
@interface CSDKSkikoRectCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b __attribute__((swift_name("makeLTRB(l:t:r:b:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoRect *)makeWHSize:(CSDKSkikoPoint *)size __attribute__((swift_name("makeWH(size:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoRect *)makeWHW:(float)w h:(float)h __attribute__((swift_name("makeWH(w:h:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h __attribute__((swift_name("makeXYWH(l:t:w:h:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeEffect")))
@interface CSDKSkikoRuntimeEffect : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoRuntimeEffectCompanion *companion __attribute__((swift_name("companion")));
- (CSDKSkikoShader *)makeShaderUniforms:(CSDKSkikoData * _Nullable)uniforms children:(CSDKKotlinArray<CSDKSkikoShader *> * _Nullable)children localMatrix:(CSDKSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(uniforms:children:localMatrix:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeShaderBuilder.Companion")))
@interface CSDKSkikoRuntimeShaderBuilderCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoRuntimeShaderBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix22")))
@interface CSDKSkikoMatrix22 : CSDKBase
- (instancetype)initWithMat:(CSDKKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoMatrix22Companion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPath.Companion")))
@interface CSDKSkikoPathCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoPathCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKotlinArray<CSDKSkikoPoint *> *)convertConicToQuadsP0:(CSDKSkikoPoint *)p0 p1:(CSDKSkikoPoint *)p1 p2:(CSDKSkikoPoint *)p2 w:(float)w pow2:(int32_t)pow2 __attribute__((swift_name("convertConicToQuads(p0:p1:p2:w:pow2:)")));
- (BOOL)isCubicDegenerateP1:(CSDKSkikoPoint *)p1 p2:(CSDKSkikoPoint *)p2 p3:(CSDKSkikoPoint *)p3 p4:(CSDKSkikoPoint *)p4 exact:(BOOL)exact __attribute__((swift_name("isCubicDegenerate(p1:p2:p3:p4:exact:)")));
- (BOOL)isLineDegenerateP1:(CSDKSkikoPoint *)p1 p2:(CSDKSkikoPoint *)p2 exact:(BOOL)exact __attribute__((swift_name("isLineDegenerate(p1:p2:exact:)")));
- (BOOL)isQuadDegenerateP1:(CSDKSkikoPoint *)p1 p2:(CSDKSkikoPoint *)p2 p3:(CSDKSkikoPoint *)p3 exact:(BOOL)exact __attribute__((swift_name("isQuadDegenerate(p1:p2:p3:exact:)")));
- (CSDKSkikoPath * _Nullable)makeCombiningOne:(CSDKSkikoPath *)one two:(CSDKSkikoPath *)two op:(CSDKSkikoPathOp *)op __attribute__((swift_name("makeCombining(one:two:op:)")));
- (CSDKSkikoPath *)makeFromBytesData:(CSDKKotlinByteArray *)data __attribute__((swift_name("makeFromBytes(data:)")));
- (CSDKSkikoPath *)makeFromSVGStringSvg:(NSString *)svg __attribute__((swift_name("makeFromSVGString(svg:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathDirection")))
@interface CSDKSkikoPathDirection : CSDKKotlinEnum<CSDKSkikoPathDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoPathDirection *clockwise __attribute__((swift_name("clockwise")));
@property (class, readonly) CSDKSkikoPathDirection *counterClockwise __attribute__((swift_name("counterClockwise")));
+ (CSDKKotlinArray<CSDKSkikoPathDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoPathDirection *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRRect")))
@interface CSDKSkikoRRect : CSDKSkikoRect
- (instancetype)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoRRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (CSDKSkikoRect *)inflateSpread:(float)spread __attribute__((swift_name("inflate(spread:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKKotlinFloatArray *radii __attribute__((swift_name("radii")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEllipseArc")))
@interface CSDKSkikoPathEllipseArc : CSDKKotlinEnum<CSDKSkikoPathEllipseArc *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoPathEllipseArc *smaller __attribute__((swift_name("smaller")));
@property (class, readonly) CSDKSkikoPathEllipseArc *larger __attribute__((swift_name("larger")));
+ (CSDKKotlinArray<CSDKSkikoPathEllipseArc *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoPathEllipseArc *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathVerb")))
@interface CSDKSkikoPathVerb : CSDKKotlinEnum<CSDKSkikoPathVerb *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoPathVerb *move __attribute__((swift_name("move")));
@property (class, readonly) CSDKSkikoPathVerb *line __attribute__((swift_name("line")));
@property (class, readonly) CSDKSkikoPathVerb *quad __attribute__((swift_name("quad")));
@property (class, readonly) CSDKSkikoPathVerb *conic __attribute__((swift_name("conic")));
@property (class, readonly) CSDKSkikoPathVerb *cubic __attribute__((swift_name("cubic")));
@property (class, readonly) CSDKSkikoPathVerb *close __attribute__((swift_name("close")));
@property (class, readonly) CSDKSkikoPathVerb *done __attribute__((swift_name("done")));
+ (CSDKKotlinArray<CSDKSkikoPathVerb *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoPathVerb *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinMutableIterator")))
@protocol CSDKKotlinMutableIterator <CSDKKotlinIterator>
@required
- (void)remove __attribute__((swift_name("remove()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathSegmentIterator")))
@interface CSDKSkikoPathSegmentIterator : CSDKSkikoManaged <CSDKKotlinMutableIterator>
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoPathSegmentIteratorCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (CSDKSkikoPathSegment * _Nullable)next __attribute__((swift_name("next()")));
- (void)remove __attribute__((swift_name("remove()")));
@property CSDKSkikoPathSegment * _Nullable _nextSegment __attribute__((swift_name("_nextSegment")));
@property (readonly) CSDKSkikoPath * _Nullable _path __attribute__((swift_name("_path")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathFillMode")))
@interface CSDKSkikoPathFillMode : CSDKKotlinEnum<CSDKSkikoPathFillMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoPathFillMode *winding __attribute__((swift_name("winding")));
@property (class, readonly) CSDKSkikoPathFillMode *evenOdd __attribute__((swift_name("evenOdd")));
@property (class, readonly) CSDKSkikoPathFillMode *inverseWinding __attribute__((swift_name("inverseWinding")));
@property (class, readonly) CSDKSkikoPathFillMode *inverseEvenOdd __attribute__((swift_name("inverseEvenOdd")));
+ (CSDKKotlinArray<CSDKSkikoPathFillMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoPathFillMode *> *entries __attribute__((swift_name("entries")));
- (CSDKSkikoPathFillMode *)inverse __attribute__((swift_name("inverse()")));
@property (readonly) BOOL isInverse __attribute__((swift_name("isInverse")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIPoint.Companion")))
@interface CSDKSkikoIPointCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoIPointCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKSkikoIPoint *ZERO __attribute__((swift_name("ZERO")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorInfo.Companion")))
@interface CSDKSkikoColorInfoCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoColorInfoCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKSkikoColorInfo *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorType.Companion")))
@interface CSDKSkikoColorTypeCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoColorTypeCompanion *shared __attribute__((swift_name("shared")));
@property CSDKSkikoColorType *N32 __attribute__((swift_name("N32")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageInfo.Companion")))
@interface CSDKSkikoImageInfoCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoImageInfoCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoImageInfo *)makeA8Width:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeA8(width:height:)")));
- (CSDKSkikoImageInfo *)makeN32Width:(int32_t)width height:(int32_t)height alphaType:(CSDKSkikoColorAlphaType *)alphaType __attribute__((swift_name("makeN32(width:height:alphaType:)")));
- (CSDKSkikoImageInfo *)makeN32Width:(int32_t)width height:(int32_t)height alphaType:(CSDKSkikoColorAlphaType *)alphaType colorSpace:(CSDKSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("makeN32(width:height:alphaType:colorSpace:)")));
- (CSDKSkikoImageInfo *)makeN32PremulWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeN32Premul(width:height:)")));
- (CSDKSkikoImageInfo *)makeN32PremulWidth:(int32_t)width height:(int32_t)height colorSpace:(CSDKSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("makeN32Premul(width:height:colorSpace:)")));
- (CSDKSkikoImageInfo *)makeS32Width:(int32_t)width height:(int32_t)height alphaType:(CSDKSkikoColorAlphaType *)alphaType __attribute__((swift_name("makeS32(width:height:alphaType:)")));
- (CSDKSkikoImageInfo *)makeUnknownWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeUnknown(width:height:)")));
@property (readonly) CSDKSkikoImageInfo *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBackendTexture")))
@interface CSDKSkikoBackendTexture : CSDKSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoBackendTextureCompanion *companion __attribute__((swift_name("companion")));
- (void)glTextureParametersModified __attribute__((swift_name("glTextureParametersModified()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurfaceOrigin")))
@interface CSDKSkikoSurfaceOrigin : CSDKKotlinEnum<CSDKSkikoSurfaceOrigin *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoSurfaceOrigin *topLeft __attribute__((swift_name("topLeft")));
@property (class, readonly) CSDKSkikoSurfaceOrigin *bottomLeft __attribute__((swift_name("bottomLeft")));
+ (CSDKKotlinArray<CSDKSkikoSurfaceOrigin *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoSurfaceOrigin *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoData.Companion")))
@interface CSDKSkikoDataCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoDataCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoData *)makeEmpty __attribute__((swift_name("makeEmpty()")));
- (CSDKSkikoData *)makeFromBytesBytes:(CSDKKotlinByteArray *)bytes offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("makeFromBytes(bytes:offset:length:)")));
- (CSDKSkikoData *)makeUninitializedLength:(int32_t)length __attribute__((swift_name("makeUninitialized(length:)")));
- (CSDKSkikoData *)makeWithoutCopyMemoryAddr:(void * _Nullable)memoryAddr length:(int32_t)length underlyingMemoryOwner:(CSDKSkikoManaged *)underlyingMemoryOwner __attribute__((swift_name("makeWithoutCopy(memoryAddr:length:underlyingMemoryOwner:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixmap.Companion")))
@interface CSDKSkikoPixmapCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoPixmapCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoPixmap *)makeInfo:(CSDKSkikoImageInfo *)info buffer:(CSDKSkikoData *)buffer rowBytes:(int32_t)rowBytes __attribute__((swift_name("make(info:buffer:rowBytes:)")));
- (CSDKSkikoPixmap *)makeInfo:(CSDKSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes underlyingMemoryOwner:(CSDKSkikoManaged * _Nullable)underlyingMemoryOwner __attribute__((swift_name("make(info:addr:rowBytes:underlyingMemoryOwner:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBitmap.Companion")))
@interface CSDKSkikoBitmapCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoBitmapCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoBitmap *)makeFromImageImage:(CSDKSkikoImage *)image __attribute__((swift_name("makeFromImage(image:)")));
- (CSDKSkikoBitmap *)makeFromImageImage:(CSDKSkikoImage *)image context:(CSDKSkikoDirectContext *)context __attribute__((swift_name("makeFromImage(image:context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixelRef")))
@interface CSDKSkikoPixelRef : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoPixelRefCompanion *companion __attribute__((swift_name("companion")));
- (CSDKSkikoPixelRef *)notifyPixelsChanged __attribute__((swift_name("notifyPixelsChanged()")));
- (CSDKSkikoPixelRef *)setImmutable __attribute__((swift_name("setImmutable()")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) BOOL isImmutable __attribute__((swift_name("isImmutable")));
@property (readonly) void * _Nullable rowBytes __attribute__((swift_name("rowBytes")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoDirectContext.Companion")))
@interface CSDKSkikoDirectContextCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoDirectContextCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoDirectContext *)makeDirect3DAdapterPtr:(void * _Nullable)adapterPtr devicePtr:(void * _Nullable)devicePtr queuePtr:(void * _Nullable)queuePtr __attribute__((swift_name("makeDirect3D(adapterPtr:devicePtr:queuePtr:)")));
- (CSDKSkikoDirectContext *)makeGL __attribute__((swift_name("makeGL()")));
- (CSDKSkikoDirectContext *)makeMetalDevicePtr:(void * _Nullable)devicePtr queuePtr:(void * _Nullable)queuePtr __attribute__((swift_name("makeMetal(devicePtr:queuePtr:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurface")))
@interface CSDKSkikoSurface : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoSurfaceCompanion *companion __attribute__((swift_name("companion")));
- (void)drawCanvas:(CSDKSkikoCanvas * _Nullable)canvas x:(int32_t)x y:(int32_t)y paint:(CSDKSkikoPaint * _Nullable)paint __attribute__((swift_name("draw(canvas:x:y:paint:)")));
- (void)drawCanvas:(CSDKSkikoCanvas * _Nullable)canvas x:(int32_t)x y:(int32_t)y samplingMode:(id<CSDKSkikoSamplingMode>)samplingMode paint:(CSDKSkikoPaint * _Nullable)paint __attribute__((swift_name("draw(canvas:x:y:samplingMode:paint:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)flushAndSubmit __attribute__((swift_name("flushAndSubmit()")));
- (void)flushAndSubmitSyncCpu:(BOOL)syncCpu __attribute__((swift_name("flushAndSubmit(syncCpu:)")));
- (CSDKSkikoImage *)makeImageSnapshot __attribute__((swift_name("makeImageSnapshot()")));
- (CSDKSkikoImage * _Nullable)makeImageSnapshotArea:(CSDKSkikoIRect *)area __attribute__((swift_name("makeImageSnapshot(area:)")));
- (CSDKSkikoSurface * _Nullable)makeSurfaceImageInfo:(CSDKSkikoImageInfo *)imageInfo __attribute__((swift_name("makeSurface(imageInfo:)")));
- (CSDKSkikoSurface * _Nullable)makeSurfaceWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeSurface(width:height:)")));
- (void)notifyContentWillChangeMode:(CSDKSkikoContentChangeMode *)mode __attribute__((swift_name("notifyContentWillChange(mode:)")));
- (BOOL)peekPixelsPixmap:(CSDKSkikoPixmap *)pixmap __attribute__((swift_name("peekPixels(pixmap:)")));
- (BOOL)readPixelsBitmap:(CSDKSkikoBitmap * _Nullable)bitmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(bitmap:srcX:srcY:)")));
- (BOOL)readPixelsPixmap:(CSDKSkikoPixmap * _Nullable)pixmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(pixmap:srcX:srcY:)")));
- (void)writePixelsBitmap:(CSDKSkikoBitmap * _Nullable)bitmap x:(int32_t)x y:(int32_t)y __attribute__((swift_name("writePixels(bitmap:x:y:)")));
- (void)writePixelsPixmap:(CSDKSkikoPixmap * _Nullable)pixmap x:(int32_t)x y:(int32_t)y __attribute__((swift_name("writePixels(pixmap:x:y:)")));
@property (readonly) CSDKSkikoCanvas *canvas __attribute__((swift_name("canvas")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) CSDKSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@property (readonly) BOOL isUnique __attribute__((swift_name("isUnique")));
@property (readonly) CSDKSkikoDirectContext * _Nullable recordingContext __attribute__((swift_name("recordingContext")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoGLBackendState")))
@interface CSDKSkikoGLBackendState : CSDKKotlinEnum<CSDKSkikoGLBackendState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoGLBackendState *renderTarget __attribute__((swift_name("renderTarget")));
@property (class, readonly) CSDKSkikoGLBackendState *textureBinding __attribute__((swift_name("textureBinding")));
@property (class, readonly) CSDKSkikoGLBackendState *view __attribute__((swift_name("view")));
@property (class, readonly) CSDKSkikoGLBackendState *blend __attribute__((swift_name("blend")));
@property (class, readonly) CSDKSkikoGLBackendState *msaaEnable __attribute__((swift_name("msaaEnable")));
@property (class, readonly) CSDKSkikoGLBackendState *vertex __attribute__((swift_name("vertex")));
@property (class, readonly) CSDKSkikoGLBackendState *stencil __attribute__((swift_name("stencil")));
@property (class, readonly) CSDKSkikoGLBackendState *pixelStore __attribute__((swift_name("pixelStore")));
@property (class, readonly) CSDKSkikoGLBackendState *program __attribute__((swift_name("program")));
@property (class, readonly) CSDKSkikoGLBackendState *fixedFunction __attribute__((swift_name("fixedFunction")));
@property (class, readonly) CSDKSkikoGLBackendState *misc __attribute__((swift_name("misc")));
@property (class, readonly) CSDKSkikoGLBackendState *pathRendering __attribute__((swift_name("pathRendering")));
+ (CSDKKotlinArray<CSDKSkikoGLBackendState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoGLBackendState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeEffect.Companion")))
@interface CSDKSkikoRuntimeEffectCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoRuntimeEffectCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoRuntimeEffect *)makeForColorFilterSksl:(NSString *)sksl __attribute__((swift_name("makeForColorFilter(sksl:)")));
- (CSDKSkikoRuntimeEffect *)makeForShaderSksl:(NSString *)sksl __attribute__((swift_name("makeForShader(sksl:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix22.Companion")))
@interface CSDKSkikoMatrix22Companion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoMatrix22Companion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKSkikoMatrix22 *IDENTITY __attribute__((swift_name("IDENTITY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathOp")))
@interface CSDKSkikoPathOp : CSDKKotlinEnum<CSDKSkikoPathOp *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoPathOp *difference __attribute__((swift_name("difference")));
@property (class, readonly) CSDKSkikoPathOp *intersect __attribute__((swift_name("intersect")));
@property (class, readonly) CSDKSkikoPathOp *union_ __attribute__((swift_name("union_")));
@property (class, readonly) CSDKSkikoPathOp *xor_ __attribute__((swift_name("xor_")));
@property (class, readonly) CSDKSkikoPathOp *reverseDifference __attribute__((swift_name("reverseDifference")));
+ (CSDKKotlinArray<CSDKSkikoPathOp *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoPathOp *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRRect.Companion")))
@interface CSDKSkikoRRectCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoRRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoRRect *)makeComplexLTRBL:(float)l t:(float)t r:(float)r b:(float)b radii:(CSDKKotlinFloatArray *)radii __attribute__((swift_name("makeComplexLTRB(l:t:r:b:radii:)")));
- (CSDKSkikoRRect *)makeComplexXYWHL:(float)l t:(float)t w:(float)w h:(float)h radii:(CSDKKotlinFloatArray *)radii __attribute__((swift_name("makeComplexXYWH(l:t:w:h:radii:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoRRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b radius:(float)radius __attribute__((swift_name("makeLTRB(l:t:r:b:radius:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoRRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b xRad:(float)xRad yRad:(float)yRad __attribute__((swift_name("makeLTRB(l:t:r:b:xRad:yRad:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoRRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b tlRad:(float)tlRad trRad:(float)trRad brRad:(float)brRad blRad:(float)blRad __attribute__((swift_name("makeLTRB(l:t:r:b:tlRad:trRad:brRad:blRad:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (CSDKSkikoRRect *)makeNinePatchLTRBL:(float)l t:(float)t r:(float)r b:(float)b lRad:(float)lRad tRad:(float)tRad rRad:(float)rRad bRad:(float)bRad __attribute__((swift_name("makeNinePatchLTRB(l:t:r:b:lRad:tRad:rRad:bRad:)")));
- (CSDKSkikoRRect *)makeNinePatchXYWHL:(float)l t:(float)t w:(float)w h:(float)h lRad:(float)lRad tRad:(float)tRad rRad:(float)rRad bRad:(float)bRad __attribute__((swift_name("makeNinePatchXYWH(l:t:w:h:lRad:tRad:rRad:bRad:)")));
- (CSDKSkikoRRect *)makeOvalLTRBL:(float)l t:(float)t r:(float)r b:(float)b __attribute__((swift_name("makeOvalLTRB(l:t:r:b:)")));
- (CSDKSkikoRRect *)makeOvalXYWHL:(float)l t:(float)t w:(float)w h:(float)h __attribute__((swift_name("makeOvalXYWH(l:t:w:h:)")));
- (CSDKSkikoRRect *)makePillLTRBL:(float)l t:(float)t r:(float)r b:(float)b __attribute__((swift_name("makePillLTRB(l:t:r:b:)")));
- (CSDKSkikoRRect *)makePillXYWHL:(float)l t:(float)t w:(float)w h:(float)h __attribute__((swift_name("makePillXYWH(l:t:w:h:)")));
- (CSDKSkikoRRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h radius:(float)radius __attribute__((swift_name("makeXYWH(l:t:w:h:radius:)")));
- (CSDKSkikoRRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h xRad:(float)xRad yRad:(float)yRad __attribute__((swift_name("makeXYWH(l:t:w:h:xRad:yRad:)")));
- (CSDKSkikoRRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h tlRad:(float)tlRad trRad:(float)trRad brRad:(float)brRad blRad:(float)blRad __attribute__((swift_name("makeXYWH(l:t:w:h:tlRad:trRad:brRad:blRad:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathSegmentIterator.Companion")))
@interface CSDKSkikoPathSegmentIteratorCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoPathSegmentIteratorCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoPathSegmentIterator *)makePath:(CSDKSkikoPath * _Nullable)path forceClose:(BOOL)forceClose __attribute__((swift_name("make(path:forceClose:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathSegment")))
@interface CSDKSkikoPathSegment : CSDKBase
- (instancetype)initWithVerbOrdinal:(int32_t)verbOrdinal x0:(float)x0 y0:(float)y0 isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(verbOrdinal:x0:y0:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 isCloseLine:(BOOL)isCloseLine isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:isCloseLine:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:x2:y2:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 conicWeight:(float)conicWeight isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:x2:y2:conicWeight:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithVerb:(CSDKSkikoPathVerb *)verb p0:(CSDKSkikoPoint * _Nullable)p0 p1:(CSDKSkikoPoint * _Nullable)p1 p2:(CSDKSkikoPoint * _Nullable)p2 p3:(CSDKSkikoPoint * _Nullable)p3 conicWeight:(float)conicWeight isCloseLine:(BOOL)isCloseLine isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(verb:p0:p1:p2:p3:conicWeight:isCloseLine:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 x3:(float)x3 y3:(float)y3 isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:x2:y2:x3:y3:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float conicWeight __attribute__((swift_name("conicWeight")));
@property (readonly) BOOL isCloseLine __attribute__((swift_name("isCloseLine")));
@property (readonly) BOOL isClosedContour __attribute__((swift_name("isClosedContour")));
@property (readonly) CSDKSkikoPoint * _Nullable p0 __attribute__((swift_name("p0")));
@property (readonly) CSDKSkikoPoint * _Nullable p1 __attribute__((swift_name("p1")));
@property (readonly) CSDKSkikoPoint * _Nullable p2 __attribute__((swift_name("p2")));
@property (readonly) CSDKSkikoPoint * _Nullable p3 __attribute__((swift_name("p3")));
@property (readonly) CSDKSkikoPathVerb *verb __attribute__((swift_name("verb")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBackendTexture.Companion")))
@interface CSDKSkikoBackendTextureCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoBackendTextureCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoBackendTexture *)makeGLWidth:(int32_t)width height:(int32_t)height isMipmapped:(BOOL)isMipmapped textureId:(int32_t)textureId textureTarget:(int32_t)textureTarget textureFormat:(int32_t)textureFormat __attribute__((swift_name("makeGL(width:height:isMipmapped:textureId:textureTarget:textureFormat:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixelRef.Companion")))
@interface CSDKSkikoPixelRefCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoPixelRefCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurface.Companion")))
@interface CSDKSkikoSurfaceCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoSurfaceCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoSurface * _Nullable)makeFromBackendRenderTargetContext:(CSDKSkikoDirectContext *)context rt:(CSDKSkikoBackendRenderTarget *)rt origin:(CSDKSkikoSurfaceOrigin *)origin colorFormat:(CSDKSkikoSurfaceColorFormat *)colorFormat colorSpace:(CSDKSkikoColorSpace * _Nullable)colorSpace surfaceProps:(CSDKSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeFromBackendRenderTarget(context:rt:origin:colorFormat:colorSpace:surfaceProps:)")));
- (CSDKSkikoSurface *)makeFromMTKViewContext:(CSDKSkikoDirectContext *)context mtkViewPtr:(void * _Nullable)mtkViewPtr origin:(CSDKSkikoSurfaceOrigin *)origin sampleCount:(int32_t)sampleCount colorFormat:(CSDKSkikoSurfaceColorFormat *)colorFormat colorSpace:(CSDKSkikoColorSpace * _Nullable)colorSpace surfaceProps:(CSDKSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeFromMTKView(context:mtkViewPtr:origin:sampleCount:colorFormat:colorSpace:surfaceProps:)")));
- (CSDKSkikoSurface *)makeNullWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeNull(width:height:)")));
- (CSDKSkikoSurface *)makeRasterImageInfo:(CSDKSkikoImageInfo *)imageInfo __attribute__((swift_name("makeRaster(imageInfo:)")));
- (CSDKSkikoSurface *)makeRasterImageInfo:(CSDKSkikoImageInfo *)imageInfo rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRaster(imageInfo:rowBytes:)")));
- (CSDKSkikoSurface *)makeRasterImageInfo:(CSDKSkikoImageInfo *)imageInfo rowBytes:(int32_t)rowBytes surfaceProps:(CSDKSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRaster(imageInfo:rowBytes:surfaceProps:)")));
- (CSDKSkikoSurface *)makeRasterDirectPixmap:(CSDKSkikoPixmap *)pixmap __attribute__((swift_name("makeRasterDirect(pixmap:)")));
- (CSDKSkikoSurface *)makeRasterDirectPixmap:(CSDKSkikoPixmap *)pixmap surfaceProps:(CSDKSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRasterDirect(pixmap:surfaceProps:)")));
- (CSDKSkikoSurface *)makeRasterDirectImageInfo:(CSDKSkikoImageInfo *)imageInfo pixelsPtr:(void * _Nullable)pixelsPtr rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRasterDirect(imageInfo:pixelsPtr:rowBytes:)")));
- (CSDKSkikoSurface *)makeRasterDirectImageInfo:(CSDKSkikoImageInfo *)imageInfo pixelsPtr:(void * _Nullable)pixelsPtr rowBytes:(int32_t)rowBytes surfaceProps:(CSDKSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRasterDirect(imageInfo:pixelsPtr:rowBytes:surfaceProps:)")));
- (CSDKSkikoSurface *)makeRasterN32PremulWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeRasterN32Premul(width:height:)")));
- (CSDKSkikoSurface *)makeRenderTargetContext:(CSDKSkikoDirectContext *)context budgeted:(BOOL)budgeted imageInfo:(CSDKSkikoImageInfo *)imageInfo __attribute__((swift_name("makeRenderTarget(context:budgeted:imageInfo:)")));
- (CSDKSkikoSurface *)makeRenderTargetContext:(CSDKSkikoDirectContext *)context budgeted:(BOOL)budgeted imageInfo:(CSDKSkikoImageInfo *)imageInfo sampleCount:(int32_t)sampleCount surfaceProps:(CSDKSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRenderTarget(context:budgeted:imageInfo:sampleCount:surfaceProps:)")));
- (CSDKSkikoSurface *)makeRenderTargetContext:(CSDKSkikoDirectContext *)context budgeted:(BOOL)budgeted imageInfo:(CSDKSkikoImageInfo *)imageInfo sampleCount:(int32_t)sampleCount origin:(CSDKSkikoSurfaceOrigin *)origin surfaceProps:(CSDKSkikoSurfaceProps * _Nullable)surfaceProps __attribute__((swift_name("makeRenderTarget(context:budgeted:imageInfo:sampleCount:origin:surfaceProps:)")));
- (CSDKSkikoSurface *)makeRenderTargetContext:(CSDKSkikoDirectContext *)context budgeted:(BOOL)budgeted imageInfo:(CSDKSkikoImageInfo *)imageInfo sampleCount:(int32_t)sampleCount origin:(CSDKSkikoSurfaceOrigin *)origin surfaceProps:(CSDKSkikoSurfaceProps * _Nullable)surfaceProps shouldCreateWithMips:(BOOL)shouldCreateWithMips __attribute__((swift_name("makeRenderTarget(context:budgeted:imageInfo:sampleCount:origin:surfaceProps:shouldCreateWithMips:)")));
@end

__attribute__((swift_name("SkikoCanvas")))
@interface CSDKSkikoCanvas : CSDKSkikoManaged
- (instancetype)initWithBitmap:(CSDKSkikoBitmap *)bitmap surfaceProps:(CSDKSkikoSurfaceProps *)surfaceProps __attribute__((swift_name("init(bitmap:surfaceProps:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoCanvasCompanion *companion __attribute__((swift_name("companion")));
- (CSDKSkikoCanvas *)clearColor:(int32_t)color __attribute__((swift_name("clear(color:)")));
- (CSDKSkikoCanvas *)clipPathP:(CSDKSkikoPath *)p __attribute__((swift_name("clipPath(p:)")));
- (CSDKSkikoCanvas *)clipPathP:(CSDKSkikoPath *)p antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipPath(p:antiAlias:)")));
- (CSDKSkikoCanvas *)clipPathP:(CSDKSkikoPath *)p mode:(CSDKSkikoClipMode *)mode __attribute__((swift_name("clipPath(p:mode:)")));
- (CSDKSkikoCanvas *)clipPathP:(CSDKSkikoPath *)p mode:(CSDKSkikoClipMode *)mode antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipPath(p:mode:antiAlias:)")));
- (CSDKSkikoCanvas *)clipRRectR:(CSDKSkikoRRect *)r __attribute__((swift_name("clipRRect(r:)")));
- (CSDKSkikoCanvas *)clipRRectR:(CSDKSkikoRRect *)r antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipRRect(r:antiAlias:)")));
- (CSDKSkikoCanvas *)clipRRectR:(CSDKSkikoRRect *)r mode:(CSDKSkikoClipMode *)mode __attribute__((swift_name("clipRRect(r:mode:)")));
- (CSDKSkikoCanvas *)clipRRectR:(CSDKSkikoRRect *)r mode:(CSDKSkikoClipMode *)mode antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipRRect(r:mode:antiAlias:)")));
- (CSDKSkikoCanvas *)clipRectR:(CSDKSkikoRect *)r __attribute__((swift_name("clipRect(r:)")));
- (CSDKSkikoCanvas *)clipRectR:(CSDKSkikoRect *)r antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipRect(r:antiAlias:)")));
- (CSDKSkikoCanvas *)clipRectR:(CSDKSkikoRect *)r mode:(CSDKSkikoClipMode *)mode __attribute__((swift_name("clipRect(r:mode:)")));
- (CSDKSkikoCanvas *)clipRectR:(CSDKSkikoRect *)r mode:(CSDKSkikoClipMode *)mode antiAlias:(BOOL)antiAlias __attribute__((swift_name("clipRect(r:mode:antiAlias:)")));
- (CSDKSkikoCanvas *)clipRegionR:(CSDKSkikoRegion *)r __attribute__((swift_name("clipRegion(r:)")));
- (CSDKSkikoCanvas *)clipRegionR:(CSDKSkikoRegion *)r mode:(CSDKSkikoClipMode *)mode __attribute__((swift_name("clipRegion(r:mode:)")));
- (CSDKSkikoCanvas *)concatMatrix:(CSDKSkikoMatrix33 *)matrix __attribute__((swift_name("concat(matrix:)")));
- (CSDKSkikoCanvas *)concatMatrix_:(CSDKSkikoMatrix44 *)matrix __attribute__((swift_name("concat(matrix_:)")));
- (CSDKSkikoCanvas *)drawArcLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom startAngle:(float)startAngle sweepAngle:(float)sweepAngle includeCenter:(BOOL)includeCenter paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawArc(left:top:right:bottom:startAngle:sweepAngle:includeCenter:paint:)")));
- (CSDKSkikoCanvas *)drawCircleX:(float)x y:(float)y radius:(float)radius paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawCircle(x:y:radius:paint:)")));
- (CSDKSkikoCanvas *)drawDRRectOuter:(CSDKSkikoRRect *)outer inner:(CSDKSkikoRRect *)inner paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawDRRect(outer:inner:paint:)")));
- (CSDKSkikoCanvas *)drawDrawableDrawable:(CSDKSkikoDrawable *)drawable __attribute__((swift_name("drawDrawable(drawable:)")));
- (CSDKSkikoCanvas *)drawDrawableDrawable:(CSDKSkikoDrawable *)drawable matrix:(CSDKSkikoMatrix33 * _Nullable)matrix __attribute__((swift_name("drawDrawable(drawable:matrix:)")));
- (CSDKSkikoCanvas *)drawDrawableDrawable:(CSDKSkikoDrawable *)drawable x:(float)x y:(float)y __attribute__((swift_name("drawDrawable(drawable:x:y:)")));
- (CSDKSkikoCanvas *)drawImageImage:(CSDKSkikoImage *)image left:(float)left top:(float)top __attribute__((swift_name("drawImage(image:left:top:)")));
- (CSDKSkikoCanvas *)drawImageImage:(CSDKSkikoImage *)image left:(float)left top:(float)top paint:(CSDKSkikoPaint * _Nullable)paint __attribute__((swift_name("drawImage(image:left:top:paint:)")));
- (CSDKSkikoCanvas *)drawImageNineImage:(CSDKSkikoImage *)image center:(CSDKSkikoIRect *)center dst:(CSDKSkikoRect *)dst filterMode:(CSDKSkikoFilterMode *)filterMode paint:(CSDKSkikoPaint * _Nullable)paint __attribute__((swift_name("drawImageNine(image:center:dst:filterMode:paint:)")));
- (CSDKSkikoCanvas *)drawImageRectImage:(CSDKSkikoImage *)image dst:(CSDKSkikoRect *)dst __attribute__((swift_name("drawImageRect(image:dst:)")));
- (CSDKSkikoCanvas *)drawImageRectImage:(CSDKSkikoImage *)image dst:(CSDKSkikoRect *)dst paint:(CSDKSkikoPaint * _Nullable)paint __attribute__((swift_name("drawImageRect(image:dst:paint:)")));
- (CSDKSkikoCanvas *)drawImageRectImage:(CSDKSkikoImage *)image src:(CSDKSkikoRect *)src dst:(CSDKSkikoRect *)dst __attribute__((swift_name("drawImageRect(image:src:dst:)")));
- (CSDKSkikoCanvas *)drawImageRectImage:(CSDKSkikoImage *)image src:(CSDKSkikoRect *)src dst:(CSDKSkikoRect *)dst paint:(CSDKSkikoPaint * _Nullable)paint __attribute__((swift_name("drawImageRect(image:src:dst:paint:)")));
- (CSDKSkikoCanvas *)drawImageRectImage:(CSDKSkikoImage *)image src:(CSDKSkikoRect *)src dst:(CSDKSkikoRect *)dst paint:(CSDKSkikoPaint * _Nullable)paint strict:(BOOL)strict __attribute__((swift_name("drawImageRect(image:src:dst:paint:strict:)")));
- (CSDKSkikoCanvas *)drawImageRectImage:(CSDKSkikoImage *)image src:(CSDKSkikoRect *)src dst:(CSDKSkikoRect *)dst samplingMode:(id<CSDKSkikoSamplingMode>)samplingMode paint:(CSDKSkikoPaint * _Nullable)paint strict:(BOOL)strict __attribute__((swift_name("drawImageRect(image:src:dst:samplingMode:paint:strict:)")));
- (CSDKSkikoCanvas *)drawLineX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawLine(x0:y0:x1:y1:paint:)")));
- (CSDKSkikoCanvas *)drawLinesCoords:(CSDKKotlinArray<CSDKSkikoPoint *> *)coords paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawLines(coords:paint:)")));
- (CSDKSkikoCanvas *)drawLinesCoords:(CSDKKotlinFloatArray *)coords paint_:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawLines(coords:paint_:)")));
- (CSDKSkikoCanvas *)drawOvalR:(CSDKSkikoRect *)r paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawOval(r:paint:)")));
- (CSDKSkikoCanvas *)drawPaintPaint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawPaint(paint:)")));
- (CSDKSkikoCanvas *)drawPatchCubics:(CSDKKotlinArray<CSDKSkikoPoint *> *)cubics colors:(CSDKKotlinIntArray *)colors texCoords:(CSDKKotlinArray<CSDKSkikoPoint *> * _Nullable)texCoords blendMode:(CSDKSkikoBlendMode *)blendMode paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawPatch(cubics:colors:texCoords:blendMode:paint:)")));
- (CSDKSkikoCanvas *)drawPathPath:(CSDKSkikoPath *)path paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawPath(path:paint:)")));
- (CSDKSkikoCanvas *)drawPicturePicture:(CSDKSkikoPicture *)picture matrix:(CSDKSkikoMatrix33 * _Nullable)matrix paint:(CSDKSkikoPaint * _Nullable)paint __attribute__((swift_name("drawPicture(picture:matrix:paint:)")));
- (CSDKSkikoCanvas *)drawPointX:(float)x y:(float)y paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawPoint(x:y:paint:)")));
- (CSDKSkikoCanvas *)drawPointsCoords:(CSDKKotlinArray<CSDKSkikoPoint *> *)coords paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawPoints(coords:paint:)")));
- (CSDKSkikoCanvas *)drawPointsCoords:(CSDKKotlinFloatArray *)coords paint_:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawPoints(coords:paint_:)")));
- (CSDKSkikoCanvas *)drawPolygonCoords:(CSDKKotlinArray<CSDKSkikoPoint *> *)coords paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawPolygon(coords:paint:)")));
- (CSDKSkikoCanvas *)drawPolygonCoords:(CSDKKotlinFloatArray *)coords paint_:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawPolygon(coords:paint_:)")));
- (CSDKSkikoCanvas *)drawRRectR:(CSDKSkikoRRect *)r paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawRRect(r:paint:)")));
- (CSDKSkikoCanvas *)drawRectR:(CSDKSkikoRect *)r paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawRect(r:paint:)")));
- (CSDKSkikoCanvas *)drawRectShadowR:(CSDKSkikoRect *)r dx:(float)dx dy:(float)dy blur:(float)blur color:(int32_t)color __attribute__((swift_name("drawRectShadow(r:dx:dy:blur:color:)")));
- (CSDKSkikoCanvas *)drawRectShadowR:(CSDKSkikoRect *)r dx:(float)dx dy:(float)dy blur:(float)blur spread:(float)spread color:(int32_t)color __attribute__((swift_name("drawRectShadow(r:dx:dy:blur:spread:color:)")));
- (CSDKSkikoCanvas *)drawRectShadowNoclipR:(CSDKSkikoRect *)r dx:(float)dx dy:(float)dy blur:(float)blur spread:(float)spread color:(int32_t)color __attribute__((swift_name("drawRectShadowNoclip(r:dx:dy:blur:spread:color:)")));
- (CSDKSkikoCanvas *)drawRegionR:(CSDKSkikoRegion *)r paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawRegion(r:paint:)")));
- (CSDKSkikoCanvas *)drawStringS:(NSString *)s x:(float)x y:(float)y font:(CSDKSkikoFont * _Nullable)font paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawString(s:x:y:font:paint:)")));
- (CSDKSkikoCanvas *)drawTextBlobBlob:(CSDKSkikoTextBlob *)blob x:(float)x y:(float)y paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawTextBlob(blob:x:y:paint:)")));
- (CSDKSkikoCanvas *)drawTextLineLine:(CSDKSkikoTextLine *)line x:(float)x y:(float)y paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawTextLine(line:x:y:paint:)")));
- (CSDKSkikoCanvas *)drawTriangleFanPositions:(CSDKKotlinArray<CSDKSkikoPoint *> *)positions colors:(CSDKKotlinIntArray * _Nullable)colors texCoords:(CSDKKotlinArray<CSDKSkikoPoint *> * _Nullable)texCoords indices:(CSDKKotlinShortArray * _Nullable)indices blendMode:(CSDKSkikoBlendMode *)blendMode paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawTriangleFan(positions:colors:texCoords:indices:blendMode:paint:)")));
- (CSDKSkikoCanvas *)drawTriangleStripPositions:(CSDKKotlinArray<CSDKSkikoPoint *> *)positions colors:(CSDKKotlinIntArray * _Nullable)colors texCoords:(CSDKKotlinArray<CSDKSkikoPoint *> * _Nullable)texCoords indices:(CSDKKotlinShortArray * _Nullable)indices blendMode:(CSDKSkikoBlendMode *)blendMode paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawTriangleStrip(positions:colors:texCoords:indices:blendMode:paint:)")));
- (CSDKSkikoCanvas *)drawTrianglesPositions:(CSDKKotlinArray<CSDKSkikoPoint *> *)positions colors:(CSDKKotlinIntArray * _Nullable)colors texCoords:(CSDKKotlinArray<CSDKSkikoPoint *> * _Nullable)texCoords indices:(CSDKKotlinShortArray * _Nullable)indices blendMode:(CSDKSkikoBlendMode *)blendMode paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawTriangles(positions:colors:texCoords:indices:blendMode:paint:)")));
- (CSDKSkikoCanvas *)drawVerticesVertexMode:(CSDKSkikoVertexMode *)vertexMode positions:(CSDKKotlinFloatArray *)positions colors:(CSDKKotlinIntArray * _Nullable)colors texCoords:(CSDKKotlinFloatArray * _Nullable)texCoords indices:(CSDKKotlinShortArray * _Nullable)indices blendMode:(CSDKSkikoBlendMode *)blendMode paint:(CSDKSkikoPaint *)paint __attribute__((swift_name("drawVertices(vertexMode:positions:colors:texCoords:indices:blendMode:paint:)")));
- (BOOL)readPixelsBitmap:(CSDKSkikoBitmap *)bitmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(bitmap:srcX:srcY:)")));
- (CSDKSkikoCanvas *)resetMatrix __attribute__((swift_name("resetMatrix()")));
- (CSDKSkikoCanvas *)restore __attribute__((swift_name("restore()")));
- (CSDKSkikoCanvas *)restoreToCountSaveCount:(int32_t)saveCount __attribute__((swift_name("restoreToCount(saveCount:)")));
- (CSDKSkikoCanvas *)rotateDeg:(float)deg __attribute__((swift_name("rotate(deg:)")));
- (CSDKSkikoCanvas *)rotateDeg:(float)deg x:(float)x y:(float)y __attribute__((swift_name("rotate(deg:x:y:)")));
- (int32_t)save __attribute__((swift_name("save()")));
- (int32_t)saveLayerLayerRec:(CSDKSkikoCanvasSaveLayerRec *)layerRec __attribute__((swift_name("saveLayer(layerRec:)")));
- (int32_t)saveLayerBounds:(CSDKSkikoRect * _Nullable)bounds paint:(CSDKSkikoPaint * _Nullable)paint __attribute__((swift_name("saveLayer(bounds:paint:)")));
- (int32_t)saveLayerLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom paint:(CSDKSkikoPaint * _Nullable)paint __attribute__((swift_name("saveLayer(left:top:right:bottom:paint:)")));
- (CSDKSkikoCanvas *)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (CSDKSkikoCanvas *)setMatrixMatrix:(CSDKSkikoMatrix33 *)matrix __attribute__((swift_name("setMatrix(matrix:)")));
- (CSDKSkikoCanvas *)skewSx:(float)sx sy:(float)sy __attribute__((swift_name("skew(sx:sy:)")));
- (CSDKSkikoCanvas *)translateDx:(float)dx dy:(float)dy __attribute__((swift_name("translate(dx:dy:)")));
- (BOOL)writePixelsBitmap:(CSDKSkikoBitmap *)bitmap x:(int32_t)x y:(int32_t)y __attribute__((swift_name("writePixels(bitmap:x:y:)")));
@property (readonly) CSDKSkikoMatrix44 *localToDevice __attribute__((swift_name("localToDevice")));
@property (readonly) CSDKSkikoMatrix33 *localToDeviceAsMatrix33 __attribute__((swift_name("localToDeviceAsMatrix33")));
@property (readonly) int32_t saveCount __attribute__((swift_name("saveCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoContentChangeMode")))
@interface CSDKSkikoContentChangeMode : CSDKKotlinEnum<CSDKSkikoContentChangeMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoContentChangeMode *discard __attribute__((swift_name("discard")));
@property (class, readonly) CSDKSkikoContentChangeMode *retain_ __attribute__((swift_name("retain_")));
+ (CSDKKotlinArray<CSDKSkikoContentChangeMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoContentChangeMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBackendRenderTarget")))
@interface CSDKSkikoBackendRenderTarget : CSDKSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoBackendRenderTargetCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurfaceColorFormat")))
@interface CSDKSkikoSurfaceColorFormat : CSDKKotlinEnum<CSDKSkikoSurfaceColorFormat *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *alpha8 __attribute__((swift_name("alpha8")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *rgb565 __attribute__((swift_name("rgb565")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *argb4444 __attribute__((swift_name("argb4444")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *rgba8888 __attribute__((swift_name("rgba8888")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *rgb888x __attribute__((swift_name("rgb888x")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *bgra8888 __attribute__((swift_name("bgra8888")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *rgba1010102 __attribute__((swift_name("rgba1010102")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *rgb101010x __attribute__((swift_name("rgb101010x")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *gray8 __attribute__((swift_name("gray8")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *rgbaF16Norm __attribute__((swift_name("rgbaF16Norm")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *rgbaF16 __attribute__((swift_name("rgbaF16")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *rgbaF32 __attribute__((swift_name("rgbaF32")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *r8g8Unorm __attribute__((swift_name("r8g8Unorm")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *a16Float __attribute__((swift_name("a16Float")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *r16g16Float __attribute__((swift_name("r16g16Float")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *a16Unorm __attribute__((swift_name("a16Unorm")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *r16g16Unorm __attribute__((swift_name("r16g16Unorm")));
@property (class, readonly) CSDKSkikoSurfaceColorFormat *r16g16b16a16Unorm __attribute__((swift_name("r16g16b16a16Unorm")));
+ (CSDKKotlinArray<CSDKSkikoSurfaceColorFormat *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoSurfaceColorFormat *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoSurfaceProps")))
@interface CSDKSkikoSurfaceProps : CSDKBase
- (instancetype)initWithGeo:(CSDKSkikoPixelGeometry *)geo __attribute__((swift_name("init(geo:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIsDeviceIndependentFonts:(BOOL)isDeviceIndependentFonts pixelGeometry:(CSDKSkikoPixelGeometry *)pixelGeometry __attribute__((swift_name("init(isDeviceIndependentFonts:pixelGeometry:)"))) __attribute__((objc_designated_initializer));
- (int32_t)_getFlags __attribute__((swift_name("_getFlags()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (CSDKSkikoSurfaceProps *)withDeviceIndependentFonts_deviceIndependentFonts:(BOOL)_deviceIndependentFonts __attribute__((swift_name("withDeviceIndependentFonts(_deviceIndependentFonts:)")));
- (CSDKSkikoSurfaceProps *)withPixelGeometry_pixelGeometry:(CSDKSkikoPixelGeometry *)_pixelGeometry __attribute__((swift_name("withPixelGeometry(_pixelGeometry:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoCanvas.Companion")))
@interface CSDKSkikoCanvasCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoCanvasCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoClipMode")))
@interface CSDKSkikoClipMode : CSDKKotlinEnum<CSDKSkikoClipMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoClipMode *difference __attribute__((swift_name("difference")));
@property (class, readonly) CSDKSkikoClipMode *intersect __attribute__((swift_name("intersect")));
+ (CSDKKotlinArray<CSDKSkikoClipMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoClipMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion")))
@interface CSDKSkikoRegion : CSDKSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoRegionCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)computeRegionComplexity __attribute__((swift_name("computeRegionComplexity()")));
- (BOOL)containsRect:(CSDKSkikoIRect *)rect __attribute__((swift_name("contains(rect:)")));
- (BOOL)containsR:(CSDKSkikoRegion * _Nullable)r __attribute__((swift_name("contains(r:)")));
- (BOOL)containsX:(int32_t)x y:(int32_t)y __attribute__((swift_name("contains(x:y:)")));
- (BOOL)getBoundaryPathP:(CSDKSkikoPath * _Nullable)p __attribute__((swift_name("getBoundaryPath(p:)")));
- (BOOL)intersectsRect:(CSDKSkikoIRect *)rect __attribute__((swift_name("intersects(rect:)")));
- (BOOL)intersectsR:(CSDKSkikoRegion * _Nullable)r __attribute__((swift_name("intersects(r:)")));
- (BOOL)opRect:(CSDKSkikoIRect *)rect op:(CSDKSkikoRegionOp *)op __attribute__((swift_name("op(rect:op:)")));
- (BOOL)opR:(CSDKSkikoRegion * _Nullable)r op:(CSDKSkikoRegionOp *)op __attribute__((swift_name("op(r:op:)")));
- (BOOL)opRect:(CSDKSkikoIRect *)rect r:(CSDKSkikoRegion * _Nullable)r op:(CSDKSkikoRegionOp *)op __attribute__((swift_name("op(rect:r:op:)")));
- (BOOL)opR:(CSDKSkikoRegion * _Nullable)r rect:(CSDKSkikoIRect *)rect op:(CSDKSkikoRegionOp *)op __attribute__((swift_name("op(r:rect:op:)")));
- (BOOL)opA:(CSDKSkikoRegion * _Nullable)a b:(CSDKSkikoRegion * _Nullable)b op:(CSDKSkikoRegionOp *)op __attribute__((swift_name("op(a:b:op:)")));
- (BOOL)quickContainsRect:(CSDKSkikoIRect *)rect __attribute__((swift_name("quickContains(rect:)")));
- (BOOL)quickRejectRect:(CSDKSkikoIRect *)rect __attribute__((swift_name("quickReject(rect:)")));
- (BOOL)quickRejectR:(CSDKSkikoRegion * _Nullable)r __attribute__((swift_name("quickReject(r:)")));
- (BOOL)setR:(CSDKSkikoRegion * _Nullable)r __attribute__((swift_name("set(r:)")));
- (BOOL)setEmpty __attribute__((swift_name("setEmpty()")));
- (BOOL)setPathPath:(CSDKSkikoPath * _Nullable)path clip:(CSDKSkikoRegion * _Nullable)clip __attribute__((swift_name("setPath(path:clip:)")));
- (BOOL)setRectRect:(CSDKSkikoIRect *)rect __attribute__((swift_name("setRect(rect:)")));
- (BOOL)setRectsRects:(CSDKKotlinArray<CSDKSkikoIRect *> *)rects __attribute__((swift_name("setRects(rects:)")));
- (BOOL)setRegionR:(CSDKSkikoRegion * _Nullable)r __attribute__((swift_name("setRegion(r:)")));
- (void)translateDx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("translate(dx:dy:)")));
@property (readonly) CSDKSkikoIRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) BOOL isComplex __attribute__((swift_name("isComplex")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isRect __attribute__((swift_name("isRect")));
@end

__attribute__((swift_name("SkikoDrawable")))
@interface CSDKSkikoDrawable : CSDKSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoDrawableCompanion *companion __attribute__((swift_name("companion")));
- (CSDKSkikoDrawable *)drawCanvas:(CSDKSkikoCanvas * _Nullable)canvas __attribute__((swift_name("draw(canvas:)")));
- (CSDKSkikoDrawable *)drawCanvas:(CSDKSkikoCanvas * _Nullable)canvas matrix:(CSDKSkikoMatrix33 * _Nullable)matrix __attribute__((swift_name("draw(canvas:matrix:)")));
- (CSDKSkikoDrawable *)drawCanvas:(CSDKSkikoCanvas * _Nullable)canvas x:(float)x y:(float)y __attribute__((swift_name("draw(canvas:x:y:)")));
- (CSDKSkikoPicture *)makePictureSnapshot __attribute__((swift_name("makePictureSnapshot()")));
- (CSDKSkikoDrawable *)notifyDrawingChanged __attribute__((swift_name("notifyDrawingChanged()")));
- (void)onDrawCanvas:(CSDKSkikoCanvas * _Nullable)canvas __attribute__((swift_name("onDraw(canvas:)")));
- (CSDKSkikoRect *)onGetBounds __attribute__((swift_name("onGetBounds()")));
@property (readonly) CSDKSkikoRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFilterMode")))
@interface CSDKSkikoFilterMode : CSDKKotlinEnum<CSDKSkikoFilterMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoFilterMode *nearest __attribute__((swift_name("nearest")));
@property (class, readonly) CSDKSkikoFilterMode *linear __attribute__((swift_name("linear")));
+ (CSDKKotlinArray<CSDKSkikoFilterMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoFilterMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPicture")))
@interface CSDKSkikoPicture : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoPictureCompanion *companion __attribute__((swift_name("companion")));
- (CSDKSkikoShader *)makeShaderTmx:(CSDKSkikoFilterTileMode *)tmx tmy:(CSDKSkikoFilterTileMode *)tmy mode:(CSDKSkikoFilterMode *)mode localMatrix:(CSDKSkikoMatrix33 * _Nullable)localMatrix tileRect:(CSDKSkikoRect * _Nullable)tileRect __attribute__((swift_name("makeShader(tmx:tmy:mode:localMatrix:tileRect:)")));
- (CSDKSkikoPicture *)playbackCanvas:(CSDKSkikoCanvas * _Nullable)canvas abort:(CSDKBoolean *(^ _Nullable)(void))abort __attribute__((swift_name("playback(canvas:abort:)")));
- (CSDKSkikoData *)serializeToData __attribute__((swift_name("serializeToData()")));
@property (readonly) void * _Nullable approximateBytesUsed __attribute__((swift_name("approximateBytesUsed")));
@property (readonly) int32_t approximateOpCount __attribute__((swift_name("approximateOpCount")));
@property (readonly) CSDKSkikoRect *cullRect __attribute__((swift_name("cullRect")));
@property (readonly) int32_t uniqueId __attribute__((swift_name("uniqueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFont")))
@interface CSDKSkikoFont : CSDKSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTypeface:(CSDKSkikoTypeface * _Nullable)typeface __attribute__((swift_name("init(typeface:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTypeface:(CSDKSkikoTypeface * _Nullable)typeface size:(float)size __attribute__((swift_name("init(typeface:size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTypeface:(CSDKSkikoTypeface * _Nullable)typeface size:(float)size scaleX:(float)scaleX skewX:(float)skewX __attribute__((swift_name("init(typeface:size:scaleX:skewX:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoFontCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)areBitmapsEmbedded __attribute__((swift_name("areBitmapsEmbedded()")));
- (CSDKKotlinArray<CSDKSkikoRect *> *)getBoundsGlyphs:(CSDKKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getBounds(glyphs:)")));
- (CSDKKotlinArray<CSDKSkikoRect *> *)getBoundsGlyphs:(CSDKKotlinShortArray * _Nullable)glyphs p:(CSDKSkikoPaint * _Nullable)p __attribute__((swift_name("getBounds(glyphs:p:)")));
- (CSDKSkikoPath * _Nullable)getPathGlyph:(int16_t)glyph __attribute__((swift_name("getPath(glyph:)")));
- (CSDKKotlinArray<CSDKSkikoPath *> *)getPathsGlyphs:(CSDKKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getPaths(glyphs:)")));
- (CSDKKotlinArray<CSDKSkikoPoint *> *)getPositionsGlyphs:(CSDKKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getPositions(glyphs:)")));
- (CSDKKotlinArray<CSDKSkikoPoint *> *)getPositionsGlyphs:(CSDKKotlinShortArray * _Nullable)glyphs offset:(CSDKSkikoPoint *)offset __attribute__((swift_name("getPositions(glyphs:offset:)")));
- (CSDKKotlinShortArray *)getStringGlyphsS:(NSString *)s __attribute__((swift_name("getStringGlyphs(s:)")));
- (int32_t)getStringGlyphsCountS:(NSString * _Nullable)s __attribute__((swift_name("getStringGlyphsCount(s:)")));
- (int16_t)getUTF32GlyphUnichar:(int32_t)unichar __attribute__((swift_name("getUTF32Glyph(unichar:)")));
- (CSDKKotlinShortArray *)getUTF32GlyphsUni:(CSDKKotlinIntArray * _Nullable)uni __attribute__((swift_name("getUTF32Glyphs(uni:)")));
- (CSDKKotlinFloatArray *)getWidthsGlyphs:(CSDKKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getWidths(glyphs:)")));
- (CSDKKotlinFloatArray *)getXPositionsGlyphs:(CSDKKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getXPositions(glyphs:)")));
- (CSDKKotlinFloatArray *)getXPositionsGlyphs:(CSDKKotlinShortArray * _Nullable)glyphs offset:(float)offset __attribute__((swift_name("getXPositions(glyphs:offset:)")));
- (CSDKSkikoFont *)makeWithSizeSize:(float)size __attribute__((swift_name("makeWithSize(size:)")));
- (CSDKSkikoRect *)measureTextS:(NSString * _Nullable)s p:(CSDKSkikoPaint * _Nullable)p __attribute__((swift_name("measureText(s:p:)")));
- (float)measureTextWidthS:(NSString * _Nullable)s __attribute__((swift_name("measureTextWidth(s:)")));
- (float)measureTextWidthS:(NSString * _Nullable)s p:(CSDKSkikoPaint * _Nullable)p __attribute__((swift_name("measureTextWidth(s:p:)")));
- (void)setBitmapsEmbeddedValue:(BOOL)value __attribute__((swift_name("setBitmapsEmbedded(value:)")));
- (CSDKSkikoFont *)setTypefaceTypeface:(CSDKSkikoTypeface * _Nullable)typeface __attribute__((swift_name("setTypeface(typeface:)")));
@property CSDKSkikoFontEdging *edging __attribute__((swift_name("edging")));
@property CSDKSkikoFontHinting *hinting __attribute__((swift_name("hinting")));
@property BOOL isAutoHintingForced __attribute__((swift_name("isAutoHintingForced")));
@property BOOL isBaselineSnapped __attribute__((swift_name("isBaselineSnapped")));
@property BOOL isEmboldened __attribute__((swift_name("isEmboldened")));
@property BOOL isLinearMetrics __attribute__((swift_name("isLinearMetrics")));
@property BOOL isSubpixel __attribute__((swift_name("isSubpixel")));
@property (readonly) CSDKSkikoFontMetrics *metrics __attribute__((swift_name("metrics")));
@property float scaleX __attribute__((swift_name("scaleX")));
@property float size __attribute__((swift_name("size")));
@property float skewX __attribute__((swift_name("skewX")));
@property (readonly) float spacing __attribute__((swift_name("spacing")));
@property (readonly) CSDKSkikoTypeface * _Nullable typeface __attribute__((swift_name("typeface")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTextBlob")))
@interface CSDKSkikoTextBlob : CSDKSkikoManaged <CSDKKotlinIterable>
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoTextBlobCompanion *companion __attribute__((swift_name("companion")));
- (CSDKKotlinFloatArray * _Nullable)getInterceptsLowerBound:(float)lowerBound upperBound:(float)upperBound __attribute__((swift_name("getIntercepts(lowerBound:upperBound:)")));
- (CSDKKotlinFloatArray * _Nullable)getInterceptsLowerBound:(float)lowerBound upperBound:(float)upperBound paint:(CSDKSkikoPaint * _Nullable)paint __attribute__((swift_name("getIntercepts(lowerBound:upperBound:paint:)")));
- (id<CSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (CSDKSkikoData *)serializeToData __attribute__((swift_name("serializeToData()")));
@property (readonly) CSDKSkikoRect *blockBounds __attribute__((swift_name("blockBounds")));
@property (readonly) CSDKSkikoRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) CSDKKotlinIntArray *clusters __attribute__((swift_name("clusters")));
@property (readonly) float firstBaseline __attribute__((swift_name("firstBaseline")));
@property (readonly) CSDKKotlinShortArray *glyphs __attribute__((swift_name("glyphs")));
@property (readonly) float lastBaseline __attribute__((swift_name("lastBaseline")));
@property (readonly) CSDKKotlinFloatArray *positions __attribute__((swift_name("positions")));
@property (readonly) CSDKSkikoRect *tightBounds __attribute__((swift_name("tightBounds")));
@property (readonly) int32_t uniqueId __attribute__((swift_name("uniqueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTextLine")))
@interface CSDKSkikoTextLine : CSDKSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoTextLineCompanion *companion __attribute__((swift_name("companion")));
- (float)getCoordAtOffsetOffset:(int32_t)offset __attribute__((swift_name("getCoordAtOffset(offset:)")));
- (CSDKKotlinFloatArray * _Nullable)getInterceptsLowerBound:(float)lowerBound upperBound:(float)upperBound __attribute__((swift_name("getIntercepts(lowerBound:upperBound:)")));
- (CSDKKotlinFloatArray * _Nullable)getInterceptsLowerBound:(float)lowerBound upperBound:(float)upperBound paint:(CSDKSkikoPaint * _Nullable)paint __attribute__((swift_name("getIntercepts(lowerBound:upperBound:paint:)")));
- (int32_t)getLeftOffsetAtCoordX:(float)x __attribute__((swift_name("getLeftOffsetAtCoord(x:)")));
- (int32_t)getOffsetAtCoordX:(float)x __attribute__((swift_name("getOffsetAtCoord(x:)")));
@property (readonly) float ascent __attribute__((swift_name("ascent")));
@property (readonly) float capHeight __attribute__((swift_name("capHeight")));
@property (readonly) float descent __attribute__((swift_name("descent")));
@property (readonly) CSDKKotlinShortArray *glyphs __attribute__((swift_name("glyphs")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float leading __attribute__((swift_name("leading")));
@property (readonly) CSDKKotlinFloatArray *positions __attribute__((swift_name("positions")));
@property (readonly) CSDKSkikoTextBlob * _Nullable textBlob __attribute__((swift_name("textBlob")));
@property (readonly) float width __attribute__((swift_name("width")));
@property (readonly) float xHeight __attribute__((swift_name("xHeight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinShortArray")))
@interface CSDKKotlinShortArray : CSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CSDKShort *(^)(CSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int16_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CSDKKotlinShortIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int16_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoVertexMode")))
@interface CSDKSkikoVertexMode : CSDKKotlinEnum<CSDKSkikoVertexMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoVertexMode *triangles __attribute__((swift_name("triangles")));
@property (class, readonly) CSDKSkikoVertexMode *triangleStrip __attribute__((swift_name("triangleStrip")));
@property (class, readonly) CSDKSkikoVertexMode *triangleFan __attribute__((swift_name("triangleFan")));
+ (CSDKKotlinArray<CSDKSkikoVertexMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoVertexMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoCanvas.SaveLayerRec")))
@interface CSDKSkikoCanvasSaveLayerRec : CSDKBase
- (instancetype)initWithBounds:(CSDKSkikoRect * _Nullable)bounds paint:(CSDKSkikoPaint * _Nullable)paint backdrop:(CSDKSkikoImageFilter * _Nullable)backdrop colorSpace:(CSDKSkikoColorSpace * _Nullable)colorSpace saveLayerFlags:(CSDKSkikoCanvasSaveLayerFlags *)saveLayerFlags __attribute__((swift_name("init(bounds:paint:backdrop:colorSpace:saveLayerFlags:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CSDKSkikoImageFilter * _Nullable backdrop __attribute__((swift_name("backdrop")));
@property (readonly) CSDKSkikoRect * _Nullable bounds __attribute__((swift_name("bounds")));
@property (readonly) CSDKSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) CSDKSkikoPaint * _Nullable paint __attribute__((swift_name("paint")));
@property (readonly) CSDKSkikoCanvasSaveLayerFlags *saveLayerFlags __attribute__((swift_name("saveLayerFlags")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBackendRenderTarget.Companion")))
@interface CSDKSkikoBackendRenderTargetCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoBackendRenderTargetCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoBackendRenderTarget *)makeDirect3DWidth:(int32_t)width height:(int32_t)height texturePtr:(void * _Nullable)texturePtr format:(int32_t)format sampleCnt:(int32_t)sampleCnt levelCnt:(int32_t)levelCnt __attribute__((swift_name("makeDirect3D(width:height:texturePtr:format:sampleCnt:levelCnt:)")));
- (CSDKSkikoBackendRenderTarget *)makeGLWidth:(int32_t)width height:(int32_t)height sampleCnt:(int32_t)sampleCnt stencilBits:(int32_t)stencilBits fbId:(int32_t)fbId fbFormat:(int32_t)fbFormat __attribute__((swift_name("makeGL(width:height:sampleCnt:stencilBits:fbId:fbFormat:)")));
- (CSDKSkikoBackendRenderTarget *)makeMetalWidth:(int32_t)width height:(int32_t)height texturePtr:(void * _Nullable)texturePtr __attribute__((swift_name("makeMetal(width:height:texturePtr:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixelGeometry")))
@interface CSDKSkikoPixelGeometry : CSDKKotlinEnum<CSDKSkikoPixelGeometry *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoPixelGeometry *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) CSDKSkikoPixelGeometry *rgbH __attribute__((swift_name("rgbH")));
@property (class, readonly) CSDKSkikoPixelGeometry *bgrH __attribute__((swift_name("bgrH")));
@property (class, readonly) CSDKSkikoPixelGeometry *rgbV __attribute__((swift_name("rgbV")));
@property (class, readonly) CSDKSkikoPixelGeometry *bgrV __attribute__((swift_name("bgrV")));
+ (CSDKKotlinArray<CSDKSkikoPixelGeometry *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoPixelGeometry *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion.Companion")))
@interface CSDKSkikoRegionCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoRegionCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion.Op")))
@interface CSDKSkikoRegionOp : CSDKKotlinEnum<CSDKSkikoRegionOp *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoRegionOpCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) CSDKSkikoRegionOp *difference __attribute__((swift_name("difference")));
@property (class, readonly) CSDKSkikoRegionOp *intersect __attribute__((swift_name("intersect")));
@property (class, readonly) CSDKSkikoRegionOp *union_ __attribute__((swift_name("union_")));
@property (class, readonly) CSDKSkikoRegionOp *xor_ __attribute__((swift_name("xor_")));
@property (class, readonly) CSDKSkikoRegionOp *reverseDifference __attribute__((swift_name("reverseDifference")));
@property (class, readonly) CSDKSkikoRegionOp *replace __attribute__((swift_name("replace")));
+ (CSDKKotlinArray<CSDKSkikoRegionOp *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoRegionOp *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoDrawable.Companion")))
@interface CSDKSkikoDrawableCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoDrawableCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPicture.Companion")))
@interface CSDKSkikoPictureCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoPictureCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoPicture * _Nullable)makeFromDataData:(CSDKSkikoData * _Nullable)data __attribute__((swift_name("makeFromData(data:)")));
- (CSDKSkikoPicture *)makePlaceholderCull:(CSDKSkikoRect *)cull __attribute__((swift_name("makePlaceholder(cull:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTypeface")))
@interface CSDKSkikoTypeface : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoTypefaceCompanion *companion __attribute__((swift_name("companion")));
- (CSDKKotlinIntArray * _Nullable)getKerningPairAdjustmentsGlyphs:(CSDKKotlinShortArray * _Nullable)glyphs __attribute__((swift_name("getKerningPairAdjustments(glyphs:)")));
- (CSDKKotlinShortArray *)getStringGlyphsS:(NSString *)s __attribute__((swift_name("getStringGlyphs(s:)")));
- (CSDKSkikoData * _Nullable)getTableDataTag:(NSString *)tag __attribute__((swift_name("getTableData(tag:)")));
- (void * _Nullable)getTableSizeTag:(NSString *)tag __attribute__((swift_name("getTableSize(tag:)")));
- (int16_t)getUTF32GlyphUnichar:(int32_t)unichar __attribute__((swift_name("getUTF32Glyph(unichar:)")));
- (CSDKKotlinShortArray *)getUTF32GlyphsUni:(CSDKKotlinIntArray * _Nullable)uni __attribute__((swift_name("getUTF32Glyphs(uni:)")));
- (CSDKSkikoTypeface *)makeCloneVariation:(CSDKSkikoFontVariation *)variation __attribute__((swift_name("makeClone(variation:)")));
- (CSDKSkikoTypeface *)makeCloneVariations:(CSDKKotlinArray<CSDKSkikoFontVariation *> *)variations collectionIndex:(int32_t)collectionIndex __attribute__((swift_name("makeClone(variations:collectionIndex:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKSkikoRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) NSString *familyName __attribute__((swift_name("familyName")));
@property (readonly) CSDKKotlinArray<CSDKSkikoFontFamilyName *> *familyNames __attribute__((swift_name("familyNames")));
@property (readonly) CSDKSkikoFontStyle *fontStyle __attribute__((swift_name("fontStyle")));
@property (readonly) int32_t glyphsCount __attribute__((swift_name("glyphsCount")));
@property (readonly) BOOL isBold __attribute__((swift_name("isBold")));
@property (readonly) BOOL isFixedPitch __attribute__((swift_name("isFixedPitch")));
@property (readonly) BOOL isItalic __attribute__((swift_name("isItalic")));
@property (readonly) CSDKKotlinArray<NSString *> *tableTags __attribute__((swift_name("tableTags")));
@property (readonly) int32_t tablesCount __attribute__((swift_name("tablesCount")));
@property (readonly) int32_t uniqueId __attribute__((swift_name("uniqueId")));
@property (readonly) int32_t unitsPerEm __attribute__((swift_name("unitsPerEm")));
@property (readonly) CSDKKotlinArray<CSDKSkikoFontVariationAxis *> * _Nullable variationAxes __attribute__((swift_name("variationAxes")));
@property (readonly) CSDKKotlinArray<CSDKSkikoFontVariation *> * _Nullable variations __attribute__((swift_name("variations")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFont.Companion")))
@interface CSDKSkikoFontCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoFontCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontEdging")))
@interface CSDKSkikoFontEdging : CSDKKotlinEnum<CSDKSkikoFontEdging *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoFontEdging *alias __attribute__((swift_name("alias")));
@property (class, readonly) CSDKSkikoFontEdging *antiAlias __attribute__((swift_name("antiAlias")));
@property (class, readonly) CSDKSkikoFontEdging *subpixelAntiAlias __attribute__((swift_name("subpixelAntiAlias")));
+ (CSDKKotlinArray<CSDKSkikoFontEdging *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoFontEdging *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontHinting")))
@interface CSDKSkikoFontHinting : CSDKKotlinEnum<CSDKSkikoFontHinting *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoFontHinting *none __attribute__((swift_name("none")));
@property (class, readonly) CSDKSkikoFontHinting *slight __attribute__((swift_name("slight")));
@property (class, readonly) CSDKSkikoFontHinting *normal __attribute__((swift_name("normal")));
@property (class, readonly) CSDKSkikoFontHinting *full __attribute__((swift_name("full")));
+ (CSDKKotlinArray<CSDKSkikoFontHinting *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoFontHinting *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontMetrics")))
@interface CSDKSkikoFontMetrics : CSDKBase
- (instancetype)initWithTop:(float)top ascent:(float)ascent descent:(float)descent bottom:(float)bottom leading:(float)leading avgCharWidth:(float)avgCharWidth maxCharWidth:(float)maxCharWidth xMin:(float)xMin xMax:(float)xMax xHeight:(float)xHeight capHeight:(float)capHeight underlineThickness:(CSDKFloat * _Nullable)underlineThickness underlinePosition:(CSDKFloat * _Nullable)underlinePosition strikeoutThickness:(CSDKFloat * _Nullable)strikeoutThickness strikeoutPosition:(CSDKFloat * _Nullable)strikeoutPosition __attribute__((swift_name("init(top:ascent:descent:bottom:leading:avgCharWidth:maxCharWidth:xMin:xMax:xHeight:capHeight:underlineThickness:underlinePosition:strikeoutThickness:strikeoutPosition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoFontMetricsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float ascent __attribute__((swift_name("ascent")));
@property (readonly) float avgCharWidth __attribute__((swift_name("avgCharWidth")));
@property (readonly) float bottom __attribute__((swift_name("bottom")));
@property (readonly) float capHeight __attribute__((swift_name("capHeight")));
@property (readonly) float descent __attribute__((swift_name("descent")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float leading __attribute__((swift_name("leading")));
@property (readonly) float maxCharWidth __attribute__((swift_name("maxCharWidth")));
@property (readonly) CSDKFloat * _Nullable strikeoutPosition __attribute__((swift_name("strikeoutPosition")));
@property (readonly) CSDKFloat * _Nullable strikeoutThickness __attribute__((swift_name("strikeoutThickness")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) CSDKFloat * _Nullable underlinePosition __attribute__((swift_name("underlinePosition")));
@property (readonly) CSDKFloat * _Nullable underlineThickness __attribute__((swift_name("underlineThickness")));
@property (readonly) float xHeight __attribute__((swift_name("xHeight")));
@property (readonly) float xMax __attribute__((swift_name("xMax")));
@property (readonly) float xMin __attribute__((swift_name("xMin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTextBlob.Companion")))
@interface CSDKSkikoTextBlobCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoTextBlobCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoTextBlob * _Nullable)makeFromDataData:(CSDKSkikoData * _Nullable)data __attribute__((swift_name("makeFromData(data:)")));
- (CSDKSkikoTextBlob * _Nullable)makeFromPosGlyphs:(CSDKKotlinShortArray *)glyphs pos:(CSDKKotlinArray<CSDKSkikoPoint *> *)pos font:(CSDKSkikoFont * _Nullable)font __attribute__((swift_name("makeFromPos(glyphs:pos:font:)")));
- (CSDKSkikoTextBlob * _Nullable)makeFromPosHGlyphs:(CSDKKotlinShortArray *)glyphs xpos:(CSDKKotlinFloatArray *)xpos ypos:(float)ypos font:(CSDKSkikoFont * _Nullable)font __attribute__((swift_name("makeFromPosH(glyphs:xpos:ypos:font:)")));
- (CSDKSkikoTextBlob * _Nullable)makeFromRSXformGlyphs:(CSDKKotlinShortArray *)glyphs xform:(CSDKKotlinArray<CSDKSkikoRSXform *> *)xform font:(CSDKSkikoFont * _Nullable)font __attribute__((swift_name("makeFromRSXform(glyphs:xform:font:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTextLine.Companion")))
@interface CSDKSkikoTextLineCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoTextLineCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoTextLine *)makeText:(NSString * _Nullable)text font:(CSDKSkikoFont * _Nullable)font __attribute__((swift_name("make(text:font:)")));
- (CSDKSkikoTextLine *)makeText:(NSString * _Nullable)text font:(CSDKSkikoFont * _Nullable)font opts:(CSDKSkikoShapingOptions * _Nullable)opts __attribute__((swift_name("make(text:font:opts:)")));
@end

__attribute__((swift_name("KotlinShortIterator")))
@interface CSDKKotlinShortIterator : CSDKBase <CSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CSDKShort *)next __attribute__((swift_name("next()")));
- (int16_t)nextShort __attribute__((swift_name("nextShort()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoCanvas.SaveLayerFlags")))
@interface CSDKSkikoCanvasSaveLayerFlags : CSDKBase
- (instancetype)initWithFlagsSet:(CSDKKotlinArray<CSDKSkikoCanvasSaveLayerFlagsSet *> *)flagsSet __attribute__((swift_name("init(flagsSet:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsFlag:(CSDKSkikoCanvasSaveLayerFlagsSet *)flag __attribute__((swift_name("contains(flag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion.OpCompanion")))
@interface CSDKSkikoRegionOpCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoRegionOpCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoTypeface.Companion")))
@interface CSDKSkikoTypefaceCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoTypefaceCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoTypeface *)makeEmpty __attribute__((swift_name("makeEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontVariation")))
@interface CSDKSkikoFontVariation : CSDKBase
- (instancetype)initWith_tag:(int32_t)_tag value:(float)value __attribute__((swift_name("init(_tag:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeature:(NSString *)feature value:(float)value __attribute__((swift_name("init(feature:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoFontVariationCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t _tag __attribute__((swift_name("_tag")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@property (readonly) float value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontFamilyName")))
@interface CSDKSkikoFontFamilyName : CSDKBase
- (instancetype)initWithName:(NSString *)name language:(NSString *)language __attribute__((swift_name("init(name:language:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontStyle")))
@interface CSDKSkikoFontStyle : CSDKBase
- (instancetype)initWithWeight:(int32_t)weight width:(int32_t)width slant:(CSDKSkikoFontSlant *)slant __attribute__((swift_name("init(weight:width:slant:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoFontStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (CSDKSkikoFontStyle *)withSlantSlant:(CSDKSkikoFontSlant *)slant __attribute__((swift_name("withSlant(slant:)")));
- (CSDKSkikoFontStyle *)withWeightWeight:(int32_t)weight __attribute__((swift_name("withWeight(weight:)")));
- (CSDKSkikoFontStyle *)withWidthWidth:(int32_t)width __attribute__((swift_name("withWidth(width:)")));
@property (readonly) int32_t _value __attribute__((swift_name("_value")));
@property (readonly) CSDKSkikoFontSlant *slant __attribute__((swift_name("slant")));
@property (readonly) int32_t weight __attribute__((swift_name("weight")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontVariationAxis")))
@interface CSDKSkikoFontVariationAxis : CSDKBase
- (instancetype)initWithTag:(NSString *)tag min:(float)min def:(float)def max:(float)max __attribute__((swift_name("init(tag:min:def:max:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWith_tag:(int32_t)_tag minValue:(float)minValue defaultValue:(float)defaultValue maxValue:(float)maxValue isHidden:(BOOL)isHidden __attribute__((swift_name("init(_tag:minValue:defaultValue:maxValue:isHidden:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTag:(NSString *)tag min:(float)min def:(float)def max:(float)max hidden:(BOOL)hidden __attribute__((swift_name("init(tag:min:def:max:hidden:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t _tag __attribute__((swift_name("_tag")));
@property (readonly) float defaultValue __attribute__((swift_name("defaultValue")));
@property (readonly) BOOL isHidden __attribute__((swift_name("isHidden")));
@property (readonly) float maxValue __attribute__((swift_name("maxValue")));
@property (readonly) float minValue __attribute__((swift_name("minValue")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontMetrics.Companion")))
@interface CSDKSkikoFontMetricsCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoFontMetricsCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRSXform")))
@interface CSDKSkikoRSXform : CSDKBase
- (instancetype)initWithScos:(float)scos ssin:(float)ssin tx:(float)tx ty:(float)ty __attribute__((swift_name("init(scos:ssin:tx:ty:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoRSXformCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShapingOptions")))
@interface CSDKSkikoShapingOptions : CSDKBase
- (instancetype)initWithFontMgr:(CSDKSkikoFontMgr * _Nullable)fontMgr features:(CSDKKotlinArray<CSDKSkikoFontFeature *> * _Nullable)features isLeftToRight:(BOOL)isLeftToRight isApproximateSpaces:(BOOL)isApproximateSpaces isApproximatePunctuation:(BOOL)isApproximatePunctuation __attribute__((swift_name("init(fontMgr:features:isLeftToRight:isApproximateSpaces:isApproximatePunctuation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoShapingOptionsCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (CSDKSkikoShapingOptions *)withApproximatePunctuation_approximatePunctuation:(BOOL)_approximatePunctuation __attribute__((swift_name("withApproximatePunctuation(_approximatePunctuation:)")));
- (CSDKSkikoShapingOptions *)withApproximateSpaces_approximateSpaces:(BOOL)_approximateSpaces __attribute__((swift_name("withApproximateSpaces(_approximateSpaces:)")));
- (CSDKSkikoShapingOptions *)withFeaturesFeatures:(CSDKKotlinArray<CSDKSkikoFontFeature *> * _Nullable)features __attribute__((swift_name("withFeatures(features:)")));
- (CSDKSkikoShapingOptions *)withFeaturesFeaturesString:(NSString * _Nullable)featuresString __attribute__((swift_name("withFeatures(featuresString:)")));
- (CSDKSkikoShapingOptions *)withFontMgr_fontMgr:(CSDKSkikoFontMgr * _Nullable)_fontMgr __attribute__((swift_name("withFontMgr(_fontMgr:)")));
- (CSDKSkikoShapingOptions *)withLeftToRight_leftToRight:(BOOL)_leftToRight __attribute__((swift_name("withLeftToRight(_leftToRight:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoCanvas.SaveLayerFlagsSet")))
@interface CSDKSkikoCanvasSaveLayerFlagsSet : CSDKKotlinEnum<CSDKSkikoCanvasSaveLayerFlagsSet *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoCanvasSaveLayerFlagsSet *preservelcdtext __attribute__((swift_name("preservelcdtext")));
@property (class, readonly) CSDKSkikoCanvasSaveLayerFlagsSet *initwithprevious __attribute__((swift_name("initwithprevious")));
@property (class, readonly) CSDKSkikoCanvasSaveLayerFlagsSet *f16colortype __attribute__((swift_name("f16colortype")));
+ (CSDKKotlinArray<CSDKSkikoCanvasSaveLayerFlagsSet *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoCanvasSaveLayerFlagsSet *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t mask __attribute__((swift_name("mask")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontVariation.Companion")))
@interface CSDKSkikoFontVariationCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoFontVariationCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKotlinArray<CSDKSkikoFontVariation *> *)parseStr:(NSString *)str __attribute__((swift_name("parse(str:)")));
- (CSDKSkikoFontVariation *)parseOneS:(NSString *)s __attribute__((swift_name("parseOne(s:)")));
@property (readonly) CSDKKotlinArray<CSDKSkikoFontVariation *> *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontSlant")))
@interface CSDKSkikoFontSlant : CSDKKotlinEnum<CSDKSkikoFontSlant *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKSkikoFontSlant *upright __attribute__((swift_name("upright")));
@property (class, readonly) CSDKSkikoFontSlant *italic __attribute__((swift_name("italic")));
@property (class, readonly) CSDKSkikoFontSlant *oblique __attribute__((swift_name("oblique")));
+ (CSDKKotlinArray<CSDKSkikoFontSlant *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKSkikoFontSlant *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontStyle.Companion")))
@interface CSDKSkikoFontStyleCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoFontStyleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKSkikoFontStyle *BOLD __attribute__((swift_name("BOLD")));
@property (readonly) CSDKSkikoFontStyle *BOLD_ITALIC __attribute__((swift_name("BOLD_ITALIC")));
@property (readonly) CSDKSkikoFontStyle *ITALIC __attribute__((swift_name("ITALIC")));
@property (readonly) CSDKSkikoFontStyle *NORMAL __attribute__((swift_name("NORMAL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRSXform.Companion")))
@interface CSDKSkikoRSXformCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoRSXformCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoRSXform *)makeFromRadiansScale:(float)scale radians:(float)radians tx:(float)tx ty:(float)ty ax:(float)ax ay:(float)ay __attribute__((swift_name("makeFromRadians(scale:radians:tx:ty:ax:ay:)")));
@end

__attribute__((swift_name("SkikoFontMgr")))
@interface CSDKSkikoFontMgr : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoFontMgrCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)getFamilyNameIndex:(int32_t)index __attribute__((swift_name("getFamilyName(index:)")));
- (CSDKSkikoTypeface * _Nullable)legacyMakeTypefaceName:(NSString *)name style:(CSDKSkikoFontStyle *)style __attribute__((swift_name("legacyMakeTypeface(name:style:)")));
- (CSDKSkikoTypeface * _Nullable)makeFromDataData:(CSDKSkikoData * _Nullable)data ttcIndex:(int32_t)ttcIndex __attribute__((swift_name("makeFromData(data:ttcIndex:)")));
- (CSDKSkikoTypeface * _Nullable)makeFromFilePath:(NSString *)path ttcIndex:(int32_t)ttcIndex __attribute__((swift_name("makeFromFile(path:ttcIndex:)")));
- (CSDKSkikoFontStyleSet * _Nullable)makeStyleSetIndex:(int32_t)index __attribute__((swift_name("makeStyleSet(index:)")));
- (CSDKSkikoTypeface * _Nullable)matchFamiliesStyleFamilies:(CSDKKotlinArray<NSString *> *)families style:(CSDKSkikoFontStyle *)style __attribute__((swift_name("matchFamiliesStyle(families:style:)")));
- (CSDKSkikoTypeface * _Nullable)matchFamiliesStyleCharacterFamilies:(CSDKKotlinArray<NSString *> *)families style:(CSDKSkikoFontStyle *)style bcp47:(CSDKKotlinArray<NSString *> * _Nullable)bcp47 character:(int32_t)character __attribute__((swift_name("matchFamiliesStyleCharacter(families:style:bcp47:character:)")));
- (CSDKSkikoFontStyleSet *)matchFamilyFamilyName:(NSString * _Nullable)familyName __attribute__((swift_name("matchFamily(familyName:)")));
- (CSDKSkikoTypeface * _Nullable)matchFamilyStyleFamilyName:(NSString * _Nullable)familyName style:(CSDKSkikoFontStyle *)style __attribute__((swift_name("matchFamilyStyle(familyName:style:)")));
- (CSDKSkikoTypeface * _Nullable)matchFamilyStyleCharacterFamilyName:(NSString * _Nullable)familyName style:(CSDKSkikoFontStyle *)style bcp47:(CSDKKotlinArray<NSString *> * _Nullable)bcp47 character:(int32_t)character __attribute__((swift_name("matchFamilyStyleCharacter(familyName:style:bcp47:character:)")));
@property (readonly) int32_t familiesCount __attribute__((swift_name("familiesCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontFeature")))
@interface CSDKSkikoFontFeature : CSDKBase
- (instancetype)initWithFeature:(NSString *)feature __attribute__((swift_name("init(feature:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeature:(NSString *)feature value:(BOOL)value __attribute__((swift_name("init(feature:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeature:(NSString *)feature value_:(int32_t)value __attribute__((swift_name("init(feature:value_:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWith_tag:(int32_t)_tag value:(int32_t)value start:(uint32_t)start end:(uint32_t)end __attribute__((swift_name("init(_tag:value:start:end:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFeature:(NSString *)feature value:(int32_t)value start:(uint32_t)start end:(uint32_t)end __attribute__((swift_name("init(feature:value:start:end:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKSkikoFontFeatureCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t _tag __attribute__((swift_name("_tag")));
@property (readonly) uint32_t end __attribute__((swift_name("end")));
@property (readonly) uint32_t start __attribute__((swift_name("start")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShapingOptions.Companion")))
@interface CSDKSkikoShapingOptionsCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoShapingOptionsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKSkikoShapingOptions *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontMgr.Companion")))
@interface CSDKSkikoFontMgrCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoFontMgrCompanion *shared __attribute__((swift_name("shared")));
@property (readonly, getter=default) CSDKSkikoFontMgr *default_ __attribute__((swift_name("default_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontStyleSet")))
@interface CSDKSkikoFontStyleSet : CSDKSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CSDKSkikoFontStyleSetCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)count __attribute__((swift_name("count()")));
- (CSDKSkikoFontStyle *)getStyleIndex:(int32_t)index __attribute__((swift_name("getStyle(index:)")));
- (NSString *)getStyleNameIndex:(int32_t)index __attribute__((swift_name("getStyleName(index:)")));
- (CSDKSkikoTypeface * _Nullable)getTypefaceIndex:(int32_t)index __attribute__((swift_name("getTypeface(index:)")));
- (CSDKSkikoTypeface * _Nullable)matchStyleStyle:(CSDKSkikoFontStyle *)style __attribute__((swift_name("matchStyle(style:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontFeature.Companion")))
@interface CSDKSkikoFontFeatureCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoFontFeatureCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKotlinArray<CSDKSkikoFontFeature *> *)parseStr:(NSString *)str __attribute__((swift_name("parse(str:)")));
- (CSDKSkikoFontFeature *)parseOneS:(NSString *)s __attribute__((swift_name("parseOne(s:)")));
- (CSDKKotlinArray<CSDKSkikoFontFeature *> *)parseW3Str:(NSString *)str __attribute__((swift_name("parseW3(str:)")));
@property (readonly) CSDKKotlinArray<CSDKSkikoFontFeature *> *EMPTY __attribute__((swift_name("EMPTY")));
@property (readonly) uint32_t GLOBAL_END __attribute__((swift_name("GLOBAL_END")));
@property (readonly) uint32_t GLOBAL_START __attribute__((swift_name("GLOBAL_START")));
@property (readonly) CSDKSkikoPattern *_featurePattern __attribute__((swift_name("_featurePattern")));
@property (readonly) CSDKSkikoPattern *_splitPattern __attribute__((swift_name("_splitPattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFontStyleSet.Companion")))
@interface CSDKSkikoFontStyleSetCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKSkikoFontStyleSetCompanion *shared __attribute__((swift_name("shared")));
- (CSDKSkikoFontStyleSet *)makeEmpty __attribute__((swift_name("makeEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPattern")))
@interface CSDKSkikoPattern : CSDKBase
- (instancetype)initWithRegex:(NSString *)regex __attribute__((swift_name("init(regex:)"))) __attribute__((objc_designated_initializer));
- (CSDKSkikoMatcher *)matcherInput:(id)input __attribute__((swift_name("matcher(input:)")));
- (CSDKKotlinArray<NSString *> *)splitInput:(id)input __attribute__((swift_name("split(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatcher")))
@interface CSDKSkikoMatcher : CSDKBase
- (instancetype)initWithRegex:(CSDKKotlinRegex *)regex input:(id)input __attribute__((swift_name("init(regex:input:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)groupIx:(int32_t)ix __attribute__((swift_name("group(ix:)")));
- (BOOL)matches __attribute__((swift_name("matches()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex")))
@interface CSDKKotlinRegex : CSDKBase
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSSet<CSDKKotlinRegexOption *> *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern option:(CSDKKotlinRegexOption *)option __attribute__((swift_name("init(pattern:option:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKKotlinRegexCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsMatchInInput:(id)input __attribute__((swift_name("containsMatchIn(input:)")));
- (id<CSDKKotlinMatchResult> _Nullable)findInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("find(input:startIndex:)")));
- (id<CSDKKotlinSequence>)findAllInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("findAll(input:startIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (id<CSDKKotlinMatchResult> _Nullable)matchAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchAt(input:index:)")));
- (id<CSDKKotlinMatchResult> _Nullable)matchEntireInput:(id)input __attribute__((swift_name("matchEntire(input:)")));
- (BOOL)matchesInput:(id)input __attribute__((swift_name("matches(input:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (BOOL)matchesAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchesAt(input:index:)")));
- (NSString *)replaceInput:(id)input transform:(id (^)(id<CSDKKotlinMatchResult>))transform __attribute__((swift_name("replace(input:transform:)")));
- (NSString *)replaceInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replace(input:replacement:)")));
- (NSString *)replaceFirstInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replaceFirst(input:replacement:)")));
- (NSArray<NSString *> *)splitInput:(id)input limit:(int32_t)limit __attribute__((swift_name("split(input:limit:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.6")
*/
- (id<CSDKKotlinSequence>)splitToSequenceInput:(id)input limit:(int32_t)limit __attribute__((swift_name("splitToSequence(input:limit:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<CSDKKotlinRegexOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegexOption")))
@interface CSDKKotlinRegexOption : CSDKKotlinEnum<CSDKKotlinRegexOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CSDKKotlinRegexOption *ignoreCase __attribute__((swift_name("ignoreCase")));
@property (class, readonly) CSDKKotlinRegexOption *multiline __attribute__((swift_name("multiline")));
@property (class, readonly) CSDKKotlinRegexOption *literal __attribute__((swift_name("literal")));
@property (class, readonly) CSDKKotlinRegexOption *unixLines __attribute__((swift_name("unixLines")));
@property (class, readonly) CSDKKotlinRegexOption *comments __attribute__((swift_name("comments")));
@property (class, readonly) CSDKKotlinRegexOption *dotMatchesAll __attribute__((swift_name("dotMatchesAll")));
@property (class, readonly) CSDKKotlinRegexOption *canonEq __attribute__((swift_name("canonEq")));
+ (CSDKKotlinArray<CSDKKotlinRegexOption *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CSDKKotlinRegexOption *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex.Companion")))
@interface CSDKKotlinRegexCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKotlinRegexCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)escapeLiteral:(NSString *)literal __attribute__((swift_name("escape(literal:)")));
- (NSString *)escapeReplacementLiteral:(NSString *)literal __attribute__((swift_name("escapeReplacement(literal:)")));
- (CSDKKotlinRegex *)fromLiteralLiteral:(NSString *)literal __attribute__((swift_name("fromLiteral(literal:)")));
@end

__attribute__((swift_name("KotlinMatchResult")))
@protocol CSDKKotlinMatchResult
@required
- (id<CSDKKotlinMatchResult> _Nullable)next __attribute__((swift_name("next()")));
@property (readonly) CSDKKotlinMatchResultDestructured *destructured __attribute__((swift_name("destructured")));
@property (readonly) NSArray<NSString *> *groupValues __attribute__((swift_name("groupValues")));
@property (readonly) id<CSDKKotlinMatchGroupCollection> groups __attribute__((swift_name("groups")));
@property (readonly) CSDKKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchResultDestructured")))
@interface CSDKKotlinMatchResultDestructured : CSDKBase
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NSArray<NSString *> *)toList __attribute__((swift_name("toList()")));
@property (readonly) id<CSDKKotlinMatchResult> match __attribute__((swift_name("match")));
@end

__attribute__((swift_name("KotlinMatchGroupCollection")))
@protocol CSDKKotlinMatchGroupCollection <CSDKKotlinCollection>
@required
- (CSDKKotlinMatchGroup * _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface CSDKKotlinIntProgression : CSDKBase <CSDKKotlinIterable>
@property (class, readonly, getter=companion) CSDKKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (CSDKKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol CSDKKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol CSDKKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface CSDKKotlinIntRange : CSDKKotlinIntProgression <CSDKKotlinClosedRange, CSDKKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CSDKKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(CSDKInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(CSDKInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@property (readonly) CSDKInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) CSDKInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) CSDKInt *start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchGroup")))
@interface CSDKKotlinMatchGroup : CSDKBase
- (instancetype)initWithValue:(NSString *)value range:(CSDKKotlinIntRange *)range __attribute__((swift_name("init(value:range:)"))) __attribute__((objc_designated_initializer));
- (CSDKKotlinMatchGroup *)doCopyValue:(NSString *)value range:(CSDKKotlinIntRange *)range __attribute__((swift_name("doCopy(value:range:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CSDKKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface CSDKKotlinIntProgressionCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (CSDKKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface CSDKKotlinIntRangeCompanion : CSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CSDKKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) CSDKKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
