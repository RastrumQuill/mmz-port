// sub_080A9A64 at 0x080A9A64 (thumb)

undefined4 sub_080A9A64(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 8);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    iVar1 = *(int *)(iVar3 + 0x54) - *(int *)(param_2 + 8);
    iVar4 = (*(int *)(iVar3 + 0x58) - *(int *)(param_2 + 0xc) >> 8) + 2;
    if ((*(byte *)(iVar3 + 0xf) & 3) < 2) {
      DAT_03002ac0 = 0x7c00;
    }
    else {
      DAT_03002ac0 = 0x7fff;
    }
    uVar2 = (iVar1 >> 8) - (uint)*(byte *)(iVar3 + 0x13);
    uVar5 = (ushort)*(byte *)(iVar3 + 0x13) + (short)((uint)iVar1 >> 8);
    uVar6 = uVar2 & 0xffff;
    iVar3 = (int)(uVar2 * 0x10000) >> 0x10;
    if (iVar3 < 0) {
      uVar6 = 0;
    }
    else if (0xf0 < iVar3) {
      uVar6 = 0xf0;
    }
    if ((short)uVar5 < 0) {
      uVar5 = 0;
    }
    else if (0xf0 < (short)uVar5) {
      uVar5 = 0xf0;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xa0 < iVar4) {
      iVar4 = 0xa0;
    }
    DAT_02002416 = uVar5 & 0xff | (ushort)((uVar6 << 0x10) >> 8);
    DAT_0200241a = (ushort)iVar4 & 0xff;
  }
  return in_lr;
}

