
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQAudioFormat.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioFormat>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioFormat

//  Constructor QAudioFormat::QAudioFormat()


static void _init_ctor_QAudioFormat_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAudioFormat> ();
}

static void _call_ctor_QAudioFormat_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioFormat *> (new QAudioFormat ());
}


// qint32 QAudioFormat::bytesForDuration(qint64 microseconds)


static void _init_f_bytesForDuration_c986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("microseconds");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<qint32 > ();
}

static void _call_f_bytesForDuration_c986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<qint32 > ((qint32)((QAudioFormat *)cls)->bytesForDuration (arg1));
}


// qint32 QAudioFormat::bytesForFrames(qint32 frameCount)


static void _init_f_bytesForFrames_c981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("frameCount");
  decl->add_arg<qint32 > (argspec_0);
  decl->set_return<qint32 > ();
}

static void _call_f_bytesForFrames_c981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint32 arg1 = gsi::arg_reader<qint32 >() (args, heap);
  ret.write<qint32 > ((qint32)((QAudioFormat *)cls)->bytesForFrames (arg1));
}


// int QAudioFormat::bytesPerFrame()


static void _init_f_bytesPerFrame_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_bytesPerFrame_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioFormat *)cls)->bytesPerFrame ());
}


// int QAudioFormat::bytesPerSample()


static void _init_f_bytesPerSample_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_bytesPerSample_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioFormat *)cls)->bytesPerSample ());
}


// QAudioFormat::ChannelConfig QAudioFormat::channelConfig()


static void _init_f_channelConfig_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAudioFormat::ChannelConfig>::target_type > ();
}

static void _call_f_channelConfig_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAudioFormat::ChannelConfig>::target_type > ((qt_gsi::Converter<QAudioFormat::ChannelConfig>::target_type)qt_gsi::CppToQtAdaptor<QAudioFormat::ChannelConfig>(((QAudioFormat *)cls)->channelConfig ()));
}


// int QAudioFormat::channelCount()


static void _init_f_channelCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_channelCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioFormat *)cls)->channelCount ());
}


// int QAudioFormat::channelOffset(QAudioFormat::AudioChannelPosition channel)


static void _init_f_channelOffset_c3796 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("channel");
  decl->add_arg<const qt_gsi::Converter<QAudioFormat::AudioChannelPosition>::target_type & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_channelOffset_c3796 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudioFormat::AudioChannelPosition>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAudioFormat::AudioChannelPosition>::target_type & >() (args, heap);
  ret.write<int > ((int)((QAudioFormat *)cls)->channelOffset (qt_gsi::QtToCppAdaptor<QAudioFormat::AudioChannelPosition>(arg1).cref()));
}


// qint64 QAudioFormat::durationForBytes(qint32 byteCount)


static void _init_f_durationForBytes_c981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("byteCount");
  decl->add_arg<qint32 > (argspec_0);
  decl->set_return<qint64 > ();
}

static void _call_f_durationForBytes_c981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint32 arg1 = gsi::arg_reader<qint32 >() (args, heap);
  ret.write<qint64 > ((qint64)((QAudioFormat *)cls)->durationForBytes (arg1));
}


// qint64 QAudioFormat::durationForFrames(qint32 frameCount)


static void _init_f_durationForFrames_c981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("frameCount");
  decl->add_arg<qint32 > (argspec_0);
  decl->set_return<qint64 > ();
}

static void _call_f_durationForFrames_c981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint32 arg1 = gsi::arg_reader<qint32 >() (args, heap);
  ret.write<qint64 > ((qint64)((QAudioFormat *)cls)->durationForFrames (arg1));
}


// qint32 QAudioFormat::framesForBytes(qint32 byteCount)


static void _init_f_framesForBytes_c981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("byteCount");
  decl->add_arg<qint32 > (argspec_0);
  decl->set_return<qint32 > ();
}

static void _call_f_framesForBytes_c981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint32 arg1 = gsi::arg_reader<qint32 >() (args, heap);
  ret.write<qint32 > ((qint32)((QAudioFormat *)cls)->framesForBytes (arg1));
}


// qint32 QAudioFormat::framesForDuration(qint64 microseconds)


static void _init_f_framesForDuration_c986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("microseconds");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<qint32 > ();
}

static void _call_f_framesForDuration_c986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<qint32 > ((qint32)((QAudioFormat *)cls)->framesForDuration (arg1));
}


