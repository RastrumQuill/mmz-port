// sub_080D9B78 at 0x080D9B78 (thumb)

/* WARNING: Removing unreachable block (ram,0x080d9bfa) */

undefined8 sub_080D9B78(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = sub_080D5194(0xc,0);
  if ((iVar2 == 0) || (1 < *(byte *)(iVar2 + 0xc))) {
    if ((0 < *(short *)(DAT_0202f090 + 10)) && (iVar3 = sub_08006B84(DAT_0202f090), iVar3 != 0)) {
      *(undefined *)(iVar3 + 0x25) = 0x10;
      *(undefined *)(iVar3 + 9) = 0xc;
      *(undefined4 *)(iVar3 + 0x14) = 0x80d9a65;
      *(undefined2 *)(iVar3 + 0x20) = 0;
      *(undefined *)(iVar3 + 0x22) = 0;
      *(undefined *)(iVar3 + 0x11) = 0;
      *(undefined *)(iVar3 + 0x12) = 0;
      *(undefined4 *)(iVar3 + 0x28) = param_1;
      iVar2 = iVar3;
    }
  }
  else {
    cVar1 = *(char *)(iVar2 + 0x11);
    while (cVar1 != '\0') {
      iVar2 = sub_080D5194(0xc,iVar2);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
  }
  return CONCAT44(in_lr,iVar2);
}

