// sub_080B5F7C at 0x080B5F7C (thumb)

undefined4 sub_080B5F7C(int param_1)

{
  sbyte sVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sVar1 = *(sbyte *)(param_1 + 0xb5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xd2);
    sub_0801CF00(param_1,0xb704);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (((int)(uint)*(byte *)(iVar2 + 0xcf) >> sVar1 & 1U) != 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

