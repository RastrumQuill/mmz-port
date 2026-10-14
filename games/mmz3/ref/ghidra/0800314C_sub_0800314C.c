// sub_0800314C at 0x0800314C (thumb)

undefined4 sub_0800314C(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  iVar1 = 1;
  do {
    sub_08003224((int)&DAT_02002130 + iVar2);
    (&DAT_02002144)[iVar2] = 0x18;
    (&DAT_02002145)[iVar2] = 4;
    iVar2 = iVar2 + 0x18;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return in_lr;
}

