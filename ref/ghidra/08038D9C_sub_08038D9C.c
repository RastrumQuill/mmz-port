// sub_08038D9C at 0x08038D9C (thumb)

undefined4 sub_08038D9C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined auStack_20 [4];
  
  sub_080C8D70(auStack_20,&DAT_080c9268,4);
  sub_08029654(param_1);
  uVar1 = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,0);
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08029874(param_1,&DAT_082ada94,0x60);
  sub_080014E8(&DAT_084b83c0,(DAT_02022f00 - 0x210) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084b83cc,(DAT_02022f60 - 5) * 0x20 + 0x200);
  sub_080014E8(&DAT_084b83d4,(DAT_02022f02 - 0x300) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084b83e0,(DAT_02022f61 - 8) * 0x20 + 0x200);
  sub_080014E8(&DAT_084b8500,(DAT_02022f20 - 0x3a0) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084b850c,(DAT_02022f70 - 4) * 0x20 + 0x200);
  sub_080014E8(&DAT_08500438,(DAT_0202307c - 0x304) * 0x20 + 0x10000);
  sub_0800179C(&DAT_08500444,(DAT_020230f6 - 4) * 0x20 + 0x200);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x4c) + 0xf000;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x50) + 0x4000;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc1) = 0;
  *(undefined2 *)(param_1 + 0xc2) = 0xffff;
  *(undefined *)(param_1 + 0xde) = 0;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + -0x6000;
  *(undefined2 *)(param_1 + 0xd8) = 0;
  *(undefined *)(param_1 + 0xda) = 0;
  *(undefined *)(param_1 + 0xdb) = 0;
  *(undefined *)(param_1 + 0xdc) = 2;
  *(undefined *)(param_1 + 0xdd) = 2;
  *(undefined2 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined *)(param_1 + 0xd0) = 0;
  do {
    sub_0806BB08(param_1,auStack_20[uVar1 & 3],uVar1,0);
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08038FA0(param_1);
  return in_lr;
}

