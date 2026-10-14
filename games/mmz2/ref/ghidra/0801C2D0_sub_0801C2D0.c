// sub_0801C2D0 at 0x0801C2D0 (thumb)

longlong sub_0801C2D0(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint in_lr;
  
  iVar4 = *(int *)(param_1 + 0xc);
  piVar6 = (int *)(param_1 + (uint)*(byte *)(iVar4 + 1) * 0x10 + 0x10);
  iVar5 = *piVar6;
  if (iVar5 == 0) goto switchD_0801c2f8_caseD_8;
  switch(*(undefined2 *)(iVar4 + 2)) {
  case 0:
    *(undefined4 *)(iVar5 + 0x54) = **(undefined4 **)(iVar4 + 4);
    *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(*(int *)(iVar4 + 4) + 4);
    break;
  case 1:
    iVar4 = *(int *)(param_1 + 0x10 + *(int *)(iVar4 + 4) * 0x10);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
    }
    break;
  case 2:
    if (*(int *)(iVar4 + 4) == 0) {
      bVar2 = *(byte *)(iVar5 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar5 + 10) | 0x10;
    }
    *(byte *)(iVar5 + 10) = bVar2;
    if ((*(byte *)(iVar5 + 10) & 8) == 0) break;
    *(char *)(iVar5 + 0x4c) = (char)*(undefined4 *)(iVar4 + 4);
    bVar3 = (byte)((*(uint *)(iVar4 + 4) & 1) << 4);
    bVar2 = *(byte *)(iVar5 + 0x4a);
    cVar1 = -0x12;
    goto LAB_0801c3ba;
  case 3:
    if (*(int *)(iVar4 + 4) == 0) {
      bVar2 = *(byte *)(iVar5 + 10) & 0xdf;
    }
    else {
      bVar2 = *(byte *)(iVar5 + 10) | 0x20;
    }
    *(byte *)(iVar5 + 10) = bVar2;
    if ((*(byte *)(iVar5 + 10) & 8) == 0) break;
    *(char *)(iVar5 + 0x4d) = (char)*(undefined4 *)(iVar4 + 4);
    bVar3 = (byte)((*(uint *)(iVar4 + 4) & 1) << 5);
    bVar2 = *(byte *)(iVar5 + 0x4a);
    cVar1 = -0x22;
LAB_0801c3ba:
    *(byte *)(iVar5 + 0x4a) = cVar1 + 1U & bVar2 | bVar3;
    break;
  case 4:
    if (*(char *)(iVar4 + 1) == '\0') {
      sub_08022F98(iVar5);
    }
    *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfe;
    break;
  case 5:
    *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) | 1;
    break;
  case 6:
    sub_0801B64C(*(undefined *)(iVar4 + 1));
    break;
  case 7:
    *piVar6 = 0;
  }
switchD_0801c2f8_caseD_8:
  return (ulonglong)in_lr << 0x20;
}

