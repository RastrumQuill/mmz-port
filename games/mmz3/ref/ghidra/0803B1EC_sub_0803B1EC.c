// sub_0803B1EC at 0x0803B1EC (thumb)

undefined4 sub_0803B1EC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  if (*(byte *)(iVar1 + 0xc) < 2) {
    sub_080177F4(param_1);
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      *(int *)(param_1 + 0x54) =
           *(int *)(iVar1 + 0x54) + (*(int *)(param_1 + 0xb8) - *(int *)(iVar1 + 0x54) >> 1);
      *(int *)(param_1 + 0x58) =
           *(int *)(iVar1 + 0x58) + (*(int *)(param_1 + 0xbc) - *(int *)(iVar1 + 0x58) >> 1);
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xbc);
    }
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar1 + 0x58);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

