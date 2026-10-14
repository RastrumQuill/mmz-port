// sub_080B210C at 0x080B210C (thumb)

undefined4 sub_080B210C(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C980();
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    (&DAT_02022ad4)[(int)*(uint *)(&DAT_082b6c30 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] =
         (byte)(1 << (*(uint *)(&DAT_082b6c30 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7)) |
         (&DAT_02022ad4)[(int)*(uint *)(&DAT_082b6c30 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3];
    sub_080B216C(param_1);
  }
  return in_lr;
}

