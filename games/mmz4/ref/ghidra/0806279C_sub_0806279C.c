// sub_0806279C at 0x0806279C (thumb)

undefined4 sub_0806279C(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  undefined auStack_38 [4];
  undefined auStack_34 [4];
  undefined auStack_30 [4];
  undefined *local_2c [2];
  int local_24;
  int local_20;
  
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x10a);
    sub_08065A40(param_1,2);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  piVar5 = (int *)(param_1 + 0xbc);
  if ((*(char *)(param_1 + 0x13) == '\0') && (*(char *)(param_1 + 0x73) == '\x04')) {
    sub_08128B5C(auStack_38,&DAT_08129104,2);
    sub_08128B5C(auStack_34,&DAT_08129106,2);
    sub_08128B5C(auStack_30,&DAT_08129108,2);
    local_2c[0] = auStack_34;
    local_2c[1] = auStack_30;
    uVar2 = sub_08066308(local_2c[0x7ffe < (*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)
                                           ) + 0x3fffU],2);
    local_24 = *(int *)(param_1 + 0x54) + (uVar4 * 2 + -1) * 0x3200;
    local_20 = *(int *)(param_1 + 0x58) + -0x600;
    iVar3 = sub_0809AC24(param_1,&local_24,auStack_38[uVar2 & 0xff],uVar4);
    *piVar5 = iVar3;
    *(undefined *)(param_1 + 0x13) = 1;
  }
  if ((*piVar5 != 0) && ((*(uint *)(*piVar5 + 0x8c) & 0x800) != 0)) {
    *piVar5 = 0;
  }
  if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x13) != '\0')) {
    if (*piVar5 == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined *)(param_1 + 0xe) = uVar1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

