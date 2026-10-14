// sub_08000CE0 at 0x08000CE0 (thumb)

undefined4 sub_08000CE0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_r5;
  int unaff_r6;
  int iVar4;
  undefined8 uVar5;
  
  if (DAT_02001740 == '\0') {
    if (DAT_02001742 == '\0') {
      if (*(short *)(unaff_r5 + 2) != 0x61) {
        return 0;
      }
      DAT_02001742 = '\x01';
      DAT_02001748 = 0;
      *(undefined4 *)(unaff_r6 + 0x28) = 0;
    }
    iVar2 = 0xe;
    iVar4 = *(int *)(unaff_r6 + 0x28);
    uVar1 = 4;
    do {
      uVar5 = sub_08000D50(uVar1,iVar2);
      iVar3 = (int)((ulonglong)uVar5 >> 0x20);
      uVar1 = (undefined4)uVar5;
      iVar4 = iVar4 + 2;
      iVar2 = iVar3 + -2;
    } while (iVar2 != 0 && 1 < iVar3);
    *(int *)(unaff_r6 + 0x28) = iVar4;
    if (*(int *)(unaff_r6 + 0x20) <= iVar4) {
      if (*(int *)(unaff_r6 + 0x40) != DAT_02001748) {
        *(undefined *)(unaff_r6 + 1) = 8;
        *(undefined2 *)(unaff_r6 + 0xe) = 4;
        return 1;
      }
      *(undefined *)(unaff_r6 + 1) = 8;
      *(undefined2 *)(unaff_r6 + 0xe) = 4;
    }
  }
  return 0;
}

