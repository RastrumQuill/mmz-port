// sub_080698AC at 0x080698AC (thumb)

undefined4 sub_080698AC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x50a);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  sub_08002EA0(4);
  if (*(char *)(param_1 + 0x73) == '\x04') {
    sub_080032EC(0x36);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  if (1 < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

