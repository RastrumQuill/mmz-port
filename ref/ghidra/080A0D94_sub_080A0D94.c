// sub_080A0D94 at 0x080A0D94 (thumb)

undefined4 sub_080A0D94(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,1);
  sub_0809C980(param_1);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  return in_lr;
}

