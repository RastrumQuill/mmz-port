// sub_080BEB20 at 0x080BEB20 (thumb)

undefined4 sub_080BEB20(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x5c) =
       (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff] >> 2;
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] >> 2;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 1;
  return in_lr;
}

