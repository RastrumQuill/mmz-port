// sub_080B9F14 at 0x080B9F14 (thumb)

undefined4 sub_080B9F14(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 9) & 0x80) == 0) {
        return in_lr;
      }
      sub_080B2484(1,param_1 + 0x54);
      sub_0800471C(0x2a);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x11) == '\x01') {
      sub_08017700(param_1,0xa205);
    }
    else {
      sub_08017700(param_1,0xa21a);
    }
    *(undefined *)(param_1 + 0x12) = 0x3c;
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar3 = *(int *)(param_1 + 0x28);
      iVar2 = *(int *)(iVar3 + 0x54);
      iVar4 = -0xc00;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x28);
      iVar2 = *(int *)(iVar3 + 0x54);
      iVar4 = 0xc00;
    }
    *(int *)(param_1 + 100) = iVar2 + iVar4;
    *(undefined4 *)(param_1 + 0x60) = 0x80;
    *(int *)(param_1 + 0x68) = *(int *)(iVar3 + 0x58) + 0x600;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 0x10 >> 8)
  ;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x10 >> 8);
  sub_080177F4(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 10) & 1) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  return in_lr;
}

