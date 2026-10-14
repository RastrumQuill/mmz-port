// sub_08075950 at 0x08075950 (thumb)

undefined4 sub_08075950(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaf04);
    sub_08005784(param_1 + 0x74,&DAT_08859910);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 8) != 0) {
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
      iVar4 = -0x100;
    }
    else {
      iVar4 = 0x100;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x04') {
      *(undefined *)(param_1 + 0x12) = 0x10;
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      if ((*(char *)(param_1 + 0xdd) == '\0') ||
         (bVar2 = *(byte *)(param_1 + 0xdb) + 1 & 1, *(byte *)(param_1 + 0xdb) = bVar2, bVar2 == 0))
      {
        uVar3 = 9;
      }
      else {
        uVar3 = 0x16;
      }
      *(undefined *)(param_1 + 0xd) = uVar3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

