// sub_08080704 at 0x08080704 (thumb)

undefined4 sub_08080704(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08340c08 + (uint)*(byte *)(param_1 + 0x11) * 10));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    sub_080128D4(param_1);
    sub_0808090C(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    sub_08012ACC(param_1);
  }
  return in_lr;
}

