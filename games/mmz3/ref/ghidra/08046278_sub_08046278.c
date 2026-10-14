// sub_08046278 at 0x08046278 (thumb)

undefined4 sub_08046278(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_08045CF8();
  cVar1 = sub_08045EE4(param_1);
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835ed84 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835edd0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

