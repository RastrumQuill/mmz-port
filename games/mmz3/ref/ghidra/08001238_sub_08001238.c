// sub_08001238 at 0x08001238 (thumb)

undefined4 sub_08001238(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_080007b4();
  if (iVar1 != 8) {
    if (iVar1 == 4) {
      uVar3 = 2;
      sub_08002498();
    }
    else {
      iVar1 = sub_08001714(1);
      if (iVar1 != 0xff) {
        if (*(short *)(iVar1 + 6) != 3) {
          return 0;
        }
        iVar2 = FUN_08000784();
        if (iVar2 != 0) {
          DAT_02001758 = *(undefined2 *)(iVar1 + 10);
        }
        uVar3 = 1;
      }
      sub_08001698(0,3,0x200);
    }
  }
  return uVar3;
}

