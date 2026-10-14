// sub_08094DF0 at 0x08094DF0 (thumb)

undefined4 sub_08094DF0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08094BD0();
  if (cVar1 == '\0') {
    sub_08094CB4(param_1);
    cVar1 = sub_08094C24(param_1);
    if (cVar1 == '\0') {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08366748 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836676c + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  return in_lr;
}

