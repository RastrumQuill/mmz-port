// sub_08103B84 at 0x08103B84 (thumb)

undefined4 sub_08103B84(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) != '\0') {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    goto LAB_08103cc0;
  }
  if (*(byte *)(param_1 + 0x12) < 4) {
    if (*(int *)(param_1 + 0xb4 + (uint)*(byte *)(param_1 + 0x12) * 4) != 0) goto LAB_08103cc0;
    uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar6 & 0x7fffffff;
    iVar3 = sub_08128A9C(uVar6 * 2 >> 0x11,0x7000);
    iVar3 = sub_08103A78(DAT_0202ea30 + iVar3 * 2 + -0x7000,DAT_0202ea34 + 0x6fff,2);
    *(int *)(param_1 + 0xb4 + (uint)*(byte *)(param_1 + 0x12) * 4) = iVar3;
    if (iVar3 == 0) goto LAB_08103cc0;
    uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar6 & 0x7fffffff;
    *(byte *)(param_1 + 0x13) = ((byte)(uVar6 * 2 >> 0x11) & 0xf) + 8;
    cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  }
  else {
    if (*(int *)((uint)*(byte *)(param_1 + 0x12) * 4 + param_1 + 0x4c) != 0) goto LAB_08103cc0;
    uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar6 & 0x7fffffff;
    iVar3 = sub_08128A9C(uVar6 * 2 >> 0x11,0x7000);
    iVar3 = sub_08103A78(DAT_0202ea30 + iVar3 * 2 + -0x7000,DAT_0202ea34 + 0x6fff,2);
    *(int *)((uint)*(byte *)(param_1 + 0x12) * 4 + param_1 + 0x4c) = iVar3;
    if (iVar3 == 0) goto LAB_08103cc0;
    uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar6 & 0x7fffffff;
    *(byte *)(param_1 + 0x13) = ((byte)(uVar6 * 2 >> 0x11) & 0xf) + 8;
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 8) goto LAB_08103cc0;
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0x12) = cVar2;
LAB_08103cc0:
  uVar6 = 0;
  do {
    piVar5 = (int *)(param_1 + 0xb4 + uVar6 * 4);
    iVar3 = *piVar5;
    if ((iVar3 != 0) && (2 < *(byte *)(iVar3 + 0xc))) {
      *piVar5 = 0;
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 4);
  uVar6 = 0;
  do {
    iVar4 = uVar6 * 4 + param_1;
    iVar3 = *(int *)(iVar4 + 0x5c);
    if ((iVar3 != 0) && (2 < *(byte *)(iVar3 + 0xc))) {
      *(undefined4 *)(iVar4 + 0x5c) = 0;
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 4);
  return in_lr;
}

