// sub_0804C5E8 at 0x0804C5E8 (thumb)

void sub_0804C5E8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  iVar4 = *(int *)(DAT_0202286c + 0x4c);
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 < iVar4) {
    uVar3 = 0x240;
  }
  else {
    uVar3 = 0xfffffdc0;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined *)(param_1 + 0x11) = 2;
  *(bool *)(param_1 + 0x44) = iVar2 < iVar4;
  if (iVar2 < iVar4) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0x45) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  return;
}

