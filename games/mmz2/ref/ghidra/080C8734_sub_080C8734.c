// sub_080C8734 at 0x080C8734 (thumb)

undefined4 sub_080C8734(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      sub_080127E4(param_1,0xe000);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(undefined *)(param_1 + 0x25) = 0x1f;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else if (*(char *)(param_1 + 0xd) != '\x01') {
      return in_lr;
    }
    sub_080128D4(param_1);
  }
  else {
    sub_080BF834(param_1);
  }
  return in_lr;
}

