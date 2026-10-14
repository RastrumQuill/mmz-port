// sub_0804D878 at 0x0804D878 (thumb)

undefined4 sub_0804D878(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_020301a8 & 8) != 0)) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835fb10 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835fb40 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0800471C(0xdd);
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 1;
    }
    sub_0804D910(param_1);
  }
  return in_lr;
}

