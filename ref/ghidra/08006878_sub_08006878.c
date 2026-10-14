// sub_08006878 at 0x08006878 (thumb)

undefined4 sub_08006878(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar2 = *(int *)((DAT_02005208 >> (((byte)DAT_0200520c & 0x7f) << 1) & 3) * 4 +
                  (&DAT_08293bec)[(byte)DAT_0200520c & 0x7f]);
  iVar3 = *(int *)(iVar2 + 8);
  iVar3 = *(int *)(iVar3 + 8) + iVar3 + (param_3 & 0xffff) * 300;
  uVar6 = (uint)*(byte *)(*(int *)(iVar2 + 0x74) + 2);
  puVar5 = &DAT_02005440 + (param_2 * uVar6 * 0xf * 10 + param_1 * 0xf) * 2;
  uVar4 = 0;
  do {
    FUN_080006d8(iVar3,puVar5,0x1e);
    puVar5 = puVar5 + uVar6 * 0x1e;
    iVar3 = iVar3 + 0x1e;
    uVar1 = uVar4 * 0x10000 + 0x10000;
    uVar4 = uVar1 >> 0x10;
  } while ((int)uVar1 >> 0x10 < 10);
  DAT_02021644 = 1;
  return in_lr;
}

