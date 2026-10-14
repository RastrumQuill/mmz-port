// sub_0803B8E0 at 0x0803B8E0 (thumb)

undefined4 sub_0803B8E0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0x80;
    }
    *(undefined *)(param_1 + 0x12) = uVar3;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xd9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  pcVar4 = (char *)(param_1 + 0xd9);
  if (*pcVar4 != '\0') {
    *pcVar4 = *pcVar4 + -1;
  }
  if (((*(ushort *)(param_1 + 0x90) & 4) != 0) && (*pcVar4 == '\0')) {
    *pcVar4 = '<';
    sub_08001EAC(0x83);
  }
  iVar5 = *(int *)(param_1 + 0xc0);
  iVar2 = *(int *)(param_1 + 0xc4);
  *(int *)(*(int *)(param_1 + 0xcc) + 0x4c) =
       *(int *)(*(int *)(param_1 + 0xcc) + 0x4c) +
       (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * 3;
  cVar1 = *(char *)(param_1 + 0x12) + '\x02';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -0x26) {
    sub_08001EAC(0x82);
  }
  if (*(char *)(param_1 + 0x12) == 'Z') {
    sub_08001EAC(0x82);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  if (*(byte *)(param_1 + 0x13) == 2) {
    if (*(int *)(DAT_0202286c + 0x4c) < iVar5 + iVar2 >> 1) {
      if (*(byte *)(param_1 + 0x12) < 0xe0) goto LAB_0803b9c2;
    }
    else if (*(byte *)(param_1 + 0x12) < 0x60) goto LAB_0803b9c2;
  }
  else if (*(byte *)(param_1 + 0x13) < 3) goto LAB_0803b9c2;
  *(undefined *)(param_1 + 0xd) = 0xe;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_0803b9c2:
  sub_0803A988(param_1);
  sub_080297C0(param_1);
  return in_lr;
}

