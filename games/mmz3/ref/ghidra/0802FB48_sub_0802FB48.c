// sub_0802FB48 at 0x0802FB48 (thumb)

undefined4 sub_0802FB48(int param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  bVar1 = false;
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1,0x1902);
    sub_08038394(param_1,9);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else if ((*(byte *)(param_1 + 0x124) & 0x40) == 0) {
    sub_08034558(param_1,0x1902);
  }
  else if (*(byte *)(param_1 + 0x140) < 8) {
    sub_080177CC(param_1,0x1902,*(byte *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
  }
  else {
    bVar1 = true;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') || (bVar1)) {
    if ((*(uint *)(param_1 + 0x218) & 0x80) == 0) {
      *(undefined *)(param_1 + 0xed) = 3;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802FAD4(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xed) = 2;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802FA88(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0x125) = 2;
  }
  return in_lr;
}

