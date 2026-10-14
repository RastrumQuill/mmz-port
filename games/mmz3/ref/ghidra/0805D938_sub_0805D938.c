// sub_0805D938 at 0x0805D938 (thumb)

undefined4 sub_0805D938(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined uVar3;
  byte bVar4;
  char cVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0xd000U < 0x1a001) {
      uVar3 = 0x18;
    }
    else {
      uVar3 = 8;
    }
    *(undefined *)(param_1 + 0x12) = uVar3;
    sub_08017700(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08007390(param_1 + 0x74,&DAT_0836190c);
  iVar2 = DAT_0202f5c0;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar4;
  cVar5 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar5;
  if ((((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) == 0) && (*(short *)(DAT_0202f5c0 + 0xa4) != 0)) &&
     (cVar5 == '\0')) {
    sub_0805D598(param_1);
  }
  sub_080177F4(param_1);
  return in_lr;
}

