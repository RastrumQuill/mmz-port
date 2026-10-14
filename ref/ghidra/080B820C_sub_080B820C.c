// sub_080B820C at 0x080B820C (thumb)

undefined4 sub_080B820C(int param_1)

{
  undefined4 in_lr;
  
  sub_08018FF8(*(undefined4 *)(param_1 + 0x20),param_1 + 0x4c,0);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffa00;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_080055FC(param_1 + 0x74,&DAT_082b8400,param_1 + 0x4c,10);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x80b8815;
  sub_080B87C4(param_1);
  sub_080B4FA4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080B50DC(param_1,5);
  sub_080B82FC(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 4);
  return in_lr;
}

