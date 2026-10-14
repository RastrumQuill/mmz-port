// sub_08003AA0 at 0x08003AA0 (thumb)

undefined4 sub_08003AA0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  undefined4 local_24 [2];
  
  uVar2 = 0;
  do {
    uVar4 = 0;
    iVar1 = (int)(short)uVar2;
    do {
      iVar3 = (int)(short)uVar4;
      puVar5 = (undefined4 *)((iVar3 * 2 + iVar1 * 0x40) * 2 + param_1);
      uVar2 = (uint)*(ushort *)((iVar1 * 0xf + iVar3) * 2 + param_3);
      *puVar5 = *(undefined4 *)(uVar2 * 8 + param_2);
      puVar5[0x10] = *(undefined4 *)(uVar2 * 8 + param_2 + 4);
      uVar4 = iVar3 + 1U & 0xffff;
      iVar3 = (int)((iVar3 + 1U) * 0x10000) >> 0x10;
    } while (iVar3 < 0xf);
    puVar5 = (undefined4 *)((iVar1 * 0x40 + iVar3 * 2) * 2 + param_1);
    *puVar5 = 0;
    puVar5[0x10] = 0;
    uVar2 = iVar1 + 1U & 0xffff;
  } while ((int)((iVar1 + 1U) * 0x10000) >> 0x10 < 10);
  local_24[0] = 0;
  FUN_080c88ec(local_24,param_1 + 0x500,0x10000c0);
  return in_lr;
}

