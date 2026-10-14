// sub_080CE8C8 at 0x080CE8C8 (thumb)

undefined4 sub_080CE8C8(undefined param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_02030630);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 0x10;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ce955;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(int *)(iVar1 + 0x54) = param_2 + 0x1800;
    *(undefined4 *)(iVar1 + 0x58) = param_3;
    *(undefined *)(iVar1 + 0x10) = param_1;
    *(undefined *)(iVar1 + 0x11) = 1;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) | 1;
    sub_0801749C(iVar1);
    sub_08017700(iVar1,0x700f);
    sub_080177F4(iVar1);
    sub_0801ACF8(5,iVar1 + 0x54);
  }
  return in_lr;
}

