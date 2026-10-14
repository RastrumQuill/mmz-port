// sub_08093C9C at 0x08093C9C (thumb)

undefined4 sub_08093C9C(int param_1,undefined param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_0202300c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x2c;
    *(undefined4 *)(iVar2 + 0x14) = 0x8093d1d;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02023068;
    *(undefined *)(iVar2 + 0x1e) = DAT_020230ec;
    *(undefined *)(iVar2 + 0x10) = param_2;
    *(undefined *)(iVar2 + 0x11) = 0;
    *(int *)(iVar2 + 0x20) = param_1;
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar2 + 0x50) = uVar3;
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    *(byte *)(iVar2 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
  }
  return in_lr;
}

