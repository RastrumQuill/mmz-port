// sub_0807BBF8 at 0x0807BBF8 (thumb)

undefined4 sub_0807BBF8(int param_1,undefined4 param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = sub_08005428(DAT_02022f74);
  if (iVar3 != 0) {
    *(undefined *)(iVar3 + 9) = 0x13;
    *(undefined4 *)(iVar3 + 0x14) = 0x807bed5;
    *(undefined2 *)(iVar3 + 0x1c) = DAT_02022fa6;
    *(undefined *)(iVar3 + 0x1e) = DAT_02022ff3;
    *(undefined *)(iVar3 + 0x10) = 2;
    *(undefined *)(iVar3 + 0x11) = 0;
    *(undefined4 *)(iVar3 + 0x20) = param_2;
    bVar1 = 0 < *(int *)(param_1 + 0x54);
    *(bool *)(iVar3 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    uVar4 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar3 + 0x50) = uVar4;
  }
  return in_lr;
}

