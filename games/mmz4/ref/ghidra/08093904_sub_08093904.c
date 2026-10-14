// sub_08093904 at 0x08093904 (thumb)

undefined4 sub_08093904(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0x10);
  uVar2 = *(undefined *)(param_1 + 0x11);
  bVar6 = false;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885d070);
    sub_0801CF00(param_1,0x400f);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar3 = sub_08094568(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar3 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar3 = sub_08094568(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    bVar6 = iVar3 == 0;
    if ((*(char *)(param_1 + 0x13) != '\0') && (*(int *)(param_1 + 0x2c) == 0)) {
      sub_08005784(param_1 + 0x74,&DAT_0885d058);
      sub_0801CF00(param_1,0x4000);
      *(undefined *)(param_1 + 0x13) = 0;
    }
  }
  if (!bVar6) {
    sub_080947EC(param_1);
  }
  sub_0801CFF0(param_1);
  if (((*(char *)(param_1 + 0x73) == '\x03') && (*(int *)(param_1 + 0x2c) == 0)) && (!bVar6)) {
    if ((cVar1 == '\x01') &&
       (uVar5 = (uint)DAT_0202daef, uVar4 = sub_08128A24(uVar2,3),
       ((int)uVar5 >> (uVar4 & 0xff) & 1U) != 0)) {
      *(undefined *)(param_1 + 0xd) = 10;
      *(bool *)(param_1 + 0xe) = bVar6;
      *(bool *)(param_1 + 0xf) = bVar6;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

