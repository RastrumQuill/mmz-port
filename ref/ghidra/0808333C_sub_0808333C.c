// sub_0808333C at 0x0808333C (thumb)

undefined4 sub_0808333C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(iVar2 + 0x4c) + -0x1800;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x4c) + 0x1800;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  *(int *)(param_1 + 0x50) = *(int *)(iVar2 + 0x50) + -0x1a00;
  if (*(char *)(iVar2 + 0xd) != '\x0f') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

