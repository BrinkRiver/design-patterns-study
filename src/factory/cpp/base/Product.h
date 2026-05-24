// ==============================
// Product
// ==============================

class ITransport
{
public:
    virtual ~ITransport() = default;

    virtual void Deliver() = 0;
};


class Truck : public ITransport
{
public:
    void Deliver() override;
};


class Ship : public ITransport
{
public:
    void Deliver() override;
};
