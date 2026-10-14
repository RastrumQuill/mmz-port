// sub_080A6CDC at 0x080A6CDC (thumb)

undefined4 sub_080A6CDC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (((1 < *(byte *)(iVar4 + 0xc)) || (*(int *)(iVar4 + 0xc0) != 0)) ||
     (*(char *)(iVar4 + 0xd) == '\v')) goto LAB_080a6eda;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 9;
    *(undefined *)(param_1 + 0x13) = 4;
    if ((*(byte *)(*(int *)(param_1 + 0x28) + 10) & 0x10) == 0) {
      uVar2 = 0xe8;
    }
    else {
      uVar2 = 0x18;
    }
    *(undefined4 *)(param_1 + 0xbc) = uVar2;
    *(undefined *)(param_1 + 0xb5) = 0xff;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a6d10_caseD_1:
    if ((*(char *)(param_1 + 0x13) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0')) {
      *(undefined4 *)(param_1 + 0xb8) = 0x2400;
      iVar4 = *(int *)(param_1 + 0x28);
      puVar5 = (uint *)(param_1 + 0xbc);
      local_1c = *(int *)(iVar4 + 0x54) + ((short)(&DAT_080fe64c)[*(byte *)puVar5] * 0x2400 >> 8);
      local_18 = *(int *)(iVar4 + 0x58) +
                 (*(short *)((int)&DAT_080fe64c + ((*puVar5 + 0x40) * 0x1000000 >> 0x17)) * 0x2400
                 >> 8) + -0x1800;
      iVar4 = sub_080A5B48(param_1,&local_1c,*(byte *)(iVar4 + 10) >> 4 & 1,
                           '\t' - *(char *)(param_1 + 0x12));
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0xbc) = *puVar5;
      }
      *(undefined *)(param_1 + 0x13) = 4;
      if ((*(byte *)(*(int *)(param_1 + 0x28) + 10) & 0x10) == 0) {
        uVar3 = *puVar5 - 0x1a;
      }
      else {
        uVar3 = *puVar5 + 0x1a;
      }
      *puVar5 = uVar3 & 0xff;
switchD_080a6d10_caseD_3:
      if ((*(char *)(param_1 + 0x12) == '\0') ||
         (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0'))
      {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
switchD_080a6d10_caseD_8:
    return in_lr;
  case 1:
    goto switchD_080a6d10_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0xc;
    goto LAB_080a6e8a;
  case 3:
  case 5:
    goto switchD_080a6d10_caseD_3;
  case 4:
    sub_0800471C(0xcf);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0x13) = 0x20;
    *(undefined *)(param_1 + 0xb5) = 9;
LAB_080a6e8a:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    goto switchD_080a6d10_caseD_3;
  case 6:
    *(undefined *)(param_1 + 0x12) = 0x81;
    *(undefined *)(param_1 + 0x13) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      *(undefined *)(param_1 + 0x12) = 0xc4;
      if ((*(char *)(param_1 + 0x13) == '\0') ||
         (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0'))
      {
LAB_080a6eda:
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
      }
    }
  default:
    goto switchD_080a6d10_caseD_8;
  }
}

