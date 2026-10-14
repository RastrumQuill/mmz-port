// sub_08082648 at 0x08082648 (thumb)

undefined4 sub_08082648(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x10) < 2) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else if (*(char *)(param_1 + 0xd) != '\x01') {
      return in_lr;
    }
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 == 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080B2484(1,param_1 + 0x54);
      sub_0800471C(0x2a);
    }
    else if ((*(byte *)(param_1 + 0xb6) & 1) != 0) {
      sub_080B2484(2,param_1 + 0x54);
    }
  }
  else if (*(byte *)(param_1 + 0x10) != 2) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

