// sub_080736E4 at 0x080736E4 (thumb)

undefined4 sub_080736E4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080735CC();
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083634cc + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083634dc + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

