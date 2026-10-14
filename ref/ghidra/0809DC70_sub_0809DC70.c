// sub_0809DC70 at 0x0809DC70 (thumb)

undefined4 sub_0809DC70(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0x10);
  *(undefined *)(param_1 + 0xe) = 0;
  sub_0809DCB4(param_1);
  return in_lr;
}

