// sub_080AAD04 at 0x080AAD04 (thumb)

undefined4 sub_080AAD04(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08001EE8((int)*(short *)(param_1 + 0xca));
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b65c0 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

