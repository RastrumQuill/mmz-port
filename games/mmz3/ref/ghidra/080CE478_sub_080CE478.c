// sub_080CE478 at 0x080CE478 (thumb)

undefined4 sub_080CE478(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CE510(param_1);
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836caf8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836cb00 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CE510(param_1);
  }
  return in_lr;
}

