// sub_080AF188 at 0x080AF188 (thumb)

undefined4 sub_080AF188(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
      DAT_02022add = DAT_02022add | 2;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    if (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc)) {
      DAT_02022add = DAT_02022add | 4;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  if ((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x20) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

