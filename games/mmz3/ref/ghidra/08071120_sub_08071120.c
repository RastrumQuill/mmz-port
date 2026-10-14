// sub_08071120 at 0x08071120 (thumb)

undefined4 sub_08071120(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08071068();
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083632a0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083632a4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

