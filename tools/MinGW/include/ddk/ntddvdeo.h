/*
 * ntddvdeo.h
 *
 * Definitions for video devices
 *
 * This file is part of the w32api package.
 *
 * Contributors:
 *   Created by Casper S. Hornstrup <chorns@users.sourceforge.net>
 *
 * THIS SOFTWARE IS NOT COPYRIGHTED
 *
 * This source code is offered for use in the public domain. You may
 * use, modify or distribute it freely.
 *
 * This code is distributed in the hope that it will be useful but
 * WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 * DISCLAIMED. This includes but is not limited to warranties of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

#ifndef __NTDDVDEO_H
#define __NTDDVDEO_H

#if __GNUC__ >=3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack(push,4)

#include "ntddk.h"


#define VIDEO_DEVICE_NAME                 "DISPLAY%d"
#define WVIDEO_DEVICE_NAME                L"DISPLAY%d"

#define DD_FULLSCREEN_VIDEO_DEVICE_NAME   L"\\Device\\FSVideo"

DEFINE_GUID(GUID_DEVINTERFACE_DISPLAY_ADAPTER, \
  0x5b45201d, 0xf2f2, 0x4f3b, 0x85, 0xbb, 0x30, 0xff, 0x1f, 0x95, 0x35, 0x99);


#define IOCTL_VIDEO_DISABLE_CURSOR \
  CTL_CODE (FILE_DEVICE_VIDEO, 0x109, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_DISABLE_POINTER \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x10f, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_ENABLE_CURSOR \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x108, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_ENABLE_POINTER \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x10e, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_FREE_PUBLIC_ACCESS_RANGES \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x119, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_GET_BANK_SELECT_CODE \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x115, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_GET_CHILD_STATE \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x120, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_GET_POWER_MANAGEMENT \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x11c, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_HANDLE_VIDEOPARAMETERS \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x08, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_LOAD_AND_SET_FONT \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x105, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_MAP_VIDEO_MEMORY \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x116, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_QUERY_AVAIL_MODES \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x100, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_QUERY_COLOR_CAPABILITIES \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x11a, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_QUERY_CURRENT_MODE \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x102, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_QUERY_CURSOR_ATTR \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x10b, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_QUERY_CURSOR_POSITION \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x10d, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_QUERY_NUM_AVAIL_MODES \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x101, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_QUERY_POINTER_ATTR \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x111, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_QUERY_POINTER_CAPABILITIES \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x114, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_QUERY_POINTER_POSITION \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x113, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_QUERY_PUBLIC_ACCESS_RANGES \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x118, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_RESET_DEVICE \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x104, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_RESTORE_HARDWARE_STATE \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x81, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_SAVE_HARDWARE_STATE \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x80, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_SET_CHILD_STATE_CONFIGURATION \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x122, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_SET_COLOR_REGISTERS \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x107, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_SET_CURRENT_MODE \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x103, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_SET_CURSOR_ATTR \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x10a, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_SET_CURSOR_POSITION \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x10c, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_SET_PALETTE_REGISTERS \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x106, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_SET_POINTER_ATTR \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x110, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_SET_POINTER_POSITION \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x112, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_SET_POWER_MANAGEMENT \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x11b, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_SHARE_VIDEO_MEMORY \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x11d, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_SWITCH_DUALVIEW \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x123, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_UNMAP_VIDEO_MEMORY \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x117, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_UNSHARE_VIDEO_MEMORY \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x11e, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VIDEO_VALIDATE_CHILD_STATE_CONFIGURATION \
  CTL_CODE(FILE_DEVICE_VIDEO, 0x121, METHOD_BUFFERED, FILE_ANY_ACCESS)



typedef struct _VIDEO_MEMORY {
  PVOID  RequestedVirtualAddress;
} VIDEO_MEMORY, *PVIDEO_MEMORY;

typedef struct _VIDEO_MEMORY_INFORMATION {
  PVOID  VideoRamBase;
  ULONG  VideoRamLength;
  PVOID  FrameBufferBase;
  ULONG  FrameBufferLength;
} VIDEO_MEMORY_INFORMATION, *PVIDEO_MEMORY_INFORMATION;

/* VIDEO_MODE.RequestedMode */
#define VIDEO_MODE_MAP_MEM_LINEAR         0x40000000
#define VIDEO_MODE_NO_ZERO_MEMORY         0x80000000

