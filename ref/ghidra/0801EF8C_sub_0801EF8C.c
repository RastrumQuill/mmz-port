// sub_0801EF8C at 0x0801EF8C (thumb)

undefined4 sub_0801EF8C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a99c4 + (uint)*(byte *)(param_1 + 0xf) * 4));
  iVar1 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar1;
  if (iVar1 == 0) {
    sub_0808D6F4(param_1 + 0x4c,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x12) = 3;
  }
  return in_lr;
}

