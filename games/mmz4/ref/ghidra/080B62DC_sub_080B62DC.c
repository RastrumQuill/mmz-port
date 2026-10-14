// sub_080B62DC at 0x080B62DC (thumb)

undefined4 sub_080B62DC(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  byte abStack_24 [4];
  undefined4 local_20 [2];
  
  local_20[0] = 0xb300;
  local_20[1] = 0xb306;
  sub_08128B5C(abStack_24,&DAT_0812976c,2);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0886066c);
    sub_0801CF00(param_1,*(undefined2 *)(local_20 + bVar1));
    *(uint *)(param_1 + 100) = (uint)bVar2 * 0x10 + 0x40;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') && ('\x02' < *(char *)(param_1 + 0x71))) {
    sub_08005784(param_1 + 0x74,&DAT_0886066c + (uint)abStack_24[bVar1] * 0x18);
    *(undefined *)(param_1 + 0x12) = 1;
  }
  iVar3 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar3;
  if (iVar3 == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

