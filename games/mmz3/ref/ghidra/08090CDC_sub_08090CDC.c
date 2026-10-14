// sub_08090CDC at 0x08090CDC (thumb)

undefined4 sub_08090CDC(undefined4 param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *param_2;
  iVar6 = *(int *)(DAT_0202f5c0 + 0x58) - (param_2[1] + 0x1000);
  iVar2 = sub_080FE124((iVar5 >> 2) * (iVar5 >> 2) + (iVar6 >> 2) * (iVar6 >> 2));
  uVar7 = (uint)(iVar2 << 0x10) >> 0xe;
  if (uVar7 != 0) {
    iVar5 = FUN_080fe2f8(iVar5 * 0x100,uVar7);
    iVar6 = FUN_080fe2f8(iVar6 * 0x100,uVar7);
  }
  if (iVar5 < 1) {
    if (iVar6 < 1) {
      uVar4 = (ushort)*(byte *)((int)&DAT_080fe64c + ((uint)((iVar6 + 0x40) * 0x1000000) >> 0x17));
      goto LAB_08090da6;
    }
    uVar4 = -(ushort)*(byte *)((int)&DAT_080fe64c + ((uint)((iVar6 + 0x40) * 0x1000000) >> 0x17));
  }
  else if (iVar6 < 1) {
    psVar3 = (short *)((int)&DAT_080fe64c + ((uint)(iVar6 << 0x18) >> 0x17));
    sVar1 = *psVar3;
    if (*psVar3 < 1) {
      uVar4 = 0x7f - sVar1;
    }
    else {
      uVar4 = sVar1 + 0x7f;
    }
  }
  else {
    psVar3 = (short *)((int)&DAT_080fe64c + ((uint)(iVar6 << 0x18) >> 0x17));
    sVar1 = *psVar3;
    if (*psVar3 < 1) {
      uVar4 = sVar1 + 0x7e;
    }
    else {
      uVar4 = 0x7e - sVar1;
    }
  }
  uVar4 = uVar4 & 0xff;
LAB_08090da6:
  iVar2 = sub_0809C41C(param_2,0x200,uVar4);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x5c) = (iVar5 << 9) >> 8;
    *(int *)(iVar2 + 0x60) = (iVar6 << 9) >> 8;
  }
  return in_lr;
}

