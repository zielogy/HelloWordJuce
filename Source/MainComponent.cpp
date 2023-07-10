#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    addAndMakeVisible(toggleButton);
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (31.0f));
    g.setColour (juce::Colours::cornflowerblue);
    g.drawText ("Hello World! checked push on GIT", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    toggleButton.setBounds(10, 10, 30, 30);
}
