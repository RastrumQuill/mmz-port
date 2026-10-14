// sub_0809E5A4 at 0x0809E5A4 (thumb)

undefined4 sub_0809E5A4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x54) - iVar3;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x54) + iVar3;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  if (iVar3 == 0x200) {
    sub_0801D1F4(param_1);
  }
  else if (iVar3 == 0x100) {
    sub_0801CFF0(param_1);
  }
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '!') {
    sub_0801CF00(param_1,0x6e0b);
    *(undefined *)(param_1 + 0xd) = 2;
  }
  if (*(char *)(param_1 + 0x12) == '\x10') {
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
  }
  return in_lr;
}

