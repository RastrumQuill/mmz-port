// sub_0809F17C at 0x0809F17C (thumb)

undefined4 sub_0809F17C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if ((DAT_02022ae0 & 4) == 0) {
    uVar1 = 6;
  }
  else {
    uVar1 = 3;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  iVar2 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 >> 8 != *(int *)(param_1 + 0xc4) >> 8) {
    local_14 = *(int *)(param_1 + 0x4c) + -32000;
    local_10 = iVar2 + 0x800;
    sub_0808D6F4(&local_14,0);
    local_14 = *(int *)(param_1 + 0x4c) + 0x5400;
    sub_0808D6F4(&local_14,0);
  }
  sub_0809C980(param_1);
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x50);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

