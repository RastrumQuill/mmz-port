// sub_080AE788 at 0x080AE788 (thumb)

undefined4 sub_080AE788(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0809C7B4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,0);
  sub_0809C980(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
  *(undefined *)(param_1 + 0x1e) = 0xd;
  sub_080014E8(&DAT_08510410,(DAT_020231d8 - 0x250) * 0x20 + 0x10000);
  sub_0800179C(&DAT_0851041c,(DAT_02023154 - 7) * 0x20 + 0x200);
  *(undefined2 *)(param_1 + 0xc4) = 4;
  *(undefined2 *)(param_1 + 0xc6) = 0x200;
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0xc4);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0xc6);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
  iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0xc0) = iVar1 + -0x3000;
  *(int *)(param_1 + 0x50) = iVar1 + -0xe400;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080AE750(param_1);
  return in_lr;
}

