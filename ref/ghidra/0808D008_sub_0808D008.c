// sub_0808D008 at 0x0808D008 (thumb)

undefined4 sub_0808D008(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x74);
  if (((*(uint *)(iVar2 + 0x90) & 0x10001) == 0) && ((*(byte *)(iVar2 + 0x94) & 2) == 0)) {
    *(byte *)(param_1 + 0x41) =
         *(byte *)(param_1 + 0x41) & 0xf | (&DAT_02022f30)[*(byte *)(iVar2 + 9)] << 4;
    uVar1 = (&DAT_02022f30)[*(byte *)(iVar2 + 9)];
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    uVar1 = 0xd;
  }
  *(undefined *)(param_1 + 0x1e) = uVar1;
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b3674 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

