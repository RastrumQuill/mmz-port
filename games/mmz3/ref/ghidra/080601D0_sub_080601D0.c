// sub_080601D0 at 0x080601D0 (thumb)

undefined4 sub_080601D0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  cVar1 = sub_08060864(param_1,*(undefined4 *)(param_1 + 0x60));
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    sub_08060768(param_1,4);
    *(undefined *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}

