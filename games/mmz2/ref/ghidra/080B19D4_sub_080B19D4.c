// sub_080B19D4 at 0x080B19D4 (thumb)

undefined4 sub_080B19D4(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((DAT_0202ebbb & 0x20) == 0) {
    sub_080128D4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar1 = sub_08008CFC();
    if ((sVar1 == 0) && (*(char *)(param_1 + 0x12) != '\0')) {
      iVar2 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar2;
      if (0x700 < iVar2) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
      sub_080B0ACC(param_1 + 0x54,&DAT_08346a18,0,uVar3 | uVar3 << 4);
      sub_080AC60C(2,param_1 + 0x54);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

