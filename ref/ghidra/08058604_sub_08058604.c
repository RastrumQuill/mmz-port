// sub_08058604 at 0x08058604 (thumb)

undefined4 sub_08058604(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = param_1 + 0x4c;
  sub_0808D1BC(param_1,iVar1,2,0);
  sub_0808D1BC(param_1,iVar1,3,0);
  sub_0808D1BC(param_1,iVar1,4,0);
  sub_0808827C(1,iVar1);
  sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
  sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
  sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
  sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
  sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
  sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),2);
  sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),3);
  sub_08001EAC(0xd6);
  sub_08015698(4,iVar1);
  if (DAT_02022b2c < 9999) {
    DAT_02022b2c = DAT_02022b2c + 1;
  }
  sub_08015794(param_1,iVar1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

