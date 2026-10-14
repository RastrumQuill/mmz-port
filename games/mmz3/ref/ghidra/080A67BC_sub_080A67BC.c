// sub_080A67BC at 0x080A67BC (thumb)

undefined4 sub_080A67BC(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (((1 < *(byte *)(iVar2 + 0xc)) || (*(int *)(iVar2 + 0xc0) != 0)) ||
     (*(char *)(iVar2 + 0xd) == '\v')) goto LAB_080a6934;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 9;
    *(undefined *)(param_1 + 0x13) = 1;
    *(undefined *)(param_1 + 0xb5) = 0xff;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a67f0_caseD_1:
    if ((*(char *)(param_1 + 0x13) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0')) {
      uVar3 = 9 - *(byte *)(param_1 + 0x12);
      iVar2 = *(int *)(param_1 + 0x28);
      if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
        local_1c = (&DAT_0836853c)[uVar3 * 2];
        local_18 = (&DAT_08368540)[uVar3 * 2];
      }
      else {
        local_1c = (&DAT_0836853c)[(8 - uVar3) * 2];
        local_18 = (&DAT_08368540)[(8 - uVar3) * 2];
      }
      local_1c = local_1c + *(int *)(iVar2 + 0x54);
      local_18 = local_18 + *(int *)(iVar2 + 0x58);
      sub_080A5A94(param_1,&local_1c,*(byte *)(iVar2 + 10) >> 4 & 1,uVar3 & 0xff);
      *(undefined *)(param_1 + 0x13) = 1;
      if (*(char *)(param_1 + 0x12) != '\0') {
        cVar1 = *(char *)(param_1 + 0x12) + -1;
LAB_080a690a:
        *(char *)(param_1 + 0x12) = cVar1;
        if (cVar1 != '\0') {
          return in_lr;
        }
      }
LAB_080a6912:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_080a67f0_caseD_8:
    return in_lr;
  case 1:
    goto switchD_080a67f0_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (*(char *)(param_1 + 0x12) != '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      goto LAB_080a690a;
    }
    goto LAB_080a6912;
  case 4:
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0x13) = 0x20;
    *(undefined *)(param_1 + 0xb5) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if ((*(char *)(param_1 + 0x13) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    *(char *)(param_1 + 0xb5) = *(char *)(param_1 + 0xb5) + '\x01';
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 != '\0') {
      cVar1 = cVar1 + -1;
      goto LAB_080a690a;
    }
    goto LAB_080a6912;
  case 6:
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
LAB_080a6934:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  default:
    goto switchD_080a67f0_caseD_8;
  }
}

