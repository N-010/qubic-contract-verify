using namespace QPI;

struct TESTCON : public ContractBase
{
    using SetShareholderVotes_input = ProposalMultiVoteDataV1;
    using SetShareholderVotes_output = bit;
    typedef ProposalMultiVoteDataV1 GetShareholderVotes_output;

    struct WrappedVotes_input
    {
        ProposalMultiVoteDataV1 votes;
    };

    PUBLIC_PROCEDURE(SetShareholderVotes)
    {
        output = true;
    }
};
