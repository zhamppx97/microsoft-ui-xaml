// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "CommandBarFlyoutCommandBarTemplateSettings.h"

GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_CloseAnimationEndPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_ContentClipRectProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_CurrentWidthProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_DispatcherProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_ExpandDownAnimationEndPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_ExpandDownAnimationHoldPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_ExpandDownAnimationStartPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_ExpandDownOverflowVerticalPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_ExpandedWidthProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_ExpandUpAnimationEndPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_ExpandUpAnimationHoldPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_ExpandUpAnimationStartPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_ExpandUpOverflowVerticalPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_OpenAnimationEndPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_OpenAnimationStartPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_OverflowContentClipRectProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_WidthExpansionAnimationEndPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_WidthExpansionAnimationStartPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_WidthExpansionDeltaProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_WidthExpansionMoreButtonAnimationEndPositionProperty{ nullptr };
GlobalDependencyProperty CommandBarFlyoutCommandBarTemplateSettingsProperties::s_WidthExpansionMoreButtonAnimationStartPositionProperty{ nullptr };

CommandBarFlyoutCommandBarTemplateSettingsProperties::CommandBarFlyoutCommandBarTemplateSettingsProperties()
{
    EnsureProperties();
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::EnsureProperties()
{
    if (!s_CloseAnimationEndPositionProperty)
    {
        s_CloseAnimationEndPositionProperty =
            InitializeDependencyProperty(
                L"CloseAnimationEndPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ContentClipRectProperty)
    {
        s_ContentClipRectProperty =
            InitializeDependencyProperty(
                L"ContentClipRect",
                winrt::name_of<winrt::Rect>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::Rect>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_CurrentWidthProperty)
    {
        s_CurrentWidthProperty =
            InitializeDependencyProperty(
                L"CurrentWidth",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_DispatcherProperty)
    {
        s_DispatcherProperty =
            InitializeDependencyProperty(
                L"Dispatcher",
                winrt::name_of<winrt::CoreDispatcher>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::CoreDispatcher>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ExpandDownAnimationEndPositionProperty)
    {
        s_ExpandDownAnimationEndPositionProperty =
            InitializeDependencyProperty(
                L"ExpandDownAnimationEndPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ExpandDownAnimationHoldPositionProperty)
    {
        s_ExpandDownAnimationHoldPositionProperty =
            InitializeDependencyProperty(
                L"ExpandDownAnimationHoldPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ExpandDownAnimationStartPositionProperty)
    {
        s_ExpandDownAnimationStartPositionProperty =
            InitializeDependencyProperty(
                L"ExpandDownAnimationStartPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ExpandDownOverflowVerticalPositionProperty)
    {
        s_ExpandDownOverflowVerticalPositionProperty =
            InitializeDependencyProperty(
                L"ExpandDownOverflowVerticalPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ExpandedWidthProperty)
    {
        s_ExpandedWidthProperty =
            InitializeDependencyProperty(
                L"ExpandedWidth",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ExpandUpAnimationEndPositionProperty)
    {
        s_ExpandUpAnimationEndPositionProperty =
            InitializeDependencyProperty(
                L"ExpandUpAnimationEndPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ExpandUpAnimationHoldPositionProperty)
    {
        s_ExpandUpAnimationHoldPositionProperty =
            InitializeDependencyProperty(
                L"ExpandUpAnimationHoldPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ExpandUpAnimationStartPositionProperty)
    {
        s_ExpandUpAnimationStartPositionProperty =
            InitializeDependencyProperty(
                L"ExpandUpAnimationStartPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ExpandUpOverflowVerticalPositionProperty)
    {
        s_ExpandUpOverflowVerticalPositionProperty =
            InitializeDependencyProperty(
                L"ExpandUpOverflowVerticalPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_OpenAnimationEndPositionProperty)
    {
        s_OpenAnimationEndPositionProperty =
            InitializeDependencyProperty(
                L"OpenAnimationEndPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_OpenAnimationStartPositionProperty)
    {
        s_OpenAnimationStartPositionProperty =
            InitializeDependencyProperty(
                L"OpenAnimationStartPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_OverflowContentClipRectProperty)
    {
        s_OverflowContentClipRectProperty =
            InitializeDependencyProperty(
                L"OverflowContentClipRect",
                winrt::name_of<winrt::Rect>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::Rect>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_WidthExpansionAnimationEndPositionProperty)
    {
        s_WidthExpansionAnimationEndPositionProperty =
            InitializeDependencyProperty(
                L"WidthExpansionAnimationEndPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_WidthExpansionAnimationStartPositionProperty)
    {
        s_WidthExpansionAnimationStartPositionProperty =
            InitializeDependencyProperty(
                L"WidthExpansionAnimationStartPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_WidthExpansionDeltaProperty)
    {
        s_WidthExpansionDeltaProperty =
            InitializeDependencyProperty(
                L"WidthExpansionDelta",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_WidthExpansionMoreButtonAnimationEndPositionProperty)
    {
        s_WidthExpansionMoreButtonAnimationEndPositionProperty =
            InitializeDependencyProperty(
                L"WidthExpansionMoreButtonAnimationEndPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_WidthExpansionMoreButtonAnimationStartPositionProperty)
    {
        s_WidthExpansionMoreButtonAnimationStartPositionProperty =
            InitializeDependencyProperty(
                L"WidthExpansionMoreButtonAnimationStartPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::CommandBarFlyoutCommandBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::ClearProperties()
{
    s_CloseAnimationEndPositionProperty = nullptr;
    s_ContentClipRectProperty = nullptr;
    s_CurrentWidthProperty = nullptr;
    s_DispatcherProperty = nullptr;
    s_ExpandDownAnimationEndPositionProperty = nullptr;
    s_ExpandDownAnimationHoldPositionProperty = nullptr;
    s_ExpandDownAnimationStartPositionProperty = nullptr;
    s_ExpandDownOverflowVerticalPositionProperty = nullptr;
    s_ExpandedWidthProperty = nullptr;
    s_ExpandUpAnimationEndPositionProperty = nullptr;
    s_ExpandUpAnimationHoldPositionProperty = nullptr;
    s_ExpandUpAnimationStartPositionProperty = nullptr;
    s_ExpandUpOverflowVerticalPositionProperty = nullptr;
    s_OpenAnimationEndPositionProperty = nullptr;
    s_OpenAnimationStartPositionProperty = nullptr;
    s_OverflowContentClipRectProperty = nullptr;
    s_WidthExpansionAnimationEndPositionProperty = nullptr;
    s_WidthExpansionAnimationStartPositionProperty = nullptr;
    s_WidthExpansionDeltaProperty = nullptr;
    s_WidthExpansionMoreButtonAnimationEndPositionProperty = nullptr;
    s_WidthExpansionMoreButtonAnimationStartPositionProperty = nullptr;
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::CloseAnimationEndPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_CloseAnimationEndPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::CloseAnimationEndPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_CloseAnimationEndPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::ContentClipRect(winrt::Rect const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_ContentClipRectProperty, ValueHelper<winrt::Rect>::BoxValueIfNecessary(value));
    }
}

winrt::Rect CommandBarFlyoutCommandBarTemplateSettingsProperties::ContentClipRect()
{
    return ValueHelper<winrt::Rect>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_ContentClipRectProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::CurrentWidth(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_CurrentWidthProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::CurrentWidth()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_CurrentWidthProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::Dispatcher(winrt::CoreDispatcher const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_DispatcherProperty, ValueHelper<winrt::CoreDispatcher>::BoxValueIfNecessary(value));
    }
}

winrt::CoreDispatcher CommandBarFlyoutCommandBarTemplateSettingsProperties::Dispatcher()
{
    return ValueHelper<winrt::CoreDispatcher>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_DispatcherProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandDownAnimationEndPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_ExpandDownAnimationEndPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandDownAnimationEndPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_ExpandDownAnimationEndPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandDownAnimationHoldPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_ExpandDownAnimationHoldPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandDownAnimationHoldPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_ExpandDownAnimationHoldPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandDownAnimationStartPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_ExpandDownAnimationStartPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandDownAnimationStartPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_ExpandDownAnimationStartPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandDownOverflowVerticalPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_ExpandDownOverflowVerticalPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandDownOverflowVerticalPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_ExpandDownOverflowVerticalPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandedWidth(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_ExpandedWidthProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandedWidth()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_ExpandedWidthProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandUpAnimationEndPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_ExpandUpAnimationEndPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandUpAnimationEndPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_ExpandUpAnimationEndPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandUpAnimationHoldPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_ExpandUpAnimationHoldPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandUpAnimationHoldPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_ExpandUpAnimationHoldPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandUpAnimationStartPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_ExpandUpAnimationStartPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandUpAnimationStartPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_ExpandUpAnimationStartPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandUpOverflowVerticalPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_ExpandUpOverflowVerticalPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::ExpandUpOverflowVerticalPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_ExpandUpOverflowVerticalPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::OpenAnimationEndPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_OpenAnimationEndPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::OpenAnimationEndPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_OpenAnimationEndPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::OpenAnimationStartPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_OpenAnimationStartPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::OpenAnimationStartPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_OpenAnimationStartPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::OverflowContentClipRect(winrt::Rect const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_OverflowContentClipRectProperty, ValueHelper<winrt::Rect>::BoxValueIfNecessary(value));
    }
}

winrt::Rect CommandBarFlyoutCommandBarTemplateSettingsProperties::OverflowContentClipRect()
{
    return ValueHelper<winrt::Rect>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_OverflowContentClipRectProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::WidthExpansionAnimationEndPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_WidthExpansionAnimationEndPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::WidthExpansionAnimationEndPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_WidthExpansionAnimationEndPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::WidthExpansionAnimationStartPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_WidthExpansionAnimationStartPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::WidthExpansionAnimationStartPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_WidthExpansionAnimationStartPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::WidthExpansionDelta(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_WidthExpansionDeltaProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::WidthExpansionDelta()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_WidthExpansionDeltaProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::WidthExpansionMoreButtonAnimationEndPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_WidthExpansionMoreButtonAnimationEndPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::WidthExpansionMoreButtonAnimationEndPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_WidthExpansionMoreButtonAnimationEndPositionProperty));
}

void CommandBarFlyoutCommandBarTemplateSettingsProperties::WidthExpansionMoreButtonAnimationStartPosition(double value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->SetValue(s_WidthExpansionMoreButtonAnimationStartPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
    }
}

double CommandBarFlyoutCommandBarTemplateSettingsProperties::WidthExpansionMoreButtonAnimationStartPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<CommandBarFlyoutCommandBarTemplateSettings*>(this)->GetValue(s_WidthExpansionMoreButtonAnimationStartPositionProperty));
}