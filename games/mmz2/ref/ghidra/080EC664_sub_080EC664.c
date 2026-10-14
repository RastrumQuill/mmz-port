// sub_080EC664 at 0x080EC664 (thumb)

undefined4 sub_080EC664(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  undefined4 in_lr;
  
  cVar3 = *(char *)(param_1 + 0xde9);
  cVar4 = *(char *)(param_1 + 0xdea);
  uVar1 = (uint)*(byte *)(param_1 + 0xde8) + (int)cVar3;
  *(byte *)(param_1 + 0xde8) = (byte)uVar1;
  if (cVar3 < 1) {
    if (uVar1 == 0) {
      cVar3 = '\x01';
      cVar4 = cVar4 + -1;
    }
  }
  else {
    if (cVar4 == '\0') {
      uVar2 = 0x30;
      if (uVar1 == 1) {
        sub_080032EC(0x28);
      }
    }
    else {
      uVar2 = 0x18;
    }
    if ((uVar2 <= uVar1) && (cVar3 = -1, uVar2 == 0x30)) {
      *(undefined2 *)(param_1 + 4) = 3;
      sub_080D59AC(*(undefined4 *)(param_1 + 0x75b8),*(undefined *)(param_1 + 0xdde));
    }
  }
  *(char *)(param_1 + 0xde9) = cVar3;
  *(char *)(param_1 + 0xdea) = cVar4;
  sub_080ECD68(param_1);
  return in_lr;
}

