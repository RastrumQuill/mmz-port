// sub_080B8994 at 0x080B8994 (thumb)

/* WARNING: Removing unreachable block (ram,0x080b8a1c) */

undefined8 sub_080B8994(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = sub_080B3F2C(0xc,0);
  if ((iVar2 == 0) || (1 < *(byte *)(iVar2 + 0xc))) {
    if ((0 < *(short *)(DAT_0202320c + 10)) && (iVar3 = sub_08005458(DAT_0202320c), iVar3 != 0)) {
      *(undefined *)(iVar3 + 9) = 0xc;
      *(undefined4 *)(iVar3 + 0x14) = 0x80b8889;
      *(undefined2 *)(iVar3 + 0x1c) = 0xc0;
      *(undefined *)(iVar3 + 0x1e) = 3;
      *(undefined *)(iVar3 + 0x11) = 0;
      *(undefined *)(iVar3 + 0x12) = 0;
      *(undefined4 *)(iVar3 + 0x20) = param_1;
      iVar2 = iVar3;
    }
  }
  else {
    cVar1 = *(char *)(iVar2 + 0x11);
    while (cVar1 != '\0') {
      iVar2 = sub_080B3F2C(0xc,iVar2);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
  }
  return CONCAT44(in_lr,iVar2);
}

