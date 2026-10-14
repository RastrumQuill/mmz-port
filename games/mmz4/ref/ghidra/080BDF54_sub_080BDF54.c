// sub_080BDF54 at 0x080BDF54 (thumb)

undefined4 sub_080BDF54(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08128884(param_1,*(undefined4 *)(&DAT_088617ec + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (cVar1 == '\0') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088617f4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

