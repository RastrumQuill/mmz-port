// sub_080C563C at 0x080C563C (thumb)

undefined4 sub_080C563C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  byte abStack_1c [4];
  undefined4 local_18 [2];
  
  local_18[0] = 0x5500;
  local_18[1] = 0x5501;
  sub_08128B5C(abStack_1c,&DAT_08129a6c,2);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0886236c + (uint)abStack_1c[bVar1] * 0x18);
    sub_0801CF00(param_1,*(undefined2 *)(local_18 + bVar1));
    *(undefined *)(param_1 + 0x12) = 1;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 < -0x700) {
      *(undefined4 *)(param_1 + 0x60) = 0xfffff900;
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       sVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined *)(param_1 + 0x12) = 0;
    }
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc);
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08128884(param_1,0x80c5771);
  }
  return in_lr;
}

