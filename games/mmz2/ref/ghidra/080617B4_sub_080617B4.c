// sub_080617B4 at 0x080617B4 (thumb)

undefined4 sub_080617B4(int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0xdd);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 4;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  psVar2 = (short *)(param_1 + 0xbc);
  sVar1 = *psVar2;
  *psVar2 = sVar1 + 1;
  if ((short)(sVar1 + 1) == 2) {
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffb;
  }
  if (*psVar2 == 100) {
    sub_080CBE18(param_1);
  }
  if (*psVar2 == 800) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

