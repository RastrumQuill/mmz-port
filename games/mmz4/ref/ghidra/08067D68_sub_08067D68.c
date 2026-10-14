// sub_08067D68 at 0x08067D68 (thumb)

undefined4 sub_08067D68(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x56ec) {
      sub_0801CF00(param_1,0xa915);
      goto LAB_08067dd0;
    }
    sub_0801CF00(param_1,0xa917);
    sub_08005784(param_1 + 0x74,&DAT_08857cc0);
    cVar1 = *(char *)(param_1 + 0xe) + '\x02';
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x71) < '\x02'))
    goto LAB_08067dd6;
    sub_08005784(param_1 + 0x74,&DAT_08857cc0);
LAB_08067dd0:
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0xe) = cVar1;
LAB_08067dd6:
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

