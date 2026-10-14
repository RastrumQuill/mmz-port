// sub_0807C970 at 0x0807C970 (thumb)

undefined4 sub_0807C970(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  psVar2 = &DAT_083643dc;
  do {
    iVar1 = sub_080070D8(DAT_020305e8);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 0x18;
      *(undefined *)(iVar1 + 9) = 0x21;
      *(undefined4 *)(iVar1 + 0x14) = 0x807cb2d;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
      *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
      *(undefined *)(iVar1 + 0x10) = 2;
      *(char *)(iVar1 + 0x11) = (char)iVar3;
      *(int *)(iVar1 + 0x54) = param_1;
      *(int *)(iVar1 + 0x54) = param_1 + *psVar2;
      *(int *)(iVar1 + 0x58) = param_2;
      *(int *)(iVar1 + 0x58) = param_2 + psVar2[1];
    }
    psVar2 = psVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return in_lr;
}

