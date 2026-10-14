// sub_080AEB94 at 0x080AEB94 (thumb)

undefined4 sub_080AEB94(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(short *)(*(int *)(param_1 + 0x28) + 0xe) == 0x101) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4)
      ;
      *(undefined *)(param_1 + 0xd) = 0;
      sub_0801749C(param_1);
      *(undefined *)(param_1 + 0x25) = 0x19;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
      sub_08017700(param_1,0x8603);
      sub_080AED88(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

