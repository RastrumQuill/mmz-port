// sub_08007410 at 0x08007410 (thumb)

undefined4 sub_08007410(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined *puVar7;
  undefined4 in_lr;
  
  uVar3 = (uint)param_3[1];
  puVar6 = param_3 + 2;
  uVar4 = (uint)*(byte *)(*(int *)(*(int *)(&DAT_08829090 +
                                           (uint)(DAT_0202cac0 >> 4) * 4 +
                                           ((byte)DAT_02000c80 & 0x7f) * 8) + 0xc) + 2);
  puVar7 = &DAT_02001294 + (uVar4 * 0xf * param_2 + param_1) * 2;
  uVar5 = 0;
  if (uVar3 != 0 && -1 < (int)(uVar3 * 0x10000)) {
    iVar1 = (int)((uint)*param_3 << 0x11) >> 0x10;
    do {
      sub_08000B30(puVar6,puVar7,iVar1);
      puVar6 = (ushort *)((int)puVar6 + iVar1);
      puVar7 = puVar7 + uVar4 * 0x1e;
      uVar2 = uVar5 * 0x10000 + 0x10000;
      uVar5 = uVar2 >> 0x10;
    } while ((int)(uVar2 + uVar3 * -0x10000) < 0 != SBORROW4(uVar2,uVar3 * 0x10000));
  }
  DAT_0202cab0 = 1;
  return in_lr;
}

