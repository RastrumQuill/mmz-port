// sub_08065128 at 0x08065128 (thumb)

undefined4 sub_08065128(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0xf);
  *(byte *)(param_1 + 0xf) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined4 *)(param_1 + 0x54) = 0x300;
      *(undefined *)(param_1 + 0x12) = 0x21;
    }
    goto switchD_08065184_caseD_9;
  case 1:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_08065184_caseD_9;
    *(undefined *)(param_1 + 0x12) = 0x65;
    break;
  case 2:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -8;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_08065184_caseD_9;
    *(undefined *)(param_1 + 0x12) = 10;
    break;
  case 3:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 8;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_08065184_caseD_9;
    *(undefined *)(param_1 + 0x12) = 0x45;
    break;
  case 4:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -8;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_08065184_caseD_9;
    *(undefined *)(param_1 + 0x12) = 0x35;
    break;
  case 5:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 8;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_08065184_caseD_9;
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 6:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -8;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto switchD_08065184_caseD_9;
    break;
  case 7:
    iVar4 = *(int *)(param_1 + 0x54) + 0x10;
    *(int *)(param_1 + 0x54) = iVar4;
    if (iVar4 < 0xc1) goto switchD_08065184_caseD_9;
    *(undefined4 *)(param_1 + 0x54) = 0xc0;
    cVar2 = '\0';
    goto LAB_0806527e;
  case 8:
    cVar2 = *(char *)(param_1 + 0x13) + '\x04';
LAB_0806527e:
    *(char *)(param_1 + 0x13) = cVar2;
  default:
    goto switchD_08065184_caseD_9;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_08065184_caseD_9:
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x54);
  }
  else {
    iVar4 = *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x54);
  }
  piVar3 = (int *)(param_1 + 0xbc);
  *piVar3 = iVar4;
  if (*(char *)(param_1 + 0xd) == '\b') {
    iVar4 = *piVar3 + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x13) + 0x40] * 8;
  }
  else {
    iVar4 = *piVar3;
  }
  *(int *)(param_1 + 0x4c) = iVar4;
  iVar4 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xb8);
  if (iVar4 < 0) {
    iVar4 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x4c);
  }
  if (0x15000 < iVar4) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

