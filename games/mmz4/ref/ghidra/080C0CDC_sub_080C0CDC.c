// sub_080C0CDC at 0x080C0CDC (thumb)

undefined4 sub_080C0CDC(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08861cd8);
    *(undefined *)(param_1 + 0xb4) = 1;
    sub_0801CF00(param_1,0x3a02);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0xb6) == '\0') && (*(byte *)(iVar2 + 0xc) < 2)) {
    if (*(char *)(param_1 + 0xb5) == '\0') {
      return in_lr;
    }
    uVar1 = 3;
  }
  else {
    uVar1 = 4;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

