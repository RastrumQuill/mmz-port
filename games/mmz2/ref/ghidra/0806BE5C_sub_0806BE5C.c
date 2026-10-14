// sub_0806BE5C at 0x0806BE5C (thumb)

undefined4 sub_0806BE5C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_0806beba;
  if (((*(byte *)(param_1 + 10) & 0x10) == 0) || (-1 < *(int *)(param_1 + 0x5c))) {
    if (*(char *)(param_1 + 0xbd) != '\0') {
      uVar4 = 0x81e;
      goto LAB_0806be9c;
    }
    sub_080127E4(param_1,0x821);
  }
  else {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      uVar4 = 0x80f;
    }
    else {
      uVar4 = 0x807;
    }
LAB_0806be9c:
    sub_080127E4(param_1,uVar4);
  }
  *(undefined *)(param_1 + 0x12) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0806beba:
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (bVar1 < 10) {
    if (*(int *)(param_1 + 0x5c) != 0) {
      if (*(int *)(param_1 + 0x5c) < 1) {
        iVar3 = *(int *)(param_1 + 0x54);
        iVar5 = -0xc00;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54);
        iVar5 = 0xc00;
      }
      sVar2 = sub_08008CFC(iVar3 + iVar5,*(undefined4 *)(param_1 + 0x58));
      if (sVar2 != 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (*(int *)(param_1 + 0x5c) >> 2);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

