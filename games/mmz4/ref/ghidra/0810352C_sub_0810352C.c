// sub_0810352C at 0x0810352C (thumb)

undefined4 sub_0810352C(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf) == 8)) {
    DAT_0202e204 = 0x1e0;
    DAT_0202e004 = 10;
    sub_08001D30(&DAT_08c451a8,0xfc00);
    sub_08002208(&DAT_08c451b4,(DAT_0202e004 - 4) * 0x20 + 0x200);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_081035C8(param_1);
  }
  return in_lr;
}

