// sub_0801EC58 at 0x0801EC58 (thumb)

undefined4 sub_0801EC58(int param_1)

{
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a99b8 + (uint)*(byte *)(param_1 + 0xf) * 4));
  if (((*(char *)(param_1 + 0x71) == '\x03') || (*(char *)(param_1 + 0x71) == '\b')) &&
     (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_08001EAC(6);
  }
  return in_lr;
}

