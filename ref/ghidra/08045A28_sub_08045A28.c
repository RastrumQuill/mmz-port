// sub_08045A28 at 0x08045A28 (thumb)

undefined4 sub_08045A28(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\f') {
    uVar2 = 0;
  }
  else {
    if (cVar1 != '\x1e') goto LAB_08045a62;
    uVar2 = 3;
  }
  *(undefined *)(iVar3 + 0x11) = uVar2;
LAB_08045a62:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_080014E8(&DAT_084e02d0,(DAT_02022fc8 - 0x300) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e02dc,(DAT_02023004 - 7) * 0x20 + 0x200);
  }
  return in_lr;
}

