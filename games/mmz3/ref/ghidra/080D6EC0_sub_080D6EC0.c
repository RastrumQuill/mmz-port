// sub_080D6EC0 at 0x080D6EC0 (thumb)

undefined4 sub_080D6EC0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_0800393C(&DAT_085d83e8,(DAT_0202fb28 - 0x290) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d83f4,(DAT_0202f928 - 6) * 0x20 + 0x200);
    sub_08017700(param_1,0x8c07);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    iVar3 = DAT_020302c0 + 0x87ff;
    *(int *)(param_1 + 0x54) = iVar3;
    uVar2 = sub_0800A104(iVar3,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d6ed4_caseD_1:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x54) + -0x100;
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 < *(int *)(param_1 + 100)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
      sub_08017700(param_1,0x8c05);
LAB_080d6fc0:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_080d6ed4_caseD_4:
    return in_lr;
  case 1:
    goto switchD_080d6ed4_caseD_1;
  case 2:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    sVar1 = sub_080D03E8(param_1,0x8c05,0);
    if (sVar1 == 0) {
      return in_lr;
    }
    goto LAB_080d6fc0;
  default:
    goto switchD_080d6ed4_caseD_4;
  }
}

