// sub_080A9B60 at 0x080A9B60 (thumb)

undefined4 sub_080A9B60(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xbc) + 0x9a04);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x10300) {
    sub_080CCB68(param_1 + 0x54,0);
    sub_08002B10(0x139);
  }
  if ((*(char *)(param_1 + 0xb5) == '\x02') && ((*(byte *)(param_1 + 0x12) & 1) == 0)) {
    piVar3 = (int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *piVar3;
    iVar2 = *piVar3 * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *piVar3 = iVar2 >> 8;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xbc) + 0x9a02);
  }
  cVar1 = sub_080A9920(param_1);
  if (cVar1 != '\0') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xbc) + 0x9a02);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

