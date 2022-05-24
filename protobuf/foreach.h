
void Comm::PbReplace(const google::protobuf::Message &objReq
        google::protobuf::Message &objResp)
{
    objResp.mutable_id_list()->CopyFrom(objReq.id_list());
    objResp.mutable_fake_inner_distance()->CopyFrom(objResp.distance_list());
    for_each(objResp.mutable_fake_inner_distance()->begin(), objResp.mutable_fake_inner_distance()->end(),
             [](float &dist) { dist = 1 - 0.5 * dist; });
}
