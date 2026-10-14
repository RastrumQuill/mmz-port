// sub_080AD5B8 at 0x080AD5B8 (thumb)

undefined4 sub_080AD5B8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((((*(uint *)(param_1 + 0x14) & 4) == 0) && (cVar1 = *(char *)(iVar3 + 9), cVar1 != 'N')) &&
     (cVar1 != '0')) {
    if (*(char *)(iVar3 + 8) == '\x01') {
      if (cVar1 == '\x1d') {
        *(undefined *)(iVar2 + 0xb8) = 1;
        sub_080AD810(iVar2);
      }
      if (*(char *)(iVar3 + 9) == '\x1e') {
        *(undefined *)(iVar2 + 0xb8) = 2;
        sub_080AD810(iVar2);
      }
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar2 + 9) * 4) + 8);
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
  }
  return in_lr;
}

