// sub_08016FE4 at 0x08016FE4 (thumb)

undefined4 sub_08016FE4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080070C0();
  while( true ) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == param_1 + 0x14) break;
    sub_080FE2C0(iVar1,*(undefined4 *)(iVar1 + 0x14));
    if ((*(byte *)(iVar1 + 0xb) & 8) != 0) {
      sub_0800A788(*(undefined *)(iVar1 + 0x1c),*(undefined2 *)(iVar1 + 0x26),iVar1 + 0x54,
                   *(undefined4 *)(iVar1 + 0x30));
    }
  }
  return in_lr;
}

