// sub_08081000 at 0x08081000 (thumb)

undefined4 sub_08081000(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08340cb4 + (uint)*(byte *)(param_1 + 0x11) * 4));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08012ACC(param_1);
  return in_lr;
}

