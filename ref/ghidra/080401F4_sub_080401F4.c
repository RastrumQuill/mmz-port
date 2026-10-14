// sub_080401F4 at 0x080401F4 (thumb)

undefined4 sub_080401F4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08029710();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,0x19);
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
  *(undefined *)(param_1 + 0x1e) = 0xd;
  sub_08029874(param_1,&DAT_082ae4bc,0x40);
  *(undefined4 *)(param_1 + 0xb0) = 0x804225d;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x4c) + -0xf800;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x50) + -0xa800;
  uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x50);
  *(undefined *)(param_1 + 0xc9) = 0;
  *(undefined *)(param_1 + 0xca) = 0;
  *(undefined *)(param_1 + 0xcb) = 0;
  *(undefined2 *)(param_1 + 0xce) = 0x100;
  *(undefined *)(param_1 + 0xd0) = 0;
  *(undefined *)(param_1 + 0xd1) = 0;
  *(undefined2 *)(param_1 + 0xdc) = 0x3c;
  *(undefined *)(param_1 + 0xe1) = 0x30;
  *(undefined *)(param_1 + 0xe4) = 0;
  *(undefined *)(param_1 + 0xe0) = 0xe;
  *(undefined *)(param_1 + 0xe2) = 0;
  *(undefined2 *)(param_1 + 0xd4) = 0x10;
  *(undefined2 *)(param_1 + 0xd6) = 0x200;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(byte *)(DAT_02022b20 + 1) < 5) {
    *(undefined *)(param_1 + 0xd2) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xd2) = 0x18;
  }
  sub_08084ECC(param_1,1,0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08040334(param_1);
  return in_lr;
}

