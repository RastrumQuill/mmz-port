// sub_080AA288 at 0x080AA288 (thumb)

undefined4 sub_080AA288(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_08017528();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x640f);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08368af4,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  uVar4 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar5 + 0x54) - *(int *)(&DAT_08368b24 + (*(byte *)(param_1 + 0x11) & 3) * 4);
    iVar2 = -*(int *)(&DAT_08368b34 + (uint)*(byte *)(param_1 + 0x11) * 4);
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar5 + 0x54) + *(int *)(&DAT_08368b24 + (*(byte *)(param_1 + 0x11) & 3) * 4);
    iVar2 = *(int *)(&DAT_08368b34 + (uint)*(byte *)(param_1 + 0x11) * 4);
  }
  *(int *)(param_1 + 0x5c) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x3000;
  uVar4 = *(undefined4 *)(&DAT_08368b54 + (uint)*(byte *)(param_1 + 0x11) * 4);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  uVar3 = sub_080FE10C((int)(short)*(undefined4 *)(param_1 + 0x5c),(int)(short)uVar4);
  uVar1 = (undefined)((uVar3 & 0xffff) + 0x4000 >> 8);
  *(undefined *)(param_1 + 0x13) = uVar1;
  *(undefined *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_080AA3B0(param_1);
  return in_lr;
}

