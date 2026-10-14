// sub_08061728 at 0x08061728 (thumb)

undefined4 sub_08061728(int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0xdd);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 2;
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
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffd;
  }
  if (*psVar2 == 0x6e) {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + 0x600;
    sub_080A6A78(param_1,&local_14);
  }
  if (*psVar2 == 400) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

