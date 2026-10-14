// sub_08071424 at 0x08071424 (thumb)

undefined4 sub_08071424(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0807133C();
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363310 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363328 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

