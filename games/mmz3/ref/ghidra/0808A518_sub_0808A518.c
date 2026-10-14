// sub_0808A518 at 0x0808A518 (thumb)

undefined4 sub_0808A518(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x98) = 0x808b10d;
  if ((*(char *)(param_1 + 0x10) == '\0') &&
     (sub_0808A4C0(param_1,0), *(char *)(param_1 + 0x10) == '\0')) {
    *(undefined *)(param_1 + 0xc3) = 1;
    if (((DAT_02002445 & 0x40) == 0) || (uVar1 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
      uVar1 = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar3 = 0x30;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar3 = 0x40;
    }
    sub_0800736C(param_1 + 0x74,&DAT_08365434,param_1 + 0x54,uVar3);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar1;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xc1) = 0;
    *(undefined *)(param_1 + 0xc2) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x25) = 0x14;
    iVar2 = sub_08063614(param_1);
    if (iVar2 != 0) {
      sub_08017700(param_1,0x6e00);
      sub_080177F4(param_1);
    }
  }
  else {
    sub_08007390(param_1 + 0x74,&DAT_0836541c);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x25) = 0x16;
    iVar2 = sub_08063614(param_1);
    if (iVar2 != 0) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
      iVar2 = *(int *)(param_1 + 0x28);
      *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
      uVar3 = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      sub_08017700(param_1,0x6e06);
      sub_080177F4(param_1);
    }
  }
  *(undefined *)(param_1 + 0x11) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    DAT_0202f4ac._0_1_ = (char)DAT_0202f4ac + '\x01';
  }
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
  sub_0808A6AC(param_1);
  return in_lr;
}

