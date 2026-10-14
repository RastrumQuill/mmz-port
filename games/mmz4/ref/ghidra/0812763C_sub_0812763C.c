// sub_0812763C at 0x0812763C (thumb)

undefined4 sub_0812763C(void)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  piVar1 = DAT_03007ff0;
  if (*DAT_03007ff0 == 0x68736d53) {
    *DAT_03007ff0 = 0x68736d54;
    iVar4 = 0xc;
    piVar2 = piVar1 + 0x14;
    do {
      *(undefined *)piVar2 = 0;
      iVar4 = iVar4 + -1;
      piVar2 = piVar2 + 0x10;
    } while (0 < iVar4);
    puVar3 = (undefined *)piVar1[7];
    if (puVar3 != (undefined *)0x0) {
      uVar5 = 1;
      do {
        sub_08128884(uVar5 & 0xff,piVar1[0xb]);
        *puVar3 = 0;
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 0x40;
      } while ((int)uVar5 < 5);
    }
    *piVar1 = 0x68736d53;
  }
  return in_lr;
}

