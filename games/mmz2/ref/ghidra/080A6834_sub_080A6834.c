// sub_080A6834 at 0x080A6834 (thumb)

undefined4 sub_080A6834(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = '\0';
    if (*(byte *)(param_1 + 0x10) < 4) {
      if (*(int *)(param_1 + 0xbc) == 0) goto LAB_080a686e;
      sub_080A64F8(param_1,*(byte *)(param_1 + 0x10) + 1,*(byte *)(param_1 + 0x11) & 1,
                   *(byte *)(param_1 + 0x11) >> 4);
      cVar1 = *(char *)(param_1 + 0xd);
    }
    *(char *)(param_1 + 0xd) = cVar1 + '\x01';
  }
LAB_080a686e:
  piVar5 = (int *)(param_1 + 0xb4);
  *(int *)(param_1 + 0xbc) = *piVar5;
  piVar4 = (int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xc0) = *piVar4;
  *piVar5 = *(int *)(param_1 + 0x54);
  *piVar4 = *(int *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = *(int *)(iVar7 + 0xbc);
    *(int *)(param_1 + 0x54) = iVar3;
    iVar6 = *(int *)(iVar7 + 0xc0);
    *(int *)(param_1 + 0x58) = iVar6;
    if (1 < *(byte *)(iVar7 + 0xc)) {
      *(int *)(param_1 + 0x5c) = iVar3 - *piVar5;
      *(int *)(param_1 + 0x60) = iVar6 - *piVar4;
      if (*(char *)(iVar7 + 0xf) == '\0') {
        *(undefined *)(param_1 + 0xe) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
        sub_080128D4(param_1);
        *(undefined *)(param_1 + 0xf) = 1;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar2 = sub_08008CFC();
    if (sVar2 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A658C(param_1);
    }
  }
  return in_lr;
}