typedef struct _VIDEO_MODE {
  ULONG  RequestedMode;
} VIDEO_MODE, *PVIDEO_MODE;

/* VIDEO_MODE_INFORMATION.AttributeFlags */
#define VIDEO_MODE_COLOR                  0x0001
#define VIDEO_MODE_GRAPHICS               0x0002
#define VIDEO_MODE_PALETTE_DRIVEN         0x0004
#define VIDEO_MODE_MANAGED_PALETTE        0x0008
#define VIDEO_MODE_INTERLACED             0x0010
#define VIDEO_MODE_NO_OFF_SCREEN          0x0020
#define VIDEO_MODE_NO_64_BIT_ACCESS       0x0040
#define VIDEO_MODE_BANKED                 0x0080
#define VIDEO_MODE_LINEAR                 0x0100

typedef struct _VIDEO_MODE_INFORMATION {
  ULONG  Length;
  ULONG  ModeIndex;
  ULONG  VisScreenWidth;
  ULONG  VisScreenHeight;
  ULONG  ScreenStride;
  ULONG  NumberOfPlanes;
  ULONG  BitsPerPlane;
  ULONG  Frequency;
  ULONG  XMillimeter;
  ULONG  YMillimeter;
  ULONG  NumberRedBits;
  ULONG  NumberGreenBits;
  ULONG  NumberBlueBits;
  ULONG  RedMask;
  ULONG  GreenMask;
  ULONG  BlueMask;
  ULONG  AttributeFlags;
  ULONG  VideoMemoryBitmapWidth;
  ULONG  VideoMemoryBitmapHeight;
  ULONG  DriverSpecificAttributeFlags;
} VIDEO_MODE_INFORMATION, *PVIDEO_MODE_INFORMATION;

typedef struct _VIDEO_NUM_MODES {
  ULONG  NumModes;
  ULONG  ModeInformationLength;
} VIDEO_NUM_MODES, *PVIDEO_NUM_MODES;

typedef enum _VIDEO_POWER_STATE {
  VideoPowerUnspecified = 0,
  VideoPowerOn = 1,
  VideoPowerStandBy,
  VideoPowerSuspend,
  VideoPowerOff,
  VideoPowerHibernate,
  VideoPowerShutdown,
  VideoPowerMaximum
} VIDEO_POWER_STATE, *PVIDEO_POWER_STATE;

typedef struct _VIDEO_POWER_MANAGEMENT {
  ULONG  Length;
  ULONG  DPMSVersion;
  ULONG  PowerState;
} VIDEO_POWER_MANAGEMENT, *PVIDEO_POWER_MANAGEMENT;

typedef struct _VIDEO_PUBLIC_ACCESS_RANGES {
  ULONG  InIoSpace;
  ULONG  MappedInIoSpace;
  PVOID  VirtualAddress;
} VIDEO_PUBLIC_ACCESS_RANGES, *PVIDEO_PUBLIC_ACCESS_RANGES;

typedef struct _VIDEO_SHARE_MEMORY {
  HANDLE  ProcessHandle;
  ULONG  ViewOffset;
  ULONG  ViewSize;
  PVOID  RequestedVirtualAddress;
} VIDEO_SHARE_MEMORY, *PVIDEO_SHARE_MEMORY;

typedef struct _VIDEO_SHARE_MEMORY_INFORMATION {
  ULONG  SharedViewOffset;
  ULONG  SharedViewSize;
  PVOID  VirtualAddress;
} VIDEO_SHARE_MEMORY_INFORMATION, *PVIDEO_SHARE_MEMORY_INFORMATION;

/* VIDEO_BANK_SELECT.BankingFlags constants */
#define PLANAR_HC                         0x00000001

