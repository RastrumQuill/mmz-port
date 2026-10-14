// sub_08050ABC at 0x08050ABC (thumb)

undefined4 sub_08050ABC(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080127E4(param_1,0xa419);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  if ((uVar2 * 2 >> 0x11 & 3) == 0) {
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    uVar2 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    local_1c = (uVar4 * 2 >> 0x11 & 0xf) * 0x100 + *(int *)(param_1 + 0x54) +
               (uVar2 * 2 >> 0x11 & 0x1f) * -0x100;
    uVar4 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    uVar2 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_18 = (uVar4 * 2 >> 0x11 & 0xf) * 0x100 + *(int *)(param_1 + 0x58) +
               (uVar2 * 2 >> 0x11 & 0x1f) * -0x100;
    sub_080AC60C(2,&local_1c);
    sub_080032EC(0x35);
  }
  iVar3 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x380 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x380;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar2 = sub_0804ED6C(param_1);
  if ((uVar2 & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((uVar2 & 2) != 0) {
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  if ((uVar2 & 8) != 0) {
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
  }
  sub_080128D4(param_1);
  return in_lr;
}

