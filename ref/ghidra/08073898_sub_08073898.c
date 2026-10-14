// sub_08073898 at 0x08073898 (thumb)

undefined4 sub_08073898(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080033F0(param_1 + 0x6c,4);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    sub_0800561C(param_1 + 0x74,&DAT_082b1558);
    *(undefined *)(param_1 + 0xc4) = 1;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  piVar3 = (int *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = sub_0801BC08(*(int *)(param_1 + 0x24),1,1,1,1,0);
    *piVar3 = *piVar3 - iVar2;
  }
  if (*piVar3 < 1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    if ((*(byte *)(DAT_0202286c + 10) & 0x10) == 0) {
      iVar2 = *(int *)(DAT_0202286c + 0x4c) + *(int *)(param_1 + 0xb8);
    }
    else {
      iVar2 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0xb8);
    }
    *(int *)(param_1 + 0x4c) = iVar2;
    iVar2 = DAT_0202286c;
    *(int *)(param_1 + 0x50) = *(int *)(DAT_0202286c + 0x50) + *(int *)(param_1 + 0xbc);
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(iVar2 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  return in_lr;
}

