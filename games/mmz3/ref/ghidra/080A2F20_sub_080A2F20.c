// sub_080A2F20 at 0x080A2F20 (thumb)

undefined4 sub_080A2F20(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(byte *)(DAT_0202f5c0 + 0xc) < 2) {
    bVar1 = *(byte *)(param_1 + 0xe);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          *(char *)(DAT_0202f5c0 + 0x230) = *(char *)(DAT_0202f5c0 + 0x230) + -1;
          *(undefined *)(param_1 + 0x12) = 0x1e;
          *(undefined *)(param_1 + 0x13) = 0;
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        }
        else if (bVar1 != 3) {
          return in_lr;
        }
        iVar4 = DAT_0202f5c0;
        *(int *)(param_1 + 0x54) = *(int *)(DAT_0202f5c0 + 0x54) + *(int *)(param_1 + 100);
        *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + *(int *)(param_1 + 0x68);
        sub_080177F4(param_1);
        if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xfe;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 1;
        }
        *(byte *)(param_1 + 10) = bVar1;
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != '\0') {
          return in_lr;
        }
        bVar1 = *(byte *)(param_1 + 10);
        goto LAB_080a308c;
      }
      if (bVar1 != 0) {
        return in_lr;
      }
      *(char *)(DAT_0202f5c0 + 0x230) = *(char *)(DAT_0202f5c0 + 0x230) + '\x01';
      *(undefined4 *)(param_1 + 0x5c) = 0x10;
      *(undefined *)(param_1 + 0x13) = 0x80;
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      *(uint *)(param_1 + 100) = (uVar3 * 0x10 >> 0x14) - 0x800;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      iVar4 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x1800);
      *(int *)(param_1 + 0x68) = -iVar4;
      sub_08017700(param_1,0x4608);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    uVar3 = sub_08025B64(DAT_0202f5c0);
    iVar4 = *(int *)(param_1 + 0x5c) - (uVar3 & 0xff);
    *(int *)(param_1 + 0x5c) = iVar4;
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if ((((cVar2 == '\0') || (iVar4 < 0)) || ((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) != 0)) ||
       (*(short *)(DAT_0202f5c0 + 0xa4) == 0)) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    iVar4 = DAT_0202f5c0;
    *(int *)(param_1 + 0x54) = *(int *)(DAT_0202f5c0 + 0x54) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + *(int *)(param_1 + 0x68);
    sub_080177F4(param_1);
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
LAB_080a308c:
    *(byte *)(param_1 + 10) = bVar1 & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

