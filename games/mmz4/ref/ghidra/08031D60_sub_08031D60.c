// sub_08031D60 at 0x08031D60 (thumb)

undefined4 sub_08031D60(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) & 0xfd;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fa0c + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

