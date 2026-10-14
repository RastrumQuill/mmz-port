// sub_08000920 at 0x08000920 (thumb)

void sub_08000920(void)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  int unaff_r7;
  
  iVar1 = *(int *)(unaff_r7 + 0x34);
  iVar2 = 0;
  do {
    *(undefined2 *)(unaff_r5 + iVar2) = *(undefined2 *)(iVar1 + iVar2);
    iVar2 = iVar2 + 2;
  } while (iVar2 < 0x10);
  return;
}

