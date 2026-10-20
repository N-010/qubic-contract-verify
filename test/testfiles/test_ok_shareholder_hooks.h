using namespace QPI;

struct TESTCON : public ContractBase
{
    struct StateData { uint32 value; };
    SET_SHAREHOLDER_PROPOSAL() { state.mut().value = Ch::A; }
    SET_SHAREHOLDER_PROPOSAL_WITH_LOCALS() { state.mut().value = Ch::Z; }
    SET_SHAREHOLDER_VOTES() { output = true; }
    SET_SHAREHOLDER_VOTES_WITH_LOCALS() { output = false; }
    REGISTER_USER_FUNCTIONS_AND_PROCEDURES()
    {
        REGISTER_SHAREHOLDER_PROPOSAL_VOTING();
    }
};
