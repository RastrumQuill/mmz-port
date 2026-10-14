// sub_0804BC54 at 0x0804BC54 (thumb)

undefined4 sub_0804BC54(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if ((*(ushort *)(*(int *)(param_1 + 0x28) + 0x15a) & 1) == 0) {
    if ((*(ushort *)(*(int *)(param_1 + 0x28) + 200) & 4) != 0) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

