// sub_08037F18 at 0x08037F18 (thumb)

undefined4 sub_08037F18(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  if ((*(ushort *)(param_1 + 0x90) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    sub_08038A5C(param_1,0xd);
    *(undefined *)(param_1 + 0xf) = 4;
  }
  cVar1 = sub_08038B38(param_1,*(undefined4 *)(param_1 + 0x58));
  if (cVar1 != '\0') {
    sub_08038A5C(param_1,4);
    *(undefined *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}

