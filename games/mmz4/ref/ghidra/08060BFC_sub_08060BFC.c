// sub_08060BFC at 0x08060BFC (thumb)

undefined4 sub_08060BFC(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa514);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar4 = DAT_0202dbf0;
  if (*(char *)(param_1 + 0xf) != '\0') goto LAB_08060d06;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if (*(char *)(param_1 + 0x71) != '\x01') goto LAB_08060d06;
  bVar2 = *(byte *)(param_1 + 10);
  if ((bVar2 & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x54);
    local_18 = -0xf00;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54);
    local_18 = 0xf00;
  }
  local_18 = iVar4 + local_18;
  local_14 = *(int *)(param_1 + 0x58) + -0xc00;
  iVar5 = iVar4 - *(int *)(DAT_0202dbf0 + 0x54);
  if (iVar5 < 0) {
    if (*(int *)(DAT_0202dbf0 + 0x54) - iVar4 < 0x2000) goto LAB_08060cd0;
LAB_08060ce8:
    sub_08099B6C(&local_18,1,0,((uint)bVar2 << 0x18) >> 0x1c & 1);
  }
  else {
    if (0x1fff < iVar5) goto LAB_08060ce8;
LAB_08060cd0:
    sub_08099B6C(&local_18,1,1,((uint)bVar2 << 0x18) >> 0x1c & 1);
  }
  sub_08002B10(0x11b);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_08060d06:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x16;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

