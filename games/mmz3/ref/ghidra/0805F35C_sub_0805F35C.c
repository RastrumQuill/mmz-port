// sub_0805F35C at 0x0805F35C (thumb)

undefined4 sub_0805F35C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0806082C(param_1,*(undefined4 *)(param_1 + 0x5c));
  iVar2 = *(int *)(param_1 + 0x5c) * 0xe6;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08060768(param_1,0x12);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

