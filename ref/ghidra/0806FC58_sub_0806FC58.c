// sub_0806FC58 at 0x0806FC58 (thumb)

undefined4 sub_0806FC58(int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xc5) & 1) != 0) {
    if (*(int *)(param_1 + 0x4c) <= *(int *)(param_1 + 0xb8)) {
      *(undefined *)(param_1 + 0xc6) = 0;
      *(undefined *)(param_1 + 0xd) = 6;
      sub_08070460(param_1);
      return in_lr;
    }
    *(undefined *)(param_1 + 0xc6) = 1;
    *(undefined *)(param_1 + 0xd) = 5;
    sub_080702D8(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080489E4(param_1);
    sub_080033F0(param_1 + 0x6c,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  piVar6 = (int *)(param_1 + 0xb8);
  iVar5 = *(int *)(param_1 + 0x5c);
  cVar1 = *(char *)(param_1 + 0x12);
  if (((*piVar6 - iVar5 < 0x8000) || (cVar1 == '@')) &&
     ((iVar5 - *piVar6 < 0x8000 || (cVar1 == -0x40)))) {
    if (cVar1 == '@') {
      *(int *)(param_1 + 0x5c) = iVar5 + 0x200;
      iVar4 = *piVar6 + 0x8000;
      if (iVar5 + 0x200 < iVar4) goto LAB_0806fd28;
    }
    else {
      *(int *)(param_1 + 0x5c) = iVar5 + -0x200;
      iVar4 = *piVar6 + -0x8000;
      if (iVar4 < iVar5 + -0x200) goto LAB_0806fd28;
    }
    *(int *)(param_1 + 0x5c) = iVar4;
  }
  else {
    *(char *)(param_1 + 0x12) = cVar1 + -2;
  }
LAB_0806fd28:
  sub_0806F5C4(param_1);
  sub_0806F588(param_1);
  bVar2 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar2;
  if (bVar2) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

