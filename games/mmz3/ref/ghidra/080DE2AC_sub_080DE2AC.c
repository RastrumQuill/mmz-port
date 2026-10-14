// sub_080DE2AC at 0x080DE2AC (thumb)

undefined8 sub_080DE2AC(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_02030630);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 0x2e;
    *(undefined4 *)(iVar1 + 0x14) = 0x80de319;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(char *)(iVar1 + 0x10) = param_1;
    if (param_1 == '\0') {
      uVar2 = 0xe7000;
    }
    else {
      uVar2 = 0xf9000;
    }
    *(undefined4 *)(iVar1 + 0x54) = uVar2;
    *(undefined4 *)(iVar1 + 0x58) = 0x6b000;
  }
  return CONCAT44(in_lr,iVar1);
}

