// sub_08042C24 at 0x08042C24 (thumb)

undefined4 sub_08042C24(int param_1,uint param_2,undefined param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  param_2 = param_2 & 0xff;
  iVar3 = *(int *)((param_2 + 2) * 4 + param_1 + 0xb8);
  sub_0804283C(param_1,param_2,param_3,&local_24);
  iVar5 = *(int *)(iVar3 + 0x4c) - local_24;
  iVar6 = *(int *)(iVar3 + 0x50) - local_20;
  iVar3 = iVar5 >> 8;
  iVar1 = iVar6 >> 8;
  iVar3 = sub_080C88FC(iVar3 * iVar3 + iVar1 * iVar1);
  uVar4 = (uint)(iVar3 << 0x10) >> 8;
  iVar3 = sub_080C8AD0(iVar5 * 0x100,uVar4);
  iVar1 = sub_080C8AD0(iVar6 * 0x100,uVar4);
  if (0x1000 < uVar4) {
    local_24 = local_24 + (iVar3 * 0x10 >> 1);
    local_20 = local_20 + (iVar1 * 0x10 >> 1);
  }
  iVar5 = *(int *)((param_2 + 6) * 4 + param_1 + 0xb8);
  if (iVar5 != 0) {
    iVar2 = 0;
    iVar6 = 0;
    do {
      *(int *)(iVar5 + 0x4c) = local_24 + iVar6;
      *(int *)(iVar5 + 0x50) = local_20 + iVar2;
      *(int *)(iVar5 + 0x5c) = local_24 + iVar6;
      *(int *)(iVar5 + 0x60) = local_20 + iVar2;
      iVar2 = iVar2 + iVar1 * 0x10;
      iVar6 = iVar6 + iVar3 * 0x10;
      iVar5 = *(int *)(iVar5 + 0x24);
    } while (iVar5 != 0);
  }
  return in_lr;
}

