// sub_08064ADC at 0x08064ADC (thumb)

undefined4 sub_08064ADC(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_38[0] = 0x180;
  local_38[1] = 0x1c0;
  local_38[2] = 0x200;
  local_38[3] = 0x18;
  uStack_28 = 0x1c;
  uStack_24 = 0x20;
  iVar4 = sub_0806610C(param_1,&stack0xffffffe0);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08065A40(param_1,0);
    bVar1 = *(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xd4) + 0x8800;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(uint *)(param_1 + 0x68) = ((uint)bVar1 * 2 + -1) * local_38[iVar4 + 3];
    *(int *)(param_1 + 0xdc) = local_38[iVar4];
    *(bool *)(param_1 + 0x13) = bVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar2 = *(byte *)(param_1 + 0x13);
  iVar7 = (uint)bVar2 * 2 + -1;
  iVar4 = *(int *)(param_1 + 0xd4) + iVar7 * 0x1800 + 0x8800;
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  pcVar5 = (char *)(param_1 + 0xe0);
  if (*pcVar5 != '\0') {
    *pcVar5 = *pcVar5 + -1;
  }
  iVar8 = *(int *)(param_1 + 0x60);
  iVar3 = -*(int *)(param_1 + 0x68);
  iVar6 = FUN_081288bc(-iVar8,iVar3);
  if (-1 < ((*(int *)(param_1 + 0x58) + ((iVar8 * 2 + iVar3 * iVar6) * (iVar6 + 1) >> 1)) - iVar4) *
           iVar7) {
    *(int *)(param_1 + 0x68) = iVar3;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
  iVar8 = iVar8 + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar8;
  if (iVar8 < 0) {
    iVar7 = -*(int *)(param_1 + 0xdc);
    if (iVar8 + *(int *)(param_1 + 0xdc) < 0 == SBORROW4(iVar8,iVar7)) goto LAB_08064c44;
  }
  else if ((iVar8 < 1) || (iVar7 = *(int *)(param_1 + 0xdc), iVar8 <= iVar7)) goto LAB_08064c44;
  *(int *)(param_1 + 0x60) = iVar7;
LAB_08064c44:
  if (-1 < (int)(((uint)bVar2 * 2 + -1) * (*(int *)(param_1 + 0x58) - iVar4))) {
    *(int *)(param_1 + 0x58) = iVar4;
    *(byte *)(param_1 + 0x13) = bVar2 + 1 & 1;
  }
  if (*pcVar5 == '\0') {
    sub_08065AB4(param_1);
  }
  return in_lr;
}

