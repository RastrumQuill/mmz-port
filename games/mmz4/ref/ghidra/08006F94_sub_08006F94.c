// sub_08006F94 at 0x08006F94 (thumb)

undefined8 sub_08006F94(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *param_2;
  iVar5 = param_2[1];
  iVar2 = FUN_081288bc(iVar6 >> 8,0xf0);
  iVar3 = FUN_081288bc(iVar5 >> 8,0xa0);
  bVar1 = (*(byte **)(&DAT_02000af8 + param_1 * 0x88))
          [(uint)**(byte **)(&DAT_02000af8 + param_1 * 0x88) * iVar3 + iVar2 + 4];
  uVar4 = sub_08128954(iVar6 >> 8,0xf0);
  iVar2 = sub_08128954(iVar5 >> 8,0xa0);
  return CONCAT44(in_lr,(uint)*(ushort *)
                               (((iVar2 << 0xc) >> 0x10) * 0x1e +
                               ((int)((uVar4 & 0xffff0) << 0xc) >> 0xf) +
                               (uint)bVar1 * 300 + *(int *)(&DAT_02000af4 + param_1 * 0x88)));
}

