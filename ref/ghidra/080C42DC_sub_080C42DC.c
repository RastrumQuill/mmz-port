// sub_080C42DC at 0x080C42DC (thumb)

longlong sub_080C42DC(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  uint in_lr;
  
  if ((DAT_02004ca8 & 0xc0) == 0) {
    if ((DAT_02004ca8 & 0x30) != 0) {
      iVar2 = 1;
      if ((DAT_02004ca8 & 0x20) != 0) {
        iVar2 = -1;
      }
      iVar3 = *(int *)(param_1 + 0x10);
      uVar1 = sub_080C8B68((uint)*(byte *)(iVar3 + 0x219) + iVar2 + 3,3);
      *(undefined *)(iVar3 + 0x219) = uVar1;
      sub_08001EAC(0x29);
    }
  }
  else {
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 5) = 0;
    sub_08001EAC(0x29);
  }
  sub_080C4678(param_1);
  return (ulonglong)in_lr << 0x20;
}

