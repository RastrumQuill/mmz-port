// sub_08000D70 at 0x08000D70 (thumb)

undefined4 sub_08000D70(void)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined8 uVar5;
  
  psVar1 = (short *)sub_08001024(unaff_r5);
  if (DAT_02001742 == '\0') {
    if (*psVar1 != 0x61) {
      return 0;
    }
    DAT_02001742 = '\x01';
    DAT_02001748 = 0;
    *(undefined4 *)(unaff_r6 + 0x28) = 0;
  }
  FUN_08000784();
  iVar3 = 0xe;
  uVar2 = 4;
  do {
    uVar5 = sub_08000D50(uVar2,iVar3);
    iVar4 = (int)((ulonglong)uVar5 >> 0x20);
    uVar2 = (undefined4)uVar5;
    iVar3 = iVar4 + -2;
  } while (iVar3 != 0 && 1 < iVar4);
  *(undefined *)(unaff_r6 + 1) = 8;
  *(undefined2 *)(unaff_r6 + 0xe) = 4;
  return 4;
}

