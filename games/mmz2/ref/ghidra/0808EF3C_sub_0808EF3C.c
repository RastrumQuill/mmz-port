// sub_0808EF3C at 0x0808EF3C (thumb)

undefined4 sub_0808EF3C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    cVar1 = *(char *)(param_1 + 0xf);
    if (cVar1 == '\0') {
      iVar2 = sub_08065A24(param_1);
      if (iVar2 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      cVar1 = *(char *)(param_1 + 0xf);
      if (cVar1 == '\0') {
        sub_080EF118(param_1,*(undefined4 *)(&DAT_08342114 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080EF118(param_1,*(undefined4 *)(&DAT_08342118 + (uint)*(byte *)(param_1 + 0xd) * 4));
        return in_lr;
      }
    }
    if (cVar1 == '\x01') {
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0xf) = 2;
    }
    iVar2 = sub_08065A24(param_1);
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_0808EFD4(param_1);
  }
  return in_lr;
}

