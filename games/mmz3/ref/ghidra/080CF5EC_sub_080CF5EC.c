// sub_080CF5EC at 0x080CF5EC (thumb)

undefined4 sub_080CF5EC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836ce5c);
    sub_08017700(param_1,0x6d0d);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar3 = 0xffffffe0;
    *(undefined4 *)(param_1 + 100) = 0xffffffe0;
    if ((*(byte *)(DAT_0202f5c0 + 10) & 0x10) != 0) {
      uVar3 = 0x20;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  if (0x380 < iVar2) {
    *(undefined4 *)(param_1 + 0x5c) = 0x380;
  }
  if (*(int *)(param_1 + 0x5c) < -0x380) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffc80;
  }
  sub_080177F4(param_1);
  cVar1 = sub_080CEEDC(param_1);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
  }
  return in_lr;
}

