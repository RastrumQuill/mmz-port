// sub_0807493C at 0x0807493C (thumb)

undefined4 sub_0807493C(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801749C(param_1);
    sub_08017700(param_1,0x280c);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar3 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
  if ((iVar3 + 0x3000U < 0x6000) && (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  cVar1 = (char)(iVar3 >> 0x1f);
  if (iVar3 < 0) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = -cVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | cVar1 * -0x10;
  if (0x2000 < iVar3 + 0x1000U) {
    sub_08073C38(param_1,(iVar3 >> 0x1f) * -0x180 + -0xc0);
    iVar3 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar3 - *(int *)(param_1 + 0x58) < 0x401) {
      *(int *)(param_1 + 0x58) = iVar3;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080177F4(param_1);
  sub_08007390(param_1 + 0x74,
               &DAT_08363664 + (uint)(byte)(&DAT_083637b4)[*(char *)(param_1 + 0x71)] * 0x18);
  return in_lr;
}

