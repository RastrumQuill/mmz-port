// sub_08061944 at 0x08061944 (thumb)

undefined4 sub_08061944(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0xdb);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x100;
    *(undefined2 *)(param_1 + 0xbc) = 300;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sVar1 = *(short *)(param_1 + 0xbc) + -1;
  *(short *)(param_1 + 0xbc) = sVar1;
  if (sVar1 == 0) {
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffeff;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

