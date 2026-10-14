// sub_0803EC64 at 0x0803EC64 (thumb)

undefined4 sub_0803EC64(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_020301a8 & 8) != 0)) {
    iVar1 = *(int *)(param_1 + 0xc4);
    if ((iVar1 != 0) && (1 < *(byte *)(iVar1 + 0xc))) {
      *(int *)(param_1 + 0xc4) = 0;
      sub_080401D4(param_1);
      *(undefined2 *)(param_1 + 200) = 0x15;
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835e3c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080400EC(param_1);
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835e3f8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0800471C(0x75);
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 1;
    }
    sub_0803ED24(param_1);
  }
  return in_lr;
}

