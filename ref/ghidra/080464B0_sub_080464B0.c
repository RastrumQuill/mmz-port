// sub_080464B0 at 0x080464B0 (thumb)

undefined4 sub_080464B0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0xd8);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08001EAC(0xe0);
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x13') {
    *(undefined *)(iVar3 + 0x11) = 2;
    *(undefined *)(iVar2 + 0xd) = 2;
    *(undefined *)(iVar2 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x16;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

