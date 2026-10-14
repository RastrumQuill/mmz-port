// sub_0808E300 at 0x0808E300 (thumb)

undefined4 sub_0808E300(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(byte *)(param_1 + 0x12) < 0x1e) {
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  *(int *)(param_1 + 0x4c) =
       *(int *)(param_1 + 0x4c) +
       ((int)((uint)(ushort)(&DAT_080c8e24)[(*(byte *)(param_1 + 0x12) & 0xf) * 0x10 + 0x40] << 0x10
             ) >> 0x12);
  iVar2 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar2;
  uVar3 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar3;
  if ((iVar2 - *(int *)(param_1 + 0x58) <= DAT_02021648) || ((uVar3 & 0xff) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

