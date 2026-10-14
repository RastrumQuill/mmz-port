// sub_08060164 at 0x08060164 (thumb)

undefined4 sub_08060164(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    sub_08060768(param_1,0xd);
    *(undefined *)(param_1 + 0xf) = 4;
  }
  cVar1 = sub_08060864(param_1,*(undefined4 *)(param_1 + 0x60));
  if (cVar1 != '\0') {
    sub_08060768(param_1,4);
    *(undefined *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}

