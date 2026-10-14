// sub_080B430C at 0x080B430C (thumb)

undefined4 sub_080B430C(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (uVar2 < 0x2001) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (*(char *)(param_1 + 0x75) == '\0') {
      cVar4 = '\x01';
      if (*(int *)(param_1 + 0x60) < 0) {
        cVar4 = -1;
      }
      cVar1 = sub_080B471C(param_1,&DAT_08346c20);
      if (cVar1 != '\0') {
        iVar3 = (4 - (uint)(*(byte *)(param_1 + 0x12) >> 2)) * 0x100;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) / 2;
        *(int *)(param_1 + 0x60) = -(iVar3 * cVar4);
        *(char *)(param_1 + 0x75) = '\x01';
      }
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B42EC(param_1);
  }
  return in_lr;
}

