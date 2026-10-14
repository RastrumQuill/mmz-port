// sub_0805C13C at 0x0805C13C (thumb)

undefined4 sub_0805C13C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  undefined auStack_14 [4];
  
  sub_08128B5C(auStack_14,&DAT_08129006,3);
  if (((DAT_0202e918 & 8) == 0) &&
     ((*(int *)(param_1 + 200) == 0 ||
      ((((cVar1 = *(char *)(param_1 + 0xbf), 1 < (byte)(cVar1 - 1U) && (cVar1 != '\x04')) &&
        (cVar1 != '\x05')) && (cVar1 != '\x03')))))) {
    iVar2 = sub_0805C2F0(auStack_14,3);
    *(undefined *)(param_1 + 0xd) = (&DAT_088553e7)[iVar2];
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    if (iVar2 == 1) {
      iVar2 = sub_0805C370(param_1);
      if (*(int *)(param_1 + 0x54) < iVar2 + 0x7800) {
        *(undefined *)(param_1 + 0xbe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xbe) = 1;
      }
    }
    else if (iVar2 == 2) {
      iVar2 = sub_0805C370(param_1);
      if (*(int *)(param_1 + 0x54) < iVar2 + 0x7800) {
        *(undefined *)(param_1 + 0xcf) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xcf) = 1;
      }
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

