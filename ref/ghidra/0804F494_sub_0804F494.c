// sub_0804F494 at 0x0804F494 (thumb)

undefined4 sub_0804F494(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08048ACC(param_1);
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0x50;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x4c);
  if (iVar3 < 0) {
    iVar3 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xc0);
  }
  if (iVar3 < 0x20001) {
    iVar3 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0x50);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0xc4);
    }
    if (iVar3 < 0x20001) goto LAB_0804f50c;
  }
  *(undefined *)(param_1 + 0xd) = 6;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_0804f50c:
  if (0xc0 < *(byte *)(param_1 + 0x13)) {
    *(undefined *)(param_1 + 0x13) = 0xc0;
  }
  sub_0804F3E0(param_1,*(byte *)(param_1 + 0x13) >> 4);
  bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

