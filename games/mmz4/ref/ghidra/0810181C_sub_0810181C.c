// sub_0810181C at 0x0810181C (thumb)

undefined4 sub_0810181C(int param_1)

{
  undefined4 in_lr;
  
  sub_08002C94(param_1 + 0x34,0x8101a2d);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08101780(param_1);
  return in_lr;
}

