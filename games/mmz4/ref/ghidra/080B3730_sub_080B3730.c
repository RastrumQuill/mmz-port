// sub_080B3730 at 0x080B3730 (thumb)

undefined4 sub_080B3730(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    sub_0801CF00(param_1,0xc700);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar1 = sub_080B3AF0(param_1);
    if (cVar1 != '\0') goto LAB_080b379e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar1 = sub_080B3AF0(param_1);
  if ((cVar1 == '\0') && (cVar1 = sub_080B3B20(param_1), cVar1 == '\0')) {
    return in_lr;
  }
LAB_080b379e:
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

