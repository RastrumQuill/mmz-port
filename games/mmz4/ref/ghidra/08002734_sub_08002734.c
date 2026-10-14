// sub_08002734 at 0x08002734 (thumb)

undefined4 sub_08002734(int param_1,int param_2,int param_3,char param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = ((ushort)(&DAT_02000a04)[(uint)(param_1 << 0x18) >> 0x1c] & 0x1f00) * 8 + 0x6000000 +
          (((param_5 << 0x18) >> 0x13) + (int)param_4) * 2;
  uVar3 = (uint)(param_3 << 0x18) >> 0x16;
  iVar2 = param_2 + *(int *)(uVar3 + param_2) + uVar3;
  uVar1 = *(ushort *)(iVar2 + 4);
  sVar4 = *(short *)(iVar2 + 6);
  iVar2 = iVar2 + 8;
  if (sVar4 != 0) {
    do {
      sub_081284E8(iVar2,iVar5,(uint)uVar1);
      sVar4 = sVar4 + -1;
      iVar2 = iVar2 + (uint)uVar1 * 2;
      iVar5 = iVar5 + 0x40;
    } while (sVar4 != 0);
  }
  return in_lr;
}

