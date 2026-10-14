// sub_080A7978 at 0x080A7978 (thumb)

undefined4 sub_080A7978(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0x13) = 3;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') && (iVar2 = sub_08005428(DAT_02023118), iVar2 != 0)) {
    *(undefined *)(iVar2 + 9) = 0x20;
    *(undefined4 *)(iVar2 + 0x14) = 0x80a73d1;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_020231b0;
    *(undefined *)(iVar2 + 0x1e) = DAT_02023140;
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined *)(iVar2 + 0x10) = 2;
    *(undefined4 *)(iVar2 + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
    iVar3 = *(int *)(param_1 + 0x24);
    *(int *)(iVar2 + 0x20) = param_1;
    *(int *)(iVar2 + 0x24) = iVar3;
    *(int *)(iVar3 + 0x20) = iVar2;
    *(int *)(param_1 + 0x24) = iVar2;
    *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 2;
    }
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  sub_0809C980(param_1);
  return in_lr;
}

