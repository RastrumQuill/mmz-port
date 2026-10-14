// sub_0807E720 at 0x0807E720 (thumb)

undefined4 sub_0807E720(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2) {
    if (*(short *)(*(int *)(param_1 + 0x20) + 0xe) == 0x101) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4)
      ;
      *(undefined *)(param_1 + 0xd) = 0;
      sub_08076590(param_1);
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
      sub_080033F0(param_1 + 0x6c,3);
      sub_0807E95C(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

