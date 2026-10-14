// sub_0805E764 at 0x0805E764 (thumb)

undefined4 sub_0805E764(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = sub_080B3C5C(param_1);
    *(undefined4 *)(param_1 + 0xbc) = uVar1;
    sub_08017700(param_1,0x400);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffb80;
    uVar1 = 0xfffffb80;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar1 = 0x480;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_0805D670(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + 0x10;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  piVar3 = (int *)(param_1 + 0xb8);
  if (*piVar3 < iVar2) {
    iVar2 = *(int *)(param_1 + 0xbc);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x11) = 1;
      *(int *)(param_1 + 0xbc) = 0;
    }
    *(int *)(param_1 + 0x58) = *piVar3;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    iVar2 = *(int *)(param_1 + 0xbc);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x11) = 1;
      *(int *)(param_1 + 0xbc) = 0;
    }
    *(int *)(param_1 + 0x58) = *piVar3;
    *(undefined *)(param_1 + 0xd) = 0x15;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

