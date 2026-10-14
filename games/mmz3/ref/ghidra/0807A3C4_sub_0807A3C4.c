// sub_0807A3C4 at 0x0807A3C4 (thumb)

undefined4 sub_0807A3C4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0807A2E0();
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363e10 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363e1c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

