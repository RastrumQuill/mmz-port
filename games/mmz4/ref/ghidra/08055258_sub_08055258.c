// sub_08055258 at 0x08055258 (thumb)

undefined4 sub_08055258(int param_1)

{
  undefined4 in_lr;
  undefined4 local_c;
  int local_8;
  undefined4 uStack_4;
  
  local_c = *(undefined4 *)(param_1 + 0x54);
  local_8 = *(int *)(param_1 + 0x58) + -0x5800;
  uStack_4 = in_lr;
  sub_0800D7E4(&local_c);
  return uStack_4;
}

