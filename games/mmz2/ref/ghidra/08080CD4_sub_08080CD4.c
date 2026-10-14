// sub_08080CD4 at 0x08080CD4 (thumb)

undefined4 sub_08080CD4(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar7 = *(int *)(param_1 + 0x28);
    if ((iVar7 == 0) || (1 < *(byte *)(iVar7 + 0xc))) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08340cb4 + (uint)*(byte *)(param_1 + 0x11) * 4));
    *(undefined2 *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0xb6) = *(undefined *)(param_1 + 0x10);
    *(undefined *)(param_1 + 0xb7) = 0;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar7 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar7 + 0x58);
    *(undefined *)(param_1 + 0x12) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar7 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58);
  puVar5 = (ushort *)(param_1 + 0xb4);
  uVar1 = *puVar5;
  *puVar5 = uVar1 + 0x40;
  if (0x2000 < (ushort)(uVar1 + 0x40)) {
    *puVar5 = 0x2000;
  }
  pbVar6 = (byte *)(param_1 + 0xb6);
  *pbVar6 = *pbVar6 + 2;
  pbVar8 = (byte *)(param_1 + 0xb7);
  *pbVar8 = *pbVar8 + 2;
  iVar4 = (int)(short)(&DAT_080ef450)[*pbVar6] * (uint)*puVar5;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar9 = *(int *)(param_1 + 0x68) + (iVar4 >> 8);
  *(int *)(param_1 + 0x58) = iVar9;
  iVar4 = (uint)*puVar5 * (int)(short)(&DAT_080ef450)[*pbVar6 + 0x40 & 0xff];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar4 = *(int *)(param_1 + 100) + (iVar4 >> 8);
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 0x5c) = iVar4 - iVar7;
  *(int *)(param_1 + 0x60) = iVar9 - iVar3;
  if (((*pbVar8 & 0x7f) == 0) &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

