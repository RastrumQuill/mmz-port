// sub_080625A0 at 0x080625A0 (thumb)

undefined4 sub_080625A0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0x104;
  local_14 = 0x105;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080625c0_caseD_1:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(int *)(*(char *)(param_1 + 0x71) * 4 +
                         (&DAT_08857a44)
                         [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
                 (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                         *(int *)(&DAT_08857b5c +
                                                 (uint)*(byte *)(param_1 + 0xb5) * 4)) +
                                (int)*(char *)(param_1 + 0x71)) * 0x18);
    iVar1 = 0;
    if (DAT_0202e910 == 0x10) {
      iVar1 = 4;
    }
    iVar1 = sub_08002BB4(*(undefined2 *)((int)&local_18 + iVar1));
    if (iVar1 == 0) {
LAB_080626e4:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
switchD_080625c0_caseD_8:
    return in_lr;
  case 1:
    goto switchD_080625c0_caseD_1;
  case 2:
    uVar2 = 6;
    goto LAB_0806267e;
  case 3:
  case 5:
    goto switchD_080625c0_caseD_3;
  case 4:
    uVar2 = 7;
LAB_0806267e:
    sub_08065A40(param_1,uVar2);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080625c0_caseD_3:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(int *)(*(char *)(param_1 + 0x71) * 4 +
                         (&DAT_08857a44)
                         [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
                 (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                         *(int *)(&DAT_08857b5c +
                                                 (uint)*(byte *)(param_1 + 0xb5) * 4)) +
                                (int)*(char *)(param_1 + 0x71)) * 0x18);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_080626e4;
  case 6:
    sub_08065A40(param_1,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,
                 *(int *)(*(char *)(param_1 + 0x71) * 4 +
                         (&DAT_08857a44)
                         [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
                 (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                         *(int *)(&DAT_08857b5c +
                                                 (uint)*(byte *)(param_1 + 0xb5) * 4)) +
                                (int)*(char *)(param_1 + 0x71)) * 0x18);
    if ((DAT_0202e922 & 1) == 0) {
      sub_08065AB4(param_1);
    }
  default:
    goto switchD_080625c0_caseD_8;
  }
}

