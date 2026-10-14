// sub_080093E8 at 0x080093E8 (thumb)

undefined4 sub_080093E8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(&DAT_08336ac0 + ((byte)DAT_02002650 & 0x7f) * 4) + 8);
  iVar3 = *(int *)(iVar3 + 8) + iVar3 + (param_3 & 0xffff) * 300;
  uVar2 = (uint)*(byte *)(*(int *)(*(int *)(&DAT_08336ac0 + ((byte)DAT_02002650 & 0x7f) * 4) + 0xc)
                         + 2);
  puVar4 = &DAT_02002c64 + (param_2 * uVar2 * 0xf * 10 + param_1 * 0xf) * 2;
  uVar5 = 0;
  do {
    sub_08001C20(iVar3,puVar4,0x1e);
    puVar4 = puVar4 + uVar2 * 0x1e;
    iVar3 = iVar3 + 0x1e;
    uVar1 = uVar5 * 0x10000 + 0x10000;
    uVar5 = uVar1 >> 0x10;
  } while ((int)uVar1 >> 0x10 < 10);
  DAT_0202e480 = 1;
  return in_lr;
}

