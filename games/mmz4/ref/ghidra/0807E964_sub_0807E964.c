// sub_0807E964 at 0x0807E964 (thumb)

undefined4 sub_0807E964(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0807E9B4();
  iVar2 = 0;
  do {
    *(undefined *)(param_1 + 0xc0 + iVar2) =
         *(undefined *)(*(int *)(&DAT_0885a308 + ((uint)(iVar1 << 0x18) >> 0x16)) + iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  if ((*(byte *)(DAT_0202e8e0 + 1) < 5) || ((DAT_0202e8b4 & 4) != 0)) {
    *(undefined *)(param_1 + 0xc6) = 0;
  }
  return in_lr;
}

