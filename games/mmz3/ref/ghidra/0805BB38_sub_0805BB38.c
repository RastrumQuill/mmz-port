// sub_0805BB38 at 0x0805BB38 (thumb)

undefined4 sub_0805BB38(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      sub_08017700(param_1,0xb50f);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
    else {
      sub_08017700(param_1,0xb503);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0xffffffc0;
        uVar3 = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0x40;
        uVar3 = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 100) = uVar3;
      sub_0800471C(0x2f);
      sub_0808A2CC(param_1);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    sub_0800471C(0x4e);
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xf) == '\0') {
      local_14 = 0x1500;
    }
    else {
      local_14 = 0xc00;
    }
    local_10 = 0xffffee00;
    uVar3 = sub_080C73F8(param_1,&local_14);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
          return in_lr;
        }
        DAT_020301b2 = DAT_020301b2 | 2;
        *(undefined *)(param_1 + 0x12) = 0x20;
      }
      else {
        if (bVar1 != 3) {
          return in_lr;
        }
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != -1) {
          return in_lr;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar4 != 0) {
      return in_lr;
    }
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

