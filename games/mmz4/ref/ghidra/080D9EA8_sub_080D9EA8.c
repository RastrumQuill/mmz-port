// sub_080D9EA8 at 0x080D9EA8 (thumb)

undefined4 sub_080D9EA8(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') ||
     (((uVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       uVar3 != 0 && ((uVar3 & 0x8000) == 0)) && (0 < *(int *)(param_1 + 0x60))))) {
    sub_080D0894(2,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(param_1 + 0x10) == '\0') {
        uVar4 = *(uint *)(param_1 + 0x74);
        iVar5 = sub_08128954(uVar4,3);
        piVar7 = (int *)(*(int *)(param_1 + 0x78) * 8 + *(int *)(&DAT_08864ec8 + iVar5 * 4));
        uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        *(uint *)(param_1 + 0x60) = piVar7[1] + (uVar6 * 2 >> 0x11 & 0x1f);
        uVar6 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar6 & 0x7fffffff;
        *(uint *)(param_1 + 0x5c) = *piVar7 - (uVar6 * 2 >> 0x11 & 0x3f);
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x74);
        iVar5 = sub_08128954(uVar4,3);
        piVar7 = (int *)(*(int *)(param_1 + 0x78) * 8 + *(int *)(&DAT_08864f34 + iVar5 * 4));
        uVar6 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        *(uint *)(param_1 + 0x60) = piVar7[1] + (uVar6 * 2 >> 0x11 & 0x1f);
        iVar5 = *piVar7;
        uVar6 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar6 & 0x7fffffff;
        uVar6 = uVar6 * 2 >> 0x11 & 0x3f;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar5 = -uVar6 - iVar5;
        }
        else {
          iVar5 = iVar5 - uVar6;
        }
        *(int *)(param_1 + 0x5c) = iVar5;
      }
      sub_0801CF00(param_1,uVar4 & 0xffff);
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    bVar2 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    iVar5 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

