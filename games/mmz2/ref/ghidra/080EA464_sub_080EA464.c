// sub_080EA464 at 0x080EA464 (thumb)

longlong sub_080EA464(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  uint in_lr;
  
  if ((DAT_02000d14 & 0xc0) == 0) {
    if ((DAT_02000d14 & 0x30) != 0) {
      iVar2 = 1;
      if ((DAT_02000d14 & 0x20) != 0) {
        iVar2 = -1;
      }
      iVar3 = *(int *)(param_1 + 0x10);
      uVar1 = sub_080EF1E8((uint)*(byte *)(iVar3 + 0x1f5) + iVar2 + 3,3);
      *(undefined *)(iVar3 + 0x1f5) = uVar1;
      sub_080032EC(1);
    }
  }
  else {
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 5) = 0;
    sub_080032EC(1);
  }
  sub_080EAA40(param_1);
  return (ulonglong)in_lr << 0x20;
}

