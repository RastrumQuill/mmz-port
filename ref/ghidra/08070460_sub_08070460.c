// sub_08070460 at 0x08070460 (thumb)

undefined4 sub_08070460(int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc6) == '\0') {
    piVar5 = (int *)(param_1 + 0xb8);
    iVar6 = *(int *)(param_1 + 0x5c);
    cVar1 = *(char *)(param_1 + 0x12);
    if ((iVar6 <= *piVar5 + -0x8000) && (cVar1 != '@')) {
      *(char *)(param_1 + 0x12) = cVar1 + -2;
      goto LAB_08070576;
    }
    if ((*piVar5 + -0x2c00 <= iVar6) && (cVar1 != -0x40)) {
      *(char *)(param_1 + 0x12) = cVar1 + -2;
      if ((char)(cVar1 + -2) == '\0') {
        *(undefined *)(param_1 + 0x12) = 0x80;
        *(int *)(param_1 + 0x5c) = *piVar5 + 0x2c00;
        *(undefined *)(param_1 + 0xc6) = 1;
      }
      goto LAB_08070576;
    }
    if (cVar1 != '@') {
      iVar6 = iVar6 + -0x200;
      *(int *)(param_1 + 0x5c) = iVar6;
      iVar4 = *piVar5;
      iVar7 = -0x8000;
      goto LAB_0807056e;
    }
    *(int *)(param_1 + 0x5c) = iVar6 + 0x200;
    iVar4 = *piVar5 + -0x2c00;
    if (iVar6 + 0x200 < iVar4) goto LAB_08070576;
  }
  else {
    piVar5 = (int *)(param_1 + 0xb8);
    iVar6 = *(int *)(param_1 + 0x5c);
    cVar1 = *(char *)(param_1 + 0x12);
    if ((*piVar5 + 0x8000 <= iVar6) && (cVar1 != '@')) {
      *(char *)(param_1 + 0x12) = cVar1 + '\x02';
      goto LAB_08070576;
    }
    if (*piVar5 + 0x2c00 < iVar6) {
      if (cVar1 != -0x40) {
        iVar6 = iVar6 + -0x200;
        *(int *)(param_1 + 0x5c) = iVar6;
        iVar4 = *piVar5;
        iVar7 = -0x2c00;
LAB_0807056e:
        iVar4 = iVar4 + iVar7;
        if (iVar4 < iVar6) goto LAB_08070576;
        goto LAB_08070574;
      }
    }
    else if (cVar1 != -0x40) {
      *(char *)(param_1 + 0x12) = cVar1 + '\x02';
      if (cVar1 == '~') {
        *(undefined *)(param_1 + 0x12) = 0;
        *(int *)(param_1 + 0x5c) = *piVar5 + -0x2c00;
        *(undefined *)(param_1 + 0xc6) = 0;
      }
      goto LAB_08070576;
    }
    *(int *)(param_1 + 0x5c) = iVar6 + 0x200;
    iVar4 = *piVar5 + 0x8000;
    if (iVar6 + 0x200 < iVar4) goto LAB_08070576;
  }
LAB_08070574:
  *(int *)(param_1 + 0x5c) = iVar4;
LAB_08070576:
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

