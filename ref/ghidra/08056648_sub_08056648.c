// sub_08056648 at 0x08056648 (thumb)

undefined4 sub_08056648(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0805665a_caseD_1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
LAB_080566de:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_0805665a_caseD_5:
    return in_lr;
  case 1:
    goto switchD_0805665a_caseD_1;
  case 2:
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (cVar1 == '\0') {
      return in_lr;
    }
    sub_0808827C(2,param_1 + 0x4c);
    sub_08001EAC(2);
    goto LAB_080566de;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if ((*(uint *)(*(int *)(param_1 + 0x20) + 0xbc) & 0x400) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  default:
    goto switchD_0805665a_caseD_5;
  }
}

