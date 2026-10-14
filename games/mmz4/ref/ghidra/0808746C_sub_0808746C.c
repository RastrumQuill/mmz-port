// sub_0808746C at 0x0808746C (thumb)

undefined4 sub_0808746C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_14;
  uint local_10;
  
  if (*(byte *)(param_1 + 0xf) == 0) {
    local_14 = 0x800;
    local_10 = (uint)*(byte *)(param_1 + 0xf);
    sub_08088E68(param_1 + 0x54,&local_14,3,4);
    sub_08005784(param_1 + 0x74,&DAT_0885ba98);
    sub_0801CF00(param_1,0x1d00);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar1 = sub_08088B14(param_1);
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

