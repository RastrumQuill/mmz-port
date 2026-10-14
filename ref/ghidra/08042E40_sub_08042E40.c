// sub_08042E40 at 0x08042E40 (thumb)

undefined4 sub_08042E40(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082ae7e8)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029654(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (DAT_02022b60 == 0x10) {
      sub_08029874(param_1,&DAT_082ae55c,0x40);
    }
    else {
      sub_08029874(param_1,&DAT_082ae55c,0x40);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x8043029;
    uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    sub_080014E8(&DAT_084e02bc,(DAT_02022fc6 - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e02c8,(DAT_02023003 - 5) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x11) = 3;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined *)(param_1 + 0xe0) = 0;
  *(undefined *)(param_1 + 0xe1) = 0;
  *(undefined *)(param_1 + 0xe2) = 0;
  *(undefined *)(param_1 + 0xe3) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined *)(param_1 + 0xe6) = 0;
  *(undefined *)(param_1 + 0xe7) = 0xff;
  *(undefined2 *)(param_1 + 0xbc) = 0xffff;
  sub_08042F5C(param_1);
  return in_lr;
}

