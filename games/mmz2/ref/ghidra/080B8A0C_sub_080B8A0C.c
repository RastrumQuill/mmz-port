// sub_080B8A0C at 0x080B8A0C (thumb)

undefined4 sub_080B8A0C(int param_1)

{
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,1);
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11) + 0x40 & 0xff];
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11)];
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B8854(param_1);
  return in_lr;
}

