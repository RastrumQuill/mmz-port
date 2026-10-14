// sub_080F39E4 at 0x080F39E4 (thumb)

undefined4 sub_080F39E4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (((int)(uint)DAT_0202dad5 >> (uint)*(byte *)(param_1 + 0x11) & 1U) != 0)) {
    sub_0801CF00(param_1,CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) + 1
                );
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if (DAT_0202dad4 != '@') goto LAB_080f3a9e;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_080f3a5c:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto LAB_080f3a9e;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080f3a9e;
      *(undefined *)(param_1 + 0x12) = 0x1f;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_080f3a5c;
    }
    if (bVar1 != 2) goto LAB_080f3a9e;
    if (*(int *)(param_1 + 0x60) < 0x300) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x10;
    }
    iVar4 = *(int *)(param_1 + 0x58) + (*(uint *)(param_1 + 0x60) & 0xff00);
    *(int *)(param_1 + 0x58) = iVar4;
    iVar3 = *(int *)(param_1 + 0x5c) + 0x1e000;
    if (iVar4 <= iVar3) goto LAB_080f3a9e;
    *(int *)(param_1 + 0x58) = iVar3;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080f3a9e:
  if (0x179000 < *(int *)(DAT_0202dbf0 + 0x54)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080F390C(param_1);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

