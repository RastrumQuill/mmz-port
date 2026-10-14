// sub_08041C14 at 0x08041C14 (thumb)

undefined4 sub_08041C14(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xf01);
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + 0x8c00;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x4000;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
    uVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x5c) + 0x10;
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar3 = *(int *)(param_1 + 0x60) + -0x18;
      *(int *)(param_1 + 0x60) = iVar3;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar2;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x40);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_080128D4(param_1);
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x18;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x18;
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_080127E4(param_1,0xf02);
    sub_080128D4(param_1);
    break;
  case 1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -4;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0xb;
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_080127E4(param_1,0xf00);
    sub_080128D4(param_1);
    *(undefined *)(param_1 + 0x12) = 0x40;
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0x5c) + 2;
    *(int *)(param_1 + 0x5c) = iVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar2 / 2;
    sub_080128D4(param_1);
    if (*(int *)(param_1 + 0x5c) < 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xf) = 4;
    return in_lr;
  default:
    goto switchD_08041ca2_caseD_3;
  case 4:
    iVar2 = *(int *)(param_1 + 0x5c) + 0x60;
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = *(int *)(param_1 + 0x54) + iVar2;
    *(int *)(param_1 + 0x54) = iVar2;
    if (iVar2 <= *(int *)(param_1 + 0xb4) + 0x1e000) {
      return in_lr;
    }
    sub_080127E4(param_1,0xe00);
    sub_080128D4(param_1);
    sub_08006E08(param_1 + 0x74,&DAT_0833a580);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined2 *)(param_1 + 0xd8) = 0xe03;
    uVar1 = sub_0806C90C(param_1,0,0);
    *(undefined4 *)(param_1 + 0xc4) = uVar1;
    uVar1 = sub_0806CACC(param_1,0,0);
    *(undefined4 *)(param_1 + 0xc0) = uVar1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + 0xf000;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x5000;
    *(undefined4 *)(param_1 + 100) = 0xffffffe0;
    uVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x5c) + -0x20;
      *(int *)(param_1 + 0x5c) = iVar2;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x20);
    break;
  case 5:
    iVar2 = *(int *)(param_1 + 0x5c) + 0x20;
    *(int *)(param_1 + 0x5c) = iVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + 0xf000;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    goto switchD_08041ca2_caseD_3;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_08041ca2_caseD_3:
  return in_lr;
}

