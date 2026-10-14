// sub_0805F498 at 0x0805F498 (thumb)

undefined4 sub_0805F498(int param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort uVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    sub_080128D4(param_1);
    *(undefined2 *)(param_1 + 0xdc) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0x13) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar5 = (ushort *)(param_1 + 0xdc);
  uVar1 = *puVar5;
  uVar6 = uVar1 + 1;
  *puVar5 = uVar6;
  if (0x40 < uVar1) {
    if ((uVar6 & 3) == 0) {
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      uVar7 = uVar3 & 0x7fffffff;
      DAT_0202e188 = uVar7;
      iVar4 = sub_080EF330(uVar3 * 2 >> 0x11,0x60);
      local_24 = *(int *)(param_1 + 0x54) + (0x30 - iVar4) * 0x100;
      uVar3 = uVar7 * 0x343fd + 0x269ec3;
      local_20 = *(int *)(param_1 + 0x58) + (0x20 - (uVar3 * 2 >> 0x11 & 0x3f)) * 0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      sub_080B87E0(param_1,&local_24,2,uVar3 * 2 >> 0x11 & 0xff);
    }
    if ((*puVar5 & 0xf) == 0) {
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
  else if ((*puVar5 & 1) == 0) {
    sub_08012C04(param_1);
  }
  else {
    sub_08012CD0(param_1);
  }
  return in_lr;
}

