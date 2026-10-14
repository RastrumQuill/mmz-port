// sub_0808D734 at 0x0808D734 (thumb)

undefined4 sub_0808D734(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  local_28 = *(undefined4 *)(param_1 + 0x54);
  local_24 = *(int *)(param_1 + 0x58) + -0x1900;
  sub_080D0894(1,&local_28);
  puVar1 = (uint *)(param_1 + 0xb4);
  sub_08002B10(0x2a);
  sub_0802AB70(3,0x25,&local_28);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 3;
  sub_080D9BC8(&local_28,*puVar1 >> 0x1f,0x250a,uVar2,1);
  sub_080D9BC8(&local_28,*puVar1 >> 0x1f,0x250b,uVar2,1);
  sub_080D9BC8(&local_28,*puVar1 >> 0x1f,0x250c,uVar2,1);
  local_24 = local_24 + -0x1200;
  sub_080D0894(2,&local_28);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 3;
  sub_080D9BC8(&local_28,*puVar1 >> 0x1f,0x250a,uVar2,1);
  sub_080D9BC8(&local_28,*puVar1 >> 0x1f,0x250b,uVar2,1);
  sub_080D9BC8(&local_28,*puVar1 >> 0x1f,0x250c,uVar2,1);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

