// sub_080A92EC at 0x080A92EC (thumb)

undefined4 sub_080A92EC(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  if ((DAT_0202ebbb & 0x20) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
LAB_080a93ac:
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  puVar5 = (uint *)(param_1 + 0x8c);
  if ((*(char *)(param_1 + 0xd) == '\0') && ((*puVar5 & 0x800) != 0)) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x40;
    sub_080127E4(param_1,0x740b);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (((cVar1 != '\0') && (sVar2 = sub_08008CFC(iVar4), sVar2 == 0)) && ((*puVar5 & 4) == 0)) {
      return in_lr;
    }
    sub_080AC60C(3,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar5 = 0;
    goto LAB_080a93ac;
  }
  if ((*puVar5 & 0x800) == 0) {
    sub_080127E4(param_1,0x740c);
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A9464(param_1);
    return in_lr;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
  if (*(int *)(param_1 + 0x58) == *(int *)(iVar4 + 0x58)) {
    if (0x6ff < *(int *)(param_1 + 0x60)) goto LAB_080a9448;
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58);
    iVar3 = 0x40;
  }
  *(int *)(param_1 + 0x60) = iVar3;
LAB_080a9448:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(param_1 + 0x58);
  return in_lr;
}