// bool QAudioFormat::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAudioFormat *)cls)->isValid ());
}


// float QAudioFormat::normalizedSampleValue(const void *sample)


static void _init_f_normalizedSampleValue_c1751 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sample");
  decl->add_arg<const void * > (argspec_0);
  decl->set_return<float > ();
}

static void _call_f_normalizedSampleValue_c1751 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const void *arg1 = gsi::arg_reader<const void * >() (args, heap);
  ret.write<float > ((float)((QAudioFormat *)cls)->normalizedSampleValue (arg1));
}


// QAudioFormat::SampleFormat QAudioFormat::sampleFormat()


static void _init_f_sampleFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAudioFormat::SampleFormat>::target_type > ();
}

static void _call_f_sampleFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAudioFormat::SampleFormat>::target_type > ((qt_gsi::Converter<QAudioFormat::SampleFormat>::target_type)qt_gsi::CppToQtAdaptor<QAudioFormat::SampleFormat>(((QAudioFormat *)cls)->sampleFormat ()));
}


// int QAudioFormat::sampleRate()


static void _init_f_sampleRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_sampleRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioFormat *)cls)->sampleRate ());
}


// void QAudioFormat::setChannelConfig(QAudioFormat::ChannelConfig config)


static void _init_f_setChannelConfig_3043 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("config");
  decl->add_arg<const qt_gsi::Converter<QAudioFormat::ChannelConfig>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setChannelConfig_3043 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudioFormat::ChannelConfig>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAudioFormat::ChannelConfig>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioFormat *)cls)->setChannelConfig (qt_gsi::QtToCppAdaptor<QAudioFormat::ChannelConfig>(arg1).cref());
}


// void QAudioFormat::setChannelCount(int channelCount)


static void _init_f_setChannelCount_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("channelCount");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setChannelCount_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioFormat *)cls)->setChannelCount (arg1);
}


// void QAudioFormat::setSampleFormat(QAudioFormat::SampleFormat f)


static void _init_f_setSampleFormat_2975 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("f");
  decl->add_arg<const qt_gsi::Converter<QAudioFormat::SampleFormat>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSampleFormat_2975 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudioFormat::SampleFormat>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAudioFormat::SampleFormat>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioFormat *)cls)->setSampleFormat (qt_gsi::QtToCppAdaptor<QAudioFormat::SampleFormat>(arg1).cref());
}


// void QAudioFormat::setSampleRate(int sampleRate)


static void _init_f_setSampleRate_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sampleRate");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSampleRate_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioFormat *)cls)->setSampleRate (arg1);
}



