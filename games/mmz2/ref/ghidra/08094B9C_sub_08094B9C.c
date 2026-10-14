// sub_08094B9C at 0x08094B9C (thumb)

undefined4 sub_08094B9C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_08342b40);
    sub_080127E4(param_1,0x9805);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    uVar2 = 0xfffffe80;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  iVar3 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb8);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (-1 < iVar3) goto LAB_08094c2a;
  }
  else if (iVar3 < 0) goto LAB_08094c2a;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (0xa000 < iVar3) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
LAB_08094c2a:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08094370(param_1,*(undefined4 *)(param_1 + 0x5c),0x100);
  return in_lr;
}

