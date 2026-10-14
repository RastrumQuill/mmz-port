// sub_08065958 at 0x08065958 (thumb)

undefined4 sub_08065958(int param_1)

{
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0a20 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    sub_0808827C(1,param_1 + 0x4c);
    sub_08001EAC(2);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080659B4(param_1);
  }
  return in_lr;
}

