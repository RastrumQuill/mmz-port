// sub_080CF534 at 0x080CF534 (thumb)

undefined4 sub_080CF534(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x6d0d);
    sub_08007390(param_1 + 0x74,&DAT_0836ce74);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0x13) = 0;
    uVar2 = FUN_080fe2f8(-*(int *)(param_1 + 0x5c),0x20);
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  cVar1 = sub_080CEEDC(param_1);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
  }
  if ((((*(char *)(param_1 + 0x12) == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) &&
      (*(int *)(DAT_0202f5c0 + 0x58) < *(int *)(param_1 + 0x58) + -8)) &&
     (*(char *)(DAT_0202f5c0 + 0xd) == '\0')) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(byte *)(param_1 + 0x13) = (byte)(*(uint *)(param_1 + 0x8c) >> 2) & 1;
  sub_080177F4(param_1);
  return in_lr;
}

