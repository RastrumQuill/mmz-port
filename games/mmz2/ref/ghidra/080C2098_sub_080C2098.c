// sub_080C2098 at 0x080C2098 (thumb)

undefined4 sub_080C2098(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_08348928);
    *(undefined *)(param_1 + 0xbe) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if ((bVar1 & 1) == 0) {
        iVar3 = *(int *)(param_1 + 0x54);
        iVar4 = -0x100;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54);
        iVar4 = 0x200;
      }
    }
    else if ((bVar1 & 1) == 0) {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar4 = 0x100;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar4 = -0x200;
    }
    *(int *)(param_1 + 0x54) = iVar3 + iVar4;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

