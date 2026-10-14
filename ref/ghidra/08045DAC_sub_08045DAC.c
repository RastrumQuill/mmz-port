// sub_08045DAC at 0x08045DAC (thumb)

undefined4 sub_08045DAC(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0xd8);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(iVar3 + 0x11) = 0;
    *(undefined *)(iVar2 + 0xd) = 1;
    *(undefined *)(iVar2 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  *(char *)(param_1 + 0xde) = *(char *)(param_1 + 0xde) + '\x01';
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

