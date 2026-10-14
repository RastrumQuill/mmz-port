// sub_08028580 at 0x08028580 (thumb)

longlong sub_08028580(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint in_lr;
  
  iVar5 = *(int *)(param_1 + 0xc);
  piVar6 = (int *)(param_1 + (uint)*(byte *)(iVar5 + 1) * 0x10 + 0x10);
  iVar4 = *piVar6;
  if (iVar4 == 0) goto switchD_080285a6_caseD_8;
  switch(*(undefined2 *)(iVar5 + 2)) {
  case 0:
    *(undefined4 *)(iVar4 + 0x54) = **(undefined4 **)(iVar5 + 4);
    *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(*(int *)(iVar5 + 4) + 4);
    break;
  case 1:
    iVar5 = *(int *)(param_1 + 0x10 + *(int *)(iVar5 + 4) * 0x10);
    if (iVar5 != 0) {
      *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
      *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
    }
    break;
  case 2:
    if (*(int *)(iVar5 + 4) == 0) {
      bVar1 = *(byte *)(iVar4 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar4 + 10) | 0x10;
    }
    *(byte *)(iVar4 + 10) = bVar1;
    if ((*(byte *)(iVar4 + 10) & 8) == 0) break;
    *(byte *)(iVar4 + 0x4c) = (byte)*(undefined4 *)(iVar5 + 4) & 1;
    bVar3 = (byte)((*(uint *)(iVar5 + 4) & 1) << 4);
    bVar1 = *(byte *)(iVar4 + 0x4a);
    bVar2 = 0xef;
    goto LAB_0802866a;
  case 3:
    if (*(int *)(iVar5 + 4) == 0) {
      bVar1 = *(byte *)(iVar4 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(iVar4 + 10) | 0x20;
    }
    *(byte *)(iVar4 + 10) = bVar1;
    if ((*(byte *)(iVar4 + 10) & 8) == 0) break;
    *(byte *)(iVar4 + 0x4d) = (byte)*(undefined4 *)(iVar5 + 4) & 1;
    bVar3 = (byte)((*(uint *)(iVar5 + 4) & 1) << 5);
    bVar1 = *(byte *)(iVar4 + 0x4a);
    bVar2 = 0xdf;
LAB_0802866a:
    *(byte *)(iVar4 + 0x4a) = bVar2 & bVar1 | bVar3;
    break;
  case 4:
    *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfe;
    break;
  case 5:
    *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) | 1;
    break;
  case 6:
    sub_08027814(*(undefined *)(iVar5 + 1));
    break;
  case 7:
    *piVar6 = 0;
  }
switchD_080285a6_caseD_8:
  return (ulonglong)in_lr << 0x20;
}

