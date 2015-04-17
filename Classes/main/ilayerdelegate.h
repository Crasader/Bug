#ifndef LAYERDELEGATE_H
#define LAYERDELEGATE_H

class ILayerDelegate
{
public:
    ILayerDelegate();
    virtual void onToucheBegan() = 0;
    virtual void onToucheMoved() =0;
};

#endif // LAYERDELEGATE_H
