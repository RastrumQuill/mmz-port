// sub_080D28BC at 0x080D28BC (thumb)

undefined4 sub_080D28BC(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fd76 = 0x340;
    DAT_0202f776 = 7;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    iVar1 = sub_080D0554(param_1,0xb319,1);
    break;
  case 2:
    sub_080177F4(param_1);
    uVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 1;
    goto LAB_080d2938;
  case 3:
    iVar1 = sub_080D03E8(param_1,0xb319,1);
    break;
  default:
    goto switchD_080d28ce_caseD_4;
  }
  uVar2 = iVar1 << 0x10;
LAB_080d2938:
  if (uVar2 != 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
switchD_080d28ce_caseD_4:
  return in_lr;
}

