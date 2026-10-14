// sub_080AAE10 at 0x080AAE10 (thumb)

undefined4 sub_080AAE10(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C834();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,4);
  sub_0809C980(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined2 *)(param_1 + 0x48) = 0x10;
  *(undefined2 *)(param_1 + 0x4a) = 0x10;
  *(undefined2 *)(param_1 + 0xc6) = 0x10;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0xffff;
  sub_080AAC78(param_1,2);
  *(undefined *)(param_1 + 0x12) = 0x40;
  *(undefined4 *)(param_1 + 0x54) = 0x80;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080AACEC(param_1);
  return in_lr;
}

