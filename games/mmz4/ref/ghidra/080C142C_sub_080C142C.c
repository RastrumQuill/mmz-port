// sub_080C142C at 0x080C142C (thumb)

undefined4 sub_080C142C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xb4) = 1;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (bVar1 < 4) {
    sub_0801CF00(param_1,0x900c);
  }
  else {
    sub_0801CF00(param_1,0x900b);
  }
  sub_0801CFF0(param_1);
  if (*(char *)(iVar2 + 200) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08861d60);
  }
  else {
    sub_08005784(param_1 + 0x74,&DAT_08861d30);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

