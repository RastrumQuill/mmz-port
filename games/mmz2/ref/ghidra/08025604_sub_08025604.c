// sub_08025604 at 0x08025604 (thumb)

undefined4 sub_08025604(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08333df8 + (uint)*(byte *)(param_1 + 0xf) * 4));
  iVar1 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar1;
  if (iVar1 == 0) {
    sub_080AD634(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x12) = 3;
  }
  return in_lr;
}

