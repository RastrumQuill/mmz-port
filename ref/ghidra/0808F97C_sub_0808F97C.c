// sub_0808F97C at 0x0808F97C (thumb)

undefined4 sub_0808F97C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  puVar3 = (undefined4 *)(param_1 + 0x74);
  if (*(char *)(iVar2 + 0xc) != '\0') {
    sub_08088120(param_1);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xcc;
    *(undefined *)(param_1 + 0x1e) = 0xc;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    iVar1 = 1;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + 0x4c);
      puVar3[1] = *(undefined4 *)(iVar2 + 0x50);
      puVar3 = puVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    *(undefined *)(param_1 + 0x12) = 2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
    sub_0808F9EC(param_1);
  }
  return in_lr;
}

