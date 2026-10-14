// sub_0809E568 at 0x0809E568 (thumb)

undefined4 sub_0809E568(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0xa303);
        sub_08007390(param_1 + 0x74,&DAT_083675a0);
        *(undefined *)(param_1 + 0x12) = 0x3c;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      goto LAB_0809e672;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xa302);
    *(undefined *)(param_1 + 0x12) = 0x36;
    uVar4 = FUN_080fe2f8(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54),0x36);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    iVar5 = FUN_080fe2f8(0x16c80 - (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)),0x36);
    *(int *)(param_1 + 0x60) = -iVar5;
    *(undefined *)(param_1 + 0x12) = 0x35;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    uVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (uVar3 == 0) {
      return in_lr;
    }
    if ((uVar3 & 0x8000) != 0) {
      return in_lr;
    }
    sub_080B2484(2,param_1 + 0x54);
  }
  else {
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
LAB_0809e672:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

