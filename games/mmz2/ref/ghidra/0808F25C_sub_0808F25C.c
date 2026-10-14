// sub_0808F25C at 0x0808F25C (thumb)

undefined4 sub_0808F25C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_0202ebbb & 0x20) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    cVar1 = *(char *)(param_1 + 0xf);
    if (cVar1 == '\0') {
      iVar2 = sub_08065A24(param_1);
      if (iVar2 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      cVar1 = *(char *)(param_1 + 0xf);
      if (cVar1 == '\0') {
        sub_080EF118(param_1,*(undefined4 *)(&DAT_08342170 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080EF118(param_1,*(undefined4 *)(&DAT_0834217c + (uint)*(byte *)(param_1 + 0xd) * 4));
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
    sub_0808F33C(param_1);
  }
  return in_lr;
}

