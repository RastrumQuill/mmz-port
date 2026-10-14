// sub_080CD3CC at 0x080CD3CC (thumb)

undefined4 sub_080CD3CC(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
LAB_080cd428:
    sub_080177F4(param_1);
    iVar3 = (*(byte *)(param_1 + 0x12) & 7) * 4;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + *(int *)(&DAT_0836c938 + iVar3) * 0x100;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + *(int *)(&DAT_0836c958 + iVar3) * 0x100;
    uVar4 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)uVar4;
    if ((uVar4 & 3) == 0) {
      local_18 = *(int *)(param_1 + 0x58) + (uint)*(byte *)(param_1 + 0x12) * 0x100;
      if ((uVar4 & 4) == 0) {
        local_1c = -0x1100;
      }
      else {
        local_1c = 0x1100;
      }
      local_1c = *(int *)(param_1 + 0x54) + local_1c;
      sVar2 = sub_08008FEC(local_1c,local_18);
      if (sVar2 != 0) {
        sub_080B2484(3,&local_1c);
      }
    }
    if (*(byte *)(param_1 + 0x12) < 0x2d) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_0800E4A0(param_1 + 0x54);
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_0836c930;
      *(undefined2 *)(param_1 + 0x26) = 0x2001;
      *(int *)(param_1 + 0x40) = param_1 + 100;
      iVar3 = sub_080047C0(0x11d);
      if (iVar3 == 0) {
        sub_0800471C(0x11d);
      }
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_080cd428;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      goto LAB_080cd540;
    }
  }
  local_1c = *(int *)(param_1 + 0x54) + -0x800;
  local_18 = *(int *)(param_1 + 0x58) + 0x1000;
  if ((((*(uint *)(param_1 + 0x8c) & 4) != 0) ||
      (iVar3 = sub_08009BE4(local_1c,local_18), iVar3 != 0)) ||
     (iVar3 = sub_08009BE4(local_1c + 0x1000,local_18), iVar3 != 0)) {
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    sub_08017700(param_1,0x4403);
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_0801ACF8(2,param_1 + 0x54);
    *(undefined *)(param_1 + 0x13) = 0;
    iVar3 = sub_080047C0(0x41);
    if (iVar3 == 0) {
      sub_0800471C(0x41);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
LAB_080cd540:
  if (*(char *)(param_1 + 0xd) == '\x03') {
    bVar1 = *(byte *)(param_1 + 0x13);
    *(byte *)(param_1 + 0x13) = bVar1 + 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  sub_080177F4(param_1);
  if (*(int *)(param_1 + 0x60) < 0x700) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
  }
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x68) = iVar3;
  uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x3000 < uVar4) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

