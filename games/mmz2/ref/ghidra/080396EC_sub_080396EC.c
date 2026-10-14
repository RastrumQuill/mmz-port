// sub_080396EC at 0x080396EC (thumb)

undefined8 sub_080396EC(int param_1,undefined param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = 0;
  iVar3 = sub_080391B0();
  if ((iVar3 != 0) && (iVar8 = sub_08006B84(DAT_0202f070), iVar8 != 0)) {
    sVar2 = sub_08037DC8(param_1,0);
    *(undefined *)(iVar8 + 9) = 1;
    *(undefined4 *)(iVar8 + 0x14) = 0x803927d;
    if (sVar2 < 2) {
      bVar1 = *(byte *)(iVar8 + 0xb) & 0xbf;
    }
    else {
      bVar1 = *(byte *)(iVar8 + 0xb) | 0x40;
    }
    *(byte *)(iVar8 + 0xb) = bVar1;
    *(undefined *)(iVar8 + 0x25) = 0x10;
    *(undefined2 *)(iVar8 + 0x20) = (&DAT_08335fd4)[sVar2];
    *(undefined1 *)(iVar8 + 0x22) = (&DAT_08335fdc)[sVar2];
    uVar7 = *(undefined *)(param_1 + 0x215);
    sub_08037DEC(param_1,uVar7);
    *(undefined *)(iVar8 + 0x10) = param_2;
    *(char *)(iVar8 + 0x11) = (char)param_3;
    if (param_3 != 2) {
      uVar7 = 0;
    }
    *(undefined *)(iVar8 + 0x12) = uVar7;
    *(int *)(iVar8 + 0x28) = param_1;
    *(char *)(param_1 + 0x2ba) = *(char *)(param_1 + 0x2ba) + '\x01';
    uVar6 = 0;
    piVar4 = (int *)(param_1 + 0x290);
    iVar3 = *piVar4;
    piVar5 = piVar4;
    while (iVar3 != 0) {
      piVar5 = piVar5 + 1;
      uVar6 = uVar6 + 1;
      if (3 < uVar6) goto LAB_080397be;
      iVar3 = *piVar5;
    }
    if (uVar6 < 4) {
      piVar4[uVar6] = iVar8;
    }
  }
LAB_080397be:
  return CONCAT44(in_lr,iVar8);
}

