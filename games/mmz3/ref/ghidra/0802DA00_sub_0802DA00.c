// sub_0802DA00 at 0x0802DA00 (thumb)

undefined4 sub_0802DA00(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1,0x1400);
    sub_08038394(param_1,8);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else if ((*(byte *)(param_1 + 0x124) & 0x40) == 0) {
    sub_08034558(param_1,0x1400);
  }
  else {
    sub_080177CC(param_1,0x1400,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xec) = 0;
    uVar1 = sub_08025BEC(param_1);
    sub_08017700(param_1,uVar1);
  }
  else {
    *(undefined *)(param_1 + 0x125) = 1;
  }
  return in_lr;
}

