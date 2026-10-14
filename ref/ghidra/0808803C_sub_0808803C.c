// sub_0808803C at 0x0808803C (thumb)

undefined4 sub_0808803C(undefined4 param_1,undefined4 param_2,short param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_0800539C(param_1,5,param_2,0x84,(int)param_3);
  uVar1 = 0;
  DAT_0202300c = param_1;
  do {
    (&DAT_02023010)[uVar1] = (ushort)(&DAT_08500006)[uVar1 * 10] >> 6;
    (&DAT_020230c0)[uVar1] = (&DAT_08500013)[uVar1 * 0x14];
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 0x58);
  return in_lr;
}

