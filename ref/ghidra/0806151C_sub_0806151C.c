// sub_0806151C at 0x0806151C (thumb)

undefined4 sub_0806151C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    *(undefined *)(param_1 + 0x1f) = 0;
    *(undefined *)(param_1 + 0xba) = 0;
    *(undefined *)(param_1 + 0xbb) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar3 + 0x4c) +
            (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x13) + 0x40] * -0x15;
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x4c) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x13) + 0x40] * 0x15
    ;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  *(int *)(param_1 + 0x50) =
       *(int *)(iVar3 + 0x50) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x13)] * -4;
  cVar1 = *(char *)(param_1 + 0x13) + '\x04';
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  else if (cVar1 == -0x80) {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  }
  if (*(char *)(param_1 + 0x12) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

