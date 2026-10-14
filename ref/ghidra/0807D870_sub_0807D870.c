// sub_0807D870 at 0x0807D870 (thumb)

undefined4 sub_0807D870(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_02022f74);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x14;
    *(undefined4 *)(iVar2 + 0x14) = 0x807d93d;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02022fa8;
    *(undefined *)(iVar2 + 0x1e) = DAT_02022ff4;
    *(undefined *)(iVar2 + 0x10) = 2;
    *(undefined *)(iVar2 + 0x11) = 0;
    *(int *)(iVar2 + 0x20) = param_1;
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    *(byte *)(iVar2 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar2 + 0x50) = uVar3;
  }
  return in_lr;
}

