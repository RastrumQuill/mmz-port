// sub_080BF860 at 0x080BF860 (thumb)

undefined4 sub_080BF860(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = true;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x2d02);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(iVar3 + 0xc) < 2) {
    sub_0801CFF0(param_1);
    if (-0x300 < *(int *)(param_1 + 0x60)) {
      iVar3 = *(int *)(param_1 + 0x60) + -0x20;
      *(int *)(param_1 + 0x60) = iVar3;
      if (iVar3 < -0x300) {
        *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
      }
      bVar1 = false;
    }
    local_18 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = local_18;
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (((bVar2 & 3) == 0) && (bVar1)) {
      local_1c = *(undefined4 *)(param_1 + 0x54);
      local_18 = local_18 + 0x1c00;
      iVar3 = sub_080D0894(3,&local_1c);
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 0x49) = *(byte *)(iVar3 + 0x49) | 0xc;
        *(undefined *)(iVar3 + 0x25) = 0x1c;
      }
    }
    if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb4) + -0x5000) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080BFB9C(param_1);
  }
  return in_lr;
}

