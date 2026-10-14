// sub_0808CE3C at 0x0808CE3C (thumb)

undefined4 sub_0808CE3C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_08341d50);
    sub_080032EC(0x3b);
    sub_080127E4(param_1,0x7503);
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined *)(param_1 + 0x13) = 0x28;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_08341db0);
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x13) = 0x28;
      iVar2 = sub_08006B50(DAT_0202f078);
      if (iVar2 != 0) {
        *(undefined *)(iVar2 + 0x25) = 0x18;
        *(undefined *)(iVar2 + 9) = 0x42;
        *(undefined4 *)(iVar2 + 0x14) = 0x808beb9;
        *(undefined2 *)(iVar2 + 0x20) = 0;
        *(undefined *)(iVar2 + 0x22) = 0;
        *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
        *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
        *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
        *(undefined *)(iVar2 + 0x10) = 2;
      }
    }
    iVar4 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar4 + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar2 = sub_08008DE8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    uVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((uVar3 & 0x80) == 0) {
      if (iVar2 < 0) {
        if (-0x1000 < iVar2) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
        }
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
    else if ((iVar2 < 0) && (iVar2 = *(int *)(param_1 + 0x58) + iVar2, iVar2 <= iVar4)) {
      *(int *)(param_1 + 0x58) = iVar2;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x800) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
      iVar2 = sub_08009240(*(int *)(param_1 + 0x54) + -0x1c00,*(int *)(param_1 + 0x58) + -0x1000);
      if (0 < iVar2) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
      }
      iVar2 = sub_080090D4(*(int *)(param_1 + 0x54) + 0x1c00,*(int *)(param_1 + 0x58) + -0x1000);
      if (iVar2 < 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
      }
      *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    }
    sub_080128D4(param_1);
  }
  return in_lr;
}

