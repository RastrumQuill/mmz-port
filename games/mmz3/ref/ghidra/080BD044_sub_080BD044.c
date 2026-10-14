// sub_080BD044 at 0x080BD044 (thumb)

undefined4 sub_080BD044(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02002410 = DAT_02002410 | 0x4000;
    DAT_0200241d = *(undefined *)(param_1 + 0x7c);
    DAT_0200241e = DAT_0200241e | *(byte *)(param_1 + 0x7d);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0x77) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

