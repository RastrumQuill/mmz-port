// sub_08030DF8 at 0x08030DF8 (thumb)

undefined4 sub_08030DF8(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    piVar3 = (int *)(param_1 + 0xb8);
    if (*(int *)(param_1 + 0x4c) < *piVar3 + 0x7800) {
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined4 *)(param_1 + 0x54) = 0xffffff00;
      *(int *)(param_1 + 0x4c) = *piVar3 + 0x11000;
      iVar2 = *(int *)(param_1 + 0xbc);
    }
    else {
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined4 *)(param_1 + 0x54) = 0x100;
      *(int *)(param_1 + 0x4c) = *piVar3 + -0x2000;
      iVar2 = *(int *)(param_1 + 0xbc);
    }
    *(int *)(param_1 + 0x50) = iVar2 + 0x2800;
    *(undefined *)(param_1 + 0x12) = 0x38;
  }
  sub_080297C0(param_1);
  pbVar4 = (byte *)(param_1 + 0xc9);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[*pbVar4] * 4 + 0x2800
  ;
  *pbVar4 = *pbVar4 + 2;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x20) + 0xd) == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

