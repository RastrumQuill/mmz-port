// sub_080A7654 at 0x080A7654 (thumb)

undefined4 sub_080A7654(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(int *)(param_1 + 0x20) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc))) &&
      (*(char *)(param_1 + 0x10) == '\x01')) && (param_1 != 0)) {
    do {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      param_1 = *(int *)(param_1 + 0x24);
    } while (param_1 != 0);
  }
  return in_lr;
}

