// sub_08070D68 at 0x08070D68 (thumb)

undefined4 sub_08070D68(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836326c);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_08070dd4;
  iVar2 = *(int *)(param_1 + 0x60) + 0x10;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),
                       *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) + 0x1000);
  if (sVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x60);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar3 = -0x1000;
  }
  *(int *)(param_1 + 0x58) = iVar2 + iVar3;
LAB_08070dd4:
  iVar2 = sub_08025794(*(undefined4 *)(param_1 + 0xc0));
  if (iVar2 != 0) {
    sub_08007390(param_1 + 0x74,&DAT_0836320c);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

