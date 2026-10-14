// sub_0803AB00 at 0x0803AB00 (thumb)

undefined8 sub_0803AB00(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  do {
    uVar2 = iVar3 + 0x4e;
    if (((int)(uint)(byte)(&DAT_0202e8b4)[(int)uVar2 >> 3] >> (uVar2 & 7) & 1U) == 0) {
      uVar1 = 0;
LAB_0803ab32:
      return CONCAT44(in_lr,uVar1);
    }
    if (uVar2 == 0x83) {
      uVar1 = 1;
      goto LAB_0803ab32;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

