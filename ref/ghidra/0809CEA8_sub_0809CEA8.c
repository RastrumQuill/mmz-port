// sub_0809CEA8 at 0x0809CEA8 (thumb)

undefined4 sub_0809CEA8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined4 *)(param_1 + 0x54) = 0x180;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0809cf2c;
  iVar3 = *(int *)(param_1 + 0xbc);
  if (iVar3 < 0x7801) {
    if (iVar3 < 0x5001) {
      uVar2 = 0x180;
    }
    else {
      uVar2 = 0x200;
    }
  }
  else {
    uVar2 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar3;
  uVar2 = sub_08008360(iVar3,*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  sub_0809C980(param_1);
  if (*(int *)(param_1 + 0xbc) < 0x3000) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
LAB_0809cf2c:
  cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + 0x2000,*(int *)(param_1 + 0x50) + -0x2f00);
  if (cVar1 == '\0') {
    cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + 0x1800,*(int *)(param_1 + 0x50) + -0x1f00);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x58) = 0xfffffb80;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + 0x1000,*(int *)(param_1 + 0x50) + -0xf00);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x58) = 0xfffffc80;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + 0xb80,*(int *)(param_1 + 0x50) + 0xa00);
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x58) = 0xfffffe00;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0xfffffa80;
  }
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

