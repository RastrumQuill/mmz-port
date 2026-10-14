// sub_08001154 at 0x08001154 (thumb)

undefined4 sub_08001154(void)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  
  uVar4 = 0;
  iVar2 = FUN_080007b4();
  if (iVar2 != 8) {
    if (iVar2 == 4) {
      uVar4 = 2;
      goto LAB_08001168;
    }
    iVar2 = sub_08001714(1);
    cVar5 = iVar2 == 0xff;
    if (!(bool)cVar5) {
      FUN_08000784();
      if (cVar5 == '\0') {
        piVar3 = (int *)(iVar2 + 0x10);
      }
      else {
        piVar3 = (int *)(iVar2 + -0x10);
      }
      if (*piVar3 == 0x42345745) {
        if (*(short *)(iVar2 + 6) == 1) {
          if (*(short *)(iVar2 + 10) == 0xf0) {
            uVar4 = 2;
LAB_08001168:
            sub_08002498();
            return uVar4;
          }
          uVar1 = *(ushort *)(iVar2 + 8);
          DAT_02001756 = uVar1 >> 9;
          DAT_02001754 = uVar1 & ~(uVar1 & 0xfe00);
          uVar4 = 1;
        }
        else if (*(short *)(iVar2 + 6) == 2) {
          uVar4 = 4;
          if (*(short *)(iVar2 + 8) == 3) goto LAB_08001168;
          uVar4 = 0;
        }
      }
    }
  }
  sub_080016B8(DAT_02030e94,1,0x200);
  return uVar4;
}

