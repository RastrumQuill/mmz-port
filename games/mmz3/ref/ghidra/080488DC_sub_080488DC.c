// sub_080488DC at 0x080488DC (thumb)

undefined4 sub_080488DC(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sVar2 = sub_080D0384(param_1,0x3000);
  if (sVar2 != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

