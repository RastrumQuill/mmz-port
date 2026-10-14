// sub_080A9BDC at 0x080A9BDC (thumb)

undefined4 sub_080A9BDC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 8);
  if (*(byte *)(iVar6 + 0xc) < 2) {
    iVar1 = *(int *)(iVar6 + 0x54) - *(int *)(param_2 + 8);
    iVar2 = *(int *)(iVar6 + 0xb8) - *(int *)(param_2 + 0xc);
    if ((*(byte *)(iVar6 + 0x13) & 3) < 2) {
      DAT_03002ac0 = 0x3ff;
    }
    else {
      DAT_03002ac0 = 0x7fff;
    }
    uVar3 = (*(int *)(iVar6 + 0xb4) - *(int *)(param_2 + 8)) * 0x100;
    uVar7 = iVar1 >> 8 & 0xffff;
    uVar5 = (ushort)((uint)iVar1 >> 8);
    uVar4 = uVar3 & 0xffff0000;
    uVar9 = uVar3 >> 0x10;
    if (uVar4 != uVar7 * 0x10000 &&
        (int)(uVar4 + uVar7 * -0x10000) < 0 == SBORROW4(uVar4,uVar7 * 0x10000)) {
      uVar5 = (ushort)(uVar3 >> 0x10);
      uVar9 = uVar7;
    }
    if ((short)uVar9 < 0) {
      uVar9 = 0;
    }
    else if (0xf0 < (short)uVar9) {
      uVar9 = 0xf0;
    }
    if ((short)uVar5 < 0) {
      uVar5 = 0;
    }
    else if (0xf0 < (short)uVar5) {
      uVar5 = 0xf0;
    }
    uVar3 = (iVar2 >> 8) - 0x28;
    uVar8 = (short)((uint)iVar2 >> 8) - 0x18;
    uVar4 = uVar3 & 0xffff;
    iVar6 = (int)(uVar3 * 0x10000) >> 0x10;
    if (iVar6 < 0) {
      uVar4 = 0;
    }
    else if (0xa0 < iVar6) {
      uVar4 = 0xa0;
    }
    if ((short)uVar8 < 0) {
      uVar8 = 0;
    }
    else if (0xa0 < (short)uVar8) {
      uVar8 = 0xa0;
    }
    DAT_02002416 = uVar5 & 0xff | (ushort)((uVar9 << 0x10) >> 8);
    DAT_0200241a = uVar8 & 0xff | (ushort)((uVar4 << 0x10) >> 8);
  }
  return in_lr;
}

