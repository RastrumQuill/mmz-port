// sub_080A0C58 at 0x080A0C58 (thumb)

undefined4 sub_080A0C58(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,0);
  sub_0809C980(param_1);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
  if ((DAT_02022b60 == 0xd) && ((DAT_02022adc & 0x10) == 0)) {
    DAT_02022af2 = 1;
  }
  if (5 < DAT_02022af2) {
    DAT_02022af2 = 5;
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(&DAT_082b58f8 + (uint)DAT_02022af2 * 4);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 200) = 0xffff;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x28) = &DAT_082b5910;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b58dc,param_1 + 0x4c,0);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_080A0B6C(param_1);
  return in_lr;
}

