// sub_080067C4 at 0x080067C4 (thumb)

undefined4 sub_080067C4(int param_1,int param_2,ushort *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined *puVar7;
  undefined4 in_lr;
  
  uVar2 = (uint)param_3[1];
  puVar6 = param_3 + 2;
  uVar4 = (uint)*(byte *)(*(int *)(*(int *)((DAT_02005208 >> (((byte)DAT_0200520c & 0x7f) << 1) & 3)
                                            * 4 + (&DAT_08293bec)[(byte)DAT_0200520c & 0x7f]) + 0x74
                                  ) + 2);
  puVar7 = &DAT_02005440 + (uVar4 * 0xf * param_2 + param_1) * 2;
  uVar5 = 0;
  if (uVar2 != 0 && -1 < (int)(uVar2 * 0x10000)) {
    iVar3 = (int)((uint)*param_3 << 0x11) >> 0x10;
    do {
      FUN_080006d8(puVar6,puVar7,iVar3);
      puVar6 = (ushort *)((int)puVar6 + iVar3);
      puVar7 = puVar7 + uVar4 * 0x1e;
      uVar1 = uVar5 * 0x10000 + 0x10000;
      uVar5 = uVar1 >> 0x10;
    } while ((int)(uVar1 + uVar2 * -0x10000) < 0 != SBORROW4(uVar1,uVar2 * 0x10000));
  }
  DAT_02021644 = 1;
  return in_lr;
}

