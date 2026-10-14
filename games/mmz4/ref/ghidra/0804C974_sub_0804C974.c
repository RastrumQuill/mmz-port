// sub_0804C974 at 0x0804C974 (thumb)

undefined4 sub_0804C974(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  sub_0801CFF0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = 0xfffffc00;
  }
  else {
    uVar3 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  bVar1 = *(byte *)(param_1 + 0x12);
  pbVar6 = (byte *)(param_1 + 0xbe);
  pbVar4 = (byte *)(param_1 + 0xbd);
  if (bVar1 < 0x40) {
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 == 3) {
      if (*pbVar6 < 5) {
        uVar3 = 0;
        goto LAB_0804c9f2;
      }
    }
    else if (bVar1 == 7) {
      if (*pbVar6 < 4) {
        uVar3 = 1;
LAB_0804c9f2:
        sub_0804C664(uVar5,param_1,1,uVar3);
        *pbVar4 = *pbVar4 + 1;
      }
    }
    else if ((bVar1 == 0xb) && (*pbVar6 < 3)) {
      uVar3 = 2;
      goto LAB_0804c9f2;
    }
  }
  sub_08005794(param_1 + 0x74,&DAT_08854238 + (uint)*pbVar4 * 0x30,*(undefined *)(param_1 + 0xbf),
               0xffffffff,0xffffffff,*pbVar6);
  cVar2 = sub_0804CC68(param_1);
  if (cVar2 == '\x02') {
    bVar1 = *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 2;
LAB_0804ca8e:
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[bVar1] + 8);
  }
  else {
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
      sub_080D17D8(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_08002B10(0x2b);
      cVar2 = '\x01';
    }
    if ((cVar2 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
      if (*(char *)(param_1 + 0x13) == '\0') {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x13) + -1;
    }
    else {
      if (*pbVar6 == 5) {
        bVar1 = *(byte *)(param_1 + 9);
        *(undefined4 *)(param_1 + 0xc) = 2;
        goto LAB_0804ca8e;
      }
      *pbVar6 = *pbVar6 + 1;
      cVar2 = '\b';
    }
    *(char *)(param_1 + 0x13) = cVar2;
  }
  return in_lr;
}

