// sub_08063B0C at 0x08063B0C (thumb)

undefined4 sub_08063B0C(int param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  ushort *puVar4;
  ushort uVar5;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x2200);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0x13) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  puVar4 = (ushort *)(param_1 + 0xc0);
  uVar1 = *puVar4;
  uVar5 = uVar1 + 1;
  *puVar4 = uVar5;
  if (0x40 < uVar1) {
    if ((uVar5 & 3) == 0) {
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      local_20 = *(int *)(param_1 + 0x54) + (0x20 - (uVar3 * 2 >> 0x11 & 0x3f)) * 0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      local_1c = *(int *)(param_1 + 0x58) + ((uVar3 * 2 >> 0x11 & 0x3f) + 0x20) * -0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      sub_080B87E0(param_1,&local_20,2,uVar3 * 2 >> 0x11 & 0xff);
    }
    if ((*puVar4 & 0xf) == 0) {
      sub_080032EC(0x35);
    }
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == -1) {
      sub_08012CD0(param_1);
      cVar2 = *(char *)(param_1 + 0x12);
      *(char *)(param_1 + 0x12) = cVar2 + -1;
      if (cVar2 == '\0') {
        DAT_0202ec42 = DAT_0202ec42 | 2;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x12) >> 1;
    }
    else {
      sub_08012C04(param_1);
    }
  }
  else if ((*puVar4 & 1) == 0) {
    sub_08012C04(param_1);
  }
  else {
    sub_08012CD0(param_1);
  }
  return in_lr;
}

