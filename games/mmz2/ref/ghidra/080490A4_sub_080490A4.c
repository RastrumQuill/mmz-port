// sub_080490A4 at 0x080490A4 (thumb)

undefined4 sub_080490A4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(char *)(param_1 + 0x73) == '\x04') &&
       (bVar1 = *(byte *)(param_1 + 0x12), *(byte *)(param_1 + 0x12) = bVar1 + 1, 1 < bVar1)) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else if (*(char *)(param_1 + 0x71) == '\x02') {
    *(undefined *)(param_1 + 0xd) = 0x20;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

