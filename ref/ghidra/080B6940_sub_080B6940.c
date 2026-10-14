// sub_080B6940 at 0x080B6940 (thumb)

undefined4 sub_080B6940(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x24);
  if (*(byte *)(iVar5 + 0xc) < 2) {
    iVar4 = *(int *)(param_1 + 0x20);
    puVar2 = (undefined *)sub_08019124(iVar4);
    if (puVar2 == (undefined *)0x0) {
      uVar6 = *(undefined4 *)(iVar5 + 0x4c);
      uVar3 = *(undefined4 *)(iVar5 + 0x50);
      bVar1 = *(byte *)(iVar5 + 10);
      puVar2 = &DAT_082b8274;
    }
    else {
      uVar6 = *(undefined4 *)(iVar4 + 0x4c);
      uVar3 = *(undefined4 *)(iVar4 + 0x50);
      bVar1 = *(byte *)(iVar4 + 10);
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar6;
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(byte *)(param_1 + 0x44) = bVar1 >> 4 & 1;
    if ((bVar1 >> 4 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_0800561C(param_1 + 0x74,puVar2);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

