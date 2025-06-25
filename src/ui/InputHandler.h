#pragma once

/**
 * @class InputHandler
 * @brief Interface for components that can handle button input
 * 
 * Allows cards and other UI components to receive button press events
 */
class InputHandler {
public:
    virtual ~InputHandler() = default;
    
    /**
     * @brief Handle a button press event
     * 
     * @param button_index The index of the button that was pressed
     * @return true if the event was handled, false to pass to default handler
     */
    virtual bool handleButtonPress(uint8_t button_index) = 0;
    
    /**
     * @brief Called when the card's LVGL object is being managed externally
     * 
     * This method is called when the card's LVGL object will be deleted
     * by an external manager (like CardNavigationStack). The card should
     * not delete its LVGL object in its destructor after this is called.
     */
    virtual void prepareForRemoval() {}
}; 