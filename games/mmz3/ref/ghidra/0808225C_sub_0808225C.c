// sub_0808225C at 0x0808225C (thumb)

undefined8 sub_0808225C(int param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x2c);
  if (param_2 == '\0') {
    if (iVar7 != 0) {
      for (iVar3 = *(int *)(iVar7 + 0x2c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x2c)) {
        iVar6 = *(int *)(iVar7 + 0x60) + 0x20;
        *(int *)(iVar7 + 0x60) = iVar6;
        *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + *(int *)(iVar7 + 0x5c);
        *(int *)(iVar7 + 0x58) = *(int *)(iVar7 + 0x58) + iVar6;
        if (iVar3 == 0) break;
        iVar7 = iVar3;
      }
    }
  }
  else if (iVar7 != 0) {
    iVar3 = *(int *)(iVar7 + 0x2c);
    while (iVar3 != 0) {
      iVar3 = *(int *)(iVar7 + 0x60) + 0x40;
      *(int *)(iVar7 + 0x60) = iVar3;
      iVar6 = *(int *)(iVar7 + 0x54) + *(int *)(iVar7 + 0x5c);
      *(int *)(iVar7 + 0x54) = iVar6;
      *(int *)(iVar7 + 0x58) = *(int *)(iVar7 + 0x58) + iVar3;
      if ((0 < iVar3) && (iVar3 = sub_08009B28(iVar6), iVar3 < 0)) {
        *(int *)(iVar7 + 0x58) = *(int *)(iVar7 + 0x58) + iVar3;
      }
      iVar7 = *(int *)(iVar7 + 0x2c);
      if (iVar7 == 0) break;
      iVar3 = *(int *)(iVar7 + 0x2c);
    }
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 0x2c);
  }
  while (iVar6 = iVar7, iVar6 != 0) {
    iVar4 = *(int *)(iVar6 + 0x54) - *(int *)(iVar3 + 0x54);
    iVar7 = *(int *)(iVar6 + 0x58) - *(int *)(iVar3 + 0x58);
    uVar9 = sub_080FE124(iVar4 * iVar4 + iVar7 * iVar7);
    uVar9 = uVar9 & 0xffff;
    if (uVar9 != 0) {
      iVar4 = FUN_080fe2f8(iVar4 * 0x100,uVar9);
      iVar7 = FUN_080fe2f8(iVar7 * 0x100,uVar9);
      iVar10 = (int)(uVar9 - *(int *)(param_1 + 100)) / 2;
      iVar4 = iVar10 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      iVar10 = iVar10 * iVar7;
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0xff;
      }
      *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x54) + (iVar4 >> 8);
      *(int *)(iVar3 + 0x58) = *(int *)(iVar3 + 0x58) + (iVar10 >> 8);
      *(int *)(iVar6 + 0x54) = *(int *)(iVar6 + 0x54) - (iVar4 >> 8);
      *(int *)(iVar6 + 0x58) = *(int *)(iVar6 + 0x58) - (iVar10 >> 8);
    }
    iVar3 = iVar6;
    iVar7 = *(int *)(iVar6 + 0x2c);
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  for (iVar7 = iVar3; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x2c)) {
    iVar6 = 0xfa;
    if (param_2 != '\0') {
      iVar6 = 0xe1;
    }
    iVar4 = iVar6 * (*(int *)(iVar7 + 0x54) - *(int *)(iVar7 + 100));
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(iVar7 + 0x5c) = iVar4 >> 8;
    iVar6 = iVar6 * (*(int *)(iVar7 + 0x58) - *(int *)(iVar7 + 0x68));
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(iVar7 + 0x60) = iVar6 >> 8;
    *(int *)(iVar7 + 100) = *(int *)(iVar7 + 0x54);
    *(int *)(iVar7 + 0x68) = *(int *)(iVar7 + 0x58);
  }
  if (param_2 == '\0') {
    if ((iVar3 != 0) && (iVar7 = *(int *)(iVar3 + 0x2c), iVar7 != 0)) {
      iVar7 = sub_080FE10C((*(int *)(iVar7 + 0x54) - *(int *)(iVar3 + 0x54)) * 0x100 >> 0x10,
                           (*(int *)(iVar7 + 0x58) - *(int *)(iVar3 + 0x58)) * 0x100 >> 0x10);
      uVar9 = (uint)(iVar7 << 0x10) >> 0x18;
      *(char *)(param_1 + 0x24) = (char)((uint)iVar7 >> 8);
      iVar7 = *(int *)(iVar3 + 0x54);
      *(int *)(param_1 + 0x54) = iVar7;
      *(int *)(param_1 + 0x54) =
           iVar7 + *(short *)((int)&DAT_080fe64c + ((uVar9 + 0x40) * 0x1000000 >> 0x17)) * -4;
      iVar7 = *(int *)(iVar3 + 0x58);
      *(int *)(param_1 + 0x58) = iVar7;
      *(int *)(param_1 + 0x58) = iVar7 + (short)(&DAT_080fe64c)[uVar9] * -4;
    }
  }
  else if (iVar3 != 0) {
    uVar5 = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    iVar7 = *(int *)(iVar3 + 0x58);
    *(int *)(param_1 + 0x58) = iVar7;
    pbVar11 = (byte *)(param_1 + 0x24);
    bVar2 = *pbVar11;
    uVar8 = (uint)bVar2;
    uVar9 = (uVar8 + 0x40) * 0x1000000;
    if ((int)uVar9 < 0) {
      iVar3 = (short)(&DAT_080fe64c)[uVar8] * -0x1000;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      iVar6 = *(short *)((int)&DAT_080fe64c + (uVar9 >> 0x17)) * -0xe00;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      iVar7 = sub_08009B28(uVar5,iVar7 + (iVar3 >> 8) + (iVar6 >> 8));
      if (iVar7 < 0) {
        uVar9 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar9 & 0x7fffffff;
        cVar1 = sub_080FE4D8(uVar9 * 2 >> 0x11,6);
        bVar2 = (bVar2 - cVar1) + (char)((uint)(iVar7 + 0xff) >> 8);
        goto LAB_080824bc;
      }
      *pbVar11 = bVar2 + 2;
    }
    else {
      iVar3 = (short)(&DAT_080fe64c)[uVar8] * -0x1000;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      iVar7 = sub_08009B28(uVar5,iVar7 + (iVar3 >> 8) +
                                         *(short *)((int)&DAT_080fe64c + (uVar9 >> 0x17)) * 0xe);
      if (iVar7 < 0) {
        uVar9 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar9 & 0x7fffffff;
        cVar1 = sub_080FE4D8(uVar9 * 2 >> 0x11,6);
        bVar2 = (bVar2 + cVar1) - (char)((uint)(iVar7 + 0xff) >> 8);
LAB_080824bc:
        *pbVar11 = bVar2;
        uVar5 = 1;
        goto LAB_0808253e;
      }
      *pbVar11 = bVar2 - 2;
    }
  }
  uVar5 = 0;
LAB_0808253e:
  return CONCAT44(in_lr,uVar5);
}

