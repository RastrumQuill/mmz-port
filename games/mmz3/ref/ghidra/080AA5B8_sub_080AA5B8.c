// sub_080AA5B8 at 0x080AA5B8 (thumb)

undefined4 sub_080AA5B8(int param_1,undefined4 param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = sub_080070D8(DAT_020305f8);
  if (iVar3 != 0) {
    *(undefined *)(iVar3 + 0x25) = 8;
    *(undefined *)(iVar3 + 9) = 0x20;
    *(undefined4 *)(iVar3 + 0x14) = 0x80aa905;
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined *)(iVar3 + 0x22) = 0;
    *(undefined *)(iVar3 + 0x10) = 2;
    *(undefined *)(iVar3 + 0x11) = 0;
    *(undefined4 *)(iVar3 + 0x28) = param_2;
    bVar1 = 0 < *(int *)(param_1 + 0x5c);
    if (bVar1) {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(bool *)(iVar3 + 0x4c) = bVar1;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | bVar1 << 4;
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar3 + 0x58) = uVar4;
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
  }
  return in_lr;
}

