// sub_08042BA0 at 0x08042BA0 (thumb)

ulonglong sub_08042BA0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + ((uint)(param_2 << 0x18) >> 0x16) + 0xc0);
  iVar5 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(iVar8 + 0x4c);
  iVar4 = *(int *)(DAT_0202286c + 0x50) - (*(int *)(iVar8 + 0x50) + 0x1000);
  bVar1 = *(byte *)(iVar8 + 0x12);
  iVar7 = iVar5 >> 8;
  iVar6 = iVar4 >> 8;
  iVar4 = sub_080C88E8((int)(short)((uint)iVar5 >> 8),(int)(short)((uint)iVar4 >> 8));
  iVar5 = ((uint)(iVar4 << 0x10) >> 0x18) - (uint)bVar1;
  iVar2 = iVar5 * 0x1000000 >> 0x18;
  iVar4 = iVar2;
  if (iVar2 < 0) {
    iVar4 = -iVar2;
  }
  if (0x7f < iVar4) {
    iVar5 = iVar2;
  }
  iVar4 = (char)iVar5 * 0x38;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(byte *)(iVar8 + 0x12) = bVar1 + (char)((uint)iVar4 >> 8);
  uVar3 = sub_080C88FC(iVar7 * iVar7 + iVar6 * iVar6);
  return CONCAT44(in_lr,uVar3) & 0xffffffff0000ffff;
}