/* VIDEO_BANK_SELECT.BankingType and PlanarHCBankingType constants */
typedef enum _VIDEO_BANK_TYPE {
  VideoNotBanked = 0,
  VideoBanked1RW,
  VideoBanked1R1W,
  VideoBanked2RW,
  NumVideoBankTypes
} VIDEO_BANK_TYPE, *PVIDEO_BANK_TYPE;

typedef struct _VIDEO_BANK_SELECT {
  ULONG  Length;
  ULONG  Size;
  ULONG  BankingFlags;
  ULONG  BankingType;
  ULONG  PlanarHCBankingType;
  ULONG  BitmapWidthInBytes;
  ULONG  BitmapSize;
  ULONG  Granularity;
  ULONG  PlanarHCGranularity;
  ULONG  CodeOffset;
  ULONG  PlanarHCBankCodeOffset;
  ULONG  PlanarHCEnableCodeOffset;
  ULONG  PlanarHCDisableCodeOffset;
} VIDEO_BANK_SELECT, *PVIDEO_BANK_SELECT;

typedef struct _VIDEO_LOAD_FONT_INFORMATION {
  USHORT  WidthInPixels;
  USHORT  HeightInPixels;
  ULONG  FontSize;
  UCHAR  Font[1];
} VIDEO_LOAD_FONT_INFORMATION, *PVIDEO_LOAD_FONT_INFORMATION;

/* VIDEO_COLOR_CAPABILITIES.AttributeFlags constants */
#define VIDEO_DEVICE_COLOR                0x00000001
#define VIDEO_OPTIONAL_GAMMET_TABLE       0x00000002

typedef struct _VIDEO_COLOR_CAPABILITIES {
  ULONG  Length;
  ULONG  AttributeFlags;
  LONG  RedPhosphoreDecay;
  LONG  GreenPhosphoreDecay;
  LONG  BluePhosphoreDecay;
  LONG  WhiteChromaticity_x;
  LONG  WhiteChromaticity_y;
  LONG  WhiteChromaticity_Y;
  LONG  RedChromaticity_x;
  LONG  RedChromaticity_y;
  LONG  GreenChromaticity_x;
  LONG  GreenChromaticity_y;
  LONG  BlueChromaticity_x;
  LONG  BlueChromaticity_y;
  LONG  WhiteGamma;
  LONG  RedGamma;
  LONG  GreenGamma;
  LONG  BlueGamma;
} VIDEO_COLOR_CAPABILITIES, *PVIDEO_COLOR_CAPABILITIES;

typedef struct _VIDEO_CURSOR_ATTRIBUTES {
  USHORT  Width;
  USHORT  Height;
  SHORT  Column;
  SHORT  Row;
  UCHAR  Rate;
  UCHAR  Enable;
} VIDEO_CURSOR_ATTRIBUTES, *PVIDEO_CURSOR_ATTRIBUTES;

typedef struct _VIDEO_CURSOR_POSITION {
  SHORT  Column;
  SHORT  Row;
} VIDEO_CURSOR_POSITION, *PVIDEO_CURSOR_POSITION;

typedef struct _VIDEO_POINTER_ATTRIBUTES {
  ULONG  Flags;
  ULONG  Width;
  ULONG  Height;
  ULONG  WidthInBytes;
  ULONG  Enable;
  SHORT  Column;
  SHORT  Row;
  UCHAR  Pixels[1];
} VIDEO_POINTER_ATTRIBUTES, *PVIDEO_POINTER_ATTRIBUTES;

/* VIDEO_POINTER_CAPABILITIES.Flags */
#define VIDEO_MODE_ASYNC_POINTER          0x01
#define VIDEO_MODE_MONO_POINTER           0x02
#define VIDEO_MODE_COLOR_POINTER          0x04
#define VIDEO_MODE_ANIMATE_START          0x08
#define VIDEO_MODE_ANIMATE_UPDATE         0x10

