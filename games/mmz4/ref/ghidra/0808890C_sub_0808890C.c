// sub_0808890C at 0x0808890C (thumb)

undefined4 sub_0808890C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  local_28 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  local_24 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100;
  sub_080D0894(1,&local_28);
  sub_08088BEC(param_1);
  if (DAT_0202cabc < *(int *)(param_1 + 0x58)) {
    sub_08002B10(0x31);
    local_20 = 0x800;
    local_1c = 0;
    sub_08088E68(param_1 + 0x54,&local_20,3,4);
  }
  else {
    sub_08002B10(0x2a);
  }
  sub_0802AB70(4,0x32,param_1 + 0x54);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

