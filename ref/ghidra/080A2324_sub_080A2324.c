// sub_080A2324 at 0x080A2324 (thumb)

undefined4 sub_080A2324(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  sub_0809C980(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe00;
    cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + -0x1000,*(undefined4 *)(param_1 + 0x50));
    if (cVar1 == '\0') goto LAB_080a23ac;
    *(undefined *)(param_1 + 0x44) = 1;
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0x200;
    cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + 0x1000,*(undefined4 *)(param_1 + 0x50));
    if (cVar1 == '\0') goto LAB_080a23ac;
    *(undefined *)(param_1 + 0x44) = 0;
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
LAB_080a23ac:
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  if ((uVar3 * 2 >> 0x11 & 0x1f) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined *)(param_1 + 0x44) = 1;
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 0;
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

