// sub_08073F30 at 0x08073F30 (thumb)

undefined4 sub_08073F30(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080A86CC(param_1,*(byte *)(param_1 + 0x11) & 1,1);
      sub_080032EC(0x3a);
    }
    else {
      sub_0801260C(param_1);
      if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
        sub_080127E4(param_1,0x1f03);
      }
      else {
        sub_080127E4(param_1,0x1f02);
      }
      bVar1 = *(byte *)(param_1 + 0x11);
      if (bVar1 < 2) {
        sub_080A86CC(param_1,bVar1 & 1,0);
      }
      else {
        sub_080A86CC(param_1,bVar1 & 1,2);
      }
    }
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 1) {
      if (0xd < *(byte *)(param_1 + 0x24)) goto LAB_08074012;
      cVar2 = *(byte *)(param_1 + 0x24) + 1;
    }
    else if (bVar1 < 2) {
      if ((bVar1 != 0) ||
         (bVar1 = *(byte *)(param_1 + 0x24) - 1, *(byte *)(param_1 + 0x24) = bVar1, 0xf3 < bVar1))
      goto LAB_08074012;
      cVar2 = -0xc;
    }
    else if (bVar1 == 2) {
      if (0xb < *(byte *)(param_1 + 0x24)) goto LAB_08074012;
      cVar2 = *(byte *)(param_1 + 0x24) + 1;
    }
    else {
      if ((bVar1 != 3) ||
         (bVar1 = *(byte *)(param_1 + 0x24) - 1, *(byte *)(param_1 + 0x24) = bVar1, 0xf1 < bVar1))
      goto LAB_08074012;
      cVar2 = -0xe;
    }
    *(char *)(param_1 + 0x24) = cVar2;
  }
LAB_08074012:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

