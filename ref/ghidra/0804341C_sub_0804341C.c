// sub_0804341C at 0x0804341C (thumb)

undefined4 sub_0804341C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  cVar2 = sub_08042DE4();
  if (cVar2 != '\0') {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08001EAC(0x12);
        *(undefined4 *)(param_1 + 0x54) = 0;
        iVar3 = sub_0804246C(param_1);
        iVar4 = -*(int *)(&DAT_082ae80c + ((uint)(iVar3 << 0x18) >> 0x16));
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          iVar4 = *(int *)(&DAT_082ae80c + ((uint)(iVar3 << 0x18) >> 0x16));
        }
        *(int *)(param_1 + 0x5c) = iVar4;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      iVar4 = sub_0804246C(param_1);
      iVar4 = *(int *)(&DAT_082ae818 + ((uint)(iVar4 << 0x18) >> 0x16));
      if (iVar4 < *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x54) = iVar4;
      }
      if (*(int *)(param_1 + 0x54) + iVar4 < 0 != SBORROW4(*(int *)(param_1 + 0x54),-iVar4)) {
        *(int *)(param_1 + 0x54) = -iVar4;
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      uVar5 = sub_080426A0(param_1);
      if ((uVar5 & 2) != 0) {
        sub_0801412C(8,param_1 + 0x4c);
        sub_08001EAC(0x83);
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080297C0(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082ae594);
    sub_08029778(param_1,10);
    *(undefined *)(param_1 + 0x12) = 0x23;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080297C0(param_1);
  return in_lr;
}

