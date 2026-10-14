// sub_08072D94 at 0x08072D94 (thumb)

undefined4 sub_08072D94(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_083633f0);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_08072e30;
  iVar2 = *(int *)(param_1 + 0x60) + 0x10;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x380 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x380;
  }
  sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),
                       *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60));
  if (sVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  else {
    iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (*(int *)(param_1 + 0x58) - iVar2 < 1) {
      iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54));
      iVar2 = iVar2 - *(int *)(param_1 + 0x58);
    }
    else {
      iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54));
      iVar2 = *(int *)(param_1 + 0x58) - iVar2;
    }
    if (0x6ff < iVar2) goto LAB_08072e30;
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  *(int *)(param_1 + 0x58) = iVar2;
LAB_08072e30:
  iVar2 = sub_08025794(*(undefined4 *)(param_1 + 0xbc));
  if (iVar2 != 0) {
    sub_08007390(param_1 + 0x74,&DAT_083633d8);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

