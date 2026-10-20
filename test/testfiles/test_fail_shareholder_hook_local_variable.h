using namespace QPI;

struct TESTCON : public ContractBase
{
    SET_SHAREHOLDER_PROPOSAL_WITH_LOCALS()
    {
        uint32 fee = 123;
    }
};
