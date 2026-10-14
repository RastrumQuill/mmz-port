// sub_08055F24 at 0x08055F24 (thumb)

undefined4 sub_08055F24(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa62b);
    sub_08006E08(param_1 + 0x74,&DAT_0833c318);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + -0x1400;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  sub_08015518(1,param_1 + 0x54);
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (int)*(char *)(param_1 + 0xd8) * *(int *)(param_1 + 0x5c);
    piVar5 = (int *)(param_1 + 0xdc);
    *piVar5 = *piVar5 + *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x5c) + 10;
    *(int *)(param_1 + 0x5c) = iVar2;
    if (0x600 < iVar2) {
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
    }
    if (*(int *)(param_1 + 0xe0) + 0x1000 <= *piVar5) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_2c = *(int *)(param_1 + 0x54) + 0x1400;
      }
      else {
        local_2c = *(int *)(param_1 + 0x54) + -0x1400;
      }
      local_28 = *(int *)(param_1 + 0x58) + 0x1400;
      sub_080AC60C(3,&local_2c);
      *(int *)(param_1 + 0xe0) = *piVar5;
    }
    if (*(char *)(param_1 + 0xd8) < '\0') {
      if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0x54) + -0x1400) goto LAB_0805619c;
      iVar2 = *(int *)(param_1 + 0xb8) + 0x1400;
    }
    else {
      if (*(int *)(param_1 + 0x54) + 0x1400 < *(int *)(param_1 + 0xb8) + 0xcfff) goto LAB_0805619c;
      iVar2 = *(int *)(param_1 + 0xb8) + 0xbbff;
    }
    *(int *)(param_1 + 0x54) = iVar2;
    uVar4 = (uint)*(byte *)(param_1 + 0xda);
    if (uVar4 != 0) {
      uVar4 = *(uint *)(param_1 + 0x5c);
    }
    *(uint *)(param_1 + 0x60) = uVar4;
    *(undefined *)(param_1 + 0xd9) = 0xff;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + (int)*(char *)(param_1 + 0xd9) * *(int *)(param_1 + 0x60);
    piVar5 = (int *)(param_1 + 0xdc);
    *piVar5 = *piVar5 + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + 10;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x600 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x600;
    }
    if (*(int *)(param_1 + 0xe0) + 0x1000 <= *piVar5) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_2c = *(int *)(param_1 + 0x54) + -0x1400;
      }
      else {
        local_2c = *(int *)(param_1 + 0x54) + 0x1400;
      }
      local_28 = *(int *)(param_1 + 0x58) + 0x1400;
      sub_080AC60C(3,&local_2c);
      *(int *)(param_1 + 0xe0) = *piVar5;
    }
    uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (0x4000 < uVar4) {
      cVar1 = sub_08057A70(param_1);
      if (cVar1 != '\0') {
        sub_080032EC(0xec);
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        uVar4 = (uVar4 * 2 >> 0x11 & 3) + 5;
        if (uVar4 != 0) {
          do {
            uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
            local_24 = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 0x3f) - 0x1f) * 0x100;
            uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
            DAT_0202e188 = uVar3 & 0x7fffffff;
            local_20 = *(int *)(param_1 + 0xbc) + (uVar3 * 2 >> 0x11 & 0xf) * 0x100 + -0x7f00;
            sub_080B61B4(param_1,&local_24,1,0);
            uVar4 = uVar4 - 1 & 0xff;
          } while (uVar4 != 0);
        }
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
  }
LAB_0805619c:
  iVar2 = *(int *)(param_1 + 0xdc) * 0x170;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(byte *)(param_1 + 0x24) = ~(byte)((uint)iVar2 >> 0x10);
  uVar4 = (iVar2 >> 0x10) << 0x19;
  if (uVar4 >> 0x18 < (uint)*(byte *)(param_1 + 0x12)) {
    sub_080032EC(0x3c);
  }
  *(char *)(param_1 + 0x12) = (char)(uVar4 >> 0x18);
  return in_lr;
}

