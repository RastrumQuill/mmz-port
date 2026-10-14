// sub_080441FC at 0x080441FC (thumb)

undefined4 sub_080441FC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\x01') {
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\x05') {
      *(undefined *)(param_1 + 0x12) = 6;
      *(undefined *)(param_1 + 0xf) = 2;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    iVar2 = sub_080EF150(*(undefined4 *)(param_1 + 0x5c),*(byte *)(param_1 + 0x12) + 2);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar2;
    iVar2 = sub_080EF150(*(undefined4 *)(param_1 + 0x60),*(byte *)(param_1 + 0x12) + 2);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar2;
    cVar1 = cVar1 + -2;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

