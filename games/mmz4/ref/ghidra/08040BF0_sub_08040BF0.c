// sub_08040BF0 at 0x08040BF0 (thumb)

undefined8 sub_08040BF0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0xfa);
  if (cVar1 == '\x02') {
    iVar2 = 0;
  }
  else if (cVar1 == '\b') {
    *(char *)(param_1 + 0xfa) = '\x02';
    *(undefined *)(param_1 + 0xc3) = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = sub_08005500(DAT_0202ed88);
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0xf8) == '\x02') {
        *(undefined *)(iVar2 + 9) = 10;
        *(undefined4 *)(iVar2 + 0x14) = 0x8040d71;
        *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
        *(undefined *)(iVar2 + 0x25) = 0x10;
        *(undefined2 *)(iVar2 + 0x20) = 0;
        *(undefined *)(iVar2 + 0x22) = 1;
        *(char *)(param_1 + 0xf8) = '\x02';
      }
      else {
        *(undefined *)(iVar2 + 9) = 10;
        *(undefined4 *)(iVar2 + 0x14) = 0x8040d71;
        *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
        *(undefined *)(iVar2 + 0x25) = 0x10;
        *(undefined2 *)(iVar2 + 0x20) = 0x30;
        *(undefined *)(iVar2 + 0x22) = 2;
        *(undefined *)(param_1 + 0xf9) = 2;
      }
      *(int *)(iVar2 + 0x28) = param_1;
      *(undefined *)(iVar2 + 0x10) = 0;
      *(undefined *)(iVar2 + 0x11) = 0;
      *(undefined2 *)(param_1 + 0x15a) = 0x80f8;
      sub_0803A970(0x8117dcd);
    }
  }
  return CONCAT44(in_lr,iVar2);
}

