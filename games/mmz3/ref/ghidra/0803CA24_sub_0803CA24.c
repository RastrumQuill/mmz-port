// sub_0803CA24 at 0x0803CA24 (thumb)

undefined4 sub_0803CA24(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(*(int *)(param_1 + 0x28) + 0xc2) != '\x01') ||
     ((*(byte *)(*(int *)(param_1 + 0x28) + 0x136) & 2) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