namespace gsi
{

static gsi::Methods methods_QAudioFormat () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioFormat::QAudioFormat()\nThis method creates an object of class QAudioFormat.", &_init_ctor_QAudioFormat_0, &_call_ctor_QAudioFormat_0);
  methods += new qt_gsi::GenericMethod ("bytesForDuration", "@brief Method qint32 QAudioFormat::bytesForDuration(qint64 microseconds)\n", true, &_init_f_bytesForDuration_c986, &_call_f_bytesForDuration_c986);
  methods += new qt_gsi::GenericMethod ("bytesForFrames", "@brief Method qint32 QAudioFormat::bytesForFrames(qint32 frameCount)\n", true, &_init_f_bytesForFrames_c981, &_call_f_bytesForFrames_c981);
  methods += new qt_gsi::GenericMethod ("bytesPerFrame", "@brief Method int QAudioFormat::bytesPerFrame()\n", true, &_init_f_bytesPerFrame_c0, &_call_f_bytesPerFrame_c0);
  methods += new qt_gsi::GenericMethod ("bytesPerSample", "@brief Method int QAudioFormat::bytesPerSample()\n", true, &_init_f_bytesPerSample_c0, &_call_f_bytesPerSample_c0);
  methods += new qt_gsi::GenericMethod ("channelConfig", "@brief Method QAudioFormat::ChannelConfig QAudioFormat::channelConfig()\n", true, &_init_f_channelConfig_c0, &_call_f_channelConfig_c0);
  methods += new qt_gsi::GenericMethod (":channelCount", "@brief Method int QAudioFormat::channelCount()\n", true, &_init_f_channelCount_c0, &_call_f_channelCount_c0);
  methods += new qt_gsi::GenericMethod ("channelOffset", "@brief Method int QAudioFormat::channelOffset(QAudioFormat::AudioChannelPosition channel)\n", true, &_init_f_channelOffset_c3796, &_call_f_channelOffset_c3796);
  methods += new qt_gsi::GenericMethod ("durationForBytes", "@brief Method qint64 QAudioFormat::durationForBytes(qint32 byteCount)\n", true, &_init_f_durationForBytes_c981, &_call_f_durationForBytes_c981);
  methods += new qt_gsi::GenericMethod ("durationForFrames", "@brief Method qint64 QAudioFormat::durationForFrames(qint32 frameCount)\n", true, &_init_f_durationForFrames_c981, &_call_f_durationForFrames_c981);
  methods += new qt_gsi::GenericMethod ("framesForBytes", "@brief Method qint32 QAudioFormat::framesForBytes(qint32 byteCount)\n", true, &_init_f_framesForBytes_c981, &_call_f_framesForBytes_c981);
  methods += new qt_gsi::GenericMethod ("framesForDuration", "@brief Method qint32 QAudioFormat::framesForDuration(qint64 microseconds)\n", true, &_init_f_framesForDuration_c986, &_call_f_framesForDuration_c986);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QAudioFormat::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("normalizedSampleValue", "@brief Method float QAudioFormat::normalizedSampleValue(const void *sample)\n", true, &_init_f_normalizedSampleValue_c1751, &_call_f_normalizedSampleValue_c1751);
  methods += new qt_gsi::GenericMethod ("sampleFormat", "@brief Method QAudioFormat::SampleFormat QAudioFormat::sampleFormat()\n", true, &_init_f_sampleFormat_c0, &_call_f_sampleFormat_c0);
  methods += new qt_gsi::GenericMethod (":sampleRate", "@brief Method int QAudioFormat::sampleRate()\n", true, &_init_f_sampleRate_c0, &_call_f_sampleRate_c0);
  methods += new qt_gsi::GenericMethod ("setChannelConfig", "@brief Method void QAudioFormat::setChannelConfig(QAudioFormat::ChannelConfig config)\n", false, &_init_f_setChannelConfig_3043, &_call_f_setChannelConfig_3043);
  methods += new qt_gsi::GenericMethod ("setChannelCount|channelCount=", "@brief Method void QAudioFormat::setChannelCount(int channelCount)\n", false, &_init_f_setChannelCount_767, &_call_f_setChannelCount_767);
  methods += new qt_gsi::GenericMethod ("setSampleFormat", "@brief Method void QAudioFormat::setSampleFormat(QAudioFormat::SampleFormat f)\n", false, &_init_f_setSampleFormat_2975, &_call_f_setSampleFormat_2975);
  methods += new qt_gsi::GenericMethod ("setSampleRate|sampleRate=", "@brief Method void QAudioFormat::setSampleRate(int sampleRate)\n", false, &_init_f_setSampleRate_767, &_call_f_setSampleRate_767);
  return methods;
}

gsi::Class<QAudioFormat> decl_QAudioFormat ("QtMultimedia", "QAudioFormat",
  methods_QAudioFormat (),
  "@qt\n@brief Binding of QAudioFormat");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioFormat> &qtdecl_QAudioFormat () { return decl_QAudioFormat; }

}


