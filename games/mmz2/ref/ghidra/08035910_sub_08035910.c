// sub_08035910 at 0x08035910 (thumb)

undefined8 sub_08035910(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x179);
  if (((*(char *)(param_1 + 0x2b7) == '\0') && (cVar1 == '\0')) ||
     ((*(char *)(param_1 + 0x2b7) == '\x01' && (cVar1 == '\x01')))) {
    uVar2 = 1;
  }
  else if (cVar1 == '\x03') {
    iVar3 = sub_08035BD8(*(undefined *)(param_1 + 0x2bf));
    uVar2 = (uint)(*(char *)(iVar3 + 6) <= *(char *)(param_1 + 0x71));
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

