// sub_08041A84 at 0x08041A84 (thumb)

undefined4 sub_08041A84(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0xf;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xfffffe00;
    }
    else {
      uVar2 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar6;
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 3) == 0) {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    uVar7 = uVar3 & 0x7fffffff;
    DAT_0202e188 = uVar7;
    iVar4 = sub_080EF330(uVar3 * 2 >> 0x11,0x60);
    local_24 = iVar6 + (0x30 - iVar4) * 0x100;
    uVar3 = uVar7 * 0x343fd + 0x269ec3;
    local_20 = (0x20 - (uVar3 * 2 >> 0x11 & 0x3f)) * 0x100 + iVar5;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    sub_080B87E0(param_1,&local_24,2,uVar3 * 2 >> 0x11 & 0xff);
  }
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_080032EC(0x35);
  }
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    sub_08012C04(param_1);
  }
  else {
    sub_08012CD0(param_1);
  }
  if (*(int *)(param_1 + 0xb8) + 0x10000 < *(int *)(param_1 + 0x58)) {
    *(undefined *)(param_1 + 0xd5) = 1;
    DAT_0202ec42 = DAT_0202ec42 | 2;
  }
  return in_lr;
}

