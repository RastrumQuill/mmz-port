// sub_080A1C50 at 0x080A1C50 (thumb)

undefined4 sub_080A1C50(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined *)(param_1 + 0x22) = 1;
  sub_08012738(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x390a);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08344624,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0x24) = (&DAT_08344674)[*(byte *)(param_1 + 0x11)];
  if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar3 + 0x54) + *(int *)(&DAT_08344678 + (uint)*(byte *)(param_1 + 0x11) * 4);
    iVar1 = *(int *)(&DAT_08344654 + (uint)*(byte *)(param_1 + 0x11) * 4);
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar3 + 0x54) - *(int *)(&DAT_08344678 + (uint)*(byte *)(param_1 + 0x11) * 4);
    iVar1 = -*(int *)(&DAT_08344654 + (uint)*(byte *)(param_1 + 0x11) * 4);
  }
  *(int *)(param_1 + 100) = iVar1;
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar3 + 0x58) + *(int *)(&DAT_08344688 + (uint)*(byte *)(param_1 + 0x11) * 4);
  iVar3 = *(int *)(&DAT_08344664 + (uint)*(byte *)(param_1 + 0x11) * 4);
  *(int *)(param_1 + 0x68) = iVar3;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 4;
  *(int *)(param_1 + 0x60) = iVar3 << 4;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xbd) = 0;
  uVar2 = 0;
  do {
    sub_080A1BB0(param_1,1,uVar2 & 0xff);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080A1C1C(param_1);
  return in_lr;
}

