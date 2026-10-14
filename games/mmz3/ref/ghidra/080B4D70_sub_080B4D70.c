// sub_080B4D70 at 0x080B4D70 (thumb)

undefined4 sub_080B4D70(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_08017700(param_1,0x1c00);
    iVar3 = sub_080047C0(0x3f);
    if (iVar3 == 0) {
      sub_0800471C(0x3f);
    }
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x5c) = (uVar4 * 0x40 >> 0x16) - 0x200;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x60) = -0x200 - (uVar4 * 0x80 >> 0x17);
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar4 * 2 >> 0x11) & 0x1f) + 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar2 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

