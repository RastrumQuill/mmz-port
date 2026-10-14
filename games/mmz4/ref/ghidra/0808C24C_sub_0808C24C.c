// sub_0808C24C at 0x0808C24C (thumb)

undefined4 sub_0808C24C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  short asStack_24 [8];
  
  sub_08128B5C(asStack_24,&DAT_0812947c,0x10);
  iVar2 = *(int *)(param_1 + 0x28);
  uVar1 = (uint)*(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(char *)(param_1 + 0xb4) = (&DAT_0885c384)[uVar1];
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb6) = 0xff;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)asStack_24[uVar1 * 2];
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)asStack_24[uVar1 * 2 + 1];
  sub_0801CD28(param_1);
  *(undefined *)(param_1 + 0x25) = 0x19;
  *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0xb4) + -0x80;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_0801CF00(param_1,0x2400);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
  sub_0808C328(param_1);
  return in_lr;
}

