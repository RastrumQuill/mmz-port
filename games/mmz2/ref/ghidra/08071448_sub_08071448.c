// sub_08071448 at 0x08071448 (thumb)

undefined4 sub_08071448(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 in_lr;
  
  iVar4 = DAT_0202e130;
  iVar2 = *(int *)(param_1 + 0x2c);
  if (DAT_0202e130 != 0) {
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
      iVar3 = sub_0801F090(DAT_0202e130);
      iVar5 = 0x100;
    }
    else {
      iVar3 = sub_0801F0B0(DAT_0202e130);
      iVar5 = -0x100;
    }
    iVar4 = sub_0801F0D0(iVar4);
    bVar6 = false;
    if ((((iVar3 + iVar5) - *(int *)(param_1 + 0x54)) + 0x1000U < 0x2001) &&
       (*(int *)(param_1 + 0x58) + -0x800 < iVar4 + 0x100)) {
      bVar6 = true;
    }
    if (*(char *)(param_1 + 0xb6) == '\0') {
      if (*(char *)(param_1 + 0xd) != '\x01') {
        return in_lr;
      }
      if (!bVar6) {
        return in_lr;
      }
      sub_08006E08(param_1 + 0x74,&DAT_0833ed34);
      if (iVar2 == 0) {
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      }
      else {
        *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xf7;
      }
      cVar1 = '\x01';
    }
    else {
      if ((*(char *)(param_1 + 0xd) == '\x01') && (bVar6)) {
        if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
          return in_lr;
        }
        sub_0807169C(param_1);
        *(undefined *)(param_1 + 0x12) = 0;
        *(uint *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined *)(param_1 + 0xd) = 2;
        return in_lr;
      }
      sub_08006E08(param_1 + 0x74,&DAT_0833ed04);
      if (iVar2 == 0) {
        sub_080713C4(param_1,1,*(undefined *)(param_1 + 0xb4));
      }
      else {
        sub_080713C4(iVar2,2,*(undefined *)(iVar2 + 0xb4));
      }
      cVar1 = '\0';
    }
    *(char *)(param_1 + 0xb6) = cVar1;
  }
  return in_lr;
}

