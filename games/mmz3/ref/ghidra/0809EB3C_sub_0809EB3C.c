// sub_0809EB3C at 0x0809EB3C (thumb)

undefined4 sub_0809EB3C(int param_1)

{
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 0xa4) < 1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    sub_0809EB90(param_1);
  }
  else {
    *(uint *)(param_1 + 0xb8) = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4 & 1;
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836768c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

