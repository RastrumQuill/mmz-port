// sub_0809EF90 at 0x0809EF90 (thumb)

undefined4 sub_0809EF90(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x28) = &DAT_082b56f4;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x50);
  *(undefined2 *)(param_1 + 200) = 0xffff;
  sub_0809EF24(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0809F09C(param_1);
  return in_lr;
}

