/*
  ==============================================================================

    RotaryKnob.h
    Created: 6 Sep 2024 6:33:27pm
    Author:  Merp Langdang

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class RotaryKnob  : public juce::Component
{
public:
    juce::Slider slider;
    juce::Label label;
    
    juce::AudioProcessorValueTreeState::SliderAttachment attachment;
    
    RotaryKnob(const juce::String& text, juce::AudioProcessorValueTreeState& apvts,
               const juce::ParameterID& parameterID);
    ~RotaryKnob() override;

    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RotaryKnob)
};
