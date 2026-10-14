// sub_0809EB5C at 0x0809EB5C (thumb)

undefined4 sub_0809EB5C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x18;
  *(undefined **)(param_1 + 0x28) = &DAT_082b56b8;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0809E9FC(param_1);
  return in_lr;
}

