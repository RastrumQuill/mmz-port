// sub_08009348 at 0x08009348 (thumb)

undefined4 sub_08009348(int param_1,int param_2,ushort *param_3)

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
  uVar4 = (uint)*(byte *)(*(int *)(*(int *)(&DAT_08336ac0 + ((byte)DAT_02002650 & 0x7f) * 4) + 0xc)
                         + 2);
  puVar7 = &DAT_02002c64 + (uVar4 * 0xf * param_2 + param_1) * 2;
  uVar5 = 0;
  if (uVar3 != 0 && -1 < (int)(uVar3 * 0x10000)) {
    iVar1 = (int)((uint)*param_3 << 0x11) >> 0x10;
    do {
      sub_08001C20(puVar6,puVar7,iVar1);
      puVar6 = (ushort *)((int)puVar6 + iVar1);
      puVar7 = puVar7 + uVar4 * 0x1e;
      uVar2 = uVar5 * 0x10000 + 0x10000;
      uVar5 = uVar2 >> 0x10;
    } while ((int)(uVar2 + uVar3 * -0x10000) < 0 != SBORROW4(uVar2,uVar3 * 0x10000));
  }
  DAT_0202e480 = 1;
  return in_lr;
}

