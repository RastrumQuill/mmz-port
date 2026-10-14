// sub_0804D89C at 0x0804D89C (thumb)

undefined4 sub_0804D89C(int param_1)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x3107);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      DAT_0202e03c = 2;
    }
    else {
      DAT_0202e03c = 3;
    }
    sub_08003338((int)*(short *)(param_1 + 0xd6));
    *(short *)(param_1 + 0xd6) = -1;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    *(undefined2 *)(param_1 + 0xd4) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0x13) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar6 = (ushort *)(param_1 + 0xd4);
  uVar1 = *puVar6;
  uVar7 = uVar1 + 1;
  *puVar6 = uVar7;
  if (0x40 < uVar1) {
    if ((uVar7 & 3) == 0) {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      uVar8 = uVar4 & 0x7fffffff;
      DAT_0202e188 = uVar8;
      iVar5 = sub_080EF330(uVar4 * 2 >> 0x11,0x60);
      local_24 = *(int *)(param_1 + 0x54) + (0x30 - iVar5) * 0x100;
      uVar4 = uVar8 * 0x343fd + 0x269ec3;
      local_20 = *(int *)(param_1 + 0x58) + ((uVar4 * 2 >> 0x11 & 0x1f) + 0x10) * -0x100;
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      sub_080B87E0(param_1,&local_24,2,uVar4 * 2 >> 0x11 & 0xff);
    }
    if ((*puVar6 & 0xf) == 0) {
      sub_080032EC(0x35);
    }
  }
  sVar3 = sub_080EF330(*puVar6,10);
  if (sVar3 == 0) {
    sub_080B5244(param_1,2,0);
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
  else if ((*puVar6 & 1) == 0) {
    sub_08012C04(param_1);
  }
  else {
    sub_08012CD0(param_1);
  }
  return in_lr;
}

