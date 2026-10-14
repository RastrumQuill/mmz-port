// sub_080B73E0 at 0x080B73E0 (thumb)

undefined4 sub_080B73E0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_08860aa4 + (uint)*(byte *)(param_1 + 0xb4) * 2));
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      *(undefined *)(param_1 + 0xd) = 1;
      sub_08002B10(0x13e);
    }
    else {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}