typedef struct _VIDEO_POINTER_CAPABILITIES {
  ULONG  Flags;
  ULONG  MaxWidth;
  ULONG  MaxHeight;
  ULONG  HWPtrBitmapStart;
  ULONG  HWPtrBitmapEnd;
} VIDEO_POINTER_CAPABILITIES, *PVIDEO_POINTER_CAPABILITIES;

typedef struct _VIDEO_POINTER_POSITION {
  SHORT  Column;
  SHORT  Row;
} VIDEO_POINTER_POSITION, *PVIDEO_POINTER_POSITION;


/* VIDEO_HARDWARE_STATE_HEADER.VGAStateFlags constants */
#define VIDEO_STATE_NON_STANDARD_VGA      0x00000001
#define VIDEO_STATE_UNEMULATED_VGA_STATE  0x00000002
#define VIDEO_STATE_PACKED_CHAIN4_MODE    0x00000004

typedef struct _VIDEO_HARDWARE_STATE_HEADER {
  ULONG  Length;
  UCHAR  PortValue[0x30];
  ULONG  AttribIndexDataState;
  ULONG  BasicSequencerOffset;
  ULONG  BasicCrtContOffset;
  ULONG  BasicGraphContOffset;
  ULONG  BasicAttribContOffset;
  ULONG  BasicDacOffset;
  ULONG  BasicLatchesOffset;
  ULONG  ExtendedSequencerOffset;
  ULONG  ExtendedCrtContOffset;
  ULONG  ExtendedGraphContOffset;
  ULONG  ExtendedAttribContOffset;
  ULONG  ExtendedDacOffset;
  ULONG  ExtendedValidatorStateOffset;
  ULONG  ExtendedMiscDataOffset;
  ULONG  PlaneLength;
  ULONG  Plane1Offset;
  ULONG  Plane2Offset;
  ULONG  Plane3Offset;
  ULONG  Plane4Offset;
  ULONG  VGAStateFlags;
  ULONG  DIBOffset;
  ULONG  DIBBitsPerPixel;
  ULONG  DIBXResolution;
  ULONG  DIBYResolution;
  ULONG  DIBXlatOffset;
  ULONG  DIBXlatLength;
  ULONG  VesaInfoOffset;
  PVOID  FrameBufferData;
} VIDEO_HARDWARE_STATE_HEADER, *PVIDEO_HARDWARE_STATE_HEADER;

typedef struct _VIDEO_CLUTDATA {
  UCHAR  Red;
  UCHAR  Green;
  UCHAR  Blue;
  UCHAR  Unused;
} VIDEO_CLUTDATA, *PVIDEO_CLUTDATA;

typedef struct {
	USHORT  NumEntries;
	USHORT  FirstEntry;
	union {
    VIDEO_CLUTDATA  RgbArray;
    ULONG  RgbLong;
	} LookupTable[1];
} VIDEO_CLUT, *PVIDEO_CLUT;

typedef struct _VIDEO_PALETTE_DATA {
  USHORT  NumEntries;
  USHORT  FirstEntry;
  USHORT  Colors[1];
} VIDEO_PALETTE_DATA, *PVIDEO_PALETTE_DATA;

typedef struct _VIDEO_HARDWARE_STATE {
	PVIDEO_HARDWARE_STATE_HEADER  StateHeader;
	ULONG  StateLength;
} VIDEO_HARDWARE_STATE, *PVIDEO_HARDWARE_STATE;

#define VIDEO_CHILD_ACTIVE                0x00000001
#define VIDEO_CHILD_DETACHED              0x00000002
#define VIDEO_CHILD_NOPRUNE_FREQ          0x80000000
#define VIDEO_CHILD_NOPRUNE_RESOLUTION    0x40000000

#define VIDEO_DUALVIEW_REMOVABLE          0x00000001
#define VIDEO_DUALVIEW_PRIMARY            0x80000000
#define VIDEO_DUALVIEW_SECONDARY          0x40000000

#pragma pack(pop)

#ifdef __cplusplus
}
#endif

#endif /* __NTDDVDEO_H */
