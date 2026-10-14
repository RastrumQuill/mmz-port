// sub_08099950 at 0x08099950 (thumb)

undefined4 sub_08099950(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_08006DE4(param_1 + 0x74,&DAT_08343384,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x10)] << 1;
  *(int *)(param_1 + 0x60) =
       (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x10) + 0x40 & 0xff] << 1;
  sub_080127E4(param_1,1);
  sub_080999D8(param_1);
  return in_lr;
}

