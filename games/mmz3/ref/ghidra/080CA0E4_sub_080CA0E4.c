// sub_080CA0E4 at 0x080CA0E4 (thumb)

undefined4 sub_080CA0E4(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836c478 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836c490 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CA14C(param_1);
  }
  return in_lr;
}

