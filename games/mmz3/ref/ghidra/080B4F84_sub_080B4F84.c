// sub_080B4F84 at 0x080B4F84 (thumb)

undefined4 sub_080B4F84(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  if (((*(uint *)(iVar3 + 0x8c) & 0x200) != 0) || (*(short *)(iVar3 + 0xa4) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080B50F8(param_1);
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x54);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) && (*(char *)(param_1 + 0x71) < '\x02')) {
      *(undefined *)(iVar3 + 0x11c) = 1;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(int *)(param_1 + 0x58) = DAT_0202e48c;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 2) {
LAB_080b506a:
    if (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x54)) goto LAB_080b50a2;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 3) {
      if (bVar1 != 1) goto LAB_080b50a2;
      sub_08017700(param_1,0x14);
      sub_080177F4(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_080b506a;
    }
    if (bVar1 == 3) {
      sub_08017700(param_1,0x15);
      sub_080177F4(param_1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else if (bVar1 != 4) goto LAB_080b50a2;
    if (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x54)) goto LAB_080b50a2;
    cVar2 = '\x01';
  }
  *(char *)(param_1 + 0xd) = cVar2;
LAB_080b50a2:
  if ((DAT_0202e48c <
       *(int *)(iVar3 + 0x58) - (int)*(short *)(&DAT_0835b03a + (uint)*(byte *)(iVar3 + 0x147) * 8))
     || (*(int *)(iVar3 + 0x58) < DAT_0202e48c)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080B50F8(param_1);
  }
  return in_lr;
}

