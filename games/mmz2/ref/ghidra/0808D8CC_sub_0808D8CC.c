// sub_0808D8CC at 0x0808D8CC (thumb)

undefined4 sub_0808D8CC(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  bVar1 = (byte)(*(char *)(param_1 + 0x10) - 6U) < 2;
  if (bVar1) {
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + -2;
  }
  *(bool *)(param_1 + 0x11) = bVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  cVar2 = *(char *)(param_1 + 0x10);
  if (((cVar2 == '\x03') || (cVar2 == '\x01')) || (cVar2 == '\x05')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(int *)(param_1 + 0x54) = DAT_0202ed50 + -0x9800;
    }
  }
  if ((byte)(*(char *)(param_1 + 0x10) - 2U) < 2) {
    iVar3 = sub_08006B84(DAT_0202f078);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 0x25) = 0x18;
      *(undefined *)(iVar3 + 9) = 0x43;
      *(undefined4 *)(iVar3 + 0x14) = 0x808d8cd;
      *(undefined2 *)(iVar3 + 0x20) = 0;
      *(undefined *)(iVar3 + 0x22) = 0;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
      *(undefined *)(iVar3 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
      *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(int *)(iVar3 + 0x58) = *(int *)(param_1 + 0x58) + -0x1600;
      *(char *)(iVar3 + 0x10) = *(char *)(param_1 + 0x10) + -2;
      *(int *)(iVar3 + 0x28) = param_1;
    }
    *(int *)(param_1 + 0x2c) = iVar3;
  }
  else if (1 < (byte)(*(char *)(param_1 + 0x10) - 4U)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08341ef8,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080127E4(param_1,0x7600);
    goto LAB_0808da36;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08341f28,param_1 + 0x54,10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080127E4(param_1,0x7608);
LAB_0808da36:
  *(undefined4 *)(param_1 + 0x98) = 0x808e159;
  *(undefined4 *)(param_1 + 0x9c) = 0x808e1a1;
  if (3 < *(byte *)(param_1 + 0x10)) {
    uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(char *)(param_1 + 0x10) == '\x04') {
      uVar4 = 0xfffffdf6;
    }
    else {
      uVar4 = 0x20a;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
  }
  *(undefined *)(param_1 + 0xd) = (&DAT_08342050)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0xc0) = 0;
  sub_0808DA9C(param_1);
  return in_lr;
}

