// sub_080285AC at 0x080285AC (thumb)

undefined4 sub_080285AC(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x1a) & 4) != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    if ((*(ushort *)(iVar2 + 0x90) & 4) != 0) {
      sub_080280FC(iVar2);
      sub_08018A98();
    }
    uVar1 = (uint)(byte)(&DAT_082ac56c)[*(byte *)(iVar2 + 0x10)];
    if (uVar1 - 2 < 2) {
      uVar1 = uVar1 ^ *(byte *)(iVar2 + 10) >> 4 & 1;
    }
    sub_0808EB84(*param_2,param_2[1],uVar1);
  }
  return in_lr;
}

