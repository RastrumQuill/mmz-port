// sub_08000DE0 at 0x08000DE0 (thumb)

undefined4 sub_08000DE0(void)

{
  bool bVar1;
  short *psVar2;
  short *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int iVar3;
  char cVar4;
  int local_14;
  
  local_14 = 0;
  if (*(char *)(unaff_r6 + 8) == '\0') {
    do {
      cVar4 = local_14 == -1;
      psVar2 = unaff_r5;
      sub_08000E94();
      if ((cVar4 == '\0') && (*psVar2 != 0x62)) {
        return 0;
      }
      local_14 = local_14 + 1;
      unaff_r5 = unaff_r5 + 1;
      iVar3 = unaff_r7 + -1;
      bVar1 = 0 < unaff_r7;
      unaff_r7 = iVar3;
    } while (iVar3 != 0 && bVar1);
    *(undefined *)(unaff_r6 + 8) = 1;
  }
  if (*(short *)(unaff_r6 + 0xc) != 0) {
    *(short *)(unaff_r6 + 0xc) = *(short *)(unaff_r6 + 0xc) + -1;
  }
  return 0;
}

