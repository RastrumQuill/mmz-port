// sub_08076D0C at 0x08076D0C (thumb)

undefined4 sub_08076D0C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08076C60();
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083639dc + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083639e0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

