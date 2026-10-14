// sub_080B37D8 at 0x080B37D8 (thumb)

undefined4 sub_080B37D8(int param_1)

{
  undefined4 in_lr;
  
  if (*(short *)(DAT_02022e94 + 10) == 5) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080B31B0(param_1);
    sub_080033F0(param_1 + 0x6c,(&DAT_082b6ddc)[*(byte *)(param_1 + 0x10)]);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_080055FC(param_1 + 0x74,&DAT_082b6de0,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x80b3a8d;
    sub_080014E8(&DAT_084fc028,(DAT_02023204 - 0x200) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084fc034,(DAT_0202320a - 4) * 0x20 + 0x200);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 4);
    sub_080B38B0(param_1);
  }
  return in_lr;
}

