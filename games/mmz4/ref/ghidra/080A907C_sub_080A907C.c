// sub_080A907C at 0x080A907C (thumb)

undefined4 sub_080A907C(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x9309);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(iVar3 + 0xd);
  if (cVar1 == '\x04') {
    uVar2 = 1;
  }
  else {
    if (cVar1 != '\x05') {
      return in_lr;
    }
    uVar2 = 2;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

