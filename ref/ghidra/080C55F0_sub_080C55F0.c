// sub_080C55F0 at 0x080C55F0 (thumb)

undefined4 sub_080C55F0(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  undefined4 in_lr;
  
  cVar3 = *(char *)(param_1 + 0x9f5);
  cVar4 = *(char *)(param_1 + 0x9f6);
  uVar2 = (uint)*(byte *)(param_1 + 0x9f4) + (int)cVar3;
  *(byte *)(param_1 + 0x9f4) = (byte)uVar2;
  if (cVar3 < 1) {
    if (uVar2 == 0) {
      cVar3 = '\x01';
      cVar4 = cVar4 + -1;
    }
  }
  else {
    uVar1 = 0x18;
    if (cVar4 == '\0') {
      uVar1 = 0x30;
    }
    if ((uVar1 <= uVar2) && (cVar3 = -1, uVar1 == 0x30)) {
      *(undefined2 *)(param_1 + 4) = 3;
      sub_080B4750(&DAT_0202b5a0,*(undefined *)(param_1 + 0x9ea));
    }
  }
  *(char *)(param_1 + 0x9f5) = cVar3;
  *(char *)(param_1 + 0x9f6) = cVar4;
  sub_080C5C00(param_1);
  return in_lr;
}

