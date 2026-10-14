// sub_0810BDDC at 0x0810BDDC (thumb)

undefined4 sub_0810BDDC(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    puVar5 = (ushort *)(param_1 + 0x74);
    uVar1 = *puVar5;
    if ((uVar1 & 1) == 0) {
      if (*(char *)(param_1 + 0x11) == *(char *)(*(int *)(param_1 + 0x28) + 0xdce)) {
        *puVar5 = uVar1 + 1;
        sub_0801CF00(param_1,*puVar5);
      }
    }
    else if (*(char *)(param_1 + 0x11) != *(char *)(*(int *)(param_1 + 0x28) + 0xdce)) {
      *puVar5 = uVar1 - 1;
      sub_0801CF00(param_1,*puVar5);
    }
    cVar2 = *(char *)(*(int *)(param_1 + 0x28) + 0xdd1);
    if (cVar2 != '\x01') {
      if (cVar2 == '\x02') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 8);
        sub_0810BB48(param_1);
        return in_lr;
      }
      goto switchD_0810bdf4_caseD_5;
    }
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    goto LAB_0810bf70;
  case 1:
    *(undefined2 *)(param_1 + 0x76) = 0x100;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0810bdf4_caseD_2:
    psVar4 = (short *)(param_1 + 0x76);
    *psVar4 = *psVar4 + -0x20;
    if ((*(short *)(param_1 + 0x74) + 0x9a00U & 0xf) < 8) {
      iVar3 = 0x200;
    }
    else {
      iVar3 = -0x200;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    *(short *)(param_1 + 0x50) = *psVar4;
    if (*psVar4 == 0) {
      cVar2 = *(char *)(param_1 + 0xd) + '\x01';
LAB_0810bf70:
      *(char *)(param_1 + 0xd) = cVar2;
    }
switchD_0810bdf4_caseD_5:
    sub_0801CFF0(param_1);
    return in_lr;
  case 2:
    goto switchD_0810bdf4_caseD_2;
  case 3:
    *(byte *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + 1U & 1;
    puVar5 = (ushort *)(param_1 + 0x74);
    *puVar5 = (*puVar5 & 1) +
              *(short *)(&DAT_08869a1c +
                        (uint)*(byte *)(param_1 + 0x10) * 2 + (uint)*(byte *)(param_1 + 0x11) * 4);
    sub_0801CF00(param_1,*puVar5);
    *(undefined2 *)(param_1 + 0x76) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    psVar4 = (short *)(param_1 + 0x76);
    *psVar4 = *psVar4 + 0x20;
    if ((*(short *)(param_1 + 0x74) + 0x9a00U & 0xf) < 8) {
      iVar3 = -0x200;
    }
    else {
      iVar3 = 0x200;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    *(short *)(param_1 + 0x50) = *psVar4;
    if (*psVar4 != 0x100) goto switchD_0810bdf4_caseD_5;
    cVar2 = '\0';
    goto LAB_0810bf70;
  default:
    goto switchD_0810bdf4_caseD_5;
  }
}

