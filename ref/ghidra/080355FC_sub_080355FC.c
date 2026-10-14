// sub_080355FC at 0x080355FC (thumb)

undefined4 sub_080355FC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08029654();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1);
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(char *)(param_1 + 0xd4) = '@';
  sub_08029874(param_1,&DAT_082ad6fc,(int)*(char *)(param_1 + 0xd4));
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  sub_080014E8(&DAT_084e0168,(DAT_02022fa4 - 0x208) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084e0174,(DAT_02022ff2 - 5) * 0x20 + 0x200);
  sub_080014E8(&DAT_084e017c,(DAT_02022fa6 - 0x210) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084e0188,(DAT_02022ff3 - 7) * 0x20 + 0x200);
  sub_080014E8(&DAT_085003c0,(DAT_02023070 - 0x300) * 0x20 + 0x10000);
  sub_0800179C(&DAT_085003cc,(DAT_020230f0 - 6) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined *)(param_1 + 0xc9) = 0;
  *(undefined *)(param_1 + 0xca) = 0;
  *(undefined *)(param_1 + 0xcb) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0xffff;
  uVar1 = sub_0807B54C(param_1,0,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined *)(param_1 + 0xd0) = 3;
  *(undefined *)(param_1 + 0xd1) = 3;
  *(undefined *)(param_1 + 0xd2) = 3;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080355C8(param_1);
  return in_lr;
}

