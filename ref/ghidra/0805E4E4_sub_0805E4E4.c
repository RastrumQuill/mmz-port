// sub_0805E4E4 at 0x0805E4E4 (thumb)

undefined4 sub_0805E4E4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_0805e5a6;
  }
  *(undefined *)(param_1 + 0xc2) = 0;
  sub_0805DC68(param_1);
  sub_080033F0(param_1 + 0x6c,0);
  sub_0800561C(param_1 + 0x74,&DAT_082b0270);
  *(undefined *)(param_1 + 0x12) = 0x18;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x20);
    }
    if (0x10000 < iVar3) {
      bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar1;
      if (bVar1 == 0) {
LAB_0805e598:
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
LAB_0805e59e:
      *(byte *)(param_1 + 10) = bVar1;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x20);
    }
    if (0x4000 < iVar3) {
      bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar1;
      if (bVar1 == 0) goto LAB_0805e598;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_0805e59e;
    }
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805e5a6:
  sub_0805DCB0(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

