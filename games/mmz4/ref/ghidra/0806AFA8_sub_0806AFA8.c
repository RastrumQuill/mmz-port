// sub_0806AFA8 at 0x0806AFA8 (thumb)

undefined4 sub_0806AFA8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      sub_0801CF00(param_1,0xaa06);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
    else {
      sub_0801CF00(param_1,0xaa08);
      uVar2 = sub_0809F10C(param_1);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0xffffffe0;
        uVar2 = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0x20;
        uVar2 = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 100) = uVar2;
      *(undefined *)(param_1 + 0x12) = 0x20;
      sub_08002B10(0x2f);
      *(undefined *)(param_1 + 0xd) = 0;
    }
    if (DAT_0202e910 == 8) {
      sub_08002B10(0xd0);
    }
    else {
      sub_08002B10(0xd1);
    }
    if (*(char *)(param_1 + 0xd8) != '\0') {
      sub_08002B5C(200);
      *(char *)(param_1 + 0xd8) = '\0';
    }
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0x12) = 0x10;
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else if (cVar1 == '\x01') {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
      local_18 = 0;
      local_14 = 0xffffde00;
      uVar2 = sub_080D2578(param_1,&local_18);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      *(undefined *)(param_1 + 0xd) = 2;
    }
  }
  else {
    if (cVar1 == '\x02') {
      if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
        return in_lr;
      }
      DAT_0202e922 = DAT_0202e922 | 2;
      *(undefined *)(param_1 + 0x12) = 0x20;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}

