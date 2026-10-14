// sub_080454E8 at 0x080454E8 (thumb)

undefined4 sub_080454E8(int param_1)

{
  undefined4 in_lr;
  
  sub_08029710();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,0xb);
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x50);
  *(undefined *)(param_1 + 0xcb) = 0;
  *(undefined2 *)(param_1 + 0xce) = 0x100;
  *(undefined *)(param_1 + 0xca) = 0;
  *(undefined2 *)(param_1 + 0xd2) = 0xffff;
  *(undefined *)(param_1 + 0xc9) = 4;
  *(undefined *)(param_1 + 0xde) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  sub_08029874(param_1,&DAT_082ae910,0x40);
  sub_080014E8(&DAT_085102a8,(DAT_020231b4 - 0x208) * 0x20 + 0x10000);
  sub_0800179C(&DAT_085102b4,(DAT_02023142 - 4) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08045698(param_1);
  return in_lr;
}