//  Implementation of the enum wrapper class for QAudioFormat::AudioChannelPosition
namespace qt_gsi
{

static gsi::Enum<QAudioFormat::AudioChannelPosition> decl_QAudioFormat_AudioChannelPosition_Enum ("QtMultimedia", "QAudioFormat_AudioChannelPosition",
    gsi::enum_const ("UnknownPosition", QAudioFormat::UnknownPosition, "@brief Enum constant QAudioFormat::UnknownPosition") +
    gsi::enum_const ("FrontLeft", QAudioFormat::FrontLeft, "@brief Enum constant QAudioFormat::FrontLeft") +
    gsi::enum_const ("FrontRight", QAudioFormat::FrontRight, "@brief Enum constant QAudioFormat::FrontRight") +
    gsi::enum_const ("FrontCenter", QAudioFormat::FrontCenter, "@brief Enum constant QAudioFormat::FrontCenter") +
    gsi::enum_const ("LFE", QAudioFormat::LFE, "@brief Enum constant QAudioFormat::LFE") +
    gsi::enum_const ("BackLeft", QAudioFormat::BackLeft, "@brief Enum constant QAudioFormat::BackLeft") +
    gsi::enum_const ("BackRight", QAudioFormat::BackRight, "@brief Enum constant QAudioFormat::BackRight") +
    gsi::enum_const ("FrontLeftOfCenter", QAudioFormat::FrontLeftOfCenter, "@brief Enum constant QAudioFormat::FrontLeftOfCenter") +
    gsi::enum_const ("FrontRightOfCenter", QAudioFormat::FrontRightOfCenter, "@brief Enum constant QAudioFormat::FrontRightOfCenter") +
    gsi::enum_const ("BackCenter", QAudioFormat::BackCenter, "@brief Enum constant QAudioFormat::BackCenter") +
    gsi::enum_const ("LFE2", QAudioFormat::LFE2, "@brief Enum constant QAudioFormat::LFE2") +
    gsi::enum_const ("SideLeft", QAudioFormat::SideLeft, "@brief Enum constant QAudioFormat::SideLeft") +
    gsi::enum_const ("SideRight", QAudioFormat::SideRight, "@brief Enum constant QAudioFormat::SideRight") +
    gsi::enum_const ("TopFrontLeft", QAudioFormat::TopFrontLeft, "@brief Enum constant QAudioFormat::TopFrontLeft") +
    gsi::enum_const ("TopFrontRight", QAudioFormat::TopFrontRight, "@brief Enum constant QAudioFormat::TopFrontRight") +
    gsi::enum_const ("TopFrontCenter", QAudioFormat::TopFrontCenter, "@brief Enum constant QAudioFormat::TopFrontCenter") +
    gsi::enum_const ("TopCenter", QAudioFormat::TopCenter, "@brief Enum constant QAudioFormat::TopCenter") +
    gsi::enum_const ("TopBackLeft", QAudioFormat::TopBackLeft, "@brief Enum constant QAudioFormat::TopBackLeft") +
    gsi::enum_const ("TopBackRight", QAudioFormat::TopBackRight, "@brief Enum constant QAudioFormat::TopBackRight") +
    gsi::enum_const ("TopSideLeft", QAudioFormat::TopSideLeft, "@brief Enum constant QAudioFormat::TopSideLeft") +
    gsi::enum_const ("TopSideRight", QAudioFormat::TopSideRight, "@brief Enum constant QAudioFormat::TopSideRight") +
    gsi::enum_const ("TopBackCenter", QAudioFormat::TopBackCenter, "@brief Enum constant QAudioFormat::TopBackCenter") +
    gsi::enum_const ("BottomFrontCenter", QAudioFormat::BottomFrontCenter, "@brief Enum constant QAudioFormat::BottomFrontCenter") +
    gsi::enum_const ("BottomFrontLeft", QAudioFormat::BottomFrontLeft, "@brief Enum constant QAudioFormat::BottomFrontLeft") +
    gsi::enum_const ("BottomFrontRight", QAudioFormat::BottomFrontRight, "@brief Enum constant QAudioFormat::BottomFrontRight"),
  "@qt\n@brief This class represents the QAudioFormat::AudioChannelPosition enum");

static gsi::QFlagsClass<QAudioFormat::AudioChannelPosition > decl_QAudioFormat_AudioChannelPosition_Enums ("QtMultimedia", "QAudioFormat_QFlags_AudioChannelPosition",
  "@qt\n@brief This class represents the QFlags<QAudioFormat::AudioChannelPosition> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAudioFormat> inject_QAudioFormat_AudioChannelPosition_Enum_in_parent (decl_QAudioFormat_AudioChannelPosition_Enum.defs ());
static gsi::ClassExt<QAudioFormat> decl_QAudioFormat_AudioChannelPosition_Enum_as_child (decl_QAudioFormat_AudioChannelPosition_Enum, "AudioChannelPosition");
static gsi::ClassExt<QAudioFormat> decl_QAudioFormat_AudioChannelPosition_Enums_as_child (decl_QAudioFormat_AudioChannelPosition_Enums, "QFlags_AudioChannelPosition");

}


//  Implementation of the enum wrapper class for QAudioFormat::ChannelConfig
namespace qt_gsi
{

static gsi::Enum<QAudioFormat::ChannelConfig> decl_QAudioFormat_ChannelConfig_Enum ("QtMultimedia", "QAudioFormat_ChannelConfig",
    gsi::enum_const ("ChannelConfigUnknown", QAudioFormat::ChannelConfigUnknown, "@brief Enum constant QAudioFormat::ChannelConfigUnknown") +
    gsi::enum_const ("ChannelConfigMono", QAudioFormat::ChannelConfigMono, "@brief Enum constant QAudioFormat::ChannelConfigMono") +
    gsi::enum_const ("ChannelConfigStereo", QAudioFormat::ChannelConfigStereo, "@brief Enum constant QAudioFormat::ChannelConfigStereo") +
    gsi::enum_const ("ChannelConfig2Dot1", QAudioFormat::ChannelConfig2Dot1, "@brief Enum constant QAudioFormat::ChannelConfig2Dot1") +
    gsi::enum_const ("ChannelConfigSurround5Dot0", QAudioFormat::ChannelConfigSurround5Dot0, "@brief Enum constant QAudioFormat::ChannelConfigSurround5Dot0") +
    gsi::enum_const ("ChannelConfigSurround5Dot1", QAudioFormat::ChannelConfigSurround5Dot1, "@brief Enum constant QAudioFormat::ChannelConfigSurround5Dot1") +
    gsi::enum_const ("ChannelConfigSurround7Dot0", QAudioFormat::ChannelConfigSurround7Dot0, "@brief Enum constant QAudioFormat::ChannelConfigSurround7Dot0") +
    gsi::enum_const ("ChannelConfigSurround7Dot1", QAudioFormat::ChannelConfigSurround7Dot1, "@brief Enum constant QAudioFormat::ChannelConfigSurround7Dot1"),
  "@qt\n@brief This class represents the QAudioFormat::ChannelConfig enum");

static gsi::QFlagsClass<QAudioFormat::ChannelConfig > decl_QAudioFormat_ChannelConfig_Enums ("QtMultimedia", "QAudioFormat_QFlags_ChannelConfig",
  "@qt\n@brief This class represents the QFlags<QAudioFormat::ChannelConfig> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAudioFormat> inject_QAudioFormat_ChannelConfig_Enum_in_parent (decl_QAudioFormat_ChannelConfig_Enum.defs ());
static gsi::ClassExt<QAudioFormat> decl_QAudioFormat_ChannelConfig_Enum_as_child (decl_QAudioFormat_ChannelConfig_Enum, "ChannelConfig");
static gsi::ClassExt<QAudioFormat> decl_QAudioFormat_ChannelConfig_Enums_as_child (decl_QAudioFormat_ChannelConfig_Enums, "QFlags_ChannelConfig");

}


//  Implementation of the enum wrapper class for QAudioFormat::SampleFormat
namespace qt_gsi
{

static gsi::Enum<QAudioFormat::SampleFormat> decl_QAudioFormat_SampleFormat_Enum ("QtMultimedia", "QAudioFormat_SampleFormat",
    gsi::enum_const ("Unknown", QAudioFormat::Unknown, "@brief Enum constant QAudioFormat::Unknown") +
    gsi::enum_const ("UInt8", QAudioFormat::UInt8, "@brief Enum constant QAudioFormat::UInt8") +
    gsi::enum_const ("Int16", QAudioFormat::Int16, "@brief Enum constant QAudioFormat::Int16") +
    gsi::enum_const ("Int32", QAudioFormat::Int32, "@brief Enum constant QAudioFormat::Int32") +
    gsi::enum_const ("Float", QAudioFormat::Float, "@brief Enum constant QAudioFormat::Float") +
    gsi::enum_const ("NSampleFormats", QAudioFormat::NSampleFormats, "@brief Enum constant QAudioFormat::NSampleFormats"),
  "@qt\n@brief This class represents the QAudioFormat::SampleFormat enum");

static gsi::QFlagsClass<QAudioFormat::SampleFormat > decl_QAudioFormat_SampleFormat_Enums ("QtMultimedia", "QAudioFormat_QFlags_SampleFormat",
  "@qt\n@brief This class represents the QFlags<QAudioFormat::SampleFormat> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAudioFormat> inject_QAudioFormat_SampleFormat_Enum_in_parent (decl_QAudioFormat_SampleFormat_Enum.defs ());
static gsi::ClassExt<QAudioFormat> decl_QAudioFormat_SampleFormat_Enum_as_child (decl_QAudioFormat_SampleFormat_Enum, "SampleFormat");
static gsi::ClassExt<QAudioFormat> decl_QAudioFormat_SampleFormat_Enums_as_child (decl_QAudioFormat_SampleFormat_Enums, "QFlags_SampleFormat");

}
