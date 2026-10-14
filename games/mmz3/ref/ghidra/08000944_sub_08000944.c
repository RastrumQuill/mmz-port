// sub_08000944 at 0x08000944 (thumb)

undefined4 sub_08000944(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r5;
  undefined *unaff_r7;
  
  iVar1 = *(int *)(unaff_r7 + 0x54);
  *(int *)(unaff_r7 + 0x54) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    *unaff_r7 = 4;
  }
  uVar2 = *(undefined4 *)(unaff_r7 + 0x34);
  iVar1 = 0;
  do {
    *(undefined2 *)(unaff_r5 + iVar1) = 0;
    iVar1 = iVar1 + 2;
  } while (iVar1 < 0x10);
  return uVar2;
}

