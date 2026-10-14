// sub_0803D9C8 at 0x0803D9C8 (thumb)

undefined8 sub_0803D9C8(int param_1,undefined param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = 0;
  iVar3 = sub_080391B0();
  if ((iVar3 != 0) && (iVar7 = sub_08006B84(DAT_0202f070), iVar7 != 0)) {
    sVar2 = sub_08037DC8(param_1,0);
    *(undefined *)(iVar7 + 9) = 0xc;
    *(undefined4 *)(iVar7 + 0x14) = 0x803d689;
    if (sVar2 < 2) {
      bVar1 = *(byte *)(iVar7 + 0xb) & 0xbf;
    }
    else {
      bVar1 = *(byte *)(iVar7 + 0xb) | 0x40;
    }
    *(byte *)(iVar7 + 0xb) = bVar1;
    *(undefined *)(iVar7 + 0x25) = 0x10;
    *(undefined2 *)(iVar7 + 0x20) = (&DAT_08335fd4)[sVar2];
    *(undefined1 *)(iVar7 + 0x22) = (&DAT_08335fdc)[sVar2];
    sub_08037DEC(param_1,*(undefined *)(param_1 + 0x215));
    *(undefined *)(iVar7 + 0x10) = param_2;
    *(int *)(iVar7 + 0x28) = param_1;
    *(char *)(param_1 + 0x2ba) = *(char *)(param_1 + 0x2ba) + '\x01';
    uVar6 = 0;
    piVar4 = (int *)(param_1 + 0x290);
    iVar3 = *piVar4;
    piVar5 = piVar4;
    while (iVar3 != 0) {
      piVar5 = piVar5 + 1;
      uVar6 = uVar6 + 1;
      if (3 < uVar6) goto LAB_0803da88;
      iVar3 = *piVar5;
    }
    if (uVar6 < 4) {
      piVar4[uVar6] = iVar7;
    }
  }
LAB_0803da88:
  return CONCAT44(in_lr,iVar7);
}

