// sub_0809425C at 0x0809425C (thumb)

undefined4 sub_0809425C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xc) != '\0') {
    sub_08088204(param_1);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined2 *)(param_1 + 0x48) = 0x100;
    *(undefined2 *)(param_1 + 0x4a) = 0x100;
    *(undefined *)(param_1 + 0x12) = 2;
    *(undefined *)(param_1 + 0x13) = 0x80;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
    sub_080942C0(param_1);
  }
  return in_lr;
}

