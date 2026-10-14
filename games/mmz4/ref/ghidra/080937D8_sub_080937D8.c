// sub_080937D8 at 0x080937D8 (thumb)

undefined4 sub_080937D8(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  cVar2 = *(char *)(param_1 + 0x10);
  uVar3 = *(undefined *)(param_1 + 0x11);
  uVar7 = (uint)*(byte *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885d058);
    sub_0801CF00(param_1,0x400f);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    bVar1 = *(int *)(DAT_0202dbf0 + 0x54) <= *(int *)(param_1 + 0x54);
    uVar7 = (uint)bVar1;
    *(uint *)(param_1 + 0x5c) = (uVar7 * 2 + -1) * 0x80;
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(bool *)(param_1 + 0x13) = bVar1;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_080947EC(param_1);
  iVar5 = *(int *)(param_1 + 0x5c) * 3 >> 2;
  *(int *)(param_1 + 0x5c) = iVar5;
  iVar5 = *(int *)(param_1 + 0x54) + iVar5;
  if (uVar7 == 0) {
    iVar4 = sub_080945E0(param_1,iVar5);
    if (iVar4 != 0) {
      sub_080948C8(param_1,iVar5);
      goto LAB_08093898;
    }
  }
  else {
    iVar4 = sub_080946E8(param_1,iVar5);
    if (iVar4 != 0) {
      sub_08094A18(param_1,iVar5);
      goto LAB_08093898;
    }
  }
  *(int *)(param_1 + 0x54) = iVar5;
LAB_08093898:
  iVar5 = sub_08094568(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar5 != 0) {
    sub_080947EC(param_1);
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    if ((cVar2 == '\x01') &&
       (uVar6 = (uint)DAT_0202daef, uVar7 = sub_08128A24(uVar3,3),
       ((int)uVar6 >> (uVar7 & 0xff) & 1U) != 0)) {
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

