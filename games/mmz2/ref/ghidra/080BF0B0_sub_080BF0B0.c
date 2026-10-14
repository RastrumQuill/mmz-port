// sub_080BF0B0 at 0x080BF0B0 (thumb)

undefined4 sub_080BF0B0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  uVar2 = uVar1 * 2 >> 0x11;
  iVar3 = ((int)(uVar2 + ((int)uVar2 >> 3) * -8 + 1) / 2) * 0x480 + 0x600;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  uVar2 = uVar1 * 2 >> 0x11;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  uVar1 = ((int)(uVar2 + ((int)uVar2 >> 4) * -0x10 + 1) / 2) * 0x20 + (uVar1 * 2 >> 0x11 & 7) * 4 &
          0xff;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + ((short)(&DAT_080ef450)[uVar1] * iVar3 >> 8)
  ;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + ((short)(&DAT_080ef450)[uVar1 + 0x40 & 0xff] * iVar3 >> 8);
  iVar3 = *(int *)(*(int *)(param_1 + 100) + 0x28);
  sub_08012580(param_1);
  sub_080127D0(param_1);
  uVar1 = sub_08037DC8(iVar3,0);
  *(undefined *)(param_1 + 0x25) = 0x10;
  *(undefined2 *)(param_1 + 0x20) = (&DAT_08335fd4)[uVar1 & 0xff];
  *(undefined1 *)(param_1 + 0x22) = (&DAT_08335fdc)[uVar1 & 0xff];
  sub_08012CA4(param_1,(&DAT_083485f8)[*(byte *)(iVar3 + 0x10)]);
  sub_080127E4(param_1,0x5606);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080BF1F4(param_1);
  return in_lr;
}

