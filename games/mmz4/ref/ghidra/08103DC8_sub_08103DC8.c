// sub_08103DC8 at 0x08103DC8 (thumb)

undefined4 sub_08103DC8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    if (*(byte *)(param_1 + 0x12) < 4) {
      if (*(int *)(param_1 + 0xb4 + (uint)*(byte *)(param_1 + 0x12) * 4) == 0) {
        uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        uVar6 = uVar5 & 0x7fffffff;
        DAT_0202dc38 = uVar6;
        iVar2 = sub_08128A9C(uVar5 * 2 >> 0x11,0x5000);
        uVar5 = uVar6 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        iVar2 = sub_08103A78(DAT_0202ea30 + iVar2 * 2 + -0x5800,DAT_0202ea34 + 0x6fff,
                             (uVar5 * 2 >> 0x11 & 1) + 3);
        *(int *)((uint)*(byte *)(param_1 + 0x12) * 4 + param_1 + 0xb4) = iVar2;
        if (iVar2 != 0) {
          uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
          DAT_0202dc38 = uVar5 & 0x7fffffff;
          *(byte *)(param_1 + 0x13) = ((byte)(uVar5 * 2 >> 0x11) & 0x3f) + 0x10;
          *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
        }
      }
    }
    else if (*(int *)((uint)*(byte *)(param_1 + 0x12) * 4 + param_1 + 0x4c) == 0) {
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar6 = uVar5 & 0x7fffffff;
      DAT_0202dc38 = uVar6;
      iVar2 = sub_08128A9C(uVar5 * 2 >> 0x11,0x5000);
      uVar5 = uVar6 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      iVar2 = sub_08103A78(DAT_0202ea30 + iVar2 * 2 + -0x5800,DAT_0202ea34 + 0x6fff,
                           (uVar5 * 2 >> 0x11 & 1) + 3);
      *(int *)((uint)*(byte *)(param_1 + 0x12) * 4 + param_1 + 0x4c) = iVar2;
      if (iVar2 != 0) {
        uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        *(byte *)(param_1 + 0x13) = ((byte)(uVar5 * 2 >> 0x11) & 0x3f) + 0x10;
        bVar1 = *(char *)(param_1 + 0x12) + 1;
        *(byte *)(param_1 + 0x12) = bVar1;
        if (7 < bVar1) {
          *(undefined *)(param_1 + 0x12) = 0;
        }
      }
    }
  }
  else {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  uVar5 = 0;
  do {
    piVar4 = (int *)(param_1 + 0xb4 + uVar5 * 4);
    iVar2 = *piVar4;
    if ((iVar2 != 0) && (2 < *(byte *)(iVar2 + 0xc))) {
      *piVar4 = 0;
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 4);
  uVar5 = 0;
  do {
    iVar3 = uVar5 * 4 + param_1;
    iVar2 = *(int *)(iVar3 + 0x5c);
    if ((iVar2 != 0) && (2 < *(byte *)(iVar2 + 0xc))) {
      *(undefined4 *)(iVar3 + 0x5c) = 0;
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 4);
  return in_lr;
}

