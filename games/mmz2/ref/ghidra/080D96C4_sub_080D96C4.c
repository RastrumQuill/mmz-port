// sub_080D96C4 at 0x080D96C4 (thumb)

undefined4 sub_080D96C4(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x2c);
  if (*(byte *)(iVar7 + 0xc) < 2) {
    iVar6 = *(int *)(param_1 + 0x28);
    puVar2 = (undefined *)sub_08037980(iVar6);
    if (puVar2 == (undefined *)0x0) {
      uVar4 = *(undefined4 *)(iVar7 + 0x54);
      uVar3 = *(undefined4 *)(iVar7 + 0x58);
      bVar1 = *(byte *)(iVar7 + 10);
      puVar2 = &DAT_0834b600;
    }
    else {
      uVar4 = *(undefined4 *)(iVar6 + 0x54);
      uVar3 = *(undefined4 *)(iVar6 + 0x58);
      bVar1 = *(byte *)(iVar6 + 10);
    }
    uVar5 = bVar1 >> 4 & 1;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if ((bVar1 >> 4 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_08006E08(param_1 + 0x74,puVar2);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

