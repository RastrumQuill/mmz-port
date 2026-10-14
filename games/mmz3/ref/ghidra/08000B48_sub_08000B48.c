// sub_08000B48 at 0x08000B48 (thumb)

undefined4 sub_08000B48(void)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar2;
  int iVar3;
  int unaff_r5;
  char *unaff_r6;
  int unaff_r7;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  int local_18;
  
  local_18 = 8;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar1 = sub_080030E8(iVar3);
    if (iVar1 == 1) {
      iVar4 = iVar4 + 1;
    }
    if (iVar1 == 0) {
      return 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < unaff_r7);
  if (iVar4 != 2) {
    return 1;
  }
  iVar3 = 0;
  iVar1 = 0;
  iVar4 = unaff_r5;
  do {
    cVar5 = iVar1 == 0;
    sub_08000E94(iVar1,iVar3);
    if (cVar5 == '\0') {
      if (*(short *)(iVar4 + extraout_r1) == 0x62) {
        *unaff_r6 = '\b';
        sub_0800100C();
        iVar3 = extraout_r1_02;
        goto LAB_08000bdc;
      }
      if (*(short *)(iVar4 + extraout_r1) != 0x60) {
        return 1;
      }
    }
    iVar4 = iVar4 + 2;
    iVar1 = iVar1 + 1;
    iVar3 = extraout_r1;
  } while (iVar1 < unaff_r7);
  iVar3 = 0x10;
  iVar2 = 0;
  iVar4 = local_18;
  iVar1 = unaff_r5;
  do {
    cVar5 = iVar2 == 0;
    sub_08000E94(iVar2,iVar3);
    if ((cVar5 == '\0') &&
       (CONCAT22(*(undefined2 *)(iVar1 + extraout_r1_00 + iVar4),
                 *(undefined2 *)(iVar1 + extraout_r1_00)) != *(int *)(unaff_r6 + 0x1c))) {
      return 1;
    }
    iVar1 = iVar1 + 2;
    iVar2 = iVar2 + 1;
    iVar3 = extraout_r1_00;
  } while (iVar2 < unaff_r7);
  iVar1 = 0;
  iVar3 = local_18;
  iVar4 = unaff_r5;
LAB_08000bdc:
  while( true ) {
    cVar5 = iVar1 == 0;
    sub_08000E94(iVar1,iVar3);
    if ((cVar5 == '\0') && (*(short *)(iVar4 + extraout_r1_01) != *(short *)(unaff_r6 + 10))) break;
    iVar4 = iVar4 + 2;
    iVar1 = iVar1 + 1;
    iVar3 = extraout_r1_01;
    if (unaff_r7 <= iVar1) {
      iVar3 = local_18;
      uVar6 = sub_08001024(unaff_r5,0x20);
      iVar4 = (int)((ulonglong)uVar6 >> 0x20);
      *(uint *)(unaff_r6 + 0x20) =
           CONCAT22(*(undefined2 *)((int)uVar6 + iVar4 + iVar3),*(undefined2 *)((int)uVar6 + iVar4))
      ;
      uVar6 = sub_08001024(unaff_r5,0x30);
      iVar3 = (int)((ulonglong)uVar6 >> 0x20);
      *(uint *)(unaff_r6 + 0x40) =
           CONCAT22(*(undefined2 *)((int)uVar6 + iVar3 + local_18),
                    *(undefined2 *)((int)uVar6 + iVar3));
      cVar5 = unaff_r6[1];
      unaff_r6[1] = cVar5 + '\x04';
      *unaff_r6 = cVar5 + '\x04';
      *(undefined2 *)(unaff_r6 + 0xe) = 2;
      *(undefined2 *)(unaff_r6 + 0x1c) = 0;
      *(undefined4 *)(unaff_r6 + 0x30) = 0;
      return 0;
    }
  }
  return 2;
}

