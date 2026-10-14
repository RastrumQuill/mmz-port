// sub_0808D0B8 at 0x0808D0B8 (thumb)

undefined4 sub_0808D0B8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0x11) = 1;
  if (*(char *)(param_1 + 0x10) == '\b') {
    *(undefined *)(param_1 + 0xd) = 7;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x800;
  }
  else if (*(char *)(param_1 + 0x10) == '\t') {
    *(undefined *)(param_1 + 0xd) = 5;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if (*(byte *)(param_1 + 0x10) < 8) {
    if (((DAT_02002445 & 0x80) == 0) || ((DAT_02030104 & 0x40) != 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_08365960,param_1 + 0x54,10);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_08365960,param_1 + 0x54,0xe);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
  else {
    if (*(byte *)(param_1 + 0x10) != 9) goto LAB_0808d1a4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_08365960,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
  }
  *(undefined4 *)(param_1 + 0x98) = 0x808ceb5;
LAB_0808d1a4:
  *(undefined4 *)(param_1 + 0xb4) = 0;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 4) {
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  else if ((byte)(bVar1 - 4) < 4) {
    *(byte *)(param_1 + 0x10) = bVar1 - 4;
    *(undefined *)(param_1 + 0x11) = 1;
  }
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined *)(param_1 + 0xba) = 0;
  *(undefined *)(param_1 + 0xbc) = 0;
  sub_0808D1F8(param_1);
  return in_lr;
}

