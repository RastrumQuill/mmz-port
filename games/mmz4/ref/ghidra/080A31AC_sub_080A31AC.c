// sub_080A31AC at 0x080A31AC (thumb)

undefined4 sub_080A31AC(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080A2FD8(param_1);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xc0);
  if (*piVar2 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080a3218:
      if (*piVar2 != 0) goto LAB_080a321e;
    }
    else {
      iVar3 = sub_0802AD94(0x14,param_1,&DAT_0885e9b4);
      *piVar2 = iVar3;
      if (iVar3 != 0) {
        sub_08005784(param_1 + 0x74,&DAT_0885e90c + (uint)*(byte *)(param_1 + 0x11) * 0x30);
        goto LAB_080a3218;
      }
    }
  }
  else {
LAB_080a321e:
    iVar3 = sub_0802B3CC(*piVar2);
    if (iVar3 != 0) {
      sub_08005784(param_1 + 0x74,&DAT_0885e8f4 + (uint)*(byte *)(param_1 + 0x11) * 0x30);
      *piVar2 = 0;
    }
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if (*(char *)(iVar4 + 0xd4 + (uint)*(byte *)(param_1 + 0x11)) == '\0')
    goto switchD_080a3250_caseD_7;
    sub_08002B10(0x15c);
    *(undefined *)(param_1 + 0x12) = 4;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto switchD_080a3250_caseD_7;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 2:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
    *(undefined *)(param_1 + 0x12) = 8;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0x11) * 0x20000 + 0x87020000 >> 0x10);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  case 4:
    if (*(char *)(iVar4 + 0xd4 + (uint)*(byte *)(param_1 + 0x11)) != '\0')
    goto switchD_080a3250_caseD_7;
    sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0x11) * 0x20000 + 0x87010000 >> 0x10);
    *(undefined *)(param_1 + 0x12) = 4;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 5:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto switchD_080a3250_caseD_7;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    cVar1 = '\0';
    break;
  default:
    goto switchD_080a3250_caseD_7;
  }
  *(char *)(param_1 + 0xd) = cVar1;
switchD_080a3250_caseD_7:
  sub_0801CFF0(param_1);
  return in_lr;
}

