// sub_0808C110 at 0x0808C110 (thumb)

undefined4 sub_0808C110(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_083658d8)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_083658dc;
    *(undefined2 *)(param_1 + 0x26) = 0x801;
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    if (((DAT_02002443 & 0x40) == 0) || ((DAT_02030104 & 0x40) != 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar1 = 0x14;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar1 = 0x18;
    }
  }
  else {
    *(undefined *)(param_1 + 0xb8) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar1 = 5;
  }
  sub_0800736C(param_1 + 0x74,&DAT_08365720,param_1 + 0x54,uVar1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x808bfc1;
  sub_0808C218(param_1);
  return in_lr;
}

