// sub_0807553C at 0x0807553C (thumb)

undefined4 sub_0807553C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar5 & 0x7fffffff;
    uVar5 = uVar5 * 2 >> 0x11 & 0x1f;
    sub_0801CF00(param_1,0xaf02);
    sub_08002B10(0xdd);
    if (uVar5 < 0xc) {
      uVar2 = 2;
    }
    else if (uVar5 < 0x18) {
      uVar2 = 3;
    }
    else {
      uVar2 = 4;
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
    *(undefined *)(param_1 + 0xde) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    pcVar7 = (char *)(param_1 + 0x71);
    if (*(char *)(param_1 + 0x72) < '\x02') {
      bVar1 = *(byte *)(param_1 + 10);
      if ((bVar1 & 0x10) == 0) {
        iVar6 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_08859b8c + *pcVar7 * 4);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x54) - *(int *)(&DAT_08859b8c + *pcVar7 * 4);
      }
      *(int *)(param_1 + 0x54) = iVar6;
      if ((*pcVar7 == '\a') &&
         (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == -1)) {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      if ((*pcVar7 == '\x03') || (*pcVar7 == '\a')) {
        if ((bVar1 & 0x10) == 0) {
          sVar4 = sub_08007C7C(*(int *)(param_1 + 0x54) + -0x1400,*(undefined4 *)(param_1 + 0x58));
          if (sVar4 != 0) {
            *(undefined *)(param_1 + 0xd) = 3;
            *(byte *)(param_1 + 0xe) = bVar1 & 0x10;
            return in_lr;
          }
        }
        else {
          sVar4 = sub_08007C7C(*(int *)(param_1 + 0x54) + 0x1400,*(undefined4 *)(param_1 + 0x58));
          if (sVar4 != 0) {
            *(undefined *)(param_1 + 0xd) = 3;
            *(undefined *)(param_1 + 0xe) = 0;
            return in_lr;
          }
        }
      }
    }
  }
  sub_0801CFF0(param_1);
  if (((*(char *)(param_1 + 0x71) == '\x03') || (*(char *)(param_1 + 0x71) == '\a')) &&
     (*(char *)(param_1 + 0x72) == '\x01')) {
    sub_08002B10(0xde);
  }
  return in_lr;
}

