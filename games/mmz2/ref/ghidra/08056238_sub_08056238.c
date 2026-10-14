// sub_08056238 at 0x08056238 (thumb)

undefined4 sub_08056238(int param_1)

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
    if (*(char *)(param_1 + 0xd8) < '\0') {
      iVar2 = *(int *)(param_1 + 0xb8) + 0xbbff;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xb8) + 0x1400;
    }
    *(int *)(param_1 + 0x54) = iVar2;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    cVar1 = sub_08057A70(param_1);
    if (cVar1 != '\0') {
      sub_080032EC(0xec);
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      for (uVar3 = (uVar3 * 2 >> 0x11 & 3) + 5; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        local_2c = *(int *)(param_1 + 0x54) + ((uVar4 * 2 >> 0x11 & 0x3f) - 0x1f) * 0x100;
        uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        local_28 = *(int *)(param_1 + 0xbc) + (uVar4 * 2 >> 0x11 & 0xf) * 0x100 + -0x7f00;
        sub_080B61B4(param_1,&local_2c,1,0);
      }
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  sub_08015518(1,param_1 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  piVar5 = (int *)(param_1 + 0xdc);
  *piVar5 = *piVar5 + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 10;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x600 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x600;
  }
  if (*(int *)(param_1 + 0xe0) + 0x1000 <= *piVar5) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_24 = 0x1400;
    }
    else {
      local_24 = -0x1400;
    }
    local_24 = *(int *)(param_1 + 0x54) + local_24;
    local_20 = *(int *)(param_1 + 0x58) + -0x1400;
    sub_080AC60C(3);
    *(int *)(param_1 + 0xe0) = *piVar5;
  }
  iVar2 = *piVar5 * 0x170;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(byte *)(param_1 + 0x24) = ~(byte)((uint)iVar2 >> 0x10);
  uVar3 = (iVar2 >> 0x10) << 0x19;
  if (uVar3 >> 0x18 < (uint)*(byte *)(param_1 + 0x12)) {
    sub_080032EC(0x3c);
  }
  *(char *)(param_1 + 0x12) = (char)(uVar3 >> 0x18);
  if (*(int *)(param_1 + 0xbc) <= *(int *)(param_1 + 0x58) + 0x1400) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + -0x1400;
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x60);
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

